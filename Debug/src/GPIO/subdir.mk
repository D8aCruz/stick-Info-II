################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/GPIO/GPIOs.c 

OBJS += \
./src/GPIO/GPIOs.o 

C_DEPS += \
./src/GPIO/GPIOs.d 


# Each subdirectory must supply rules for building sources it contributes
src/GPIO/%.o: ../src/GPIO/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__CODE_RED -DCORE_M3 -D__LPC17XX__ -D__REDLIB__ -I"/home/david8/Documents/MCUXpresso_11.0.0_2516/workspace/main/inc" -I"/home/david8/Documents/MCUXpresso_11.0.0_2516/workspace/main/src/GPIO" -I"/home/david8/Documents/MCUXpresso_11.0.0_2516/workspace/main/src/Systick" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


