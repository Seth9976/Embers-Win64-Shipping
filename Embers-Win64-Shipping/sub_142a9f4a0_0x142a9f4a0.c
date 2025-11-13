// 函数: sub_142a9f4a0
// 地址: 0x142a9f4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void* result = arg1

if (arg1 != arg2 && *(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0)
    if ((*(arg2 + 0x20) & 1) != 0)
        sub_142aa0650(arg1)
    else if (sub_142a9f6f0(arg1, *(arg2 + 0x1c)) != 0)
        int64_t rax_2 = sx.q(*(arg2 + 0x1c))
        *(result + 0x1c) = rax_2.d
        memcpy(*(result + 0x10), *(arg2 + 0x10), (rax_2 << 2).d)
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rsi_1 = nullptr
        struct icu_64::BMPSet::VTable** arg_8
        struct icu_64::BMPSet::VTable** rax_4
        
        if (*(arg2 + 0x28) != 0 && arg3 == 0)
            struct icu_64::BMPSet::VTable** rax_3 = j_sub_142a7dd00(0x368)
            arg_8 = rax_3
            
            if (rax_3 == 0)
                rax_4 = nullptr
            else
                rax_4 = sub_142b13ce0(rax_3, *(arg2 + 0x28), *(result + 0x10), *(result + 0x1c))
            
            *(result + 0x28) = rax_4
        
        if (*(arg2 + 0x28) != 0 && arg3 == 0 && rax_4 == 0)
            sub_142aa0650(result)
        else
            void* rax_5 = *(arg2 + 0x50)
            
            if (rax_5 == 0 || *(rax_5 + 8) == 0)
                void* rcx_4 = *(result + 0x50)
                
                if (rcx_4 != 0 && *(rcx_4 + 8) != 0)
                    sub_142ae76a0(rcx_4)
                
                goto label_142a9f5d2
            
            arg_8.d = 0
            char rax_6
            
            if (*(result + 0x50) == 0)
                rax_6 = sub_142a9ecb0(result, &arg_8)
            
            if (*(result + 0x50) == 0 && rax_6 == 0)
                sub_142aa0650(result)
            else
                sub_142ae7150(*(result + 0x50), *(arg2 + 0x50), sub_142a9ee80, &arg_8)
                
                if (arg_8.d s<= 0)
                label_142a9f5d2:
                    
                    if (*(arg2 + 0x58) != 0 && arg3 == 0)
                        struct icu_64::BMPSet::VTable** rax_7 = j_sub_142a7dd00(0x180)
                        arg_8 = rax_7
                        
                        if (rax_7 != 0)
                            rsi_1 = sub_142b154e0(rax_7, *(arg2 + 0x58), *(result + 0x50))
                        
                        *(result + 0x58) = rsi_1
                    
                    if (*(arg2 + 0x58) != 0 && arg3 == 0 && rsi_1 == 0)
                        sub_142aa0650(result)
                    else
                        sub_142aa0000(result)
                        int64_t rdx_6 = *(arg2 + 0x40)
                        
                        if (rdx_6 != 0)
                            sub_142aa05d0(result, rdx_6, *(arg2 + 0x48))
                else
                    sub_142aa0650(result)

return result
