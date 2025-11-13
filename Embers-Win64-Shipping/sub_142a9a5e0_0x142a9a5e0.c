// 函数: sub_142a9a5e0
// 地址: 0x142a9a5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int32_t r9_1

if (rax s< 0)
    r9_1 = *(arg1 + 0xc)
else
    r9_1 = sx.d(rax) s>> 5

int32_t rax_1 = sub_142a491f0(arg1, 0x2f, 0, r9_1)

if (rax_1 s>= 0)
    if (rax_1 == 0x7ffffffe)
        if ((*(arg1 + 8) & 1) == 0)
            *(arg1 + 8) &= 0x1f
            return arg1
        
        *(arg1 + 8) = 2
        return arg1
    
    sub_142a49390(arg1, 0, rax_1 + 1, 0, 0, 0)

return arg1
