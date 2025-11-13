// 函数: sub_141763420
// 地址: 0x141763420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc6e70

if (arg1[0x1a] != 0)
    void* rax_1 = arg1[0x1c]
    void* rcx = &arg1[0x1e]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (arg1[0x12] != 0)
    void* rax_3 = arg1[0x14]
    void* rcx_1 = &arg1[0x16]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t rcx_2 = arg1[8]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_141762040(&arg1[6])
int64_t rcx_4 = arg1[4]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[2]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_142d40478

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
