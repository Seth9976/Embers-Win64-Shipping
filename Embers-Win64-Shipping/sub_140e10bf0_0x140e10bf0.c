// 函数: sub_140e10bf0
// 地址: 0x140e10bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = *(arg1 + 0x34)
int64_t* i = *(arg1 + 0x20)
int32_t r9_1 = sbb.d(arg4, arg4, r12 != 0) & 2
int32_t r14 = r9_1 + arg2
int32_t r15 = r9_1 + arg3

if (i == 0)
    return 0

do
    int32_t rsi_1 = i[3].d
    
    if (r14 u<= rsi_1)
        int32_t rbp_1 = *(i + 0x1c)
        
        if (r15 u<= rbp_1)
            if (i != 0)
                int32_t rsi_2 = rsi_1 - r14
                
                if (rsi_2 s<= 0)
                    rsi_2 = 0
                
                int32_t rbp_2 = rbp_1 - r15
                
                if (rbp_2 s<= 0)
                    rbp_2 = 0
                
                if (rbp_2 u>= 2 || rsi_2 u>= 2)
                    int64_t* rax_5 = j_sub_140a82f30(0x28)
                    int64_t* rdi_1 = rax_5
                    int64_t* r10_1
                    
                    if (rbp_2 u> rsi_2)
                        if (rax_5 == 0)
                            rdi_1 = nullptr
                            rsi_2.b = r12 != 0
                        else
                            int32_t rdx_4 = *(i + 0x14)
                            int32_t rcx_4 = i[2].d + r14
                            rax_5[3].d = rsi_2
                            *rax_5 = 0
                            rsi_2.b = r12 != 0
                            rax_5[1] = 0
                            rax_5[4].b = rsi_2.b
                            rax_5[2].d = rcx_4
                            *(rax_5 + 0x14) = rdx_4
                            *(rax_5 + 0x1c) = r15
                        
                        int64_t* rax_7 = j_sub_140a82f30(0x28)
                        r10_1 = rax_7
                        
                        if (rax_7 == 0)
                            r10_1 = nullptr
                        else
                            int32_t rdx_5 = i[3].d
                            int32_t rcx_6 = *(i + 0x14) + r15
                            int32_t rax_8 = i[2].d
                            *r10_1 = 0
                            r10_1[1] = 0
                            r10_1[2].d = rax_8
                            *(r10_1 + 0x14) = rcx_6
                            r10_1[3].d = rdx_5
                            *(r10_1 + 0x1c) = rbp_2
                            r10_1[4].b = rsi_2.b
                    else
                        if (rax_5 == 0)
                            rdi_1 = nullptr
                            rbp_2.b = r12 != 0
                        else
                            int32_t rcx_2 = i[2].d
                            int32_t rdx_1 = *(i + 0x14) + r15
                            *(rax_5 + 0x1c) = rbp_2
                            *rax_5 = 0
                            rbp_2.b = r12 != 0
                            rax_5[1] = 0
                            rax_5[4].b = rbp_2.b
                            rax_5[2].d = rcx_2
                            *(rax_5 + 0x14) = rdx_1
                            rax_5[3].d = r14
                        
                        int64_t* rax_6 = j_sub_140a82f30(0x28)
                        r10_1 = rax_6
                        
                        if (rax_6 == 0)
                            r10_1 = nullptr
                        else
                            int32_t r9_2 = *(i + 0x1c)
                            int32_t rdx_3 = i[2].d + r14
                            int32_t r8 = *(i + 0x14)
                            *rax_6 = 0
                            rax_6[1] = 0
                            rax_6[2].d = rdx_3
                            *(rax_6 + 0x14) = r8
                            rax_6[3].d = rsi_2
                            *(rax_6 + 0x1c) = r9_2
                            rax_6[4].b = rbp_2.b
                    
                    int64_t** rcx_7 = i[1]
                    rdi_1[1] = rcx_7
                    void* rax_9 = *i
                    *rdi_1 = rax_9
                    
                    if (rcx_7 != 0)
                        *rcx_7 = rdi_1
                        rax_9 = *rdi_1
                    
                    if (rax_9 != 0)
                        *(rax_9 + 8) = rdi_1
                    
                    i[1] = 0
                    *i = 0
                    r10_1[1] = rdi_1
                    *r10_1 = *rdi_1
                    *rdi_1 = r10_1
                    void* rax_11 = *r10_1
                    
                    if (rax_11 != 0)
                        *(rax_11 + 8) = r10_1
                else
                    void* rcx = *i
                    
                    if (rcx != 0)
                        *(rcx + 8) = i[1]
                    
                    int64_t* rcx_1 = i[1]
                    
                    if (rcx_1 != 0)
                        *rcx_1 = *i
                    
                    *i = 0
                    i[1] = 0
                
                void* rax_12 = *(arg1 + 0x18)
                
                if (rax_12 != 0)
                    *(rax_12 + 8) = i
                    rax_12 = *(arg1 + 0x18)
                
                *i = rax_12
                i[1] = arg1 + 0x18
                *(arg1 + 0x18) = i
                i[3].d = r14
                *(i + 0x1c) = r15
            
            return i
    
    i = *i
while (i != 0)

return nullptr
