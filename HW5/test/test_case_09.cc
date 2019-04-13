#include "Bunch.h"
#include "test.h"

using namespace std;

int run_test_case(string &info) {
    const Bunch b("simple");

    if (b.size() != 1) {
        info = "b should have size 1";
        return 1;
    }

    return 0;
}
