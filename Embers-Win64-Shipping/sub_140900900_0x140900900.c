// 函数: sub_140900900
// 地址: 0x140900900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1b1b8
arg1[1] = &data_142e1b1e8
arg1[4].b = 1
int64_t rax
rax.b = arg1[4].b
int64_t* rcx = arg1[6]
(*(*rcx + 0x10))(rcx)
int64_t* rcx_1 = arg1[5]
(*(*rcx_1 + 0x18))(rcx_1)
int64_t* rcx_2 = arg1[5]
int64_t rdx
rdx.b = 1
(*(*rcx_2 + 0x10))(rcx_2, rdx)
int64_t* rcx_3 = arg1[5]

if (rcx_3 != 0)
    (*(*rcx_3 + 0x20))(rcx_3, 1)

int64_t* rcx_4 = arg1[6]
arg1[5] = 0
sub_140a4fc50(rcx_4)
arg1[6] = 0
arg1[1] = &data_142d4ba00
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
