// 函数: sub_140d09710
// 地址: 0x140d09710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1[2]
void* rsi = arg2
int64_t* r14 = *arg1
int64_t* r15 = arg1[1]
int32_t rdx = *(r9 + 8)
int32_t rdx_1

if ((not.b(arg1[6].b) & 1) != 0)
    rdx_1 = rdx - *(r9 + 0x34)
else
    rdx_1 = rdx - *(r9 + 0x24)

void* rcx = *(rsi + 0x10)
int32_t arg_8 = rdx_1
int32_t rax_2 = *(rcx + 8)
int32_t result

if ((not.b(*(rsi + 0x30)) & 1) != 0)
    result = rax_2 - *(rcx + 0x34)
else
    result = rax_2 - *(rcx + 0x24)

if (rdx_1 != result)
label_140d09b6b:
    result.b = 0
else
    int64_t r12_1 = sx.q(arg1[3].d)
    int32_t rbx_1 = 0
    int32_t rdi_1 = 0
    
    if (rdx_1 != 0)
        while (true)
            void* r9_1 = arg1[2]
            char r11_1 = not.b(arg1[6].b) & 1
            
            while (true)
                bool c_1
                
                if (r11_1 != 0)
                    if (rbx_1 s>= 0 && rbx_1 s< *(r9_1 + 0x28))
                        void* rax_7 = *(r9_1 + 0x20)
                        void* r8 = r9_1 + 0x10
                        
                        if (rax_7 != 0)
                            r8 = rax_7
                        
                        int32_t rax_8 = rbx_1
                        
                        if (rbx_1 s< 0)
                            rax_8 = rbx_1 + 0x1f
                        
                        c_1 = test_bit(*(r8 + (sx.q(rax_8 s>> 5) << 2)), rbx_1 & 0x1f)
                    label_140d09821:
                        
                        if (c_1)
                            break
                else if (rbx_1 s>= 0 && rbx_1 s< *(r9_1 + 0x18))
                    void* rcx_1 = *(r9_1 + 0x10)
                    
                    if ((rcx_1.b & 1) != 0)
                        rcx_1 = (rcx_1 s>> 1) + r9_1 + 0x10
                    
                    int32_t rax_4 = rbx_1
                    
                    if (rbx_1 s< 0)
                        rax_4 = rbx_1 + 0x1f
                    
                    c_1 = test_bit(*(rcx_1 + (sx.q(rax_4 s>> 5) << 2)), rbx_1 & 0x1f)
                    goto label_140d09821
                rbx_1 += 1
            
            void** r9_2 = *(rsi + 0x10)
            char r10_1 = not.b(*(rsi + 0x30)) & 1
            
            while (true)
                bool c_2
                
                if (r10_1 != 0)
                    if (rdi_1 s>= 0 && rdi_1 s< r9_2[5].d)
                        void* rax_15 = r9_2[4]
                        void* r8_1 = &r9_2[2]
                        
                        if (rax_15 != 0)
                            r8_1 = rax_15
                        
                        int32_t rax_16 = rdi_1
                        
                        if (rdi_1 s< 0)
                            rax_16 = rdi_1 + 0x1f
                        
                        c_2 = test_bit(*(r8_1 + (sx.q(rax_16 s>> 5) << 2)), rdi_1 & 0x1f)
                    label_140d098a8:
                        
                        if (c_2)
                            break
                else if (rdi_1 s>= 0 && rdi_1 s< r9_2[3].d)
                    void* rcx_6 = r9_2[2]
                    
                    if ((rcx_6.b & 1) != 0)
                        rcx_6 = (rcx_6 s>> 1) + &r9_2[2]
                    
                    int32_t rax_12 = rdi_1
                    
                    if (rdi_1 s< 0)
                        rax_12 = rdi_1 + 0x1f
                    
                    c_2 = test_bit(*(rcx_6 + (sx.q(rax_12 s>> 5) << 2)), rdi_1 & 0x1f)
                    goto label_140d098a8
                rdi_1 += 1
            
            void** rcx_11 = arg1[2]
            int32_t rax_19 = rcx_11[1].d
            void* rbp_1
            
            if (r11_1 != 0)
                if (rax_19 != *(rcx_11 + 0x34))
                    rbp_1 = sx.q(*(arg1 + 0x2c) * rbx_1) + *rcx_11
                else
                    rbp_1 = nullptr
            else if (rax_19 != *(rcx_11 + 0x24))
                void* rdx_8 = *rcx_11
                
                if ((rdx_8.b & 1) != 0)
                    rdx_8 = (rdx_8 s>> 1) + rcx_11
                
                rbp_1 = sx.q(*(arg1 + 0x2c) * rbx_1) + rdx_8
            else
                rbp_1 = nullptr
            
            int32_t rax_24 = r9_2[1].d
            void* rsi_1
            
            if (r10_1 != 0)
                if (rax_24 != *(r9_2 + 0x34))
                    rsi_1 = sx.q(*(rsi + 0x2c) * rdi_1) + *r9_2
                else
                    rsi_1 = nullptr
            else if (rax_24 != *(r9_2 + 0x24))
                void* rdx_10 = *r9_2
                
                if ((rdx_10.b & 1) != 0)
                    rdx_10 = (rdx_10 s>> 1) + r9_2
                
                rsi_1 = sx.q(*(rsi + 0x2c) * rdi_1) + rdx_10
            else
                rsi_1 = nullptr
            
            if ((*(*r14 + 0x80))(r14, rbp_1, rsi_1, zx.q(arg3)) != 0
                    && (*(*r15 + 0x80))(r15, r12_1 + rbp_1, r12_1 + rsi_1, zx.q(arg3)).b != 0)
                rsi = arg2
                rbx_1 += 1
                rdi_1 += 1
                int32_t temp0_1 = arg_8
                arg_8 -= 1
                
                if (temp0_1 == 1)
                    break
                
                continue
            
            int32_t r15_1 = arg_8
            int32_t r14_1 = rbx_1
            int32_t rbp_4 = 0
            
            while (true)
                void** rcx_14 = arg1[2]
                int32_t rax_32 = rcx_14[1].d
                void* rsi_4
                
                if ((not.b(arg1[6].b) & 1) != 0)
                    if (rax_32 != *(rcx_14 + 0x34))
                        rsi_4 = sx.q(*(arg1 + 0x2c) * rbx_1) + *rcx_14
                    else
                        rsi_4 = nullptr
                else if (rax_32 != *(rcx_14 + 0x24))
                    void* rdx_14 = *rcx_14
                    
                    if ((rdx_14.b & 1) != 0)
                        rdx_14 = (rdx_14 s>> 1) + rcx_14
                    
                    rsi_4 = sx.q(*(arg1 + 0x2c) * rbx_1) + rdx_14
                else
                    rsi_4 = nullptr
                
                if (sub_140cf1d30(arg1, r14_1, rbp_4, rsi_4, arg3).b == 0
                        && sub_140d0b740(arg1, rbx_1, arg2, rdi_1, r15_1, rsi_4, arg3).b == 0)
                    goto label_140d09b6b
                
                rbp_4 += 1
                int32_t temp1_1 = r15_1
                r15_1 -= 1
                
                if (temp1_1 == 1)
                    break
                
                void* r9_7 = arg1[2]
                
                while (true)
                    bool c_3
                    
                    if ((not.b(arg1[6].b) & 1) != 0)
                        if (rbx_1 s>= 0 && rbx_1 s< *(r9_7 + 0x28))
                            void* rax_43 = *(r9_7 + 0x20)
                            void* r8_6 = r9_7 + 0x10
                            
                            if (rax_43 != 0)
                                r8_6 = rax_43
                            
                            int32_t rax_44 = rbx_1
                            
                            if (rbx_1 s< 0)
                                rax_44 = rbx_1 + 0x1f
                            
                            c_3 = test_bit(*(r8_6 + (sx.q(rax_44 s>> 5) << 2)), rbx_1 & 0x1f)
                        label_140d09ad8:
                            
                            if (c_3)
                                break
                    else if (rbx_1 s>= 0 && rbx_1 s< *(r9_7 + 0x18))
                        void* rcx_17 = *(r9_7 + 0x10)
                        
                        if ((rcx_17.b & 1) != 0)
                            rcx_17 = (rcx_17 s>> 1) + r9_7 + 0x10
                        
                        int32_t rax_40 = rbx_1
                        
                        if (rbx_1 s< 0)
                            rax_40 = rbx_1 + 0x1f
                        
                        c_3 = test_bit(*(rcx_17 + (sx.q(rax_40 s>> 5) << 2)), rbx_1 & 0x1f)
                        goto label_140d09ad8
                    rbx_1 += 1
                
                void* r9_8 = *(arg2 + 0x10)
                
                while (true)
                    bool c_4
                    
                    if ((not.b(*(arg2 + 0x30)) & 1) != 0)
                        if (rdi_1 s>= 0 && rdi_1 s< *(r9_8 + 0x28))
                            void* rax_51 = *(r9_8 + 0x20)
                            void* r8_7 = r9_8 + 0x10
                            
                            if (rax_51 != 0)
                                r8_7 = rax_51
                            
                            int32_t rax_52 = rdi_1
                            
                            if (rdi_1 s< 0)
                                rax_52 = rdi_1 + 0x1f
                            
                            c_4 = test_bit(*(r8_7 + (sx.q(rax_52 s>> 5) << 2)), rdi_1 & 0x1f)
                        label_140d09b61:
                            
                            if (c_4)
                                break
                    else if (rdi_1 s>= 0 && rdi_1 s< *(r9_8 + 0x18))
                        void* rcx_22 = *(r9_8 + 0x10)
                        
                        if ((rcx_22.b & 1) != 0)
                            rcx_22 = (rcx_22 s>> 1) + r9_8 + 0x10
                        
                        int32_t rax_48 = rdi_1
                        
                        if (rdi_1 s< 0)
                            rax_48 = rdi_1 + 0x1f
                        
                        c_4 = test_bit(*(rcx_22 + (sx.q(rax_48 s>> 5) << 2)), rdi_1 & 0x1f)
                        goto label_140d09b61
                    rdi_1 += 1
            
            break
    
    result.b = 1

return result
