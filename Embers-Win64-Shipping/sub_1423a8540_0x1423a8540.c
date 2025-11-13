// 函数: sub_1423a8540
// 地址: 0x1423a8540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143339650
int64_t rcx = arg1[0x76]

if (rcx != 0)
    sub_140a74f90(rcx)

if (arg1[0x28] != 0)
    void* rax_1 = arg1[0x2a]
    void* rcx_1 = &arg1[0x2c]
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    (*(*rcx_1 + 0x10))(rcx_1)

sub_1423a6100(&arg1[0x22])
int64_t* rcx_3 = arg1[0x21]

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

if (arg1[0x18] != 0)
    void* rax_4 = arg1[0x1a]
    void* rcx_4 = &arg1[0x1c]
    
    if (rax_4 != 0)
        rcx_4 = rax_4
    
    (*(*rcx_4 + 0x10))(rcx_4)

if (arg1[0xe] != 0)
    void* rax_6 = arg1[0x10]
    void* rcx_5 = &arg1[0x12]
    
    if (rax_6 != 0)
        rcx_5 = rax_6
    
    (*(*rcx_5 + 0x10))(rcx_5)

sub_142381960(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
