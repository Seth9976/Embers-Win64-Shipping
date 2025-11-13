// 函数: sub_1423a6430
// 地址: 0x1423a6430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143339520
sub_1405d1550(&arg1[0x20])

if (arg1[0x18] != 0)
    void* rax_1 = arg1[0x1a]
    void* rcx_1 = &arg1[0x1c]
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    (*(*rcx_1 + 0x10))(rcx_1)

if (arg1[0xe] != 0)
    void* rax_3 = arg1[0x10]
    void* rcx_2 = &arg1[0x12]
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    (*(*rcx_2 + 0x10))(rcx_2)

return sub_142381960(arg1) __tailcall
