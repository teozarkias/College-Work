# Function 1: Accepts only positional arguments
def sum_of_numbers(*arg1, *arg2):
    sum = arg1 + arg2
    return total

# Function 2: Accepts only named arguments
def person_info(name, age):
    return f"Name: {name}, Age: {age}"

# Function 3: Accepts both positional and named arguments
def greeting_message(greeting, *names, capital=False):
    if capital:
        names = [name.capitalize() for name in names]
    return f"{greeting}, {' and '.join(names)}!"

# Function 4: Accepts a mix of positional and named arguments with default values
def calculate_discount(price, discount_percent=10):
    discounted_price = price - (price * discount_percent / 100)
    return discounted_price

# Function 5: Accepts a mix of positional and named arguments with variable keyword arguments
def display_info(city, **info):
    return f"City: {city}, Info: {info}"


# Test the functions
print("Function 1:")
print(sum_of_numbers(1, 2, 3, 4, 5))  # Output: 15

print("\nFunction 2:")
print(person_info(name="Alice", age=30))  # Output: Name: Alice, Age: 30

print("\nFunction 3:")
print(greeting_message("Hello", "Alice", "Bob", capital=True))  # Output: Hello, Alice and Bob!

print("\nFunction 4:")
print(calculate_discount(100, discount_percent=20))  # Output: 80.0

print("\nFunction 5:")
print(display_info("New York", population=8000000, attractions=["Central Park", "Empire State Building"]))
# Output: City: New York, Info: {'population': 8000000, 'attractions': ['Central Park', 'Empire State Building']}