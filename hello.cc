#include <iostream>
#include <cstdint>
using namespace ::std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    struct fc {
	uint32_t x_fc;
	uint16_t cre;
    };
    union t_freespace {
	uint64_t commit_t;
	fc freespace;
    };

    union u1 {
	uint16_t val1;
	uint16_t val2;
    };

    union u2 {
	uint32_t val1;
	uint32_t val2;
    };

    class union_ver {
	uint64_t xid;
	uint64_t uea;
	t_freespace union_val;
	uint8_t flag;
	uint8_t status; 
    };

    class union_ver2 {
	uint64_t xid;
	uint64_t uea;
	u2 union_Val2;
	u1 union_val1;
	uint8_t flag;
	uint8_t status; 
    };

    struct uea_union_s {
	uint32_t base;
	uint16_t wrap;
    };

    class union_ver3 {
	uint64_t xid;
	union aaa {
	    uint64_t t;
	    t_freespace union_val;
	};
	uea_union_s uea;
	uint8_t flag;
	uint8_t status; 
    };

    std::cout << sizeof(union_ver) << std::endl;
    std::cout << sizeof(union_ver2) << std::endl;
    std::cout << sizeof(union_ver3) << std::endl;
    return 0;
}
