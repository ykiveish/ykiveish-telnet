PLATFORM  := linux
MKDIR     := mkdir -p 
CXX	      := gcc
BUILD     := build
LIB       := 
INC       := ./include
OBJS	  := $(BUILD)/auth.o $(BUILD)/enc_des.o $(BUILD)/encrypt.o $(BUILD)/forward.o $(BUILD)/genget.o $(BUILD)/getent.o $(BUILD)/kerberos.o $(BUILD)/kerberos5.o $(BUILD)/misc.o $(BUILD)/read_passwd.o $(BUILD)/shishi.o
CXX_FLAGS := -g -Wall
CXX_LIBS  += -L${LIB} -L/usr/lib/x86_64-linux-gnu
CXX_INCS  += -I${INC}

#all: loader

#libtelnet: $(OBJS)
#	$(CXX) -static $(CXX_FLAGS) build/*.o -o libtelnet ${CXX_INCS} $(CXX_LIBS)

libtelnet: $(OBJS)
	ar rcs libtelnet.a build/*.o

build/auth.o: auth.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) auth.c -o build/auth.o $(CXX_INCS)
	
build/enc_des.o: enc_des.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) enc_des.c -o build/enc_des.o $(CXX_INCS)
	
build/encrypt.o: encrypt.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) encrypt.c -o build/encrypt.o $(CXX_INCS)
	
build/forward.o: forward.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) forward.c -o build/forward.o $(CXX_INCS)
	
build/genget.o: genget.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) genget.c -o build/genget.o $(CXX_INCS)
	
build/getent.o: getent.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) getent.c -o build/getent.o $(CXX_INCS)
	
build/kerberos.o: kerberos.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) kerberos.c -o build/kerberos.o $(CXX_INCS)
	
build/kerberos5.o: kerberos5.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) kerberos5.c -o build/kerberos5.o $(CXX_INCS)
	
build/misc.o: misc.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) misc.c -o build/misc.o $(CXX_INCS)
	
build/read_passwd.o: read_passwd.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) read_passwd.c -o build/read_passwd.o $(CXX_INCS)
	
build/shishi.o: shishi.c
	$(MKDIR) $(BUILD)
	$(CXX) -c $(CXX_FLAGS) shishi.c -o build/shishi.o $(CXX_INCS)

clean:
	rm build/*
	rm libtelnet.a
