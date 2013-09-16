
ifeq ($(BT_CONFIG_KERNEL_FREERTOS),y)
BT_KERNEL_FREERTOS_OBJECTS += $(BUILD_DIR)kernel/bt_freertos_if.o
BT_KERNEL_FREERTOS_OBJECTS += $(BUILD_DIR)kernel/FreeRTOS/Source/croutine.o
BT_KERNEL_FREERTOS_OBJECTS += $(BUILD_DIR)kernel/FreeRTOS/Source/list.o
BT_KERNEL_FREERTOS_OBJECTS += $(BUILD_DIR)kernel/FreeRTOS/Source/queue.o
BT_KERNEL_FREERTOS_OBJECTS += $(BUILD_DIR)kernel/FreeRTOS/Source/tasks.o

$(BT_KERNEL_FREERTOS_OBJECTS):MODULE_NAME="FreeRTOS"
$(BT_KERNEL_FREERTOS_OBJECTS):CFLAGS += -I $(BASE)kernel/FreeRTOS/Source/include/
$(BT_KERNEL_FREERTOS_OBJECTS):CFLAGS += -I $(BASE)arch/$(ARCH)/include/arch/common/

OBJECTS += $(BT_KERNEL_FREERTOS_OBJECTS)
endif

OBJECTS-$(BT_CONFIG_KERNEL_NONE) += $(BUILD_DIR)kernel/bt_none_if.o
