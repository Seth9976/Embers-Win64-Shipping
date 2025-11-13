// 函数: sub_1426cac00
// 地址: 0x1426cac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rbx_1 = sx.q(arg2[1].d)
    int64_t rdi_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = rbx_1.d
    
    if (rbx_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(arg1, rbx_1.d, r8_1)
        memcpy(*arg1, rdi_1, (rbx_1 << 3).d)
    else
        *(arg1 + 0xc) = 0

arg1[2] = arg2[2]
sub_14081d8c0(&arg1[3], &arg2[3])
arg1[5].d = arg2[5].d
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
sub_140597df0(&arg1[8], &arg2[8])
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
sub_1407473e0(&arg1[0xc], &arg2[0xc])
sub_1405cd980(&arg1[0xe], &arg2[0xe])

if (&arg1[0x18] != &arg2[0x18])
    int64_t rdi_2 = sx.q(arg2[0x21].d)
    void* rbx_2 = &arg1[0x1f]
    sub_1405a4aa0(rbx_2, 0, rdi_2.d, 4)
    void* rax_7 = arg2[0x20]
    void* rdx_6 = &arg2[0x1f]
    void* r9_1 = *(rbx_2 + 8)
    
    if (rax_7 != 0)
        rdx_6 = rax_7
    
    if (r9_1 != 0)
        rbx_2 = r9_1
    
    memcpy(rbx_2, rdx_6, (rdi_2 << 2).d)
    arg1[0x21].d = rdi_2.d
    sub_1426caa90(&arg1[0x18], &arg2[0x18])

if (&arg1[0x22] != &arg2[0x22])
    int32_t i_5 = arg1[0x23].d
    
    if (i_5 != 0)
        int64_t* rbx_4 = arg1[0x22] + 8
        int32_t i
        
        do
            int64_t rcx_8 = *rbx_4
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rbx_4 = &rbx_4[6]
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t i_7 = arg2[0x23].d
    void* rdi_3 = arg2[0x22]
    int32_t r8_7 = *(arg1 + 0x11c)
    arg1[0x23].d = i_7
    
    if (i_7 != 0 || r8_7 != 0)
        sub_1405a4b40(&arg1[0x22], i_7, r8_7)
        int64_t* rbx_5 = arg1[0x22]
        
        if (i_7 != 0)
            void* rdi_4 = rdi_3 + 8
            int32_t i_1
            
            do
                *rbx_5 = *(rdi_4 - 8)
                rbx_5[1] = 0
                int64_t rsi_2 = sx.q(*(rdi_4 + 8))
                int64_t r13_1 = *rdi_4
                rbx_5[2].d = rsi_2.d
                
                if (rsi_2.d != 0)
                    sub_1405c4a00(&rbx_5[1], rsi_2.d, 0)
                    memcpy(rbx_5[1], r13_1, (rsi_2 << 3).d)
                else
                    *(rbx_5 + 0x14) = 0
                
                rbx_5[3].d = *(rdi_4 + 0x10)
                rbx_5[4] = *(rdi_4 + 0x18)
                int32_t rax_11 = *(rdi_4 + 0x20)
                rdi_4 += 0x30
                rbx_5[5].d ^= (rax_11 ^ rbx_5[5].d) & 1
                rbx_5 = &rbx_5[6]
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x11c) = 0

arg1[0x24].d = arg2[0x24].d
*(arg1 + 0x124) = *(arg2 + 0x124)

if (&arg1[0x25] != &arg2[0x25])
    int32_t i_6 = arg1[0x26].d
    int64_t* rbx_6 = arg1[0x25]
    
    if (i_6 != 0)
        int32_t i_2
        
        do
            int64_t rcx_12 = *rbx_6
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            rbx_6 = &rbx_6[2]
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    int32_t i_4 = arg2[0x26].d
    void* rsi_4 = arg2[0x25]
    int32_t r8_10 = *(arg1 + 0x134)
    arg1[0x26].d = i_4
    
    if (i_4 != 0 || r8_10 != 0)
        sub_1405a4be0(&arg1[0x25], i_4, r8_10)
        int64_t* rbx_7 = arg1[0x25]
        
        if (i_4 != 0)
            int32_t i_3
            
            do
                *rbx_7 = 0
                int64_t rdi_5 = sx.q(*(rsi_4 + 8))
                int64_t r12_2 = *rsi_4
                rbx_7[1].d = rdi_5.d
                
                if (rdi_5.d != 0)
                    sub_140638750(rbx_7, rdi_5.d, 0)
                    memcpy(*rbx_7, r12_2, (rdi_5 << 2).d)
                else
                    *(rbx_7 + 0xc) = 0
                
                rbx_7 = &rbx_7[2]
                rsi_4 += 0x10
                i_3 = i_4
                i_4 -= 1
            while (i_3 != 1)
    else
        *(arg1 + 0x134) = 0

arg1[0x27].d = arg2[0x27].d
*(arg1 + 0x13c) = *(arg2 + 0x13c)
*(arg1 + 0x13e) ^= (*(arg1 + 0x13e) ^ *(arg2 + 0x13e)) & 1
char rax_19 = *(arg1 + 0x13e)
char rcx_16 = ((rax_19 ^ *(arg2 + 0x13e)) & 2) ^ rax_19
*(arg1 + 0x13e) = rcx_16
*(arg1 + 0x13e) = ((*(arg2 + 0x13e) ^ rcx_16) & 4) ^ rcx_16
arg1[0x28] = arg2[0x28]
arg1[0x29].d = arg2[0x29].d
*(arg1 + 0x14c) = *(arg2 + 0x14c)
arg1[0x2a].d = arg2[0x2a].d
arg1[0x2b] = arg2[0x2b]
arg1[0x2c] = arg2[0x2c]
return arg1
