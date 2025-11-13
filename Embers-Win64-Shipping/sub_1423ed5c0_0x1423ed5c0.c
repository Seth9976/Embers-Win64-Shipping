// 函数: sub_1423ed5c0
// 地址: 0x1423ed5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(data_143f5b298 + 0x50)
void var_98
sub_140b6c480(&var_98)
int64_t var_48
int128_t zmm6
zmm6.d = float.s(var_48)

if (var_48 s< 0)
    zmm6.d = zmm6.d f+ 1.84467441e+19f

zmm6.d = zmm6.d f* 9.53674316e-07f
int32_t var_c8 = 0xff1e90ff
void var_b0
sub_140acc920(&var_b0, &var_c8)
int16_t* var_c0
sub_140a2e390(&var_c0, u"%5.2f MByte", _mm_cvtps_pd(zmm6.q).q)
int16_t* r9 = &data_142d40450
int32_t var_b8

if (var_b8 != 0)
    r9 = var_c0

uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(arg6))
sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(arg5)), zmm2, r9, rbx, &var_b0, &data_14399f5e0)
int16_t* rcx_4 = var_c0

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return zx.q(int.d(sub_142005cc0(rbx) * 1.10000002f) + arg6)
