// 函数: sub_1425b6400
// 地址: 0x1425b6400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] ^= (arg1[1] ^ arg2[1]) & 1
char r8 = ((arg2[1] ^ arg1[1]) & 2) ^ arg1[1]
arg1[1] = r8
arg1[1] = ((arg2[1] ^ r8) & 4) ^ r8
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)

if (&arg1[0x10] != &arg2[0x10])
    int64_t rdi_1 = sx.q(*(arg2 + 0x18))
    int64_t rbp_1 = *(arg2 + 0x10)
    int32_t r8_1 = *(arg1 + 0x1c)
    *(arg1 + 0x18) = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_1405c4bc0(&arg1[0x10], rdi_1.d, r8_1)
        memcpy(*(arg1 + 0x10), rbp_1, (rdi_1 * 0x14).d)
    else
        *(arg1 + 0x1c) = 0

if (&arg1[0x20] != &arg2[0x20])
    int32_t i_9 = *(arg1 + 0x28)
    
    if (i_9 != 0)
        int64_t* rbx_2 = *(arg1 + 0x20) + 0x30
        int32_t i
        
        do
            sub_140745b20(rbx_2)
            rbx_2 = &rbx_2[8]
            i = i_9
            i_9 -= 1
        while (i != 1)
    
    int32_t i_6 = *(arg2 + 0x28)
    void* rbx_3 = *(arg2 + 0x20)
    int32_t r8_4 = *(arg1 + 0x2c)
    *(arg1 + 0x28) = i_6
    
    if (i_6 != 0 || r8_4 != 0)
        sub_1407c35c0(&arg1[0x20], i_6, r8_4)
        int64_t* r14_1 = *(arg1 + 0x20)
        
        if (i_6 != 0)
            void* rbx_4 = rbx_3 + 0x18
            int128_t* rdi_2 = &r14_1[1]
            int32_t i_1
            
            do
                *r14_1 = *(rbx_4 - 0x18)
                *rdi_2 = *(rbx_4 - 0x10)
                rdi_2[1].q = *rbx_4
                *(rdi_2 + 0x18) = *(rbx_4 + 8)
                rdi_2[2].q = *(rbx_4 + 0x10)
                *(rdi_2 + 0x28) = 0
                rdi_2[3].d = 0
                sub_1407473e0(rdi_2 + 0x28, rbx_4 + 0x18)
                r14_1 = &r14_1[8]
                rdi_2 = &rdi_2[4]
                rbx_4 += 0x40
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x2c) = 0

if (&arg1[0x30] != &arg2[0x30])
    int32_t i_10 = *(arg1 + 0x38)
    
    if (i_10 != 0)
        int64_t* rbx_6 = *(arg1 + 0x30) + 0x30
        int32_t i_2
        
        do
            sub_140745b20(rbx_6)
            rbx_6 = &rbx_6[8]
            i_2 = i_10
            i_10 -= 1
        while (i_2 != 1)
    
    int32_t i_7 = *(arg2 + 0x38)
    void* rbx_7 = *(arg2 + 0x30)
    int32_t r8_5 = *(arg1 + 0x3c)
    *(arg1 + 0x38) = i_7
    
    if (i_7 != 0 || r8_5 != 0)
        sub_1407c35c0(&arg1[0x30], i_7, r8_5)
        int64_t* r14_3 = *(arg1 + 0x30)
        
        if (i_7 != 0)
            void* rbx_8 = rbx_7 + 0x18
            int128_t* rdi_3 = &r14_3[1]
            int32_t i_3
            
            do
                *r14_3 = *(rbx_8 - 0x18)
                *rdi_3 = *(rbx_8 - 0x10)
                rdi_3[1].q = *rbx_8
                *(rdi_3 + 0x18) = *(rbx_8 + 8)
                rdi_3[2].q = *(rbx_8 + 0x10)
                *(rdi_3 + 0x28) = 0
                rdi_3[3].d = 0
                sub_1407473e0(rdi_3 + 0x28, rbx_8 + 0x18)
                r14_3 = &r14_3[8]
                rdi_3 = &rdi_3[4]
                rbx_8 += 0x40
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
    else
        *(arg1 + 0x3c) = 0

if (&arg1[0x40] != &arg2[0x40])
    int32_t i_11 = *(arg1 + 0x48)
    
    if (i_11 != 0)
        int64_t* rbx_10 = *(arg1 + 0x40) + 0x30
        int32_t i_4
        
        do
            sub_140745b20(rbx_10)
            rbx_10 = &rbx_10[8]
            i_4 = i_11
            i_11 -= 1
        while (i_4 != 1)
    
    int32_t i_8 = *(arg2 + 0x48)
    void* rbx_11 = *(arg2 + 0x40)
    int32_t r8_6 = *(arg1 + 0x4c)
    *(arg1 + 0x48) = i_8
    
    if (i_8 != 0 || r8_6 != 0)
        sub_1407c35c0(&arg1[0x40], i_8, r8_6)
        int64_t* r14_5 = *(arg1 + 0x40)
        
        if (i_8 != 0)
            void* rbx_12 = rbx_11 + 0x18
            int128_t* rdi_4 = &r14_5[1]
            int32_t i_5
            
            do
                *r14_5 = *(rbx_12 - 0x18)
                *rdi_4 = *(rbx_12 - 0x10)
                rdi_4[1].q = *rbx_12
                *(rdi_4 + 0x18) = *(rbx_12 + 8)
                rdi_4[2].q = *(rbx_12 + 0x10)
                *(rdi_4 + 0x28) = 0
                rdi_4[3].d = 0
                sub_1407473e0(rdi_4 + 0x28, rbx_12 + 0x18)
                r14_5 = &r14_5[8]
                rdi_4 = &rdi_4[4]
                rbx_12 += 0x40
                i_5 = i_8
                i_8 -= 1
            while (i_5 != 1)
    else
        *(arg1 + 0x4c) = 0

*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x78) = *(arg2 + 0x78)

if (&arg2[0x80] != &arg1[0x80])
    int64_t* rcx_12
    
    if (*(arg2 + 0x88) != 0)
        rcx_12 = *(arg2 + 0x80)
    
    if (*(arg2 + 0x88) != 0 && rcx_12 != 0)
        (*(*rcx_12 + 0x40))(rcx_12, &arg1[0x80])
    else if (*(arg1 + 0x88) != 0)
        int64_t* rcx_13 = *(arg1 + 0x80)
        
        if (rcx_13 != 0)
            (*(*rcx_13 + 0x38))(rcx_13, 0)
            int64_t rcx_14 = *(arg1 + 0x80)
            
            if (rcx_14 != 0)
                *(arg1 + 0x80) = sub_140a84c80(rcx_14, 0, 0)
            
            *(arg1 + 0x88) = 0

*(arg1 + 0x90) = *(arg2 + 0x90)
return arg1
