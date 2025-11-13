// 函数: src_delete
// 地址: 0x141c2c320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int64_t rcx = *(arg1 + 0x20)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    memset(arg1, 0, 0x60)
    sub_140a74f90(arg1)

return 0
