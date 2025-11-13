// 函数: sub_1418c43d0
// 地址: 0x1418c43d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10_4 = zx.d(*(arg2 + 0x2c))
int64_t r11 = sx.q(arg3)
int64_t r8

if (r10_4 == 0)
    r8 = 0x28
else if (r10_4 == 1)
    r8 = 0x40
else if (r10_4 == 2)
    r8 = 0x48
else if (r10_4 == 3)
    r8 = 0x30
else if (r10_4 == 4)
    r8 = 0x38
else
    r8 = 0x20

void* rcx = *(arg1 + 0x450)
int64_t rax_2 = *(*(*(rcx + 0x48) + 0xc8) + r8)
return sub_1418eddc0(rcx, *(rax_2 + (r11 << 2)), zx.d(*(rax_2 + (r11 << 2) + 2)), arg4) __tailcall
