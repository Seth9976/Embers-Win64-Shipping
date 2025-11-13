// 函数: sub_1408a7300
// 地址: 0x1408a7300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1
zmm1.d = arg3.d f+ arg4.d
int32_t zmm4 = (zx.o(0)).d
uint128_t zmm9 = arg3
uint32_t r11 = zx.d(arg2)
zmm1.d = zmm1.d f* 0.366025418f
uint128_t zmm0 = zmm1
zmm1.d = zmm1.d f+ arg4.d
zmm0.d = zmm0.d f+ zmm9.d
int32_t r9 = int.d(zmm1.d)
int32_t r10 = int.d(zmm0.d)

if (zmm0.d f< 0f)
    r10 -= 1

zmm0 = _mm_cvtepi32_ps(zx.o(r10))

if (zmm1.d f< 0f)
    r9 -= 1

zmm1 = _mm_cvtepi32_ps(zx.o(r9))
arg3.d = _mm_cvtepi32_ps(zx.o(r9 + r10)).d f* 0.211324871f
zmm0.d = zmm0.d f- arg3.d
zmm1.d = zmm1.d f- arg3.d
zmm9.d = zmm9.d f- zmm0.d
uint128_t zmm6
zmm6.d = arg4.d f- zmm1.d
zmm9.d f- zmm6.d
zmm1.d = zmm9.d f* zmm9.d
uint128_t zmm7
zmm7.d = zmm9.d f- 0.577350259f
uint128_t zmm10
zmm10.d = zmm6.d f- 0.577350259f
int32_t rbx
rbx.b = zmm9.d f> zmm6.d
int32_t rdi
rdi.b = zmm9.d f<= zmm6.d
uint128_t zmm8
zmm8.d = zmm9.d f- _mm_cvtepi32_ps(zx.o(rbx)).d
zmm8.d = zmm8.d f+ 0.211324871f
arg3.d = zmm6.d f- _mm_cvtepi32_ps(zx.o(rdi)).d
zmm0.d = zmm6.d f* zmm6.d
arg3.d = arg3.d f+ 0.211324871f
float zmm5 = 0.5f f- zmm1.d f- zmm0.d

if (zmm5 >= 0f)
    zmm5 = zmm5 * zmm5
    uint64_t rcx_2 =
        zx.q(*(zx.q(zx.d(*(zx.q(zx.d(r9.b) + r11) + arg1)) + zx.d(r10.b)) + arg1 + 0x200))
    zmm6.d = zmm6.d f* *((rcx_2 << 2) + 0x142dfcdf0)
    zmm9.d = zmm9.d f* *((rcx_2 << 2) + 0x142dfcdc0)
    zmm6.d = zmm6.d f+ zmm9.d
    zmm6.d = zmm6.d f* zmm5 * zmm5
else
    zmm6 = zx.o(0)

zmm0.d = zmm8.d f* zmm8.d
zmm1.d = arg3.d f* arg3.d
zmm5 = 0.5f f- zmm0.d f- zmm1.d

if (zmm5 >= 0f)
    zmm5 = zmm5 * zmm5
    uint64_t rcx_6 = zx.q(*
        (zx.q(zx.d(*(zx.q(zx.d(rdi.b + r9.b) + r11) + arg1)) + zx.d(rbx.b + r10.b)) + arg1 + 0x200))
    arg3.d = arg3.d f* *((rcx_6 << 2) + 0x142dfcdf0)
    zmm8.d = zmm8.d f* *((rcx_6 << 2) + 0x142dfcdc0)
    arg3.d = arg3.d f+ zmm8.d
    arg3.d = arg3.d f* zmm5 * zmm5
else
    arg3 = zx.o(0)

zmm0.d = zmm7.d f* zmm7.d
zmm1.d = zmm10.d f* zmm10.d
arg4.d = 0.5f f- zmm0.d
arg4.d = arg4.d f- zmm1.d

if (not(arg4.d f< 0f))
    arg4.d = arg4.d f* arg4.d
    arg4.d = arg4.d f* arg4.d
    uint64_t rcx_10 =
        zx.q(*(zx.q(zx.d(*(zx.q(zx.d(r9.b + 1) + r11) + arg1)) + zx.d(r10.b + 1)) + arg1 + 0x200))
    zmm7.d = zmm7.d f* *((rcx_10 << 2) + 0x142dfcdc0)
    zmm4 = (zmm10.d f* *((rcx_10 << 2) + 0x142dfcdf0) f+ zmm7.d) f* arg4.d

arg3.d = arg3.d f+ zmm6.d
arg3.d = arg3.d f+ zmm4
arg3.d = arg3.d f* 70f
return arg3
