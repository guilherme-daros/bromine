#include <iostream>
#include <mutex>

#include "logger/Logger.hpp"
#include "pico/cyw43_arch.h"
#include "pico/stdlib.h"

namespace {
using Main = logger::Logger<"Main">;
}

auto getuid() -> uid_t { return 1; }

int main() {
  stdio_init_all();
  if (cyw43_arch_init()) {
    return -1;
  }

  while (true) {
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
    Main::Debug() << "On" << std::endl;
    sleep_ms(250);

    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
    Main::Debug() << "Off" << std::endl;
    sleep_ms(250);
  }
}
