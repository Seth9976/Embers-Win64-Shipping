// 函数: sub_142672e60
// 地址: 0x142672e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434597e0
sub_142671d20(&arg1[0x53])
sub_1405ae080(&arg1[0x44])
int64_t rcx_2 = arg1[0x22]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x20]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_14100dc70(&arg1[0x1e])
int64_t rcx_5 = arg1[0x1b]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_143453df0
int64_t* rcx_6 = arg1[2]

if (rcx_6 != 0)
    int32_t rax_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_6 != 0)
        (*(*rcx_6 + 8))(rcx_6, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
