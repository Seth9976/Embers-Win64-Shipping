// 函数: sub_141706f80
// 地址: 0x141706f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rcx = *arg1
    int32_t i_1 = arg1[1].d
    
    if (i_1 != 0)
        int64_t* rbx_1 = rcx + 0x20
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[7]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

return arg1
