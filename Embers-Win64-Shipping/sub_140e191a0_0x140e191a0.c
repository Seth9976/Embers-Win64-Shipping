// 函数: sub_140e191a0
// 地址: 0x140e191a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = data_143e20d08
int64_t* rcx = *(arg1 + 0x910)
float zmm6[0x4]

if (rcx == 0)
    zmm6 = 0x3f800000
else
    (*(*rcx + 0xf8))(rcx)
    zmm6 = arg3

(*(*rsi + 0x48))(rsi)
void* rax_3 = arg1 + 0x7a8
float zmm2 = arg3[0] * zmm6[0]

if (not(0f f!= *rax_3))
    rax_3 = arg1 + 0x7a0

arg3 = *rax_3
int64_t zmm1 = *(rax_3 + 4)
int128_t zmm7
zmm7.d = 1f / zmm2
int64_t var_34 = 0
arg3[0] = arg3[0] f* zmm7.d
zmm1.d = zmm1.d f* zmm7.d
*arg2 = (_mm_unpacklo_ps(arg3, zmm1)).q
*(arg2 + 0x2c) = 0
float var_38[0x4]
var_38[0] = zmm2
float temp0_1[0x4] = _mm_shuffle_ps(var_38, var_38, 0x93)
temp0_1[0] = zmm2
*(arg2 + 0x1c) = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
*(arg2 + 0x34) &= 0xfe
*(arg2 + 0xc) = 0
*(arg2 + 0x14) = 0
arg2[1].d = zmm2
return arg2
