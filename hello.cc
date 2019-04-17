#include <iostream>
#include <cstdint>
using namespace ::std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    struct freespace_change {
	uint32_t tx_freespace_change;
	uint16_t credit;
    };
    union tsn_freespace {
	uint64_t commit_tsn;
	freespace_change freespace;
    };

    union u1 {
	uint16_t val1;
	uint16_t val2;
    };

    union u2 {
	uint32_t val1;
	uint32_t val2;
    };

    class itl {
	uint64_t txid;
	uint64_t uea;
	tsn_freespace union_val;
	uint8_t flag;
	uint8_t status; 
    };

    class itl2 {
	uint64_t txid;
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

    class itl3 {
	uint64_t txid;
	union aaa {
	    uint64_t tsn;
	    tsn_freespace union_val;
	};
	uea_union_s uea;
	uint8_t flag;
	uint8_t status; 
    };

    std::cout << sizeof(itl) << std::endl;
    std::cout << sizeof(itl2) << std::endl;
    std::cout << sizeof(itl3) << std::endl;
    return 0;
}
