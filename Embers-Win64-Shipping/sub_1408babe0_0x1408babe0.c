// 函数: sub_1408babe0
// 地址: 0x1408babe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0
    
    if (&arg1[2] != &arg2[2])
        if (arg2[4] == 0)
            memmove(&arg1[2], &arg2[2], 0x10)
        
        int64_t rcx_2 = arg1[4]
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        arg1[4] = arg2[4]
        arg2[4] = 0
        arg1[5].d = arg2[5].d
        *(arg1 + 0x2c) = *(arg2 + 0x2c)
        arg2[5] = 0
    
    arg1[6].d = arg2[6].d
    *(arg1 + 0x34) = *(arg2 + 0x34)
    *(arg2 + 0x34) = 0
    arg2[6].d = 0xffffffff

return arg1
