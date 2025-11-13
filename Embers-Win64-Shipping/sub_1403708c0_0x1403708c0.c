// 函数: sub_1403708c0
// 地址: 0x1403708c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1 = arg1[3].d - 5
uint32_t r12 = 0xffff

if (rax_1 u< 0xffff)
    r12 = rax_1

int32_t rdi_3

while (true)
    int32_t r8_1 = *(arg1 + 0x9c)
    
    if (r8_1 u> 1)
    label_140370931:
        uint64_t rdx_2 = zx.q(*(arg1 + 0x84))
        int32_t rax_4 = rdx_2.d + r12
        int32_t r8_2 = r8_1 + *(arg1 + 0x94)
        bool cond:1_1 = r8_1 == neg.d(*(arg1 + 0x94))
        *(arg1 + 0x94) = r8_2
        *(arg1 + 0x9c) = 0
        
        if (not(cond:1_1) && r8_2 u< rax_4)
            goto label_1403709fa
        
        *(arg1 + 0x9c) = r8_2 - rax_4
        *(arg1 + 0x94) = rax_4
        char* rdx
        
        if (rdx_2.d s< 0)
            rdx = nullptr
        else
            rdx = rdx_2 + arg1[0xa]
        
        sub_140375130(arg1, rdx, r12, 0)
        *(arg1 + 0x84) = *(arg1 + 0x94)
        void* rbx_1 = *arg1
        void* rdi_1 = *(rbx_1 + 0x28)
        sub_140374f60(rdi_1)
        int32_t rbp_1 = *(rdi_1 + 0x28)
        int32_t rax_6 = *(rbx_1 + 0x18)
        
        if (rbp_1 u> rax_6)
            rbp_1 = rax_6
        
        if (rbp_1 != 0)
            uint64_t r13_1 = zx.q(rbp_1)
            memcpy(*(rbx_1 + 0x10), *(rdi_1 + 0x20), r13_1.d)
            *(rbx_1 + 0x10) += r13_1
            *(rdi_1 + 0x20) += r13_1
            *(rbx_1 + 0x1c) += rbp_1
            *(rbx_1 + 0x18) -= rbp_1
            int32_t temp2_1 = *(rdi_1 + 0x28)
            *(rdi_1 + 0x28) -= rbp_1
            
            if (temp2_1 == rbp_1)
                *(rdi_1 + 0x20) = *(rdi_1 + 0x10)
        
        if (*(*arg1 + 0x18) != 0)
            rdx_2 = zx.q(*(arg1 + 0x84))
            r8_2 = *(arg1 + 0x94)
        label_1403709fa:
            uint32_t r8_6 = r8_2 - rdx_2.d
            
            if (r8_6 u< *(arg1 + 0x44) - 0x106)
                continue
            else
                char* rdx_4
                
                if (rdx_2.d s< 0)
                    rdx_4 = nullptr
                else
                    rdx_4 = zx.q(rdx_2.d) + arg1[0xa]
                
                sub_140375130(arg1, rdx_4, r8_6, 0)
                *(arg1 + 0x84) = *(arg1 + 0x94)
                void* rbx_2 = *arg1
                void* rdi_2 = *(rbx_2 + 0x28)
                sub_140374f60(rdi_2)
                int32_t rbp_2 = *(rdi_2 + 0x28)
                int32_t rax_12 = *(rbx_2 + 0x18)
                
                if (rbp_2 u> rax_12)
                    rbp_2 = rax_12
                
                if (rbp_2 != 0)
                    uint64_t r13_2 = zx.q(rbp_2)
                    memcpy(*(rbx_2 + 0x10), *(rdi_2 + 0x20), r13_2.d)
                    *(rbx_2 + 0x10) += r13_2
                    *(rdi_2 + 0x20) += r13_2
                    *(rbx_2 + 0x1c) += rbp_2
                    *(rbx_2 + 0x18) -= rbp_2
                    int32_t temp3_1 = *(rdi_2 + 0x28)
                    *(rdi_2 + 0x28) -= rbp_2
                    
                    if (temp3_1 == rbp_2)
                        *(rdi_2 + 0x20) = *(rdi_2 + 0x10)
                
                if (*(*arg1 + 0x18) != 0)
                    continue
    else
        sub_14036f140(arg1)
        r8_1 = *(arg1 + 0x9c)
        
        if ((r8_1 | arg2) != 0)
            if (r8_1 != 0)
                goto label_140370931
            
            *(arg1 + 0x170c) = 0
            uint64_t rdx_6 = zx.q(*(arg1 + 0x84))
            int32_t r8_8 = *(arg1 + 0x94)
            
            if (arg2 != 4)
                if (r8_8 s> rdx_6.d)
                    char* rax_17
                    
                    if (rdx_6.d s< 0)
                        rax_17 = nullptr
                    else
                        rax_17 = arg1[0xa] + rdx_6
                    
                    rdi_3 = 0
                    sub_140375130(arg1, rax_17, r8_8 - rdx_6.d, 0)
                    *(arg1 + 0x84) = *(arg1 + 0x94)
                    void* rbp_4 = *arg1
                    void* r15_1 = *(rbp_4 + 0x28)
                    sub_140374f60(r15_1)
                    int32_t rbx_4 = *(r15_1 + 0x28)
                    int32_t rax_23 = *(rbp_4 + 0x18)
                    
                    if (rbx_4 u> rax_23)
                        rbx_4 = rax_23
                    
                    if (rbx_4 != 0)
                        uint64_t r14_2 = zx.q(rbx_4)
                        memcpy(*(rbp_4 + 0x10), *(r15_1 + 0x20), r14_2.d)
                        *(rbp_4 + 0x10) += r14_2
                        *(r15_1 + 0x20) += r14_2
                        *(rbp_4 + 0x1c) += rbx_4
                        *(rbp_4 + 0x18) -= rbx_4
                        int32_t temp6_1 = *(r15_1 + 0x28)
                        *(r15_1 + 0x28) -= rbx_4
                        
                        if (temp6_1 == rbx_4)
                            *(r15_1 + 0x20) = *(r15_1 + 0x10)
                
                if (r8_8 s<= rdx_6.d || *(*arg1 + 0x18) != 0)
                    rdi_3 = 1
            else
                char* rdx_7
                
                if (rdx_6.d s< 0)
                    rdx_7 = nullptr
                else
                    rdx_7 = rdx_6 + arg1[0xa]
                
                sub_140375130(arg1, rdx_7, r8_8 - rdx_6.d, 1)
                *(arg1 + 0x84) = *(arg1 + 0x94)
                void* rbp_3 = *arg1
                void* rdi_4 = *(rbp_3 + 0x28)
                sub_140374f60(rdi_4)
                int32_t rbx_3 = *(rdi_4 + 0x28)
                int32_t rax_19 = *(rbp_3 + 0x18)
                
                if (rbx_3 u> rax_19)
                    rbx_3 = rax_19
                
                if (rbx_3 != 0)
                    uint64_t r14_1 = zx.q(rbx_3)
                    memcpy(*(rbp_3 + 0x10), *(rdi_4 + 0x20), r14_1.d)
                    *(rbp_3 + 0x10) += r14_1
                    *(rdi_4 + 0x20) += r14_1
                    *(rbp_3 + 0x1c) += rbx_3
                    *(rbp_3 + 0x18) -= rbx_3
                    int32_t temp5_1 = *(rdi_4 + 0x28)
                    *(rdi_4 + 0x28) -= rbx_3
                    
                    if (temp5_1 == rbx_3)
                        *(rdi_4 + 0x20) = *(rdi_4 + 0x10)
                
                rdi_3 = sbb.d(3, 0, *(*arg1 + 0x18) u< 1)
            
            break
    
    rdi_3 = 0
    break

return zx.q(rdi_3)
