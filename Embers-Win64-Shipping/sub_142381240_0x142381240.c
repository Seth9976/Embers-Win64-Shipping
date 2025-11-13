// 函数: sub_142381240
// 地址: 0x142381240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x18] != 0)
    void* rax_1 = arg1[0x1a]
    void* rcx = &arg1[0x1c]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (arg1[0xe] != 0)
    void* rax_3 = arg1[0x10]
    void* rcx_1 = &arg1[0x12]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

*arg1 = &data_143335b70
DeleteCriticalSection(&arg1[2])
*arg1 = &data_142dd6680
return &data_142dd6680
