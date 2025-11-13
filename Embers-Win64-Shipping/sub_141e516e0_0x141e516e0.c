// 函数: sub_141e516e0
// 地址: 0x141e516e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].d = arg2[2].d
arg1[3] = arg2[3]
sub_140597df0(&arg1[4], &arg2[4])
arg1[6] = arg2[6]
arg1[7].b = arg2[7].b
*(arg1 + 0x39) = *(arg2 + 0x39)

if (&arg1[8] != &arg2[8])
    int32_t i_7 = arg1[9].d
    int64_t* rbx_1 = arg1[8]
    
    if (i_7 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[2]
            i = i_7
            i_7 -= 1
        while (i != 1)
    
    int32_t i_5 = arg2[9].d
    int64_t* rbx_2 = arg2[8]
    int32_t r8_1 = *(arg1 + 0x4c)
    arg1[9].d = i_5
    
    if (i_5 != 0 || r8_1 != 0)
        sub_1405a4be0(&arg1[8], i_5, r8_1)
        int64_t* rdi_1 = arg1[8]
        
        if (i_5 != 0)
            int32_t i_1
            
            do
                sub_140596d10(rdi_1, rbx_2)
                rdi_1 = &rdi_1[2]
                rbx_2 = &rbx_2[2]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x4c) = i_5

if (&arg1[0xa] != &arg2[0xa])
    int32_t i_8 = arg1[0xb].d
    
    if (i_8 != 0)
        int64_t* rbx_4 = arg1[0xa] + 8
        int32_t i_2
        
        do
            int64_t rcx_4 = *rbx_4
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_4 = &rbx_4[3]
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
    
    int32_t i_6 = arg2[0xb].d
    int64_t* rbx_5 = arg2[0xa]
    int32_t r8_2 = *(arg1 + 0x5c)
    arg1[0xb].d = i_6
    
    if (i_6 != 0 || r8_2 != 0)
        sub_140808f70(&arg1[0xa], i_6, r8_2)
        void* rdi_2 = arg1[0xa]
        
        if (i_6 != 0)
            int32_t i_3
            
            do
                *rdi_2 = *rbx_5
                sub_140596d10(rdi_2 + 8, &rbx_5[1])
                rdi_2 += 0x18
                rbx_5 = &rbx_5[3]
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
    else
        *(arg1 + 0x5c) = i_6

arg1[0xc] = arg2[0xc]
arg1[0xd].d = arg2[0xd].d

if (&arg1[0xe] != &arg2[0xe])
    int32_t i_9 = arg1[0xf].d
    int64_t* rbx_6 = arg1[0xe]
    
    if (i_9 != 0)
        int32_t i_4
        
        do
            int64_t rcx_7 = *rbx_6
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rbx_6 = &rbx_6[2]
            i_4 = i_9
            i_9 -= 1
        while (i_4 != 1)
    
    sub_1405967a0(&arg1[0xe], arg2[0xe], arg2[0xf].d, *(arg1 + 0x7c), 0)

arg1[0x10].b = arg2[0x10].b
*(arg1 + 0x84) = *(arg2 + 0x84)
return arg1
