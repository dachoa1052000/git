#include "Movies.h"
#include <iostream>

Movies::Movies(){
}
Movies::~Movies(){
}

/*add_movie yêu cầu đầu vào là tên 1 bộ phim, rating và số lần xem
nó sẽ tìm kiếm trên vector Movies xem đã tồn tại bộ phim cùng tên
hay chưa, nếu đã tồn tại-> return fail, nếu chưa, tạo một object
movie bằng thông tin đầu vào và thêm nó vào vector Movies, return true.*/
bool Movies::add_movie(string name, string rating, int watched)
{
    for (Movie movie : movies)
    {
        if (movie.get_name() == name)
            return false;
    }
    Movie temp{name, rating, watched};
    movies.push_back(temp);
    // movies.push_back(temp);
    return true;
}

/*increment_watched yêu cầu đầu vào là tên một bộ phim để tăng số lần xem
nó sẽ tìm trên vector Movies xem có bộ phim nào tồn tại cùng tên hay k.
nếu có thì sẽ tăng số lần xem lên 1 và return true.
nếu không, return false.*/
bool Movies::increment_watch(string name)
{
    for (auto movie : movies)
    {
        if (movie.get_name() == name)
        {
            // movies[i].set_watched(movies[i].get_watched()+1);
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

/*hàm display hiển thị tất cả movie object trong vector Movies,
với mỗi lần gọi movie.display thì movie object sẽ hiển thị.*/
void Movies::display() const
{
    if (movies.size() == 0)
    {
        cout << "nothing to display" << endl;
    }
    else
    {
        for (auto movie : movies)
            movie.display();
    }
}
