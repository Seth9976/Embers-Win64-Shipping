// 函数: sub_141fa70e0
// 地址: 0x141fa70e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t* rbx_1 = *arg1
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_1 = &rbx_1[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rbx_2 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140808f70(arg1, i_2, r8_1)
        void* rdi_1 = *arg1
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                sub_140596d10(rdi_1, rbx_2)
                int32_t rax_1 = *(rbx_2 + 0x10)
                rbx_2 += 0x18
                *(rdi_1 + 0x10) = rax_1
                rdi_1 += 0x18
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_2

return arg1
