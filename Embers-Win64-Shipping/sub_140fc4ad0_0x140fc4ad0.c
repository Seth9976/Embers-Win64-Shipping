// 函数: sub_140fc4ad0
// 地址: 0x140fc4ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xa] != 0)
    void* rax_1 = arg1[0xc]
    void* rcx = &arg1[0xe]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

int64_t rcx_1 = arg1[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[3]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142d5c278

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
