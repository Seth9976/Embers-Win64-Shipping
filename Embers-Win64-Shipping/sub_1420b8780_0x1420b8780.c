// 函数: sub_1420b8780
// 地址: 0x1420b8780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = arg2[2]
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0[0]
zmm2[0].q = fconvert.d(zmm2[0])
int64_t var_68 = fconvert.d(temp0_1[0])
int16_t* var_28
sub_140a2e390(&var_28, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2[0].q)
int16_t* const rbp = &data_142d40450
int16_t* const rsi = &data_142d40450
int128_t var_18 = *arg2
int32_t var_20

if (var_20 != 0)
    rsi = var_28

int32_t var_58
sub_140adf5d0(&var_18, &var_58)
double zmm2_1[0x2] = var_58
int32_t var_54
_mm_cvtps_pd(var_54)
double temp0_3[0x2] = _mm_cvtps_pd(zmm2_1[0])
int32_t var_50
float var_68_1[0x2] = _mm_cvtps_pd(var_50)
int16_t* var_38
sub_140a2e390(&var_38, u"P=%f Y=%f R=%f", temp0_3[0])
zmm2_1 = arg2[1]
double zmm1_1[0x2] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
double zmm0_3[0x2] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
zmm1_1[0]
zmm2_1[0] = fconvert.d(zmm2_1[0].d)
double var_68_2 = fconvert.d(zmm0_3[0].d)
int16_t* var_48
sub_140a2e390(&var_48, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2_1[0])
int16_t* const var_68_3 = rsi
int32_t var_40

if (var_40 != 0)
    rbp = var_48

sub_140a2e390(arg1, u"Translation: %s Rotation: %s Scale %s", rbp)
int16_t* rcx_5 = var_48

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int16_t* rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int16_t* rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg1
