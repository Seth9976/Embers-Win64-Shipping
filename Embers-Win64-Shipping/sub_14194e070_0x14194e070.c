// 函数: sub_14194e070
// 地址: 0x14194e070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) s<= 0)
    return 

int64_t* r14_1 = arg1 + 8

do
    int64_t* rdi_1 = **r14_1
    
    if (arg3 != 0)
        *(rdi_1 + 0x14) = 0
    
    if (rdi_1[2].d == *(arg1 + 0x18))
        break
    
    int32_t rax = rdi_1[1].d
    int32_t rbx_1 = 0
    bool cond:1_1 = rax != 0
    
    if (rax s> 0)
        int64_t rsi_1 = 0
        
        do
            int64_t* rcx = *rdi_1
            void* rbp_1 = *(rcx + rsi_1)
            
            if (0 == *(rbp_1 + 0x34))
                *(rbp_1 + 0x34) = 0
            else
                *(rbp_1 + 0x34)
            
            int32_t rax_3 = 0
            
            if (0 == *(rbp_1 + 0x34))
                *(rbp_1 + 0x34) = 0
            else
                rax_3 = *(rbp_1 + 0x34)
            
            int32_t rax_4
            int32_t rax_5
            
            if (*(rcx + rsi_1 + 8) s>= rax_3)
                sub_14193d6f0(arg2, rbp_1, 0)
                rax_4 = 0
                
                if (0 == *(rbp_1 + 0x38))
                    *(rbp_1 + 0x38) = 0
                else
                    rax_4 = *(rbp_1 + 0x38)
                
                rax_5 = 0
                
                if (0 == *(rbp_1 + 0x34))
                    *(rbp_1 + 0x34) = 0
                else
                    rax_5 = *(rbp_1 + 0x34)
            
            if (*(rcx + rsi_1 + 8) s< rax_3 || rax_4 == rax_5)
                int32_t rdx_5 = rdi_1[1].d
                int32_t rcx_5 = rdx_5 - rbx_1 - 1
                
                if (rcx_5 s>= 1)
                    rcx_5 = 1
                
                if (rcx_5 != 0)
                    memcpy((sx.q(rbx_1) << 4) + *rdi_1, (sx.q(rdx_5 - rcx_5) << 4) + *rdi_1, 
                        rcx_5 << 4)
                    rdx_5 = rdi_1[1].d
                
                rbx_1 -= 1
                rsi_1 -= 0x10
                rdi_1[1].d = rdx_5 - 1
            
            rax = rdi_1[1].d
            rbx_1 += 1
            rsi_1 += 0x10
        while (rbx_1 s< rax)
        
        r14_1 = arg1 + 8
        cond:1_1 = rax != 0
    
    if (cond:1_1)
        break
    
    int64_t rcx_9 = *rdi_1
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    j_sub_140a74f90(rdi_1)
    int32_t rax_7 = r14_1[1].d
    
    if (rax_7 != 1)
        int64_t rcx_11 = *r14_1
        memmove(rcx_11, rcx_11 + 8, (rax_7 - 1) << 3)
        rax_7 = r14_1[1].d
    
    r14_1[1].d = rax_7 - 1
    sub_1405c53d0(r14_1)
while (*(arg1 + 0x10) s> 0)
