// 函数: sub_141d95ba0
// 地址: 0x141d95ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        void* rbx_2 = *arg1 + 0x18
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
            
            rbx_2 += 0x50
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rbx_3 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140808ed0(arg1, i_2, r8_1)
        int32_t* rdi_1 = *arg1
        
        if (i_2 != 0)
            void* rbx_4 = rbx_3 + 0x18
            int32_t i_1
            
            do
                *rdi_1 = *(rbx_4 - 0x18)
                sub_140596d10(&rdi_1[2], rbx_4 - 0x10)
                sub_140596d10(&rdi_1[6], rbx_4)
                sub_140596d10(&rdi_1[0xa], rbx_4 + 0x10)
                rdi_1[0xe] = *(rbx_4 + 0x20)
                rdi_1 = &rdi_1[0x14]
                rdi_1[-5] = *(rbx_4 + 0x24)
                rdi_1[-4] = *(rbx_4 + 0x28)
                int64_t rax_5 = *(rbx_4 + 0x30)
                rbx_4 += 0x50
                *(rdi_1 - 8) = rax_5
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_2

return arg1
