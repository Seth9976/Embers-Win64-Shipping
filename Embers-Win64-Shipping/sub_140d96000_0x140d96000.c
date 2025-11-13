// 函数: sub_140d96000
// 地址: 0x140d96000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]

if (&arg1[2] != &arg2[2])
    void* rbx_1 = *(arg1 + 8)
    int32_t i_3 = arg1[4]
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx = *(rbx_1 + 0x10)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 += 0x50
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[4]
    void* rbx_2 = *(arg2 + 8)
    int32_t r8_1 = arg1[5]
    arg1[4] = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140808ed0(&arg1[2], i_2, r8_1)
        void* rdi_1 = *(arg1 + 8)
        
        if (i_2 != 0)
            int32_t* rbx_3 = rbx_2 + 0x20
            int32_t i_1
            
            do
                sub_140596d10(rdi_1, &rbx_3[-8])
                sub_140596d10(rdi_1 + 0x10, &rbx_3[-4])
                int32_t rax_2 = *rbx_3
                rbx_3 = &rbx_3[0x14]
                *(rdi_1 + 0x20) = rax_2
                *(rdi_1 + 0x24) = rbx_3[-0x13]
                *(rdi_1 + 0x28) = *(rbx_3 - 0x48)
                *(rdi_1 + 0x38) = *(rbx_3 - 0x38)
                *(rdi_1 + 0x48) = rbx_3[-0xa].b
                *(rdi_1 + 0x4c) = rbx_3[-9]
                rdi_1 += 0x50
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        arg1[5] = i_2

*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x50) = *(arg2 + 0x50)
return arg1
