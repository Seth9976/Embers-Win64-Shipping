// 函数: sub_141c51740
// 地址: 0x141c51740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        int64_t* rbx_2 = *arg1 + 0x98
        int32_t i
        
        do
            int64_t rcx = *rbx_2
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_2[-0xe] = &data_142d6a040
            int64_t rcx_1 = rbx_2[-3]
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            sub_1405ae180(&rbx_2[-0xd])
            rbx_2 = &rbx_2[0x16]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rbx_3 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140a05d20(arg1, i_2, r8_1)
        char* rdi_1 = *arg1
        
        if (i_2 != 0)
            void* rbx_4 = rbx_3 + 8
            int32_t i_1
            
            do
                *rdi_1 = *(rbx_4 - 8)
                *(rdi_1 + 8) = *rbx_4
                *(rdi_1 + 0x10) = *(rbx_4 + 8)
                *(rdi_1 + 0x14) = *(rbx_4 + 0xc)
                *(rdi_1 + 0x18) = *(rbx_4 + 0x10)
                *(rdi_1 + 0x1c) = *(rbx_4 + 0x14)
                *(rdi_1 + 0x20) = *(rbx_4 + 0x18)
                sub_141adec50(&rdi_1[0x28], rbx_4 + 0x20)
                int64_t rax_8 = *(rbx_4 + 0xa0)
                rbx_4 += 0xb0
                *(rdi_1 + 0xa8) = rax_8
                rdi_1 = &rdi_1[0xb0]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_2

return arg1
