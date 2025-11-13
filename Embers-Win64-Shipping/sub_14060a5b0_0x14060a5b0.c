// 函数: sub_14060a5b0
// 地址: 0x14060a5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)

if (rax == 0)
    return 0

*rax = &data_142d62d80
rax[1] = &data_142d62db8
__builtin_memset(&rax[2], 0, 0x30)

if (rax == 0)
    return nullptr

return &rax[1]
