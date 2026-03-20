SRCS = SOC.v bench.sv

bench: $(SRCS)
	iverilog -D bench -o sim $(SRCS)
	vvp sim

wave: sim.vcd
	gtkwave sim.vcd

clean:
	rm -f sim sim.vcd

.PHONY: bench wave clean
