// 函数: sub_14283f9d0
// 地址: 0x14283f9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = arg1 & 0x7fffffff
int16_t r8_2 = (arg1 u>> 0x10).w & 0x8000

if (rdx_1 u> 0x477fe000)
    int32_t rax_2
    rax_2.b = (rdx_1 & 0x7fffff) != 0
    int16_t rax_3 = 0x7fff
    
    if ((rax_2.b & (rdx_1 & 0x7f800000) == 0x7f800000) == 0)
        rax_3 = 0x7c00
    
    return rax_3 | r8_2

if (rdx_1 == 0)
    int64_t result
    result.w = r8_2
    return result

uint32_t rdx_4

if (rdx_1 u>= 0x38800000)
    rdx_4 = rdx_1 - 0x38000000
else
    rdx_4 = ((rdx_1 & 0x7fffff) | 0x800000) u>> (0x71 - (rdx_1 u>> 0x17).b)

return (0x7fff & ((rdx_4 + 0xfff + (rdx_4 u>> 0xd & 1)) u>> 0xd).w) | r8_2
