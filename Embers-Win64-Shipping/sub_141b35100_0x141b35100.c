// 函数: sub_141b35100
// 地址: 0x141b35100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg2
int64_t rbx = 0
int64_t* var_60 = r8
int64_t var_58 = 0
int64_t* result = &r8[arg2[1]]
uint64_t rdx_1 = sx.q(arg2[1].d) << 3 u>> 3

if (r8 u> result)
    rdx_1 = 0

if (rdx_1 != 0)
    int64_t rbp
    int64_t arg_8 = rbp
    int64_t* rdi_1 = arg1 + 8
    int64_t* var_48_1 = rdi_1
    
    do
        int32_t var_68
        sub_141b1fee0(rdi_1, &var_68, *r8)
        int64_t rax_1 = sx.q(var_68)
        
        if (rax_1.d == 0xffffffff)
            result = nullptr
        else
            result = rax_1 * 0x50 + *rdi_1
        
        void* rcx_1 = &result[1]
        
        if (result == 0)
            rcx_1 = nullptr
        
        if (rcx_1 != 0)
            result = arg3
            int32_t* result_2 = rcx_1 + 8
            int64_t rdx_3 = sx.q(result_2[0xc])
            int32_t* result_3 = result_2
            int64_t zmm0 = *result
            int32_t r15_1 = result[1].d
            
            if (rdx_3.d != 0)
                int32_t* result_6 = *(result_2 + 0x28)
                int32_t* result_4 = result_2
                int32_t r12_1 = zmm0.d
                int32_t r10_1 = 0
                int32_t arg_10 = 0
                
                if (result_6 != 0)
                    result_4 = result_6
                
                int32_t rdi_2 = 0
                int64_t rbx_1 = 0
                result = zmm0 u>> 0x20
                
                if (result_4[1] != result.d || *result_4 != r12_1 || result_4[2] != r15_1)
                    rbp.b = 1
                else
                    rbp.b = 0
                
                do
                    int64_t r11_1 = sx.q(rdi_2)
                    rbx_1 += 1
                    rdi_2 += 1
                    
                    if (rbx_1 s< rdx_3)
                        result = *(result_2 + 0x28)
                        int32_t* result_1 = result_2
                        
                        if (result != 0)
                            result_1 = result
                        
                        int32_t* rcx_3 = rbx_1 * 0x14
                        
                        do
                            if (*(rcx_3 + result_1 + 4) != zmm0:4.d || *(rcx_3 + result_1) != r12_1
                                    || *(rcx_3 + result_1 + 8) != r15_1)
                                result.b = 1
                            else
                                result.b = 0
                            
                            if (rbp.b != result.b)
                                break
                            
                            rdi_2 += 1
                            rbx_1 += 1
                            rcx_3 = &rcx_3[5]
                        while (rbx_1 s< rdx_3)
                    
                    int32_t rsi_2 = rdi_2 - r11_1.d
                    
                    if (rbp.b != 0)
                        if (r10_1 != r11_1.d)
                            int32_t* result_7 = *(result_2 + 0x28)
                            int32_t* result_5 = result_2
                            
                            if (result_7 != 0)
                                result_5 = result_7
                            
                            result = memmove(&result_5[sx.q(r10_1) * 5], &result_5[r11_1 * 5], 
                                rsi_2 * 0x14)
                            r10_1 = arg_10
                            result_2 = result_3
                        
                        r10_1 += rsi_2
                        arg_10 = r10_1
                    
                    rbp.b ^= 1
                while (rbx_1 s< rdx_3)
                
                rbx = var_58
                rdi_1 = var_48_1
                result_2[0xc] = r10_1
        
        rbx += 1
        r8 = &var_60[1]
        var_58 = rbx
        var_60 = r8
    while (rbx != rdx_1)

return result
