// 函数: sub_141f81ba0
// 地址: 0x141f81ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[6].d &= 0xffffff7f
arg1[6].d |= 4
void* r9 = arg1[5]

if (r9 != 0 && ((*(r9 + 0xa4) u>> 1).b & 1) != 0)
    return sub_14216f020(*(r9 + 0x58), arg1[0xe], r9) __tailcall

int64_t rdx
rdx.b = 1
jump(*(*arg1 + 0x278))
