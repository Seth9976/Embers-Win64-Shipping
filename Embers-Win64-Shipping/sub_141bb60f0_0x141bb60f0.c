// 函数: sub_141bb60f0
// 地址: 0x141bb60f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg2
int64_t result = sx.q(arg2[1].d)
void* r12_2 = result * 0x50 + rsi

if (rsi != r12_2)
    int32_t* rsi_1 = rsi + 0x10
    
    do
        int16_t* rdx
        
        if (rsi_1[-2] == 0)
            rdx = &data_142d40450
        else
            rdx = *(rsi_1 - 0x10)
        
        void* rbx_1 = *(arg1 + 0x10)
        int64_t arg_18
        sub_140b58260(&arg_18, rdx, 0)
        void* rax = sub_141b71960(rbx_1, arg_18)
        
        if (rax != 0)
            int64_t r8_1 = *rax
            int64_t* rax_1 = (*(r8_1 + 0x140))(rax, sx.q(*(rax + 0x4c)) + arg1, r8_1)
            
            if (rax_1 != 0)
                void* rax_2 = sub_141c18780()
                void* rdx_4 = rax_1[2]
                int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                
                if (rax_3.d s<= *(rdx_4 + 0x38)
                        && *(*(rdx_4 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                    int64_t var_58
                    int64_t* rax_5 = sub_140b63b70(rsi_1, &var_58)
                    int16_t* rcx_5 = *rax_5
                    int32_t rdx_6 = rax_5[1].d
                    int32_t rdx_7 = neg.d(rdx_6)
                    *rax_5 = 0
                    int32_t r8_3 = rax_5[1].d
                    int16_t* var_68 = rcx_5
                    int32_t rcx_6 = *(rax_5 + 0xc)
                    int32_t rdx_10 = sbb.d(rdx_7, rdx_7, rdx_6 != 0) + 9 + r8_3
                    int32_t var_5c_1 = rcx_6
                    rax_5[1] = 0
                    
                    if (rdx_10 s> rcx_6)
                        sub_1405947f0(&var_68, rdx_10)
                    
                    sub_140a20ba0(&var_68, u"Delegate", 8)
                    int16_t* const rdx_11 = &data_142d40450
                    int16_t* rbp_1 = var_68
                    void* rbx_2 = rax_1[2]
                    var_68 = nullptr
                    
                    if (r8_3 != 0)
                        rdx_11 = rbp_1
                    
                    int32_t var_60_1
                    var_60_1.q = 0
                    void arg_20
                    void* rbx_3 = sub_141b718d0(rbx_2, *sub_140b58260(&arg_20, rdx_11, 1))
                    
                    if (rbp_1 != 0)
                        sub_140a74f90(rbp_1)
                    
                    int64_t rcx_12 = var_58
                    
                    if (rcx_12 != 0)
                        sub_140a74f90(rcx_12)
                    
                    if (rbx_3 != 0)
                    label_141bb62ab:
                        void* rax_10
                        
                        if (rsi_1[6] s> 0)
                            rax_10 = sub_141ba8ba0(rbx_3, rax_1, arg1, &rsi_1[4])
                        
                        if (rsi_1[6] s<= 0 || rax_10 == 0)
                            int64_t rbx_4 = sx.q(*(rbx_3 + 0x4c))
                            void* rbx_5 = rbx_4 + rax_1
                            
                            if (rbx_4 != neg.q(rax_1))
                                sub_140d3a3a0(rbx_5, arg1)
                                *(rbx_5 + 8) = *(rsi_1 + 8)
                        else
                            int64_t rcx_15 = sx.q(rax_1[0x20].d)
                            int32_t r10_1 = 0
                            int64_t r8_5 = 0
                            
                            if (rcx_15.d s> 0)
                                int64_t* rdx_15 = rax_1[0x1f]
                                
                                do
                                    int64_t rax_11
                                    int64_t arg_8
                                    
                                    if (rbx_3 == 0)
                                        arg_8 = 0
                                        rax_11 = 0
                                    else
                                        rax_11 = *(rbx_3 + 0x28)
                                        arg_8 = rax_11
                                    
                                    if (*(*rdx_15 + 0x58) == rax_11)
                                        int32_t rcx_17 = rax_1[0x20].d
                                        int32_t rax_13 = rcx_17 - r10_1
                                        
                                        if (rax_13 != 1)
                                            int64_t r9_3 = rax_1[0x1f]
                                            memmove(r9_3 + (sx.q(r10_1) << 3), 
                                                r9_3 + (sx.q(r10_1 + 1) << 3), (rax_13 - 1) << 3)
                                            rcx_17 = rax_1[0x20].d
                                        
                                        rax_1[0x20].d = rcx_17 - 1
                                        sub_1405c53d0(&rax_1[0x1f])
                                        break
                                    
                                    r10_1 += 1
                                    r8_5 += 1
                                    rdx_15 = &rdx_15[1]
                                while (r8_5 s< rcx_15)
                            
                            int64_t rbp_2 = sx.q(rax_1[0x20].d)
                            int32_t rax_18 = (rbp_2 + 1).d
                            rax_1[0x20].d = rax_18
                            
                            if (rax_18 s> *(rax_1 + 0x104))
                                sub_1405a4d70(&rax_1[0x1f])
                            
                            *(rax_1[0x1f] + (rbp_2 << 3)) = rax_10
                            
                            if (rax_1[0x1b] != 0)
                                void* rax_20 = rax_1[0x1c]
                                
                                if (rax_20 != 0 && *(rax_20 + 8) s> 0)
                                    int64_t arg_10
                                    
                                    if (rbx_3 == 0)
                                        arg_10 = 0
                                    else
                                        arg_10 = *(rbx_3 + 0x28)
                                    
                                    (*(*rax_1 + 0x2a0))(rax_1, &arg_10)
                    else
                        void* rax_9 = sub_141b718d0(rax_1[2], *rsi_1)
                        rbx_3 = rax_9
                        
                        if (rax_9 != 0)
                            goto label_141bb62ab
        
        rsi_1 = &rsi_1[0x14]
        result = &rsi_1[-4]
    while (result != r12_2)

return result
