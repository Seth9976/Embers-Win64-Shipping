// 函数: sub_142bbd8a0
// 地址: 0x142bbd8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
void* rdx = *(rax + 0x3e8)

if (*(rdx + 0x4d8) == 0)
    return 0xa3

int64_t r10_1 = *(*(rdx + 0x10e0) + 8)

if (r10_1 != 0)
    return r10_1(*(rax + 0x98), arg1, zx.q(*(rdx + 0x20)), sub_142bc15c0, 0, rax)

return 7
