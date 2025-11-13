// 函数: sub_142ca7170
// 地址: 0x142ca7170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbx = *(arg2 + 0x68)

if (*(rbx + 0x38) == 0)
    int64_t* rcx = *(arg2 + 0x38)
    sub_1429a8b80(rbx + 0x40, (*(*rcx + 8))(rcx))
    *(rbx + 0x38) = 1

*(rbx + 0x34) = 0xffffffff
sub_1429b5b50(rbx)
_CxxThrowException(nullptr, nullptr)
noreturn
