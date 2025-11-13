// 函数: sub_141d8c320
// 地址: 0x141d8c320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143238218
void* rax = arg1[1]
int64_t* rcx = rax + 0x10

if (rax == 0)
    rcx = nullptr

sub_1419aa4a0(rcx)
int64_t* rcx_1 = arg1[1]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x18))(rcx_1, 1)

*arg1 = &data_142e4cc00

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
