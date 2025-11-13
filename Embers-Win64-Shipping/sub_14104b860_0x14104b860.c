// 函数: sub_14104b860
// 地址: 0x14104b860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg1[1].d
int32_t r10 = 0
int32_t r9 = 0

while (i s> 0)
    int32_t rcx_1 = i & 0x80000001
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i)
    int32_t i_1 = (temp1_1 - temp0_1) s>> 1
    i = i_1
    int32_t rax_4 = i_1 + r9
    
    if (arg2 u>= *(*arg1 + (sx.q(rax_4) << 3)))
        r9 = rax_4 + rcx_1

if (r9 - 1 s>= 0)
    r10 = r9 - 1

return zx.q(r10)
