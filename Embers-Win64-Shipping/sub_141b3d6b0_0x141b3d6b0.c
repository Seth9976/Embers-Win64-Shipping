// 函数: sub_141b3d6b0
// 地址: 0x141b3d6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)

if (arg1 + 0x20 != arg2 + 0x20)
    int32_t i_14 = *(arg1 + 0x28)
    
    if (i_14 != 0)
        void*** rbx_2 = *(arg1 + 0x20) + 8
        int32_t i
        
        do
            sub_1405aec80(rbx_2)
            rbx_2 = &rbx_2[0x15]
            i = i_14
            i_14 -= 1
        while (i != 1)
    
    int32_t i_8 = *(arg2 + 0x28)
    int64_t* rbx_3 = *(arg2 + 0x20)
    int32_t r8_1 = *(arg1 + 0x2c)
    *(arg1 + 0x28) = i_8
    
    if (i_8 != 0 || r8_1 != 0)
        sub_140976950(arg1 + 0x20, i_8, r8_1)
        void* rdi_1 = *(arg1 + 0x20)
        
        if (i_8 != 0)
            int32_t i_1
            
            do
                *rdi_1 = *rbx_3
                sub_1407431a0(rdi_1 + 8, &rbx_3[1])
                rdi_1 += 0xa8
                rbx_3 = &rbx_3[0x15]
                i_1 = i_8
                i_8 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x2c) = 0

sub_141b3cbe0(arg1 + 0x30, arg2 + 0x30)

if (arg1 + 0x40 != arg2 + 0x40)
    int32_t i_15 = *(arg1 + 0x48)
    
    if (i_15 != 0)
        void* rbx_5 = *(arg1 + 0x40) + 8
        int32_t i_2
        
        do
            sub_1405aec80(rbx_5 + 0xa0)
            sub_1405aec80(rbx_5)
            rbx_5 += 0x148
            i_2 = i_15
            i_15 -= 1
        while (i_2 != 1)
    
    int32_t i_9 = *(arg2 + 0x48)
    void* rbx_6 = *(arg2 + 0x40)
    int32_t r8_2 = *(arg1 + 0x4c)
    *(arg1 + 0x48) = i_9
    
    if (i_9 != 0 || r8_2 != 0)
        sub_141b303a0(arg1 + 0x40, i_9, r8_2)
        void* rdi_2 = *(arg1 + 0x40)
        
        if (i_9 != 0)
            void* rbx_7 = rbx_6 + 0xa8
            int32_t i_3
            
            do
                *rdi_2 = *(rbx_7 - 0xa8)
                sub_1407431a0(rdi_2 + 8, rbx_7 - 0xa0)
                sub_1407431a0(rdi_2 + 0xa8, rbx_7)
                rbx_7 += 0x148
                rdi_2 += 0x148
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
    else
        *(arg1 + 0x4c) = 0

if (arg1 + 0x50 != arg2 + 0x50)
    int32_t i_10 = *(arg1 + 0x58)
    
    if (i_10 != 0)
        void* rbx_9 = *(arg1 + 0x50) + 0xa8
        int32_t i_4
        
        do
            sub_1405aec80(rbx_9 + 0xa0)
            sub_1405aec80(rbx_9)
            sub_1405aec80(rbx_9 - 0xa0)
            rbx_9 += 0x1e8
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
    
    int32_t i_11 = *(arg2 + 0x58)
    void* rbx_10 = *(arg2 + 0x50)
    int32_t r8_3 = *(arg1 + 0x5c)
    *(arg1 + 0x58) = i_11
    
    if (i_11 != 0 || r8_3 != 0)
        sub_141b30440(arg1 + 0x50, i_11, r8_3)
        void* rdi_4 = *(arg1 + 0x50)
        
        if (i_11 != 0)
            void* rbx_11 = rbx_10 + 0xa8
            int32_t i_5
            
            do
                *rdi_4 = *(rbx_11 - 0xa8)
                sub_1407431a0(rdi_4 + 8, rbx_11 - 0xa0)
                sub_1407431a0(rdi_4 + 0xa8, rbx_11)
                sub_1407431a0(rdi_4 + 0x148, rbx_11 + 0xa0)
                rbx_11 += 0x1e8
                rdi_4 += 0x1e8
                i_5 = i_11
                i_11 -= 1
            while (i_5 != 1)
    else
        *(arg1 + 0x5c) = 0

if (arg1 + 0x60 != arg2 + 0x60)
    int32_t i_12 = *(arg1 + 0x68)
    
    if (i_12 != 0)
        void* rbx_13 = *(arg1 + 0x60) + 0x148
        int32_t i_6
        
        do
            sub_1405aec80(rbx_13 + 0xa0)
            sub_1405aec80(rbx_13)
            sub_1405aec80(rbx_13 - 0xa0)
            sub_1405aec80(rbx_13 - 0x140)
            rbx_13 += 0x288
            i_6 = i_12
            i_12 -= 1
        while (i_6 != 1)
    
    int32_t i_13 = *(arg2 + 0x68)
    void* rbx_14 = *(arg2 + 0x60)
    int32_t r8_4 = *(arg1 + 0x6c)
    *(arg1 + 0x68) = i_13
    
    if (i_13 != 0 || r8_4 != 0)
        sub_141b30170(arg1 + 0x60, i_13, r8_4)
        void* rdi_6 = *(arg1 + 0x60)
        
        if (i_13 != 0)
            void* rbx_15 = rbx_14 + 0xa8
            int32_t i_7
            
            do
                *rdi_6 = *(rbx_15 - 0xa8)
                sub_1407431a0(rdi_6 + 8, rbx_15 - 0xa0)
                sub_1407431a0(rdi_6 + 0xa8, rbx_15)
                sub_1407431a0(rdi_6 + 0x148, rbx_15 + 0xa0)
                sub_1407431a0(rdi_6 + 0x1e8, rbx_15 + 0x140)
                rbx_15 += 0x288
                rdi_6 += 0x288
                i_7 = i_13
                i_13 -= 1
            while (i_7 != 1)
    else
        *(arg1 + 0x6c) = 0

sub_141b3cf60(arg1 + 0x70, arg2 + 0x70)
return arg1
