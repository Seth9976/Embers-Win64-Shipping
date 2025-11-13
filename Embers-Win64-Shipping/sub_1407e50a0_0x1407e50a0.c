// 函数: sub_1407e50a0
// 地址: 0x1407e50a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1407e5020(arg1, arg2)

if (&arg1[2] != &arg2[2])
    int32_t i_3 = arg1[3].d
    
    if (i_3 != 0)
        void* rbx_2 = arg1[2] + 0x28
        int32_t i
        
        do
            int64_t rcx = *(rbx_2 + 0x10)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = *rbx_2
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *(rbx_2 - 0x10)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t rcx_3 = *(rbx_2 - 0x20)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_2 += 0x48
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[3].d
    void* rbx_3 = arg2[2]
    int32_t r8_1 = *(arg1 + 0x1c)
    arg1[3].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140809010(&arg1[2], i_2, r8_1)
        int32_t* rdi_1 = arg1[2]
        
        if (i_2 != 0)
            void* rbx_4 = rbx_3 + 8
            int32_t i_1
            
            do
                *rdi_1 = *(rbx_4 - 8)
                rdi_1[1] = *(rbx_4 - 4)
                sub_1407e35b0(&rdi_1[2], rbx_4)
                rbx_4 += 0x48
                rdi_1 = &rdi_1[0x12]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x1c) = i_2

arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5].d ^= (arg2[5].d ^ arg1[5].d) & 1
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x34) = *(arg2 + 0x34)
arg1[7].b = arg2[7].b
return arg1
