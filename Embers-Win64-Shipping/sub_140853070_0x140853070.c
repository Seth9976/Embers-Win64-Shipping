// 函数: sub_140853070
// 地址: 0x140853070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3
int64_t* r13 = *arg2
int64_t* r8 = arg2
void* result = &r13[sx.q(arg2[1].d) * 5]
void* result_1 = result

if (r13 != result)
    do
        int32_t* rax_2 = sub_1408011e0(r8, r13)
        result = (*(*rdi + 0x30))(rdi, r13)
        int32_t r8_1 = 0
        int32_t r12_1 = 0
        int32_t arg_20 = 0
        
        if (result != 0 && rax_2 != 0)
            int32_t rdx_2 = *result
            int32_t i = 0
            int32_t var_48_1 = rdx_2
            
            if (rax_2[4] u> 0)
                do
                    int64_t rsi_1 = sx.q(arg1[1].d)
                    int32_t r15_2 = *rax_2 + r12_1
                    r12_1 += 1
                    int32_t rax_5 = (rsi_1 + 1).d
                    int32_t rbp_2 = *(*(rax_2 + 8) + (sx.q(i) << 2)) + rdx_2
                    arg1[1].d = rax_5
                    
                    if (rax_5 s> *(arg1 + 0xc))
                        sub_1405a4d70(arg1)
                        rdx_2 = var_48_1
                    
                    result = *arg1
                    i += 1
                    *(result + (rsi_1 << 3)) = rbp_2
                    *(result + (rsi_1 << 3) + 4) = r15_2
                while (i u< rax_2[4])
                
                r8_1 = 0
            
            int32_t i_1 = 0
            
            if (rax_2[0xc] u> 0)
                do
                    int64_t rbp_3 = sx.q(arg1[3].d)
                    int32_t r12_3 = rax_2[1] + r8_1
                    r8_1 += 1
                    int32_t rax_7 = (rbp_3 + 1).d
                    int32_t r15_4 = *(*(rax_2 + 0x28) + (sx.q(i_1) << 2)) + rdx_2
                    arg1[3].d = rax_7
                    
                    if (rax_7 s> *(arg1 + 0x1c))
                        sub_1405a4d70(&arg1[2])
                        rdx_2 = var_48_1
                    
                    result = arg1[2]
                    i_1 += 1
                    *(result + (rbp_3 << 3)) = r15_4
                    *(result + (rbp_3 << 3) + 4) = r12_3
                while (i_1 u< rax_2[0xc])
            
            rdi = arg3
        
        r8 = arg2
        r13 = &r13[5]
    while (r13 != result_1)

return result
