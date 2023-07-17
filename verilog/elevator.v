module Elevator(
  input wire clk,             // Clock signal
  input wire reset,           // Reset signal
  input wire emergencyBtn,    // Emergency button signal
  input wire [1:0] userFloor, // User's floor input
  input wire [1:0] destFloor, // Destination floor input
  output reg [1:0] floor,     // Current floor
  output reg doorOpen         // Door open signal
);

// Elevator states
parameter IDLE = 2'b00;
parameter MOVING_UP = 2'b01;
parameter MOVING_DOWN = 2'b10;
parameter EMERGENCY = 2'b11;

// Floor constants
parameter FLOOR0 = 2'b00;
parameter FLOOR1 = 2'b01;
parameter FLOOR2 = 2'b10;
parameter FLOOR3 = 2'b11;

// Internal signals
reg [1:0] state;         // Current state
reg [1:0] nextFloor;     // Next floor
reg doorTimer;           // Timer for door open duration

always @(posedge clk or posedge reset) begin
  if (reset) begin
    // Reset to initial state
    state <= IDLE;
    floor <= FLOOR0;
    doorOpen <= 0;
  end else begin
    // State transitions
    case(state)
      IDLE:
        if (userFloor != 2'b00 && userFloor != floor) begin
          if (userFloor > floor)
            state <= MOVING_UP;
          else
            state <= MOVING_DOWN;
          nextFloor <= userFloor;
        end
        if (emergencyBtn)
          state <= EMERGENCY;
      MOVING_UP:
        if (floor == nextFloor) begin
          if (destFloor != floor) begin
            if (destFloor > floor)
              state <= MOVING_UP;
            else
              state <= MOVING_DOWN;
            nextFloor <= destFloor;
          end else begin
            state <= IDLE;
            doorOpen <= 1;
          end
        end else begin
          floor <= floor + 1;
          doorOpen <= 0;
        end
      MOVING_DOWN:
        if (floor == nextFloor) begin
          if (destFloor != floor) begin
            if (destFloor > floor)
              state <= MOVING_UP;
            else
              state <= MOVING_DOWN;
            nextFloor <= destFloor;
          end else begin
            state <= IDLE;
            doorOpen <= 1;
          end
        end else begin
          floor <= floor - 1;
          doorOpen <= 0;
        end
      EMERGENCY:
        if (floor != FLOOR0) begin
          floor <= FLOOR0;
          state <= EMERGENCY;
          doorOpen <= 0;
        end else begin
          state <= IDLE;
          doorOpen <= 1;
        end
    endcase
  end
end

endmodule