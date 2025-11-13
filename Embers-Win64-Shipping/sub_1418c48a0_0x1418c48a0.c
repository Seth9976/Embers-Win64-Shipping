// 函数: sub_1418c48a0
// 地址: 0x1418c48a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(*(arg2 + 0x2c))
void* rax
int32_t rdx

if (r10 == 0)
    rdx = 0
    rax = arg2 + 0x30
else if (r10 == 1)
    rdx = 3
    rax = arg2 + 0x30
else if (r10 == 2)
    rdx = 4
    rax = arg2 + 0x30
else if (r10 == 3)
    rdx = 1
    rax = arg2 + 0x30
else if (r10 == 4)
    rdx = 2
    rax = arg2 + 0x30
else
    rax = nullptr
    rdx = -1

return sub_1418c6210(arg1, rdx, arg4, arg3, rax)
