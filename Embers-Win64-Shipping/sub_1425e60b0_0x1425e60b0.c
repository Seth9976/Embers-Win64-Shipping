// 函数: sub_1425e60b0
// 地址: 0x1425e60b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)

if (rax == 0)
    return 0

sub_140b0b2f0(rax)
*rax = &data_143449430
rax[1] = &data_143449440
__builtin_memset(&rax[2], 0, 0x30)

if (rax == 0)
    return nullptr

return &rax[1]
