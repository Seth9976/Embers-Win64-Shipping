// 函数: sub_1413ef450
// 地址: 0x1413ef450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t i = 0
void* var_68 = arg1
int32_t i_1 = 0
int32_t var_50 = 0
int32_t var_4c = 1
int32_t var_48 = 2

do
    int32_t j = 0
    int32_t j_1 = 0
    
    do
        int32_t k = 0
        int32_t k_1 = 0
        
        do
            for (int32_t r15_1 = 0; r15_1 s< 4; )
                int32_t* rbp_1 = &var_50
                int64_t r14_1 = 3
                uint32_t r12_1 = ((sbb.d(arg1.d, arg1.d, i != 0) & 2) + j + k) * 3
                int64_t temp2_1
                
                do
                    void* rax_3 = data_143ec8e58
                    void* var_60
                    arg1 = sub_1419a2ec0(*(var_68 + 0x5150), &var_60, &data_143ec8f90, 
                        r15_1 + (((sbb.d(rax_3.d, rax_3.d, *(rax_3 + 4) != 0) & 3) + *rbp_1
                            + r12_1 * 2) << 2))
                    void* rax_8 = var_60
                    int64_t rsi_1 = 0
                    
                    if (rax_8 != 0)
                        int64_t rdx_1 = sx.q(*(rax_8 + 0x10c))
                        int64_t rsi_2 = rdx_1 << 3
                        void* var_58
                        int64_t* rbx_1 = *(var_58 + 0x10)
                        int64_t rax_10 = rbx_1[3]
                        
                        if (*(rsi_2 + rax_10) == 0)
                            arg1 = sub_1419ccf30(rbx_1, rdx_1.d)
                            rax_10 = rbx_1[3]
                        
                        rsi_1 = *(rsi_2 + rax_10)
                    
                    int64_t rbx_2 = sx.q(arg2[1].d)
                    int32_t rax_11 = (rbx_2 + 1).d
                    arg2[1].d = rax_11
                    
                    if (rax_11 s> *(arg2 + 0xc))
                        arg1 = sub_1405a4d70(arg2)
                    
                    rbp_1 = &rbp_1[1]
                    *(*arg2 + (rbx_2 << 3)) = rsi_1
                    temp2_1 = r14_1
                    r14_1 -= 1
                while (temp2_1 != 1)
                k = k_1
                r15_1 += 1
                j = j_1
                i = i_1
            
            k += 1
            k_1 = k
        while (k s< 2)
        
        j += 4
        j_1 = j
    while (j s< 8)
    
    i += 1
    i_1 = i
while (i s< 2)

__security_check_cookie(rax_1 ^ &var_98)
return i
