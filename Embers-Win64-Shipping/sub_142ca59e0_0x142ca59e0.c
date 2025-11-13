// 函数: sub_142ca59e0
// 地址: 0x142ca59e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rbx = *(arg2 + 0x80)

if (*(rbx + 0x30) == 0)
    int64_t* rcx = *(arg2 + 0x38)
    sub_1429a8b80(rbx + 0x38, (*(*rcx + 8))(rcx))
    *(rbx + 0x30) = 1

*(rbx + 0x2c) = 0xffffffff
sub_1429aadd0(rbx)
_CxxThrowException(nullptr, nullptr)
noreturn
