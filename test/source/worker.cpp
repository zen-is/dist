#include <doctest/doctest.h>
#include <worker/worker.h>
#include <worker/version.h>

#include <string>

TEST_CASE("Worker") {
  using namespace worker;

  Worker worker("Tests");

  CHECK(worker.work(LanguageCode::EN) == "Hello, Tests!");
  CHECK(worker.work(LanguageCode::DE) == "Hallo Tests!");
  CHECK(worker.work(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(worker.work(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("Worker version") {
  static_assert(std::string_view(WORKER_VERSION) == std::string_view("1.0"));
  CHECK(std::string(WORKER_VERSION) == std::string("1.0"));
}
