// 函数: sub_14201a850
// 地址: 0x14201a850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) != 0)
    *(arg1 + 0x20) = 0
    int64_t* rbx_1 = *(arg1 + 0x10)
    int32_t i_1 = *(arg1 + 0x18)
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_1 = &rbx_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = *(arg1 + 0x10)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

if (*(arg1 + 8) != 0)
    *(arg1 + 8) = 0
