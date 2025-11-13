// 函数: sub_141b2bc10
// 地址: 0x141b2bc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_2 = arg1[0x20]

if (rax_2 != 0)
    arg1[0x1c] = rax_2

int32_t zmm0 = arg1[0x21].d

if (not(zmm0 f== 1f))
    arg1[0x1d].d = zmm0

zmm0 = *(arg1 + 0x10c)

if (not(zmm0 f== 1f))
    *(arg1 + 0xec) = zmm0

zmm0 = arg1[0x22].d

if (not(zmm0 f== 0f))
    arg1[0x1e].d = zmm0

zmm0 = *(arg1 + 0x114)

if (not(zmm0 f== 0f))
    *(arg1 + 0xf4) = zmm0

char rax = arg1[0x23].b

if (rax != 0)
    arg1[0x1f].b = rax

return j_sub_140ce3290(arg1) __tailcall
