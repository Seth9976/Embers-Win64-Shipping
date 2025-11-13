// 函数: sub_1405d5f30
// 地址: 0x1405d5f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d5770(&arg1[0xf])
int64_t* rcx_1 = arg1[0xe]

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

if (arg1[6] != 0)
    void* rax_2 = arg1[8]
    void* rcx_2 = &arg1[0xa]
    
    if (rax_2 != 0)
        rcx_2 = rax_2
    
    (*(*rcx_2 + 0x10))(rcx_2)

int64_t rcx_3 = arg1[1]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*arg1 = &data_142d56fa0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
