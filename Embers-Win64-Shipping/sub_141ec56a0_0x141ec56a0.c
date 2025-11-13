// 函数: sub_141ec56a0
// 地址: 0x141ec56a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8 = arg3
int64_t var_48
sub_140a2e390(&var_48, u"Total hitch count:  %i", zx.q(arg2))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_2 = var_48

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

uint128_t zmm6 = zx.o(0)
uint128_t zmm7

if (arg2 s> 0)
    zmm7.q = 0x3ff0000000000000 f/ _mm_cvtepi32_pd(zx.q(arg2))
uint64_t r8_1 = zx.q(*(arg1[1] + 0x114))
_mm_cvtepi32_pd(zx.q(r8_1.d))
sub_140a2e390(&var_48, u"Hitch frames bound by game thread:  %i  (%0.1f percent)", r8_1)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_5 = var_48

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

uint64_t r8_2 = zx.q(*(arg1[1] + 0x118))
_mm_cvtepi32_pd(zx.q(r8_2.d))
sub_140a2e390(&var_48, u"Hitch frames bound by render thread:  %i  (%0.1f percent)", r8_2)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_8 = var_48

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

uint64_t r8_3 = zx.q(*(arg1[1] + 0x11c))
_mm_cvtepi32_pd(zx.q(r8_3.d))
sub_140a2e390(&var_48, u"Hitch frames bound by RHI thread:  %i  (%0.1f percent)", r8_3)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_11 = var_48

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

uint64_t r8_4 = zx.q(*(arg1[1] + 0x120))
_mm_cvtepi32_pd(zx.q(r8_4.d))
sub_140a2e390(&var_48, u"Hitch frames bound by GPU:  %i  (%0.1f percent)", r8_4)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_14 = var_48

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

void* rax_9 = arg1[1]
double zmm1 = *(rax_9 + 0x28)

if (zmm1 <= 0.0)
    arg3 = zx.o(0)
else
    arg3.q = _mm_cvtepi32_pd(zx.q(*(rax_9 + 0x60))).q f* 60.0 / zmm1

sub_140a2e390(&var_48, u"Hitches / min:  %.2f", arg3.q)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_17 = var_48

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

sub_140a2e390(&var_48, u"Time spent in hitch buckets:  %.2f s", zmm8.q)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_20 = var_48

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

void* rax_12 = arg1[1]
int64_t zmm0_3 = *(rax_12 + 0x28)

if (not(zmm0_3 f<= 0.0))
    zmm6.q = _mm_cvtepi32_pd(zx.q(*(rax_12 + 0x60))).q f/ zmm0_3

sub_140a2e390(&var_48, u"Avg. hitch frame length:  %.2f s", zmm6.q)
int64_t result = (*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_23 = var_48

if (rcx_23 == 0)
    return result

return sub_140a74f90(rcx_23)
