#pragma once

#include <string>

namespace worker {

  /**  Language codes to be used with the Worker class */
  enum class LanguageCode { EN, DE, ES, FR };

  /**
   * @brief A class for saying hello in multiple languages
   */
  class Worker {
    std::string name;

  public:
    /**
     * @brief Creates a new worker
     * @param name the name to work
     */
    Worker(std::string name);

    /**
     * @brief Creates a localized string containing the greeting
     * @param lang the language to greet in
     * @return a string containing the greeting
     */
    std::string work(LanguageCode lang = LanguageCode::EN) const;
  };

}  // namespace worker
