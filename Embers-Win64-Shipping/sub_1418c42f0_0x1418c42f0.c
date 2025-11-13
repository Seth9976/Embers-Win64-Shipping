// 函数: sub_1418c42f0
// 地址: 0x1418c42f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(*(arg2 + 0x2c))
void* const rdx
int64_t r8

if (r10 == 0)
    rdx = 0x1e8
    r8 = 0xd0
else if (r10 == 1)
    rdx = 0x200
    r8 = 0x160
else if (r10 == 2)
    rdx = 0x208
    r8 = 0x190
else if (r10 == 3)
    rdx = 0x1f0
    r8 = 0x100
else if (r10 == 4)
    rdx = 0x1f8
    r8 = 0x130
else
    rdx = 0x9e0
    r8 = 0x30a0

void* rcx = *(*(arg1 + 0x450) + 0x48)
return sub_1418c60f0(rcx + r8, arg3, arg4, arg5, arg6, rdx + rcx)
