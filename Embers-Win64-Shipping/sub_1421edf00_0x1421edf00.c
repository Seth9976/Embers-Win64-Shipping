// 函数: sub_1421edf00
// 地址: 0x1421edf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = sub_1421b7c40(arg2, arg1)
uint64_t result = sub_140d3e110(rax)

if (result.b != 0 && rax[0x12] != 0xffffffff)
    result = sub_140d3c6e0(rax)
    uint64_t result_1 = result
    
    if ((*(arg1 + 0x40) & 4) != 0)
        int32_t i = 0
        
        if (rax[5] s> 0)
            int64_t rsi_1 = 0
            int64_t rbp_1 = 0
            
            do
                result = *(rax + 0x20)
                int32_t r8_1 = *(rsi_1 + result)
                
                if (r8_1 != 0xffffffff)
                    float var_48[0x3][0x4]
                    sub_141f5e2b0(result_1, &var_48, r8_1)
                    int64_t* rcx_4 = *(rax + 0x30)
                    int32_t var_10
                    result = zx.q(var_10[0])
                    int32_t var_18
                    int32_t var_14
                    *(rcx_4 + rbp_1) = (_mm_unpacklo_ps(var_18, var_14)).q
                    *(rcx_4 + rbp_1 + 8) = result.d
                
                i += 1
                rsi_1 += 4
                rbp_1 += 0xc
            while (i s< rax[5])

return result
