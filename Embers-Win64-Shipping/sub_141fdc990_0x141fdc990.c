// 函数: sub_141fdc990
// 地址: 0x141fdc990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg3 + 0x28) = *(arg2 + 0x28)
*(arg3 + 0x30) ^= (*(arg3 + 0x30) ^ *(arg2 + 0x30)) & 1
char rcx = ((*(arg3 + 0x30) ^ *(arg2 + 0x30)) & 2) ^ *(arg3 + 0x30)
*(arg3 + 0x30) = rcx
char rax_2 = ((rcx ^ *(arg2 + 0x30)) & 4) ^ rcx
*(arg3 + 0x30) = rax_2
char rcx_1 = ((rax_2 ^ *(arg2 + 0x30)) & 8) ^ rax_2
*(arg3 + 0x30) = rcx_1
char rdx = ((rcx_1 ^ *(arg2 + 0x30)) & 0x10) ^ rcx_1
*(arg3 + 0x30) = rdx
*(arg3 + 0x31) = *(arg2 + 0x31)
*(arg3 + 0x30) = ((rdx ^ *(arg2 + 0x30)) & 0x20) ^ rdx

if (arg3 + 0x88 != arg2 + 0x88)
    int64_t rdi_1 = sx.q(*(arg2 + 0xd0))
    void* rbx_1 = arg3 + 0xc0
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rcx_3 = *(rbx_1 + 8)
    void* rdx_1 = arg2 + 0xc0
    void* rax_5 = *(rdx_1 + 8)
    
    if (rax_5 != 0)
        rdx_1 = rax_5
    
    if (rcx_3 != 0)
        rbx_1 = rcx_3
    
    memcpy(rbx_1, rdx_1, (rdi_1 << 2).d)
    *(arg3 + 0xd0) = rdi_1.d
    int64_t rbp_1 = sx.q(*(arg2 + 0x90))
    *(arg3 + 0x90) = 0
    
    if (*(arg3 + 0x94) != rbp_1.d)
        sub_1405a5410(arg3 + 0x88, rbp_1.d)
    
    void* rbx_2 = arg3 + 0x98
    *(arg3 + 0xb8) = 0xffffffff
    *(arg3 + 0xbc) = 0
    sub_14059a8e0(rbx_2, rbp_1.d)
    int32_t rax_6 = *(arg3 + 0x90) + rbp_1.d
    *(arg3 + 0x90) = rax_6
    
    if (rax_6 s> *(arg3 + 0x94))
        sub_1405a4f90(arg3 + 0x88)
    
    void* rdi_2 = arg2 + 0x98
    *(arg3 + 0xb8) = *(arg2 + 0xb8)
    *(arg3 + 0xbc) = *(arg2 + 0xbc)
    
    if (rbx_2 != rdi_2)
        sub_14059a8e0(rbx_2, *(rdi_2 + 0x18))
        int32_t rax_9 = *(rdi_2 + 0x18)
        *(rbx_2 + 0x18) = rax_9
        
        if (rax_9 != 0)
            void* rcx_9 = *(rdi_2 + 0x10)
            void* r9_1 = *(rbx_2 + 0x10)
            
            if (rcx_9 != 0)
                rdi_2 = rcx_9
            
            if (r9_1 != 0)
                rbx_2 = r9_1
            
            memcpy(rbx_2, rdi_2, (zx.q(rax_9 + 0x1f) u>> 5 << 2).d)
    
    memcpy(*(arg3 + 0x88), *(arg2 + 0x88), (rbp_1 << 4).d)

*(arg3 + 0xd8) = *(arg2 + 0xd8)
*(arg3 + 0xe8) = *(arg2 + 0xe8)
*(arg3 + 0xf8) = *(arg2 + 0xf8)
*(arg3 + 0xfc) = *(arg2 + 0xfc)
*(arg3 + 0x100) = *(arg2 + 0x100)
*(arg3 + 0x104) = *(arg2 + 0x104)
*(arg3 + 0x108) = *(arg2 + 0x108)
*(arg3 + 0x120) = *(arg2 + 0x120)

if (arg3 + 0x128 != arg2 + 0x128)
    int32_t i_3 = *(arg3 + 0x130)
    
    if (i_3 != 0)
        int64_t* rbx_4 = *(arg3 + 0x128) + 0x98
        int32_t i
        
        do
            int64_t rcx_12 = *rbx_4
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            rbx_4[-0xe] = &data_142d6a040
            int64_t rcx_13 = rbx_4[-3]
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            sub_1405ae180(&rbx_4[-0xd])
            rbx_4 = &rbx_4[0x16]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = *(arg2 + 0x130)
    void* rbx_5 = *(arg2 + 0x128)
    int32_t r8_8 = *(arg3 + 0x134)
    *(arg3 + 0x130) = i_2
    
    if (i_2 != 0 || r8_8 != 0)
        sub_140a05d20(arg3 + 0x128, i_2, r8_8)
        char* rdi_3 = *(arg3 + 0x128)
        
        if (i_2 != 0)
            void* rbx_6 = rbx_5 + 8
            int32_t i_1
            
            do
                *rdi_3 = *(rbx_6 - 8)
                *(rdi_3 + 8) = *rbx_6
                *(rdi_3 + 0x10) = *(rbx_6 + 8)
                *(rdi_3 + 0x14) = *(rbx_6 + 0xc)
                *(rdi_3 + 0x18) = *(rbx_6 + 0x10)
                *(rdi_3 + 0x1c) = *(rbx_6 + 0x14)
                *(rdi_3 + 0x20) = *(rbx_6 + 0x18)
                sub_141adec50(&rdi_3[0x28], rbx_6 + 0x20)
                int64_t rax_23 = *(rbx_6 + 0xa0)
                rbx_6 += 0xb0
                *(rdi_3 + 0xa8) = rax_23
                rdi_3 = &rdi_3[0xb0]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg3 + 0x134) = i_2

*(arg3 + 0x138) = *(arg2 + 0x138)
sub_141c51740(arg3 + 0x140, arg2 + 0x140)
return sub_141c51740(arg3 + 0x150, arg2 + 0x150) __tailcall
