// 函数: sub_141507440
// 地址: 0x141507440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = zx.d(arg2) << 0x18 | (arg3 & 0xffffff)
int32_t r8_1 = (rax_1 u>> 0x10 ^ rax_1) * 0x85ebca6b
int32_t rcx = (r8_1 u>> 0xd ^ r8_1) * 0xc2b2ae35

for (int32_t i =
        *(*(arg1 + 0x28) + (((zx.q(rcx) u>> 0x10 ^ zx.q(rcx.w)) & zx.q(*(arg1 + 0x1c))) << 2)); 
        i != 0xffffffff; i = *(*(arg1 + 0x30) + (zx.q(i) << 2)))
    if (*(*(arg1 + 8) + sx.q(i) * 0x10) == rax_1)
        return zx.q(i)

return 0xffffffff
