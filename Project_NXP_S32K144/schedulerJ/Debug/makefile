################################################################################
# Automatically-generated file. Do not edit!
################################################################################

#Progress monitor hint: 13
first : all
-include ../makefile.init

# This file contains definitions of environment variables used in the makefiles and .args files if exist.
-include makefile.local

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include src/Asw/Entry/subdir.mk
-include src/Bsw/Mcal/Dio/subdir.mk
-include src/Bsw/Mcal/Lpit/subdir.mk
-include src/Bsw/Mcal/Mcu/subdir.mk
-include src/Bsw/Mcal/Nvic/subdir.mk
-include src/Bsw/Mcal/Port/subdir.mk
-include src/Bsw/Mcal/Wdog/subdir.mk
-include src/Bsw/Services/SchM/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
schedulerJ.elf \

EXECUTABLES_QUOTED += \
"schedulerJ.elf" \

EXECUTABLES_OS_FORMAT += \
schedulerJ.elf \

SECONDARY_SIZE += \
schedulerJ.siz \

SECONDARY_SIZE_QUOTED += \
"schedulerJ.siz" \

SECONDARY_SIZE_OS_FORMAT += \
schedulerJ.siz \


# All Target
all: warning-messages explicit-dependencies schedulerJ.elf secondary-outputs

# Tool invocations
schedulerJ.elf: $(OBJS) C:/Users/OLVERA/Desktop/WORKSPACE/schedulerJ/Project_Settings/Linker_Files/S32K1xx_flash.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Executing target #14 $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "schedulerJ.elf" "@schedulerJ.args"  $(USER_OBJS_QUOTED) $(LIBS_QUOTED)
	@echo 'Finished building target: $@'
	@echo ' '

schedulerJ.siz: $(EXECUTABLES)
	@echo 'Executing target #15 $@'
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*/*/*/*/*.d ./*/*/*/*.d ./*/*/*.d  ./*/*/*/*/*.o ./*/*/*/*.o ./*/*/*.o  $(SECONDARY_SIZE_QUOTED) $(EXECUTABLES_QUOTED)
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents explicit-dependencies warning-messages
.SECONDARY:

-include ../makefile.targets

explicit-dependencies: 

warning-messages: 

