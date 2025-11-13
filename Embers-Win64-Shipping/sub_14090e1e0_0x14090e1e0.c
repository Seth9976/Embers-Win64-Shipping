// 函数: sub_14090e1e0
// 地址: 0x14090e1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1d0c0
int64_t* rcx = arg1[6]

if (rcx != 0)
    (*(*rcx + 0x10))(rcx, 1)
    int64_t* rcx_1 = arg1[6]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x20))(rcx_1, 1)

if (arg1[1].b != 0 && arg1[4] != 0)
    void arg_8
    int64_t* rax_4 = sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1))
    int64_t r8_1 = *rax_4
    (*(r8_1 + 0x38))(rax_4, arg1[4], r8_1)
    arg1[4] = 0

sub_140745b20(&arg1[7])
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
