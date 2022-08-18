
#ifndef MOVIES_H
#define MOVIES_H
#include <vector>
#include <string>
#include "Movie.h"


using namespace std;

class Movies
{
private:
    vector<Movie> movies;

public:
    Movies();
    ~Movies();

    /*add_movie yêu cầu đầu vào là tên 1 bộ phim, rating và số lần xem
    nó sẽ tìm kiếm trên vector Movies xem đã tồn tại bộ phim cùng tên hay chưa
    nếu đã tồn tại-> return fail, nếu chưa, tạo một object movie bằng thông tin đầu vào 
    vào thêm nó vào vector Movies và return true.*/
    bool add_movie(string name, string rating, int watched);

    /*increment_watched yêu cầu đầu vào là tên một bộ phim để tăng số lần xem
    nó sẽ tìm trên vector Movies xem có bộ phim nào tồn tại cùng tên hay k.
    nếu có thì sẽ tăng số lần xem lên 1 và return true.
    nếu không, return false.*/
    bool increment_watch(string name);

    /*hàm display hiển thị tất cả movie object trong vector Movies, 
    với mỗi lần gọi movie.display thì movie object sẽ hiển thị.*/
    void display() const;
};

#endif