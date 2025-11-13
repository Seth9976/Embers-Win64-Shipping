// 函数: sub_142199af0
// 地址: 0x142199af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t result = __security_cookie ^ &var_38
int64_t result_1 = result
void* rdi = *(arg1 + 0x1d8)

if (rdi != 0)
    bool rdx_1 = sub_140b5b8a0(*(rdi + 0x34), 0).b == 0
    result.b = *(rdi + 0x38) != 0
    result.b |= rdx_1
    
    if (result.b != 0)
        void* r11_1 = *(arg1 + 0x1d8)
        result = zx.q(*(r11_1 + 0x30))
        
        if (result.b u>= 2)
            if (result.b u<= 3)
                if (*(arg1 + 0x240) == 0)
                    void* r8_2 = *(arg1 + 0x18)
                    int32_t rdx_3 = 0
                    int32_t r10_1 = *(r8_2 + 0x608)
                    
                    if (r10_1 s> 0)
                        void** r8_3 = *(r8_2 + 0x600)
                        
                        do
                            void* r9_2 = *r8_3
                            
                            if (r9_2 != 0)
                                result = *(r11_1 + 0x34)
                                
                                if (*(*(r9_2 + 0x10) + 0x28) == result)
                                    *(arg1 + 0x240) = r9_2
                                    break
                            
                            rdx_3 += 1
                            r8_3 = &r8_3[1]
                        while (rdx_3 s< r10_1)
            else if (result.b == 4)
                result = *(arg1 + 0x18)
                int32_t rdx_2 = 0
                int32_t rcx_1 = *(result + 0x448)
                
                if (rcx_1 s> 0)
                    result = *(result + 0x440)
                    
                    do
                        if (*result == *(r11_1 + 0x34))
                            *(arg1 + 0x238) = *(result + 0x30)
                            break
                        
                        rdx_2 += 1
                        result -= -0x80
                    while (rdx_2 s< rcx_1)

__security_check_cookie(result_1 ^ &var_38)
return result
