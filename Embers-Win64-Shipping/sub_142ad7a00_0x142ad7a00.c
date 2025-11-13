// 函数: sub_142ad7a00
// 地址: 0x142ad7a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142a6ce50(arg1, arg2) == 0)
    return 0

bool cond:1_1

if ((*(arg1 + 0x168) & 1) == 0)
    int16_t rax_2 = *(arg1 + 0x168)
    int32_t r8_2
    
    if (rax_2 s< 0)
        r8_2 = *(arg1 + 0x16c)
    else
        r8_2 = sx.d(rax_2) s>> 5
    
    int16_t rax_3 = *(arg2 + 0x168)
    int32_t rax_5
    
    if (rax_3 s< 0)
        rax_5 = *(arg2 + 0x16c)
    else
        rax_5 = sx.d(rax_3) s>> 5
    
    if ((*(arg2 + 0x168) & 1) == 0 && r8_2 == rax_5)
        cond:1_1 = sub_142a490e0(arg1 + 0x160, arg2 + 0x160, r8_2) == 0
        goto label_142ad7a74
else
    cond:1_1 = (*(arg2 + 0x168) & 1) == 0
label_142ad7a74:
    
    if (not(cond:1_1))
        void* rcx_1 = *(arg1 + 0x300)
        
        if (rcx_1 != 0)
            void* rdx_1 = *(arg2 + 0x300)
            
            if (rdx_1 != 0 && sub_142b57c90(rcx_1, rdx_1) != 0
                    && *(arg1 + 0x350) == *(arg2 + 0x350))
                double zmm0_1 = *(arg1 + 0x310)
                double temp0_1 = *(arg2 + 0x310)
                zmm0_1 - temp0_1
                
                if (not(is_unordered.q(zmm0_1, temp0_1)) && not(zmm0_1 != temp0_1))
                    return 1
return 0
