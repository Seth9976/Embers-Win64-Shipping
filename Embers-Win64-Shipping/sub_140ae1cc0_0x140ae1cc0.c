// 函数: sub_140ae1cc0
// 地址: 0x140ae1cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
*arg2 = 0
arg2[1] = 0
float zmm3[0x2] = *(arg1 + 4)
float zmm2[0x2] = *arg1
float zmm1[0x2] = arg1[1].d
float zmm0[0x2] = _mm_cvtps_pd(*(arg1 + 0xc))
_mm_cvtps_pd(zmm3)
zmm2 = _mm_cvtps_pd(zmm2)
float var_20[0x2] = zmm0
float var_28[0x2] = _mm_cvtps_pd(zmm1)
int64_t var_18
sub_140a2e390(&var_18, u"[%g %g %g %g] ", zmm2)
int32_t var_10
int32_t r8_2

if (var_10 == 0)
    r8_2 = 0
else
    r8_2 = var_10 - 1

sub_140a20ba0(arg2, var_18, r8_2)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

zmm3 = *(arg1 + 0x14)
zmm2 = arg1[2].d
float zmm1_1[0x2] = arg1[3].d
float zmm0_1[0x2] = _mm_cvtps_pd(*(arg1 + 0x1c))
_mm_cvtps_pd(zmm3)
zmm2 = _mm_cvtps_pd(zmm2)
float var_20_1[0x2] = zmm0_1
float var_28_1[0x2] = _mm_cvtps_pd(zmm1_1)
sub_140a2e390(&var_18, u"[%g %g %g %g] ", zmm2)
int32_t r8_5

if (var_10 == 0)
    r8_5 = 0
else
    r8_5 = var_10 - 1

sub_140a20ba0(arg2, var_18, r8_5)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

zmm3 = *(arg1 + 0x24)
zmm2 = arg1[4].d
float zmm1_2[0x2] = arg1[5].d
float zmm0_2[0x2] = _mm_cvtps_pd(*(arg1 + 0x2c))
_mm_cvtps_pd(zmm3)
zmm2 = _mm_cvtps_pd(zmm2)
float var_20_2[0x2] = zmm0_2
float var_28_2[0x2] = _mm_cvtps_pd(zmm1_2)
sub_140a2e390(&var_18, u"[%g %g %g %g] ", zmm2)
int32_t r8_8

if (var_10 == 0)
    r8_8 = 0
else
    r8_8 = var_10 - 1

sub_140a20ba0(arg2, var_18, r8_8)
int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

zmm3 = *(arg1 + 0x34)
zmm2 = arg1[6].d
float zmm1_3[0x2] = arg1[7].d
float zmm0_3[0x2] = _mm_cvtps_pd(*(arg1 + 0x3c))
_mm_cvtps_pd(zmm3)
zmm2 = _mm_cvtps_pd(zmm2)
float var_20_3[0x2] = zmm0_3
float var_28_3[0x2] = _mm_cvtps_pd(zmm1_3)
sub_140a2e390(&var_18, u"[%g %g %g %g] ", zmm2)

if (var_10 != 0)
    rsi = var_10 - 1

sub_140a20ba0(arg2, var_18, rsi)
int64_t rcx_11 = var_18

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return arg2
