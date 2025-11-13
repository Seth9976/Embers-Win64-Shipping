// 函数: sub_142ad77b0
// 地址: 0x142ad77b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (arg1 != arg2)
    sub_142a6cd30(arg1, arg2)
    sub_142a48100(arg1 + 0x1a0, arg2 + 0x1a0)
    sub_142a48100(arg1 + 0x1e0, arg2 + 0x1e0)
    struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** rbx_1 = *(arg1 + 0x300)
    
    if (rbx_1 != 0)
        sub_142b57bd0(rbx_1)
        sub_142a47920(rbx_1)
    
    *(arg1 + 0x300) = 0
    struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** arg_8
    
    if (*(arg2 + 0x300) != 0)
        struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** rax_1 = j_sub_142a7dd00(0x4d8)
        arg_8 = rax_1
        struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** rax_2
        
        if (rax_1 == 0)
            rax_2 = nullptr
        else
            rax_2 = sub_142b57920(rax_1, *(arg2 + 0x300))
        
        *(arg1 + 0x300) = rax_2
    
    *(arg1 + 0x310) = *(arg2 + 0x310)
    *(arg1 + 0x31c) = *(arg2 + 0x31c)
    *(arg1 + 0x350) = *(arg2 + 0x350)
    sub_142a48100(arg1 + 0x160, arg2 + 0x160)
    *(arg1 + 0x318) = *(arg2 + 0x318)
    *(arg1 + 0x319) = *(arg2 + 0x319)
    
    if (sub_142a45d30(arg1 + 0x220, arg2 + 0x220) == 0)
        int64_t* rcx_7 = *(arg1 + 0x308)
        
        if (rcx_7 != 0)
            (**rcx_7)(rcx_7, 1)
        
        *(arg1 + 0x308) = 0
        sub_142a45c20(arg1 + 0x220, arg2 + 0x220)
    
    int64_t* rcx_9 = *(arg2 + 0x358)
    
    if (rcx_9 != 0)
        *(arg1 + 0x358) = (*(*rcx_9 + 0x18))(rcx_9)
    
    int64_t rsi_1 = *(arg1 + 0x320)
    
    if (rsi_1 != 0)
        for (int64_t i = 0; i s< 0x26; i += 1)
            int64_t* rcx_10 = *(rsi_1 + (i << 3))
            
            if (rcx_10 != 0)
                sub_142aa6d70(rcx_10)
                *(rsi_1 + (i << 3)) = 0
        
        sub_142a7dcd0(rsi_1)
        *(arg1 + 0x320) = 0
    
    if (*(arg2 + 0x320) != 0)
        int64_t rax_12 = sub_142ad8360()
        *(arg1 + 0x320) = rax_12
        
        if (rax_12 != 0)
            for (int64_t* i_1 = nullptr; i_1 s< 0x130; i_1 = &i_1[1])
                int64_t r14_1 = *(arg1 + 0x320)
                void* rsi_2 = *(i_1 + *(arg2 + 0x320))
                int64_t* rcx_12 = *(i_1 + r14_1)
                
                if (rsi_2 != rcx_12)
                    if (rcx_12 != 0)
                        sub_142aa6d70(rcx_12)
                    
                    *(i_1 + r14_1) = rsi_2
                    
                    if (rsi_2 != 0)
                        sub_142aa6d40(rsi_2)
    
    arg_8.d = 0
    sub_142ad91e0(arg1)
    sub_142ad9350(arg1, &arg_8)

return arg1
