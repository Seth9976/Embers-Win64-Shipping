// 函数: sub_142a3e380
// 地址: 0x142a3e380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int512_t zmm1
result, zmm1 = sub_142a38150(arg1, arg3, arg4)

if (result s< 0)
    return result

int64_t* rcx = *arg3

if ((*(*rcx + 0x10))(rcx) != 0)
    int64_t* rcx_1 = *arg3
    int64_t* rbx_1 = rcx_1[1]
    int64_t rax_4 = sub_142a38690((*(*rcx_1 + 8))(rcx_1), rbx_1, zmm1)
    int64_t rcx_4 = *(*(*rbx_1 + 0x78) + 0x28)
    int64_t rax_5
    int64_t rdx_3
    
    if (rax_4 != 0)
        rdx_3:rax_5 = sx.o(0x7fffffffffffffff)
    
    int64_t rcx_5
    
    if (rax_4 == 0 || rcx_4 s<= divs.dp.q(rdx_3:rax_5, rax_4))
        rcx_5 = rcx_4 * rax_4
    else
        rcx_5 = -1
    
    if (arg2 s> rcx_5)
        void* rcx_6 = arg1[1]
        int64_t rdx_5 = *(rcx_6 + 0xa0)
        void* r14_1 = rdx_5 + (sx.q(rbx_1[2].d) << 3)
        void* var_38_1 = r14_1
        void* r15_1 = r14_1
        void* rsi_1 = rdx_5 + (sx.q(*(rcx_6 + 0xa8)) << 3)
        
        if (r14_1 u< rsi_1)
            void var_30
            void arg_20
            
            do
                int64_t rax_11 = (rsi_1 - r15_1) s>> 3
                
                if (rax_11 s< 0)
                    rax_11 += 1
                
                int64_t rax_12 = rax_11 s>> 1
                int64_t* rbx_2 = *(r15_1 + (rax_12 << 3))
                void* rdi_1 = r15_1 + (rax_12 << 3)
                int32_t rax_13 = sub_142a38c20(rbx_2, &var_30, &arg_20, zmm1)
                int64_t rax_14 = sx.q(rax_13)
                
                if (rax_13 s>= 0)
                    rax_14 = rbx_2[5]
                
                if (rax_14 s>= 0)
                    rax_14 = *(*(*rbx_2 + 0x78) + 0x28) * rbx_2[5]
                
                if (rax_14 s> arg2)
                    rsi_1 = rdi_1
                else
                    r15_1 = rdi_1 + 8
            while (r15_1 u< rsi_1)
            
            if (r15_1 u> r14_1)
                while (true)
                    int64_t* rsi_2 = *(r15_1 - 8)
                    void* rbp_1 = &arg1[0x12]
                    r15_1 -= 8
                    
                    if (*rsi_2 == 0)
                    label_142a3e551:
                        *arg3 = rbp_1
                        
                        if (rbp_1 != 0 && (*(*rbp_1 + 0x10))(rbp_1) != 0)
                            return 0
                    else
                        int32_t rbx_3 = 0
                        int64_t* rdi_2 = nullptr
                        
                        while (true)
                            if (rbx_3 s< *(rsi_2 + 0x3c))
                            label_142a3e501:
                                int64_t* r14_2 = *(rdi_2 + rsi_2[6])
                                
                                if (*((*(*r14_2 + 8))(r14_2) + 0x10) == sx.q(*(arg1 + 0x24)))
                                    if ((*(*arg1 + 8))(arg1, r14_2) != 0)
                                        rbp_1 = r14_2
                                    else
                                        rbx_3 += 1
                                        rdi_2 = &rdi_2[1]
                                        continue
                                else
                                    rbx_3 += 1
                                    rdi_2 = &rdi_2[1]
                                    continue
                            else
                                int32_t rax_17
                                rax_17, zmm1 = sub_142a39d10(rsi_2, &var_30, &arg_20, zmm1)
                                
                                if (rax_17 s<= 0)
                                    if (rax_17 s>= 0)
                                        goto label_142a3e501
                                    
                                    r14_1 = var_38_1
                                    *arg3 = 0
                                    break
                            
                            r14_1 = var_38_1
                            goto label_142a3e551
                    
                    if (r15_1 u<= r14_1)
                        break
        
        *arg3 = &arg1[0x12]

return 0
