// 函数: sub_141e25530
// 地址: 0x141e25530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x160))
int64_t i

if (rdi.d s<= 1)
    i.b = 1
else
    void* r13_1 = *(arg1 + 0x38)
    
    if (r13_1 == 0)
        i.b = 1
    else
        int64_t arg_10
        
        if (rdi.d s<= 0)
            arg_10 = data_143f398d8
        else
            sub_141e43300(r13_1, &arg_10, *(arg1 + 0x158))
        
        int64_t* rbx_1 = *(arg1 + 0x158)
        int64_t var_40_1 = 1
        int64_t* var_48 = nullptr
        int64_t rbp_1 = 1
        sub_1405a4d70(&var_48)
        int64_t* rsi_1 = var_48
        *rsi_1 = *rbx_1
        
        if (rdi s<= 1)
        label_141e25664:
            
            if (rsi_1 == 0)
                i.b = 1
            else
                sub_140a74f90(rsi_1)
                i.b = 1
        else
            int32_t rbx_2 = var_40_1.d
            int64_t* r14_1 = 0x18
            
            while (true)
                int64_t* rcx_2 = rsi_1
                i = *(r14_1 + *(arg1 + 0x158))
                void* r8_2 = &rsi_1[sx.q(rbx_2)]
                int64_t i_1 = i
                
                if (rsi_1 == r8_2)
                label_141e25602:
                    int64_t rdi_1 = sx.q(rbx_2)
                    rbx_2 = (rdi_1 + 1).d
                    var_40_1.d = rbx_2
                    
                    if (rbx_2 s> var_40_1:4.d)
                        sub_1405a4d70(&var_48)
                        i = i_1
                        rbx_2 = var_40_1.d
                        rsi_1 = var_48
                    
                    rsi_1[rdi_1] = i
                    int64_t arg_18
                    sub_141e43300(r13_1, &arg_18, &i_1)
                    
                    if (arg_18 == arg_10)
                        rbp_1 += 1
                        r14_1 = &r14_1[3]
                        
                        if (rbp_1 s>= rdi)
                            goto label_141e25664
                        
                        continue
                else
                    while (*rcx_2 != i)
                        rcx_2 = &rcx_2[1]
                        
                        if (rcx_2 == r8_2)
                            goto label_141e25602
                
                if (rsi_1 != 0)
                    sub_140a74f90(rsi_1)
                
                i.b = 0
                break

return i
