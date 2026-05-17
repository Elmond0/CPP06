#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
		int	_x;
		int	_y;

	public:
		Data( int x, int y );
		Data( const Data& other );
		Data& operator=( const Data& other );
		~Data( void );

		int	getX( void ) const;
		int	getY( void ) const;
};

std::ostream&	operator<<( std::ostream& o, Data const & d );

#endif
