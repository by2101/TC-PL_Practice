#include <vector>

namespace bint{

using std::vector;

class bigint{
    
    vector<int> num;

    bigint add(bigint n);
    bigint prod(bigint n);

    public:
        bigint();
        ~bigint();

};

}
