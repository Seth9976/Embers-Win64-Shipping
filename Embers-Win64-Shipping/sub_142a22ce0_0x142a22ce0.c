// 函数: sub_142a22ce0
// 地址: 0x142a22ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = sx.d(arg1[1])

if (r8 s< *(arg2 + 0xf84) - 0x98)
    arg1[1] = *(arg2 + 0xf84) - 0x80
else if (r8 s> *(arg2 + 0xf88) + 0x90)
    arg1[1] = *(arg2 + 0xf88) + 0x80

int32_t r8_1 = sx.d(*arg1)

if (r8_1 s< *(arg2 + 0xf8c) - 0x98)
    int16_t rax_6 = *(arg2 + 0xf8c) - 0x80
    *arg1 = rax_6
    return rax_6

uint32_t rax_8 = *(arg2 + 0xf90) + 0x90

if (r8_1 s> rax_8)
    rax_8.w = *(arg2 + 0xf90) + 0x80
    *arg1 = rax_8.w

return rax_8
