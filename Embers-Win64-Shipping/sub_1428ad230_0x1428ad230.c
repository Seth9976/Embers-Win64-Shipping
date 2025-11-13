// 函数: sub_1428ad230
// 地址: 0x1428ad230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = arg1
int32_t r12 = 1
int32_t r13

if (arg1 == 0)
    r13 = 0
else
    r13 = sub_142898c70(arg1)
    rax = arg1

int32_t rbp = 0

if (r13 s> 0)
    while (true)
        int32_t* rax_2 = sub_142898ea0(rax, rbp)
        
        if (rax_2 != 0)
            bool cond:0_1 = *rax_2 == 0
            int32_t rdi_1 = -1
            int64_t arg_18 = 0
            int64_t* arg_20 = nullptr
            
            if (cond:0_1)
                void* rax_3 = sub_1428ae170(arg2[2], *(rax_2 + 0x18), *(rax_2 + 0x20))
                
                if (rax_3 != 0)
                    int64_t* rax_4 = sub_1428f7d40()
                    
                    if (rax_4 != 0 && sub_1428a2750(&arg_20, sub_142896660(rax_3)) == 1)
                        int32_t rax_7 = sub_1428f80d0(rax_4, arg_20)
                        
                        if (rax_7 == 1)
                            int32_t rcx_6
                            
                            if (rax_2[0x16] != rax_7)
                            label_1428ad377:
                                sub_1428f8150(rax_4, arg2[3])
                                int32_t rax_11
                                int512_t zmm1_1
                                int512_t zmm2_1
                                rax_11, zmm1_1, zmm2_1 = sub_1428f7da0(rax_4, *arg2, nullptr)
                                
                                if (rax_11 == 1)
                                    int32_t rcx_12
                                    rcx_12.b = sub_1428f8270(rax_4, rax_2, zmm2_1, zmm1_1) != 1
                                    rcx_6 = rcx_12 + 2
                                else
                                    rcx_6 = 4
                                
                                rax_2[0x18] = rcx_6
                                rdi_1.b = rcx_6 == 2
                            else
                                void* rcx_5 = arg2[1]
                                
                                if (rcx_5 != 0)
                                    if (sub_1428a2750(&arg_18, sub_1428a38c0(rcx_5)) == 1
                                            && sub_1428f80a0(rax_4, arg_18) == 1)
                                        goto label_1428ad377
                                else
                                    rcx_6 = rax_7 + 3
                                    rax_2[0x18] = rcx_6
                                    rdi_1.b = rcx_6 == 2
                    
                    sub_1428a25c0(arg_18)
                    sub_1428a25c0(arg_20)
                    sub_1428f7ca0(rax_4)
                    
                    if (rdi_1 s< 0)
                        return zx.q(rdi_1)
                else
                    rax_2[0x18] = 1
                    rdi_1 = 0
            else
                rax_2[0x18] = 5
                rdi_1 = 0
            
            r12 &= rdi_1
        
        rbp += 1
        
        if (rbp s>= r13)
            break
        
        rax = arg1

return zx.q(r12)
