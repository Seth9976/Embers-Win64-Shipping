// 函数: sub_1409ac120
// 地址: 0x1409ac120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        int64_t* rbx_2 = *arg1 + 8
        int32_t i
        
        do
            int64_t rcx = *rbx_2
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_2 = &rbx_2[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rbx_3 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140808f70(arg1, i_2, r8_1)
        int32_t* rdi_1 = *arg1
        
        if (i_2 != 0)
            void* rbx_4 = rbx_3 + 8
            int32_t i_1
            
            do
                *rdi_1 = *(rbx_4 - 8)
                rdi_1[1] = *(rbx_4 - 4)
                sub_1409aa000(&rdi_1[2], rbx_4)
                rbx_4 += 0x18
                rdi_1 = &rdi_1[6]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_2

return arg1
