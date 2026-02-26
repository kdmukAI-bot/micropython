# Set location of base MicroPython directory.
if(NOT MICROPY_DIR)
    get_filename_component(MICROPY_DIR ${CMAKE_CURRENT_LIST_DIR}/../../.. ABSOLUTE)
endif()

# Set location of the ESP32 port directory.
if(NOT MICROPY_PORT_DIR)
    get_filename_component(MICROPY_PORT_DIR ${MICROPY_DIR}/ports/esp32 ABSOLUTE)
endif()

# Pull in external display stack component from EXTRA_COMPONENT_DIRS.
list(APPEND IDF_COMPONENTS display_manager)

include(${MICROPY_PORT_DIR}/esp32_common.cmake)
