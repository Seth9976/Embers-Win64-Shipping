// 函数: sub_140908280
// 地址: 0x140908280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)

if (rax == 0)
    return 0

*rax = &data_142e1b4f0
rax[1] = &data_142e1b528
__builtin_memset(&rax[2], 0, 0x30)

if (rax == 0)
    return nullptr

return &rax[1]
