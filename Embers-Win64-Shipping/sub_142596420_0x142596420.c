// 函数: sub_142596420
// 地址: 0x142596420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_5 = arg1[1].d
    void*** rbx_1 = *arg1
    
    if (i_5 != 0)
        int32_t i
        
        do
            *rbx_1 = &data_142da8048
            sub_140a1d5c0(&rbx_1[3])
            sub_140a1d5c0(&rbx_1[1])
            rbx_1 = &rbx_1[9]
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[1].d
    void* rbx_2 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_140809010(arg1, i_3, r8_1)
        void*** rdi_1 = *arg1
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                sub_142596160(rdi_1, rbx_2)
                rdi_1 = &rdi_1[9]
                rbx_2 += 0x48
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_3

if (&arg1[2] != &arg2[2])
    int32_t i_4 = arg1[3].d
    void* rdi_2 = arg1[2]
    
    if (i_4 != 0)
        void* rbx_3 = rdi_2 + 0x38
        int32_t i_2
        
        do
            *(rbx_3 - 8) = &data_142da8048
            sub_140a1d5c0(rbx_3 + 0x10)
            sub_140a1d5c0(rbx_3)
            int64_t rcx_6 = *(rbx_3 - 0x18)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *(rbx_3 - 0x28)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = *rdi_2
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rdi_2 += 0x78
            rbx_3 += 0x78
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    sub_142595f60(&arg1[2], arg2[2], arg2[3].d, *(arg1 + 0x1c), 0)

return arg1
