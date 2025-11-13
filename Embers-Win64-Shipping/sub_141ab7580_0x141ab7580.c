// 函数: sub_141ab7580
// 地址: 0x141ab7580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x2] = *(arg1 + 0xf4)
float zmm0[0x2] = *(arg1 + 0xfc)
_mm_cvtps_pd(*(arg1 + 0xf8))
zmm2 = _mm_cvtps_pd(zmm2)
float var_88[0x2] = _mm_cvtps_pd(zmm0)
int16_t* var_48
sub_140a2e390(&var_48, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
int16_t* const rbx = &data_142d40450
int16_t* const rdi = &data_142d40450
int32_t var_40

if (var_40 != 0)
    rdi = var_48

int64_t var_78
int32_t* rax = sub_140ad3dc0(arg1 + 0xe8, &var_78)
zmm2 = *rax
float zmm0_1[0x2] = rax[2]
_mm_cvtps_pd(rax[1])
zmm2 = _mm_cvtps_pd(zmm2)
float var_88_1[0x2] = _mm_cvtps_pd(zmm0_1)
int16_t* var_58
sub_140a2e390(&var_58, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
zmm2 = *(arg1 + 0xdc)
float zmm0_2[0x2] = *(arg1 + 0xe4)
int16_t* const r15 = &data_142d40450
_mm_cvtps_pd(*(arg1 + 0xe0))
int32_t var_50

if (var_50 != 0)
    r15 = var_58

zmm2 = _mm_cvtps_pd(zmm2)
float var_88_2[0x2] = _mm_cvtps_pd(zmm0_2)
int16_t* var_68
sub_140a2e390(&var_68, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2)
int64_t var_28
int64_t* rax_1 = sub_140b63b70(arg1 + 0xc8, &var_28)

if (rax_1[1].d != 0)
    rbx = *rax_1

int16_t* const var_80 = rdi
int16_t* const var_88_3 = r15
int64_t var_38
sub_140a2e390(&var_38, u"(Bone: %s has T(%s), R(%s), S(%s))", rbx)
int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int16_t* rcx_7 = var_68

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int16_t* rcx_8 = var_58

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int16_t* rcx_9 = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rdi_1 = var_38
var_78 = 0
int32_t var_30
int32_t var_70 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_78, var_30, 0)
    memcpy(var_78, rdi_1, var_30 * 2)
else
    int32_t var_6c_1 = 0

sub_141e14220(arg2, &var_78, 0)
int64_t result = sub_141e21d10(arg1 + 0x10, arg2)
int64_t rcx_14 = var_38

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
