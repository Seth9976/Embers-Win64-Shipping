// 函数: sub_140517240
// 地址: 0x140517240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143f3d220 = -1
int32_t rax = data_143f3d220:4.d
data_143f3d220.d &= 0xfffb7fff
int32_t result = (rax & 0xfffcfbff) | 0x40000
data_143f3d220:4.d = result
return result
