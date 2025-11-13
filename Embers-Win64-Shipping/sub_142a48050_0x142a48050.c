// 函数: sub_142a48050
// 地址: 0x142a48050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 4) != 0)
    void* r8_1 = *(arg1 + 0x18)
    int32_t rax_1 = *(r8_1 - 4)
    *(r8_1 - 4) -= 1
    
    if (rax_1 == 1)
        sub_142a7dcd0(*(arg1 + 0x18) - 4)

int16_t rax_3 = *(arg2 + 8)
*(arg1 + 8) = rax_3

if ((rax_3.b & 2) == 0)
    bool cond:1_1 = *(arg1 + 8) s>= 0
    *(arg1 + 0x18) = *(arg2 + 0x18)
    *(arg1 + 0x10) = *(arg2 + 0x10)
    
    if (not(cond:1_1))
        *(arg1 + 0xc) = *(arg2 + 0xc)
    
    *(arg2 + 8) = 1
    *(arg2 + 0x18) = 0
    *(arg2 + 0x10) = 0
else if (arg1 != arg2)
    memcpy(arg1 + 0xa, arg2 + 0xa, (sx.d(rax_3) s>> 5) * 2)

return arg1
