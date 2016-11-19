################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../FantasyLeague_CORE.cpp \
../FantasyLeague_CORE_LeagueClass.cpp \
../FantasyLeague_CORE_LeagueMGMTCLass.cpp \
../FantasyLeague_CORE_PlayerClass.cpp \
../FantasyLeague_CORE_TeamClass.cpp \
../FantasyLeague_CORE_UserClass.cpp \
../FantasyLeague_CORE_functions.cpp 

OBJS += \
./FantasyLeague_CORE.o \
./FantasyLeague_CORE_LeagueClass.o \
./FantasyLeague_CORE_LeagueMGMTCLass.o \
./FantasyLeague_CORE_PlayerClass.o \
./FantasyLeague_CORE_TeamClass.o \
./FantasyLeague_CORE_UserClass.o \
./FantasyLeague_CORE_functions.o 

CPP_DEPS += \
./FantasyLeague_CORE.d \
./FantasyLeague_CORE_LeagueClass.d \
./FantasyLeague_CORE_LeagueMGMTCLass.d \
./FantasyLeague_CORE_PlayerClass.d \
./FantasyLeague_CORE_TeamClass.d \
./FantasyLeague_CORE_UserClass.d \
./FantasyLeague_CORE_functions.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


