// 函数: sub_140d09000
// 地址: 0x140d09000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[7].d)
int64_t rbp = arg3
int64_t r8 = arg2

if (rbp == 0)
    int32_t i = 0
    
    if (result.d s> 0)
        do
            result = (*(*arg1 + 0x158))(arg1, sx.q(i) + r8)
            uint64_t result_1 = result
            
            for (int32_t j = 0; j s>= 0; j += 1)
                if (j s>= *(result_1 + 8))
                    break
                
                int32_t* rdi_3 = (sx.q(j) << 4) + *result_1
                result = sub_140d3c6e0(rdi_3)
                
                if (result != 0)
                    char var_58_3 = 1
                    void* rax_6 = sub_140be1ac0(arg5, nullptr, result, arg4, 
                        (zx.q(arg1[8].d) u>> 0xd).b & 1, 0)
                    int64_t rbx_4 = *(rdi_3 + 8)
                    result = sub_140d3a3a0(rdi_3, rax_6)
                    *(rdi_3 + 8) = rbx_4
            
            r8 = arg2
            i += 1
        while (i s< arg1[7].d)
else
    int32_t i_1 = 0
    int32_t i_2 = 0
    
    if (result.d s> 0)
        do
            int64_t i_3 = sx.q(i_1)
            void* rax_1 = (*(*arg1 + 0x158))(arg1, i_3 + r8)
            int64_t r8_1 = *arg1
            int32_t j_2 = 0
            result = (*(r8_1 + 0x158))(arg1, i_3 + rbp, r8_1)
            int32_t rbp_1 = 0
            uint64_t result_2 = result
            int32_t j_1 = 0
            
            while (j_1 s>= 0)
                if (j_1 s>= *(rax_1 + 8))
                    break
                
                if (rbp_1 s< 0)
                    break
                
                if (rbp_1 s>= *(result_2 + 8))
                    break
                
                int32_t* rsi_3 = (sx.q(j_2) << 4) + *rax_1
                result = sub_140d3c6e0(rsi_3)
                
                if (result != 0)
                    char var_58_1 = 1
                    void* rax_3 = sub_140be1ac0(arg5, 
                        sub_140d3c6e0((sx.q(rbp_1) << 4) + *result_2), result, arg4, 
                        (zx.q(arg1[8].d) u>> 0xd).b & 1, 0)
                    int64_t rbx_2 = *(rsi_3 + 8)
                    result = sub_140d3a3a0(rsi_3, rax_3)
                    *(rsi_3 + 8) = rbx_2
                
                j_2 += 1
                j_1 = j_2
                rbp_1 += 1
            
            for (; j_2 s>= 0; j_2 += 1)
                if (j_2 s>= *(rax_1 + 8))
                    break
                
                int32_t* rsi_6 = (sx.q(j_2) << 4) + *rax_1
                result = sub_140d3c6e0(rsi_6)
                
                if (result != 0)
                    char var_58_2 = 1
                    void* rax_4 = sub_140be1ac0(arg5, nullptr, result, arg4, 
                        (zx.q(arg1[8].d) u>> 0xd).b & 1, 0)
                    int64_t rbx_3 = *(rsi_6 + 8)
                    result = sub_140d3a3a0(rsi_6, rax_4)
                    *(rsi_6 + 8) = rbx_3
            
            rbp = arg3
            i_1 = i_2 + 1
            r8 = arg2
            i_2 = i_1
        while (i_1 s< arg1[7].d)

return result
