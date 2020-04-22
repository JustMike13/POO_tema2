#include <exception>

class NonBinary : public std::exception {
public:
  NonBinary () noexcept {}
  NonBinary (const NonBinary&) noexcept = default;
  NonBinary& operator= (const NonBinary&) noexcept = default;
  virtual ~NonBinary() noexcept = default;
  virtual const char* what() const noexcept {
    return "NonBinary";
  }
};
