// 函数: sub_1408fe110
// 地址: 0x1408fe110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)

if (rax == 0)
    return 0

rax[3] = 0
rax[5] = 0
rax[7] = 0
*rax = &data_142e1a030
rax[1] = &data_142e1a068
__builtin_memset(&rax[2], 0, 0x30)

if (rax == 0)
    return nullptr

return &rax[1]
