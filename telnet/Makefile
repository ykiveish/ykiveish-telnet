PLATFORM  := linux
MKDIR     := mkdir -p 
CXX	      := gcc
BUILD     := build
LIB       := ./libs
INC       := ./include 
OBJS	  := $(BUILD)/xvasprintf.o $(BUILD)/defauthors.o $(BUILD)/version-etc-fsf.o $(BUILD)/version-etc.o $(BUILD)/argp-version-etc.o $(BUILD)/progname.o $(BUILD)/localhost.o $(BUILD)/exitfail.o $(BUILD)/xalloc-die.o $(BUILD)/xmalloc.o $(BUILD)/xasprintf.o $(BUILD)/authenc.o $(BUILD)/network.o $(BUILD)/ring.o $(BUILD)/sys_bsd.o $(BUILD)/terminal.o $(BUILD)/tn3270.o $(BUILD)/utilities.o $(BUILD)/telnet.o $(BUILD)/main.o $(BUILD)/commands.o
CXX_FLAGS := -g -Wall -DHAVE_CONFIG_H=1
CXX_LIBS  += -L${LIB} -L/usr/lib/x86_64-linux-gnu -ltelnet
CXX_INCS  += -I${INC} -I./external

telnet: $(OBJS)
	$(CXX) -static $(CXX_FLAGS) $(BUILD)/*.o -o telnet ${CXX_INCS} $(CXX_LIBS)

$(BUILD)/xvasprintf.o: external/xvasprintf.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/xvasprintf.c -o $(BUILD)/xvasprintf.o $(CXX_INCS)
	
$(BUILD)/defauthors.o: external/defauthors.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/defauthors.c -o $(BUILD)/defauthors.o $(CXX_INCS)
	
$(BUILD)/version-etc-fsf.o: external/version-etc-fsf.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/version-etc-fsf.c -o $(BUILD)/version-etc-fsf.o $(CXX_INCS)
	
$(BUILD)/version-etc.o: external/version-etc.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/version-etc.c -o $(BUILD)/version-etc.o $(CXX_INCS)
	
$(BUILD)/argp-version-etc.o: external/argp-version-etc.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/argp-version-etc.c -o $(BUILD)/argp-version-etc.o $(CXX_INCS)
	
$(BUILD)/progname.o: external/progname.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/progname.c -o $(BUILD)/progname.o $(CXX_INCS)
	
$(BUILD)/localhost.o: external/localhost.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/localhost.c -o $(BUILD)/localhost.o $(CXX_INCS)
	
$(BUILD)/exitfail.o: external/exitfail.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/exitfail.c -o $(BUILD)/exitfail.o $(CXX_INCS)
	
$(BUILD)/xalloc-die.o: external/xalloc-die.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/xalloc-die.c -o $(BUILD)/xalloc-die.o $(CXX_INCS)
	
$(BUILD)/xmalloc.o: external/xmalloc.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/xmalloc.c -o $(BUILD)/xmalloc.o $(CXX_INCS)
	
$(BUILD)/xasprintf.o: external/xasprintf.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) external/xasprintf.c -o $(BUILD)/xasprintf.o $(CXX_INCS)
	
$(BUILD)/authenc.o: authenc.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) authenc.c -o $(BUILD)/authenc.o $(CXX_INCS)
	
$(BUILD)/network.o: network.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) network.c -o $(BUILD)/network.o $(CXX_INCS)
	
$(BUILD)/commands.o: commands.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) commands.c -o $(BUILD)/commands.o $(CXX_INCS)
	
$(BUILD)/main.o: main.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) main.c -o $(BUILD)/main.o $(CXX_INCS)
	
$(BUILD)/ring.o: ring.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) ring.c -o $(BUILD)/ring.o $(CXX_INCS)
	
$(BUILD)/sys_bsd.o: sys_bsd.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) sys_bsd.c -o $(BUILD)/sys_bsd.o $(CXX_INCS)
	
$(BUILD)/telnet.o: telnet.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) telnet.c -o $(BUILD)/telnet.o $(CXX_INCS)
	
$(BUILD)/terminal.o: terminal.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) terminal.c -o $(BUILD)/terminal.o $(CXX_INCS)
	
$(BUILD)/tn3270.o: tn3270.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) tn3270.c -o $(BUILD)/tn3270.o $(CXX_INCS)
	
$(BUILD)/utilities.o: utilities.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) utilities.c -o $(BUILD)/utilities.o $(CXX_INCS)

clean:
	rm build/*
	rm telnet
