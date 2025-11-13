// 函数: sub_141386d80
// 地址: 0x141386d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_28 = data_142f2cb40
void* rax = sub_1423de050()
int32_t r8_3 = *(arg1 + 8) + 0x3f
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14) - 0x33))
sub_142409910(arg2, _mm_cvtepi32_ps(zx.o(r8_3)), zmm2, u"Good", rax, &var_28, &data_14399f5e0)
int32_t rbx_1 = *(arg1 + 0x10) - *(arg1 + 8)
var_28 = data_142f2cb40
void* rax_1 = sub_1423de050()
int32_t rdx = *(arg1 + 8)
int32_t rcx_2 = *(arg1 + 0x14) - 0x33
uint128_t zmm0_1
zmm0_1.d = _mm_cvtepi32_ps(zx.o(rbx_1)).d f* -0.269521415f
uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(rcx_2))
sub_142409910(arg2, _mm_cvtepi32_ps(zx.o(rdx - int.d(zmm0_1.d) + 0x3f)), zmm2_1, &data_142f6c2c0, 
    rax_1, &var_28, &data_14399f5e0)
var_28 = data_142f2cb40
void* rax_2 = sub_1423de050()
int32_t rcx_8 = *(arg1 + 0x10) - 0xa2
uint128_t zmm2_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14) - 0x33))
sub_142409910(arg2, _mm_cvtepi32_ps(zx.o(rcx_8)), zmm2_2, Extremely bad", rax_2, &var_28, 
    &data_14399f5e0)
var_28 = data_142f2cb40
void* rax_3 = sub_1423de050()
int32_t rcx_13 = *(arg1 + 8) + 0x3e
uint128_t zmm2_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14) - 0x57))
sub_142409910(arg2, _mm_cvtepi32_ps(zx.o(rcx_13)), zmm2_3, &(*RGBXYZF10|")[8], rax_3, &var_28, 
    &data_14399f5e0)
void* rax_4 = data_143f5b298
int32_t zmm0_4

if (*(*(arg1 + 0x20) + 0x1548) == 1)
    zmm0_4 = *(rax_4 + 0x634)
else
    zmm0_4 = *(rax_4 + 0x630)

sub_140a2e390(&var_28, u"MaxShaderComplexityCount=%d", zx.q(int.d(zmm0_4)))
int16_t* const rbx_2 = &data_142d40450
bool cond:0 = var_28:8.d != 0
uint128_t var_18 = data_142f2cb40

if (cond:0)
    rbx_2 = var_28.q

void* rax_5 = sub_1423de050()
uint128_t zmm1_4 = zx.o(*(arg1 + 0x10) - 0x104)
uint128_t zmm2_4 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14) - 0x58))
uint64_t result =
    sub_142409910(arg2, _mm_cvtepi32_ps(zmm1_4), zmm2_4, rbx_2, rax_5, &var_18, &data_14399f5e0)

if (var_28.q == 0)
    return result

return sub_140a74f90(var_28.q)
