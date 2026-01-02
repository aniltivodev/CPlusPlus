On 25-Dec-2025:
We learned:
  1. Constant Variables(named Constants)
    a. Introduction to constants
    b. Types of named constants
    c. Constant Variables
    d. Declaring constant variables
    e. Constant variables must be initialized
    f. Naming your const variable
    g. const return value
    h. Using constnant variables throughout a multi-file program
    i. nomenclature: type qualifiers
  2. Literals
    a. Type of literals
    b. Literals suffixes
    c. Suffix casing
    d. Integral Literals
    e. Scientific notation for floating point literals
    f. String literals
    g. magic number
  3. Numeral Systems(Decimal, binary, hexadecimal and octal)
    a. decimal
    b. binary
    c. Octal and hexadecimal literals
    d. Numeral systems tables
    e. Using hexadecimal to represent binary
    f. digit separator
    g. Outputting values in decimal, octal or hexadecimal
    h. Outputting values in binary
  4. The as-if rule and compile time optimization
    a. Introduction to optimization
    b. An optimization opportunity
    c. Compile time evaluation
    d. constant folding
    e. constant propagation
    f. Dead Code Elimination
    g. Optimization can make programs harder to debug.
  5. Constant expressions:
    a. Benefits of compile-time programming
    b. Constant expression
    c. What can be in a constant expression
    d. Example of constant and non-constant expressions
    e. When constant expressions are evaluated at compile time
    f. why compile-time expressions must be constant.
  6. constexpr variables
    a. Compile time const challenges
    b. The constexpr keyword
    c. The meaning of const v/s constexpr for variables
    d. cons and constexpr function parameters
    e. A brief introduction to constexpr function
  7. Introduction to std::string
    a. std::string can handle string of different lengths
    b. String inputs with std::cin
    c. Use std::getline() to input text
    d. what is std::ws?
    e. The length of a std::string
    f. Initialize a std::string is expensive
    g. Do not pass std::string as value
    h. Returning a std::string
    i. Literals for std::string
    j. constexpr strings
  8. Introduction to std::string_view
    a. std::string_view parameters will accept many different types of string arguments
    b. std::string_view will not implicitly convert to std::string
    c. Literals for std::string_view
    d. constexpr std::string_view
  9. std::string_view (part 2)
    a. An introduction to owners and viewers
    b. std::string is a (sole) owner
    c. We don't always need a copy
    d. std::string_view is a viewer
    e. std:string_view is best used as a read-only function parameter
    f. should I prefer std::string_viw or const std::string& function parameter?
    g. Improperly using std::string_view
    h. Revalidating an invalid std::string_view
    i. Be careful returning std::string_view
    j. Be careful returning std::string_view
    k. View modification functions
    l. std::string_view can view a substring
    m. std::string_view may or may not be null terminated
