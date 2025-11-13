// 函数: sub_140d7b3f0
// 地址: 0x140d7b3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x120)
int32_t result = *(arg1 + 0x124)
arg2[1] = result

if (&arg2[2] != arg1 + 0x128)
    void* rbx_1 = *(arg2 + 8)
    int32_t i_3 = arg2[4]
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx = *(rbx_1 + 0x10)
            
            if (rcx != 0)
                result = sub_140a74f90(rcx)
            
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                result = sub_140a74f90(rcx_1)
            
            rbx_1 += 0x50
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = *(arg1 + 0x130)
    void* rbx_2 = *(arg1 + 0x128)
    int32_t r8_1 = arg2[5]
    arg2[4] = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        result = sub_140808ed0(&arg2[2], i_2, r8_1)
        void* rdi_1 = *(arg2 + 8)
        
        if (i_2 != 0)
            int32_t* rbx_3 = rbx_2 + 0x20
            int32_t i_1
            
            do
                sub_140596d10(rdi_1, &rbx_3[-8])
                sub_140596d10(rdi_1 + 0x10, &rbx_3[-4])
                int32_t rax_1 = *rbx_3
                rbx_3 = &rbx_3[0x14]
                *(rdi_1 + 0x20) = rax_1
                *(rdi_1 + 0x24) = rbx_3[-0x13]
                *(rdi_1 + 0x28) = *(rbx_3 - 0x48)
                *(rdi_1 + 0x38) = *(rbx_3 - 0x38)
                *(rdi_1 + 0x48) = rbx_3[-0xa].b
                result = rbx_3[-9]
                *(rdi_1 + 0x4c) = result
                rdi_1 += 0x50
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        arg2[5] = i_2

*(arg2 + 0x18) = *(arg1 + 0x138)
*(arg2 + 0x28) = *(arg1 + 0x148)
*(arg2 + 0x40) = *(arg1 + 0x160)
*(arg2 + 0x50) = *(arg1 + 0x170)
return result
