################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/Bsw/Mcal/Mcu/Mcu.c" \

C_SRCS += \
../src/Bsw/Mcal/Mcu/Mcu.c \

OBJS_OS_FORMAT += \
./src/Bsw/Mcal/Mcu/Mcu.o \

C_DEPS_QUOTED += \
"./src/Bsw/Mcal/Mcu/Mcu.d" \

OBJS += \
./src/Bsw/Mcal/Mcu/Mcu.o \

OBJS_QUOTED += \
"./src/Bsw/Mcal/Mcu/Mcu.o" \

C_DEPS += \
./src/Bsw/Mcal/Mcu/Mcu.d \


# Each subdirectory must supply rules for building sources it contributes
src/Bsw/Mcal/Mcu/Mcu.o: ../src/Bsw/Mcal/Mcu/Mcu.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Bsw/Mcal/Mcu/Mcu.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Bsw/Mcal/Mcu/Mcu.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

