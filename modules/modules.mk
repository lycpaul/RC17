MODULESPATH = ./modules

MODULESSRC = $(MODULESPATH)/bubbles/bubbles.c
MODULESSRC += $(MODULESPATH)/rtt_shell/rtt_shell.c
MODULESSRC += $(MODULESPATH)/buzzer/buzzer.c
MODULESSRC += $(MODULESPATH)/UDC/udc.c
MODULESSRC += $(MODULESPATH)/UDC/udc_lld.c
MODULESSRC += $(MODULESPATH)/usage/usage.c
MODULESSRC += $(MODULESPATH)/RTT/SEGGER_RTT.c
MODULESSRC += $(MODULESPATH)/RTT/RTTchannel.c


MODULESINC = $(MODULESPATH)/bubbles
MODULESINC += $(MODULESPATH)/rtt_shell
MODULESINC += $(MODULESPATH)/buzzer
MODULESINC += $(MODULESPATH)/UDC
MODULESINC += $(MODULESPATH)/usage
MODULESINC += $(MODULESPATH)/RTT

include $(MODULESPATH)/ui/ui.mk