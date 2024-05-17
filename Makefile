CC = g++
CFLAGS = -O3 -std=c++17
TARG = fido2emu
#Change CS22B200 to your filename: CS22Bxyc-Labx-Q1.cpp 
DEPS = main.o Device.o User.o Server.o UserDetail.o

$(TARG): $(DEPS)
	$(CC) $(CFLAGS) -o $@ $(DEPS)

main.o: main.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

#General rule for all other files with header to generate
%.o: %.cpp
#%.o: %.h %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

# UserDetail.o: UserDetail.cpp UserDetail.h
# 	$(CC) $(CFLAGS) -c -o $@ $<

# User.o: User.cpp User.h
# 	$(CC) $(CFLAGS) -c -o $@ $<

# Device.o: Device.cpp Device.h
# 	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf *.o fido2emu
