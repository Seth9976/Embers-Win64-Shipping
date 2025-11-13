// 函数: sub_14087acb0
// 地址: 0x14087acb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14081d8c0(arg1, arg2)
sub_14081d8c0(&arg1[2], &arg2[2])
arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
sub_1407e5020(&arg1[5], &arg2[5])
sub_1407e5020(&arg1[7], &arg2[7])

if (&arg1[9] != &arg2[9])
    int64_t rdi_1 = sx.q(arg2[0x12].d)
    void* rbx_1 = &arg1[0x10]
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_2 = arg2[0x11]
    void* rdx_3 = &arg2[0x10]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_2 != 0)
        rdx_3 = rax_2
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx_3, (rdi_1 << 2).d)
    arg1[0x12].d = rdi_1.d
    sub_14087ab20(&arg1[9], &arg2[9])

sub_1407e5020(&arg1[0x13], &arg2[0x13])
arg1[0x15].b = arg2[0x15].b

if (&arg1[0x16] != &arg2[0x16])
    int32_t i_6 = arg2[0x17].d
    void* r14_1 = arg2[0x16]
    int32_t r8_4 = *(arg1 + 0xbc)
    arg1[0x17].d = i_6
    
    if (i_6 != 0 || r8_4 != 0)
        sub_140874c00(&arg1[0x16], i_6, r8_4)
        int64_t* r8_5 = arg1[0x16]
        
        if (i_6 != 0)
            int32_t* rdx_7 = r14_1 + 8
            void* rcx_8 = r8_5 + 0x1a
            int32_t i
            
            do
                rcx_8 += 0x38
                *r8_5 = *(rdx_7 - 8)
                r8_5 = &r8_5[7]
                int32_t rax_6 = *rdx_7
                rdx_7 = &rdx_7[0xe]
                *(rcx_8 - 0x4a) = rax_6
                *(rcx_8 - 0x42) = *(rdx_7 - 0x30)
                *(rcx_8 - 0x3a) = rdx_7[-0xa].w
                *(rcx_8 - 0x38) = 0xffffffff
                *(rcx_8 - 0x32) = *(rdx_7 - 0x20)
                *(rcx_8 - 0x2a) = *(rdx_7 - 0x18)
                *(rcx_8 - 0x22) = rdx_7[-4].b
                i = i_6
                i_6 -= 1
            while (i != 1)
    else
        *(arg1 + 0xbc) = 0

sub_14087a990(&arg1[0x18], &arg2[0x18])

if (&arg1[0x1a] != &arg2[0x1a])
    int64_t rdi_3 = sx.q(arg2[0x1b].d)
    int64_t r14_2 = arg2[0x1a]
    int32_t r8_6 = *(arg1 + 0xdc)
    arg1[0x1b].d = rdi_3.d
    
    if (rdi_3.d != 0 || r8_6 != 0)
        sub_1407c3650(&arg1[0x1a], rdi_3.d, r8_6)
        memcpy(arg1[0x1a], r14_2, (rdi_3 * 0xc).d)
    else
        *(arg1 + 0xdc) = 0

if (&arg1[0x1c] != &arg2[0x1c])
    int32_t i_8 = arg1[0x1d].d
    
    if (i_8 != 0)
        int64_t* rbx_4 = arg1[0x1c] + 0x10
        int32_t i_1
        
        do
            sub_140745ac0(rbx_4)
            rbx_4 = &rbx_4[4]
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
    
    int32_t i_11 = arg2[0x1d].d
    void* rbx_5 = arg2[0x1c]
    int32_t r8_9 = *(arg1 + 0xec)
    arg1[0x1d].d = i_11
    
    if (i_11 != 0 || r8_9 != 0)
        sub_14083a1f0(&arg1[0x1c], i_11, r8_9)
        int64_t* rdi_4 = arg1[0x1c]
        
        if (i_11 != 0)
            void* rbx_6 = rbx_5 + 0x10
            int32_t i_2
            
            do
                *rdi_4 = *(rbx_6 - 0x10)
                rdi_4[1].d = *(rbx_6 - 8)
                rdi_4[2] = 0
                sub_1406f3c20(&rdi_4[2], *rbx_6, *(rbx_6 + 8), 0, 0)
                rdi_4 = &rdi_4[4]
                rbx_6 += 0x20
                i_2 = i_11
                i_11 -= 1
            while (i_2 != 1)
    else
        *(arg1 + 0xec) = 0

if (&arg1[0x1e] != &arg2[0x1e])
    int64_t rdi_5 = sx.q(arg2[0x1f].d)
    int64_t r14_3 = arg2[0x1e]
    int32_t r8_11 = *(arg1 + 0xfc)
    arg1[0x1f].d = rdi_5.d
    
    if (rdi_5.d != 0 || r8_11 != 0)
        sub_1405a4be0(&arg1[0x1e], rdi_5.d, r8_11)
        memcpy(arg1[0x1e], r14_3, (rdi_5 << 4).d)
    else
        *(arg1 + 0xfc) = 0

if (&arg1[0x20] != &arg2[0x20])
    int32_t i_9 = arg1[0x21].d
    void* rbx_8 = arg1[0x20]
    
    if (i_9 != 0)
        int32_t i_3
        
        do
            sub_1408462b0(rbx_8 + 0x20)
            int64_t rcx_18 = *(rbx_8 + 0x10)
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            int64_t rcx_19 = *rbx_8
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            rbx_8 += 0x30
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
    
    sub_1408415e0(&arg1[0x20], arg2[0x20], arg2[0x21].d, *(arg1 + 0x10c), 0)

arg1[0x22].b = arg2[0x22].b

if (&arg1[0x23] != &arg2[0x23])
    int32_t i_10 = arg1[0x24].d
    
    if (i_10 != 0)
        int64_t* rbx_10 = arg1[0x23] + 0x10
        int32_t i_4
        
        do
            int64_t rcx_21 = *rbx_10
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            rbx_10 = &rbx_10[5]
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
    
    int32_t i_7 = arg2[0x24].d
    void* rdi_6 = arg2[0x23]
    int32_t r8_15 = *(arg1 + 0x124)
    arg1[0x24].d = i_7
    
    if (i_7 != 0 || r8_15 != 0)
        sub_1407751d0(&arg1[0x23], i_7, r8_15)
        int64_t* rbx_11 = arg1[0x23]
        
        if (i_7 != 0)
            void* rdi_7 = rdi_6 + 8
            int32_t i_5
            
            do
                *rbx_11 = *(rdi_7 - 8)
                rbx_11[1].d ^= (rbx_11[1].d ^ *rdi_7) & 1
                rbx_11[1].d ^= (rbx_11[1].d ^ *rdi_7) & 2
                rbx_11[2] = 0
                int64_t r14_6 = sx.q(*(rdi_7 + 0x10))
                int64_t r12_1 = *(rdi_7 + 8)
                rbx_11[3].d = r14_6.d
                
                if (r14_6.d != 0)
                    sub_1405c4a00(&rbx_11[2], r14_6.d, 0)
                    memcpy(rbx_11[2], r12_1, (r14_6 << 3).d)
                else
                    *(rbx_11 + 0x1c) = 0
                
                rbx_11[4].d = *(rdi_7 + 0x18)
                int32_t rax_21 = *(rdi_7 + 0x1c)
                rdi_7 += 0x28
                *(rbx_11 + 0x24) = rax_21
                rbx_11 = &rbx_11[5]
                i_5 = i_7
                i_7 -= 1
            while (i_5 != 1)
    else
        *(arg1 + 0x124) = 0

return arg1
