// 函数: sub_142bbcc00
// 地址: 0x142bbcc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x3e8)
int32_t result_1 = 0

if (rsi == 0)
    return 0

int32_t result

if (*(rsi + 0x1138) != 0)
    result = 0
    *arg2 = **(rsi + 0x1138)
else
    int16_t* rax_1 = sub_142b99860(*(arg1 + 0x98), 2, &result_1)
    result = result_1
    
    if (result == 0)
        *rax_1 = 0
        int32_t rcx_1 = *(rsi + 0x660)
        
        if (rcx_1 != 0xffff)
            char* str1
            
            if (rcx_1 u<= 0x186)
                int64_t rax_3 = *(rsi + 0x10e0)
                
                if (rax_3 != 0)
                    str1 = (*(rax_3 + 0x28))()
                label_142bbcca6:
                    
                    if (str1 != 0)
                        char* rax_4 = strstr(str1, "/FSType")
                        
                        if (rax_4 != 0)
                            void* str1_1 = &rax_4[7]
                            char* rax_5 = strstr(str1_1, "def")
                            
                            if (rax_5 != 0 && str1_1 != rax_5)
                                do
                                    char rcx_5 = *str1_1
                                    
                                    if (rcx_5 - 0x30 u<= 9)
                                        int16_t rax_7 = *rax_1
                                        
                                        if (rax_7 u>= 0x1998)
                                            *rax_1 = 0
                                            break
                                        
                                        int16_t rcx_6 = rax_7 * 0xa
                                        *rax_1 = rcx_6
                                        *rax_1 = sx.w(*str1_1) - 0x30 + rcx_6
                                    else if (rcx_5 u> 0x20
                                            || not(test_bit(0x100002400, sx.q(rcx_5))))
                                        *rax_1 = 0
                                        break
                                    
                                    str1_1 += 1
                                while (str1_1 != rax_5)
            else
                uint64_t rcx_2 = zx.q(rcx_1 - 0x187)
                
                if (rcx_2.d u< *(rsi + 0x5c0))
                    str1 = *(*(rsi + 0x5c8) + (rcx_2 << 3))
                    goto label_142bbcca6
        
        *(rsi + 0x1138) = rax_1
        result = result_1
        *arg2 = **(rsi + 0x1138)

return result
