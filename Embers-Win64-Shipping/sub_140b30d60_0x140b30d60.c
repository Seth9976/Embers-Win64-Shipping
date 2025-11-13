// 函数: sub_140b30d60
// 地址: 0x140b30d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    sub_140a642d0(arg1, arg2)
    
    if (arg2[8] == 0)
        memmove(&arg1[7], &arg2[7], 4)
    
    int64_t rcx_1 = arg1[8]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg1[8] = arg2[8]
    arg2[8] = 0
    arg1[9].d = arg2[9].d
    arg2[9].d = 0

return arg1
