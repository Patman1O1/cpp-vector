// Google Test Includes
#include <gtest/gtest.h>
#include <gmock/gmock.h>

// Local Includes
//#include <collections/vector.hpp>
#include <vector> // temporary

namespace collections::vector_testing {
    // ── Constructor Tests ───────────────────────────────────────────────────
    namespace constructor_testing {
        namespace default_ctor_testing {
            // Signature:
            // constexpr vector() noexcept(noexcept(Allocator()))

        } // namespace default_ctor_testing

        namespace allocator_ctor_testing {
            // Signature:
            // explicit constexpr vector(const Allocator&) noexcept

        } // namespace allocator_ctor_testing

        namespace count_ctor_testing {
            // Signature:
            // explicit constexpr vector(
            //      size_type count,
            //      const Allocator& alloc = Allocator()
            // ) noexcept

        } // namespace count_ctor_testing

        namespace count_and_value_ctor_testing {
            // Signature:
            // constexpr vector(
            //      size_type count,
            //      const T& value,
            //      const Allocator& alloc = Allocator()
            // )

        } // namespace count_and_value_ctor_testing

        namespace input_iterator_ctor_testing {
            // Signature:
            // template<std::input_iterator InputIt>
            // constexpr vector(
            //      InputIt first,
            //      InputIn last,
            //      const Allocator& alloc = Allocator()
            // )

        } // namespace input_iterator_ctor_testing

        namespace range_ctor_testing {
            // Signature:
            // template<typename R> requires<
            //      std::ranges::input_range<R> &&
            //      std::convertible_to<
            //          std::ranges::range_reference_t<R>,
            //          T
            //      >
            // >
            // constexpr vector(
            //      std::from_range_t,
            //      R&& rg,
            //      const Allocator& alloc = Allocator()
            // )

        } // namespace range_ctor_testing

        namespace copy_ctor_testing {
            // Signature:
            // constexpr vector(const vector&)

        } // namespace copy_ctor_testing
        
        namespace move_ctor_testing {
            // Signature:
            // constexpr vector(vector&&) noexcept

        } // namespace move_ctor_testing

        namespace copy_alloc_ctor_testing {
            // Signature:
            // constexpr vector(
            //      const vector&,
            //      const std::type_indentity_t<Allocator>&
            // )
            
        } // namespace copy_alloc_ctor_testing

        namespace move_alloc_ctor_testing {
            // Signature:
            // constexpr vector(
            //      vector&&,
            //      const std::type_indentity_t<Allocator>&
            // )

        } // namespace move_alloc_ctor_testing

        namespace init_list_ctor_testing {
            // Signature:
            // vector(
            //      std::initializer_list<T> init,
            //      const Allocator&
            // )
        } // namespace init_list_ctor_testing
    } // namespace constructor_testing

    // ── Destructor Tests ────────────────────────────────────────────────────
    namespace destructor_testing {
        // Signature:
        // constexpr ~vector()

    } // namespace destructor_testing
    
    // ── Operator Tests ──────────────────────────────────────────────────────
    namespace operator_testing {
        namespace copy_assignment_operator_testing {
            // Signature:
            // constexpr vector& operator=(const vector&)

        } // namespace copy_assignment_operator_testing

        namespace move_assignment_operator_testing {
            // Signature:
            // vector& operator=(vector&&) noexcept

        } // namespace move_assignment_operator_testing

        namespace equivalence_operator_testing {
            // Signature:
            // constexpr bool operator==(const vector<T, Allocator>&)
        
        } // namespace equivalence_operator_testing
        
        namespace three_way_comparison_operator_testing {
            // Signature:
            // constexpr auto operator<=>(const vector<T, Allocator&)

        } // namespace three_way_comparison_operator_testing

        namespace random_access_operator_mut_overload_testing {
            // Signature:
            // constexpr reference operator[](size_type pos)

        } // namespace random_access_operator_mut_overload_testing

        namespace random_access_operator_const_overload_testing {
            // Signature:
            // constexpr const_reference operator[](size_type pos) const

        } // namespace random_access_operator_const_overload_testing
    } // namespace operator_testing

    // ── Method Tests ────────────────────────────────────────────────────────
    namespace method_testing {

    } // namespace method_testing

    // ── Deduction Guide Tests ───────────────────────────────────────────────
    namespace deduction_guide_testing {

    } // namespace deduction_guide_testing
} // namespace collections::vector_testing
