// 函数: sub_141b17c70
// 地址: 0x141b17c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) == 0)
    if (*(arg1 + 0x38) == 0)
        return nullptr
    
    return arg1 + 0x28

int32_t i = *(arg1 + 0x10)
int32_t r11 = 0

while (i s> 0)
    int32_t rcx_1 = i & 0x80000001
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i)
    int32_t i_1 = (temp1_1 - temp0_1) s>> 1
    i = i_1
    int32_t rax_4 = i_1 + r11
    
    if (arg2 s>= *(*(arg1 + 8) + (sx.q(rax_4) << 2)))
        r11 = rax_4 + rcx_1

int32_t rax_5 = r11 - 1

if (rax_5 s<= 0)
    rax_5 = 0

return (sx.q(rax_5) << 4) + *(arg1 + 0x18)
