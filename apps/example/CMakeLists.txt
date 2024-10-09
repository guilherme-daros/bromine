add_executable(example "")

pico_set_program_name(example "example")
pico_set_program_version(example "0.1")

target_sources(
  example
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/Main.cpp
)

target_link_libraries(
  example
  pico_stdlib
  pico_runtime
  pico_cyw43_arch_none
  logger
)

pico_enable_stdio_usb(example 1)
pico_enable_stdio_uart(example 0)

pico_add_extra_outputs(example)
