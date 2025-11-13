// 函数: sub_140a42270
// 地址: 0x140a42270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t var_1d8
sub_140b6c480(&var_1d8)
void var_1e8
sub_140b58260(&var_1e8, u"LogMemory", 1)
void var_158
sub_1405eb940(&var_158, "WindowsNoEditor")
int64_t var_50
int64_t var_208 = var_50
sub_140b0eee0(arg1, &var_1e8, 5, u"Platform Memory Stats for %s")
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_180
int64_t zmm0
zmm0.d = float.s(var_180)

if (var_180 s< 0)
    zmm0.d = zmm0.d f+ 1.84467441e+19f

zmm0.d = zmm0.d f* 9.53674316e-07f
int64_t var_188
int64_t zmm1
zmm1.d = float.s(var_188)
int64_t temp0 = _mm_cvtps_pd(zmm0)

if (var_188 s< 0)
    zmm1.d = zmm1.d f+ 1.84467441e+19f

zmm1.d = zmm1.d f* 9.53674316e-07f
int64_t var_200 = temp0
int64_t var_208_1 = _mm_cvtps_pd(zmm1)
sub_140b0eee0(arg1, &var_1e8, 5, u"Process Physical Memory: %.2f MB used, %.2f MB peak")
int64_t var_170
zmm0.d = float.s(var_170)

if (var_170 s< 0)
    zmm0.d = zmm0.d f+ 1.84467441e+19f

zmm0.d = zmm0.d f* 9.53674316e-07f
int64_t var_178
zmm1.d = float.s(var_178)
int64_t temp0_2 = _mm_cvtps_pd(zmm0)

if (var_178 s< 0)
    zmm1.d = zmm1.d f+ 1.84467441e+19f

zmm1.d = zmm1.d f* 9.53674316e-07f
int64_t var_200_1 = temp0_2
int64_t var_208_2 = _mm_cvtps_pd(zmm1)
sub_140b0eee0(arg1, &var_1e8, 5, u"Process Virtual Memory: %.2f MB used, %.2f MB peak")
int64_t rax_7 = var_1d8
zmm0.d = float.s(rax_7)

if (rax_7 s< 0)
    zmm0.d = zmm0.d f+ 1.84467441e+19f

zmm0.d = zmm0.d f* 9.53674316e-07f
int64_t temp0_4 = _mm_cvtps_pd(zmm0)
int64_t var_198
zmm0.d = float.s(var_198)

if (var_198 s< 0)
    zmm0.d = zmm0.d f+ 1.84467441e+19f

zmm0.d = zmm0.d f* 9.53674316e-07f
int64_t temp0_6 = _mm_cvtps_pd(zmm0)
zmm0.d = float.s(rax_7 - var_198)

if (rax_7 - var_198 s< 0)
    zmm0.d = zmm0.d f+ 1.84467441e+19f

int64_t var_1f8 = temp0_4
zmm0.d = zmm0.d f* 9.53674316e-07f
int64_t var_200_2 = temp0_6
int64_t var_208_3 = _mm_cvtps_pd(zmm0)
sub_140b0eee0(arg1, &var_1e8, 5, u"Physical Memory: %.2f MB used,  %.2f MB free, %.2f MB total")
int64_t var_1d0
zmm0.d = float.s(var_1d0)

if (var_1d0 s< 0)
    zmm0.d = zmm0.d f+ 1.84467441e+19f

zmm0.d = zmm0.d f* 9.53674316e-07f
int64_t temp0_8 = _mm_cvtps_pd(zmm0)
int64_t var_190
zmm0.d = float.s(var_190)

if (var_190 s< 0)
    zmm0.d = zmm0.d f+ 1.84467441e+19f

zmm0.d = zmm0.d f* 9.53674316e-07f
int64_t temp0_9 = _mm_cvtps_pd(zmm0)
zmm0.d = float.s(var_1d0 - var_190)

if (var_1d0 - var_190 s< 0)
    zmm0.d = zmm0.d f+ 1.84467441e+19f

int64_t var_1f8_1 = temp0_8
zmm0.d = zmm0.d f* 9.53674316e-07f
int64_t var_200_3 = temp0_9
int64_t var_208_4 = _mm_cvtps_pd(zmm0)
wchar16* result =
    sub_140b0eee0(arg1, &var_1e8, 5, Virtual Memory: %.2f MB used,  %.2f MB free, %.2f MB total")
__security_check_cookie(rax_1 ^ &var_228)
return result
