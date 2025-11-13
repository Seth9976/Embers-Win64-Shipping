// 函数: sub_142a9fa90
// 地址: 0x142a9fa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int32_t rdx_1

if (rax s< 0)
    rdx_1 = *(arg1 + 0xc)
else
    rdx_1 = sx.d(rax) s>> 5

if (rdx_1 s> 2)
    return 0xffffffff

int32_t rdx_3

if (rax s< 0)
    rdx_3 = *(arg1 + 0xc)
else
    rdx_3 = sx.d(rax) s>> 5

if (rdx_3 != 1)
    int32_t rax_5 = sub_142a486d0(arg1, 0)
    int32_t rdx_6 = -1
    
    if (rax_5 s> 0xffff)
        rdx_6 = rax_5
    
    return zx.q(rdx_6)

int32_t rdx_5

if (rax s< 0)
    rdx_5 = *(arg1 + 0xc)
else
    rdx_5 = sx.d(rax) s>> 5

if (rdx_5 == 0)
    return 0xffff

if ((rax.b & 2) == 0)
    return zx.q(**(arg1 + 0x18))

return zx.q(*(arg1 + 0xa))
