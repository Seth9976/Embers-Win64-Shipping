// 函数: sub_142a491a0
// 地址: 0x142a491a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int32_t rdx_1

if (rax s< 0)
    rdx_1 = *(arg1 + 0xc)
else
    rdx_1 = sx.d(rax) s>> 5

if ((rax.b & 2) == 0)
    int32_t rax_2 = sub_142a8cab0(*(arg1 + 0x18), rdx_1)
    
    if (rax_2 == 0)
        return 1
    
    return rax_2

int32_t rax_1 = sub_142a8cab0(arg1 + 0xa, rdx_1)

if (rax_1 == 0)
    return 1

return rax_1
