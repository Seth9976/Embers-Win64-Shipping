// 函数: sub_140a50670
// 地址: 0x140a50670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = data_143db3744 * 0xbb38435 + 0x3619636b
data_143db3744 = rax_1
int128_t zmm6 = (rax_1 & 0x7fffff) | 0x3f800000
float _X = zmm6.d
truncf(_X)
zmm6.d = zmm6.d f- _X
return zmm6.d
