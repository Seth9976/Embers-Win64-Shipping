// 函数: sub_141f17fa0
// 地址: 0x141f17fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
int512_t zmm2
zmm1, zmm2 = sub_140cddf60(arg1, arg2)
uint64_t result = sub_14221b2f0(&arg1[0x55])

if (result.b != 0)
    result = sub_142216b70(&arg1[0x55], arg2, zmm2, zmm1)

int64_t* rcx_2 = arg1[0x7d]

if (rcx_2 != 0)
    result = zx.q((*(*rcx_2 + 0xf8))(rcx_2))
    *(arg2 + 8) += result

return result
