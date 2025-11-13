// 函数: sub_14188c5a0
// 地址: 0x14188c5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* const* rsi = arg2[1]

if (rsi != 0)
    int64_t r15
    int64_t var_28_1 = r15
    int64_t* i
    
    do
        i = rsi[5]
        
        if (i != 0)
            int64_t* j
            
            do
                int32_t r14_1 = i[2].d
                int32_t r11_1 = *(i + 0x14)
                int32_t rbp_1 = i[3].d
                int32_t r9_1 = *(i + 0x1c)
                uint64_t r13_1 = zx.q(rsi[4].d)
                uint64_t r12_1 = zx.q(i[4].d)
                int64_t* arg_10 = i
                int32_t rcx
                int32_t rdx
                int32_t rdi_1
                uint32_t r8_1
                
                if ((r14_1 | r11_1 | rbp_1 | r9_1) == 0)
                    rdx = rsi[2].d
                    rcx = *(rsi + 0x14)
                    r8_1 = rsi[3].d
                    rdi_1 = *(rsi + 0x1c)
                
                if ((r14_1 | r11_1 | rbp_1 | r9_1) != 0 || (rdx | rcx | r8_1 | rdi_1) != 0)
                    rcx = *(rsi + 0x14)
                    r15.b = 0
                    r8_1 = rsi[3].d
                    rdi_1 = *(rsi + 0x1c)
                    rdx = rsi[2].d
                else
                    r15.b = 1
                
                if (rdx != 1 || rcx != 0 || r8_1 != 0 || rdi_1 u> 0xff || r14_1 != rdx || r11_1 != 0
                        || rbp_1 != 0 || r9_1 u> 0xff || *(rsi + 0x1c) != r9_1.b)
                    r8_1.b = 0
                else
                    r8_1 = zx.d(rdx.b)
                
                j = i[5]
                uint64_t r9_2 = zx.q(*(rsi + 0x24)) + r13_1
                uint64_t rax_10
                rax_10.b = 0
                void* rax_12
                void* rax_13
                
                if (r15.b != 0)
                    int64_t rcx_7 = i[1] + rsi[1]
                    
                    if (rcx_7 u< 0xffffffff)
                        *(rsi + 0x24) = rcx_7.d
                        int64_t var_50_1 = rcx_7
                        *rsi = (*rsi).o
                        rax_12 = arg2[1]
                        
                        if (arg2[3].d != 1)
                            if (i == rax_12)
                            label_14188c87f:
                                void* rax_23 = *(rax_12 + 0x28)
                                arg2[1] = rax_23
                                *(rax_23 + 0x30) = 0
                                goto label_14188c8cc
                            
                            rax_13 = arg2[2]
                            
                            if (i != rax_13)
                                *(i[5] + 0x30) = i[6]
                                *(i[6] + 0x28) = i[5]
                                goto label_14188c8cc
                            
                        label_14188c89a:
                            void* rax_24 = *(rax_13 + 0x30)
                            arg2[2] = rax_24
                            *(rax_24 + 0x28) = 0
                            goto label_14188c8cc
                        
                        if (rax_12 != 0)
                            int64_t k
                            
                            do
                                void* rcx_8 = arg2[1]
                                k = *(rcx_8 + 0x28)
                                j_sub_140a74f90(rcx_8)
                                arg2[1] = k
                            while (k != 0)
                        
                        arg2[2] = 0
                        arg2[1] = 0
                        (*(*arg2 + 8))(arg2, 0)
                        rax_10.b = 1
                else if (r8_1.b != 0)
                    int64_t rcx_10 = i[1] + rsi[1]
                    
                    if (rcx_10 u< 0x100000)
                        *(rsi + 0x24) = rcx_10.d
                        rsi[4].d = 0
                        int64_t var_40_1 = rcx_10
                        *rsi = (*rsi).o
                        void* rax_17 = arg2[1]
                        
                        if (arg2[3].d != 1)
                            if (i != rax_17)
                                void* rax_19 = arg2[2]
                                
                                if (i != rax_19)
                                label_14188c8b4:
                                    *(i[5] + 0x30) = i[6]
                                    *(i[6] + 0x28) = i[5]
                                    goto label_14188c8cc
                                
                                void* rax_20 = *(rax_19 + 0x30)
                                arg2[2] = rax_20
                                *(rax_20 + 0x28) = 0
                                goto label_14188c8cc
                            
                            void* rax_18 = *(rax_17 + 0x28)
                            arg2[1] = rax_18
                            *(rax_18 + 0x30) = 0
                        label_14188c8cc:
                            j_sub_140a74f90(i)
                            (*(*arg2 + 8))(arg2, zx.q(arg2[3].d - 1))
                            rax_10.b = 1
                        else
                            if (rax_17 != 0)
                                int64_t k_1
                                
                                do
                                    void* rcx_11 = arg2[1]
                                    k_1 = *(rcx_11 + 0x28)
                                    j_sub_140a74f90(rcx_11)
                                    arg2[1] = k_1
                                while (k_1 != 0)
                            
                            arg2[2] = 0
                            arg2[1] = 0
                            (*(*arg2 + 8))(arg2, 0)
                            rax_10.b = 1
                else if (((rsi[3].d ^ rbp_1) | (*(rsi + 0x1c) ^ r9_1) | (r11_1 ^ *(rsi + 0x14))
                        | (rdx ^ r14_1)) == 0 && r9_2 == r12_1)
                    uint64_t rdx_8 = zx.q(*(i + 0x24)) + r12_1
                    
                    if (r12_1 u<= r13_1)
                        r13_1 = r12_1
                    
                    rsi[4].d = r13_1.d
                    
                    if (rdx_8 - 1 u>= r9_2 - 1)
                        r9_2 = rdx_8
                    
                    *(rsi + 0x24) = r9_2.d - r13_1.d
                    void* const rcx_13 = *rsi
                    void* const r9_4 = *i
                    void* r8_3 = i[1] + r9_4
                    void* rdx_10 = rsi[1] + rcx_13
                    
                    if (rcx_13 u<= r9_4)
                        r9_4 = rcx_13
                    
                    if (rdx_10 - 1 u>= r8_3 - 1)
                        r8_3 = rdx_10
                    
                    void* var_30_1 = r8_3 - r9_4
                    *rsi = r9_4.o
                    
                    if (arg2[3].d != 1)
                        rax_12 = arg2[1]
                        
                        if (i == rax_12)
                            goto label_14188c87f
                        
                        rax_13 = arg2[2]
                        
                        if (i != rax_13)
                            goto label_14188c8b4
                        
                        goto label_14188c89a
                    
                    sub_14187f830(arg2, rdx_10)
                    rax_10.b = 1
                i = j
                result = arg_10
                
                if (rax_10.b != 0)
                    result = rsi
                
                rsi = result
            while (j != 0)
        
        rsi = i
    while (i != 0)

return result
