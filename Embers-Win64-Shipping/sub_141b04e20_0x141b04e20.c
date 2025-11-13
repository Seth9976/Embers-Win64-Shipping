// 函数: sub_141b04e20
// 地址: 0x141b04e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[0x14]
int96_t var_18 = (*(arg2 + 0x1d0)).12

if (rcx != 0)
    rcx = rcx[0x26]

if (rcx != 0)
    rcx = zx.q((*(*rcx + 0x3e8))(rcx, 0))

int32_t var_30 = *(arg1 + 0x14)
int32_t rax_4 = arg1[1].d
int32_t var_20 = rax_4
rax_4.b = sbb.b(rax_4.b, rax_4.b, rcx.b != 0)
rax_4.b &= 2
int64_t var_38 = *(arg1 + 0xc)
int64_t var_28 = *arg1
sub_141f48a10(arg2, &var_28, &var_38, 0, 0, rax_4.b)
int32_t rax_5 = arg1[4].d
var_28 = arg1[3]
int32_t var_20_1 = rax_5
sub_141f48ee0(arg2, &var_28)
int32_t rax_6 = arg1[1].d
var_28 = *arg1
int32_t var_20_2 = rax_6
sub_141f48c60(arg2, &var_28)
int32_t rax_7 = *(arg1 + 0x14)
var_28 = *(arg1 + 0xc)
int32_t var_20_3 = rax_7
int32_t result = sub_141f48ec0(arg2, &var_28)
uint128_t zmm1 = zx.o(data_14399f938)

if (not(zmm1.q f<= 0.0))
    uint128_t zmm3_1 = *(arg2 + 0x1d0)
    float zmm2_1 = 1f / _mm_cvtpd_ps(zmm1)[0]
    float zmm0_4[0x4] = zmm3_1
    zmm1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
    zmm0_4[0] = zmm0_4[0] f- var_18.d
    zmm1.d = zmm1.d f- var_18:4.d
    zmm3_1.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa).d f- var_18:8.d
    zmm0_4[0] = zmm0_4[0] * zmm2_1
    zmm1.d = zmm1.d f* zmm2_1
    zmm3_1.d = zmm3_1.d f* zmm2_1
    arg2[0x28] = (_mm_unpacklo_ps(zmm0_4, zmm1.q)).q
    result = zmm3_1.d
    arg2[0x29].d = result

return result
