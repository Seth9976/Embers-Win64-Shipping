// 函数: sub_140911170
// 地址: 0x140911170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x30)

if (rax == 0)
    return 0

__builtin_memset(rax, 0, 0x30)
sub_140b0b2f0(rax)
*rax = &data_142e1c970
rax[1] = &data_142e1c980
__builtin_memset(&rax[2], 0, 0x20)

if (rax == 0)
    return nullptr

return &rax[1]
