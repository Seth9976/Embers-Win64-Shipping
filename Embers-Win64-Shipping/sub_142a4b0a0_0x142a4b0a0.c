// 函数: sub_142a4b0a0
// 地址: 0x142a4b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

int16_t rax_1 = *(arg1 + 8)
int32_t rdx_1

if (rax_1 s< 0)
    rdx_1 = *(arg1 + 0xc)
else
    rdx_1 = sx.d(rax_1) s>> 5

if ((rax_1.b & 2) == 0)
    int32_t rax_3 = sub_142a8cab0(*(arg1 + 0x18), rdx_1)
    
    if (rax_3 == 0)
        return 1
    
    return rax_3

int32_t rax_2 = sub_142a8cab0(arg1 + 0xa, rdx_1)

if (rax_2 == 0)
    return 1

return rax_2
