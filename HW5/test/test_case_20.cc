#include "Bunch.h"
#include "test.h"

using namespace std;

int run_test_case(string &info) {
    Bunch b(".hidden_dir");
    string student_lines = b.entry(0).perms();
    student_lines += "\n";

    CHECK_LINES(student_lines, "drwxr-xr-x\n")

    return 0;
}
