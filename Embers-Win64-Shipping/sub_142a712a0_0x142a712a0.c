// 函数: sub_142a712a0
// 地址: 0x142a712a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i

for (i = *(arg1 + 8); i != 0; i = *(i + 0x48))
    bool cond:1_1
    
    if ((*(i + 0x10) & 1) == 0)
        int16_t rax_2 = *(i + 0x10)
        int32_t r8_2
        
        if (rax_2 s< 0)
            r8_2 = *(i + 0x14)
        else
            r8_2 = sx.d(rax_2) s>> 5
        
        int16_t rax_3 = *(arg2 + 8)
        int32_t rax_5
        
        if (rax_3 s< 0)
            rax_5 = *(arg2 + 0xc)
        else
            rax_5 = sx.d(rax_3) s>> 5
        
        if ((*(arg2 + 8) & 1) == 0 && r8_2 == rax_5)
            cond:1_1 = sub_142a490e0(i + 8, arg2, r8_2) != 0
            goto label_142a71306
    else
        cond:1_1 = (*(arg2 + 8) & 1) != 0
    label_142a71306:
        
        if (cond:1_1)
            break

return i
