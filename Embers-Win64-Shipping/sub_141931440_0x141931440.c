// 函数: sub_141931440
// 地址: 0x141931440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
uint64_t result = __security_cookie ^ &var_58
uint64_t result_1 = result
int32_t rdx = *(arg1 + 0x2d0)

if (*(arg2 + 0x188) != rdx)
    if (rdx == 0)
        data_143f000f8(0x8d40, 0)
        data_143effae0(0x405)
        data_143eff9f8(0x405)
    else
        data_143f000f8(0x8d40, rdx)
        int32_t rax_1 = *(arg1 + 0x310)
        uint64_t rcx = zx.q(rax_1 + 0x8ce0)
        
        if (rax_1 s< 0)
            rcx = 0
        
        data_143effae0(rcx)
        int64_t rcx_1 = sx.q(data_143eff634)
        int32_t var_38[0x8]
        
        if (rcx_1.d s> 0)
            int64_t rdx_1 = 0
            void* r9_1 = arg1 + 0x318
            int32_t r8_1 = 0x8ce0
            
            do
                bool cond:1_1 = *r9_1 == 0
                r9_1 += 8
                int32_t rax_2 = r8_1
                
                if (cond:1_1)
                    rax_2 = 0
                
                r8_1 += 1
                var_38[rdx_1] = rax_2
                rdx_1 += 1
            while (rdx_1 s< rcx_1)
        
        data_143effd40(rcx_1, &var_38)
    
    result = zx.q(*(arg1 + 0x2d0))
    *(arg2 + 0x188) = result.d

__security_check_cookie(result_1 ^ &var_58)
return result
