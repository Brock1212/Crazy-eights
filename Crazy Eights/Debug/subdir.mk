################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../card.cpp \
../crazy_eights.cpp \
../deck.cpp \
../player.cpp \
../testcard.cpp \
../testdeck.cpp \
../testplayer.cpp 

OBJS += \
./card.o \
./crazy_eights.o \
./deck.o \
./player.o \
./testcard.o \
./testdeck.o \
./testplayer.o 

CPP_DEPS += \
./card.d \
./crazy_eights.d \
./deck.d \
./player.d \
./testcard.d \
./testdeck.d \
./testplayer.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


