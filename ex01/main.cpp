#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int		main( void )
{
	Data		data(42, 1337);

	uintptr_t	raw = Serializer::serialize(&data);
	Data*		result = Serializer::deserialize(raw);

	std::cout << "Original pointer  : " << &data << std::endl;
	std::cout << "Serialized value  : " << raw << std::endl;
	std::cout << "Deserialized ptr  : " << result << std::endl;
	std::cout << "Result content      : " << *result << std::endl;
	std::cout << "Pointers match    : " << (&data == result ? "YES" : "NO") << std::endl;

	return 0;
}
