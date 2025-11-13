// 函数: sub_141a00b90
// 地址: 0x141a00b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int64_t var_18 = *arg2
int32_t var_10 = rax
sub_142290210(arg1, &var_18)
int32_t result = *(arg1 + 0x49c)

if (result s> 1)
    int32_t r8_1 = 0
    
    if (result s> 0)
        int32_t result_2 = result
        int32_t result_1
        
        do
            int32_t rdx_1 = 0
            result_1 = result_2
            
            if (result_2 s> 0)
                float zmm2 = *arg2
                float zmm3 = *(arg2 + 4)
                float zmm4_1 = arg2[1].d
                
                do
                    int32_t rax_2 = result * r8_1 + rdx_1
                    rdx_1 += 1
                    int64_t rcx = sx.q(rax_2) * 3
                    int64_t rax_4 = arg1[0xa2]
                    float zmm1 = zmm3 f+ *(rax_4 + (rcx << 2) + 4)
                    *(rax_4 + (rcx << 2)) = zmm2 f+ *(rax_4 + (rcx << 2))
                    float zmm0_1 = zmm4_1 f+ *(rax_4 + (rcx << 2) + 8)
                    *(rax_4 + (rcx << 2) + 4) = zmm1
                    *(rax_4 + (rcx << 2) + 8) = zmm0_1
                    result = *(arg1 + 0x49c)
                while (rdx_1 s< result)
                
                result_1 = result
            
            r8_1 += 1
            result_2 = result_1
        while (r8_1 s< result_1)

return result
