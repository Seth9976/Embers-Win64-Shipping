// 函数: sub_14180c530
// 地址: 0x14180c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rbx_1 = *arg1
    int32_t i_1 = arg1[1].d
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx = *(rbx_1 + 0x10)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 += 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = *arg1
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

return arg1
