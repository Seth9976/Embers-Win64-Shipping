// 函数: sub_1426b3810
// 地址: 0x1426b3810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x2] = *(arg1 + 0x64)
float zmm1[0x2] = *(arg1 + 0x60)
int32_t arg_8 = 0
int64_t var_38
int64_t var_28
int64_t* rax
int32_t rbx

if (zmm2[0] <= 0f)
    sub_140a2e390(&var_38, u"%.2fs", _mm_cvtps_pd(zmm1))
    rax = &var_38
    rbx = 2
else
    zmm2[0] = zmm2[0] + zmm1[0]
    zmm1[0] = zmm1[0] - zmm2[0]
    _mm_cvtps_pd(zmm2)
    sub_140a2e390(&var_28, u"%.2fs..%.2fs", _mm_cvtps_pd(_mm_max_ss(zmm1[0], 0)))
    rax = &var_28
    rbx = 1

int16_t* rsi = *rax
*rax = 0
int32_t rbp = rax[1].d
rax[1] = 0

if ((rbx.b & 2) != 0)
    int64_t rcx_2 = var_38
    rbx &= 0xfffffffd
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

if ((rbx.b & 1) != 0)
    int64_t rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

int16_t* const r8_2 = &data_142d40450

if (rbp != 0)
    r8_2 = rsi

sub_140a2e390(arg2, u"tick every %s", r8_2)

if (rsi != 0)
    sub_140a74f90(rsi)

return arg2
