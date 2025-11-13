// 函数: sub_141cfa240
// 地址: 0x141cfa240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[1].b != 0
*arg1 = &data_14321dd68

if (not(cond:0))
    void* rax_1 = arg1[0x12]
    void* rcx = &arg1[0x14]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    int64_t* rax_4 = arg1[0x10]((*(*rcx + 8))(rcx))
    
    if (rax_4 != 0)
        int64_t r8_1 = *rax_4
        (*r8_1)(rax_4, 1, r8_1)

if (arg1[0x10] != 0)
    void* rax_5 = arg1[0x12]
    void* rcx_3 = &arg1[0x14]
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    (*(*rcx_3 + 0x10))(rcx_3)

sub_140a1d5c0(&arg1[0xb])
*arg1 = &data_142e60450

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
