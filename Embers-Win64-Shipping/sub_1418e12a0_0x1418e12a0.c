// 函数: sub_1418e12a0
// 地址: 0x1418e12a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = EnterCriticalSection(arg1 + 0x10)
int32_t r8 = *(arg1 + 0x40)
int32_t r8_1 = r8 - 1

if (r8 - 1 s>= 0)
    int64_t rcx_1 = *(arg1 + 0x38)
    int64_t rdx_1 = sx.q(r8_1)
    int64_t temp1_1
    
    do
        void* rbp_1 = *(rcx_1 + (rdx_1 << 3))
        
        if (*(rbp_1 + 0x5c) == 0)
            result = data_14399fa54 - *(rbp_1 + 0x58)
            
            if (result u> 0xa)
                int32_t rdx_2 = *(arg1 + 0x40)
                int32_t rax_3 = rdx_2 - r8_1 - 1
                
                if (rax_3 s>= 1)
                    rax_3 = 1
                
                if (rax_3 != 0)
                    memcpy(rcx_1 + (sx.q(r8_1) << 3), rcx_1 + (sx.q(rdx_2 - rax_3) << 3), 
                        rax_3 << 3)
                    rdx_2 = *(arg1 + 0x40)
                
                *(arg1 + 0x40) = rdx_2 - 1
                sub_1405c53d0(arg1 + 0x38)
                void* rdi_1 = *(arg1 + 8)
                void*** rdi_2
                
                if (rdi_1 == 0)
                    void*** rax_13 = j_sub_140a82f30(0x28)
                    rdi_2 = rax_13
                    
                    if (rax_13 == 0)
                        rdi_2 = nullptr
                    else
                        *rdi_2 = &data_142fefad8
                        rdi_2[1] = rbp_1
                        rdi_2[2].d = 0
                        rdi_2[3] = 0
                        rdi_2[4] = 0
                    
                    *(arg1 + 8) = rdi_2
                else
                    bool z_1
                    
                    if (0 == *(rdi_1 + 0x10))
                        *(rdi_1 + 0x10) = 0
                        z_1 = true
                    else
                        *(rdi_1 + 0x10)
                        z_1 = false
                    
                    if (z_1)
                    label_1418e13ad:
                        
                        if (*(rdi_1 + 0x20) != 0)
                            int64_t* rcx_8 = *(rdi_1 + 0x18)
                            (*(*rcx_8 + 0x20))(rcx_8, 0xffffffff, 0)
                            *(rdi_1 + 0x20) = 0
                    else
                        rdi_1 = *(arg1 + 8)
                        int64_t* rcx_4 = *(rdi_1 + 0x20)
                        
                        if (rcx_4 == 0)
                            bool z_2
                            
                            if (0 == *(rdi_1 + 0x10))
                                *(rdi_1 + 0x10) = 0
                                z_2 = true
                            else
                                *(rdi_1 + 0x10)
                                z_2 = false
                            
                            if (not(z_2))
                                sub_1418deef0(rdi_1)
                            
                            goto label_1418e13ad
                        
                        if ((*(*rcx_4 + 0x18))(rcx_4, rdi_1) == 0)
                            goto label_1418e13ad
                        
                        sub_1418deef0(rdi_1)
                        int64_t* rcx_6 = *(rdi_1 + 0x18)
                        
                        if (rcx_6 != 0)
                            (*(*rcx_6 + 0x10))(rcx_6)
                        
                        *(rdi_1 + 0x20) = 0
                    
                    *(*(arg1 + 8) + 8) = rbp_1
                    rdi_2 = *(arg1 + 8)
                
                int64_t rax_14 = data_143db7ac8
                rdi_2[2].d += 1
                void*** rcx_9 = rdi_2[3]
                rdi_2[4] = rax_14
                
                if (rax_14 == 0)
                    result = sub_140a4fc50(rcx_9)
                    rdi_2[3] = 0
                    void* rbp_2 = rdi_2[1]
                    
                    if (rbp_2 != 0)
                        sub_1418d29d0(rbp_2)
                        result = j_sub_140a74f90(rbp_2)
                    
                    rdi_2[1] = 0
                    rdi_2[2].d -= 1
                else
                    if (rcx_9 == 0)
                        rcx_9.b = 1
                        void*** rax_15 = sub_140a491d0(rcx_9.b)
                        rcx_9 = rax_15
                        rdi_2[3] = rax_15
                    
                    (*rcx_9)[3](rcx_9)
                    int64_t* rcx_10 = rdi_2[4]
                    result = (*(*rcx_10 + 0x10))(rcx_10, rdi_2)
                
                break
        
        r8_1 -= 1
        temp1_1 = rdx_1
        rdx_1 -= 1
    while (temp1_1 - 1 s>= 0)

if (arg1 == -0x10)
    return result

return LeaveCriticalSection(arg1 + 0x10) __tailcall
