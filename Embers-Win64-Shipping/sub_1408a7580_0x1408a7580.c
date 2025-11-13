// 函数: sub_1408a7580
// 地址: 0x1408a7580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = arg5
uint128_t zmm6 = arg4
uint128_t zmm1
zmm1.d = arg3.d f+ zmm6.d
arg4 = zx.o(0)
uint128_t zmm8 = arg3
zmm1.d = zmm1.d f+ zmm5.d
zmm1.d = zmm1.d f* 0.333333343f
uint32_t rbp = zx.d(arg2)
uint128_t zmm0
zmm0.d = zmm1.d f+ zmm8.d
bool cond:0 = zmm0.d f< 0f
int32_t r15 = int.d(zmm0.d)
zmm0 = zmm1
zmm1.d = zmm1.d f+ zmm5.d
zmm0.d = zmm0.d f+ zmm6.d

if (cond:0)
    r15 -= 1

int32_t r14 = int.d(zmm0.d)
int32_t rsi = int.d(zmm1.d)

if (zmm0.d f< 0f)
    r14 -= 1

zmm0 = _mm_cvtepi32_ps(zx.o(r15))

if (zmm1.d f< 0f)
    rsi -= 1

zmm1 = _mm_cvtepi32_ps(zx.o(r14))
arg3.d = _mm_cvtepi32_ps(zx.o(rsi + r14 + r15)).d f* 0.166666672f
zmm0.d = zmm0.d f- arg3.d
zmm1.d = zmm1.d f- arg3.d
zmm8.d = zmm8.d f- zmm0.d
zmm6.d = zmm6.d f- zmm1.d
zmm0.d = _mm_cvtepi32_ps(zx.o(rsi)).d f- arg3.d
zmm5.d = zmm5.d f- zmm0.d
int32_t rdx
int32_t rbx
int32_t r8
int32_t r9
int32_t r10
int32_t r11

if (zmm8.d f< zmm6.d)
    r8 = 0
    
    if (zmm6.d f>= zmm5.d)
        rdx = 0
        
        if (zmm8.d f>= zmm5.d)
            rbx = 1
            r10 = 0
            r11 = 1
            r9 = 1
        else
            r11 = 1
            rbx = 0
            r9 = 1
            r10 = 1
    else
        rdx = 1
        r11 = 0
        rbx = 0
        r9 = 1
        r10 = 1
else if (not(zmm6.d f< zmm5.d))
    r8 = 1
    rdx = 0
    r10 = 0
    r9 = 1
    r11 = 0
    rbx = 1
else if (zmm8.d f< zmm5.d)
    rdx = 1
    r8 = 0
    r9 = 0
    r10 = 1
    r11 = 0
    rbx = 1
else
    r8 = 1
    rdx = 0
    r9 = 0
    r10 = 1
    r11 = 0
    rbx = 1

zmm0.d = float.s(r8)
uint128_t zmm13
zmm13.d = zmm8.d f- zmm0.d
zmm0.d = float.s(r11)
zmm13.d = zmm13.d f+ 0.166666672f
uint128_t zmm7
zmm7.d = zmm6.d f- zmm0.d
zmm0.d = float.s(rdx)
zmm7.d = zmm7.d f+ 0.166666672f
uint128_t zmm14
zmm14.d = zmm5.d f- zmm0.d
zmm0.d = float.s(rbx)
zmm14.d = zmm14.d f+ 0.166666672f
uint128_t zmm11
zmm11.d = zmm8.d f- zmm0.d
zmm0.d = float.s(r9)
zmm11.d = zmm11.d f+ 0.333333343f
arg3.d = zmm6.d f- zmm0.d
zmm0.d = float.s(r10)
arg3.d = arg3.d f+ 0.333333343f
uint128_t zmm12
zmm12.d = zmm5.d f- zmm0.d
zmm1.d = zmm6.d f- 0.5f
uint128_t zmm9
zmm9.d = zmm8.d f- 0.5f
uint128_t zmm10
zmm10.d = zmm5.d f- 0.5f
zmm0.d = zmm8.d f* zmm8.d
arg5 = zmm1.d
zmm12.d = zmm12.d f+ 0.333333343f
zmm1.d = zmm5.d f* zmm5.d
int128_t zmm15
zmm15.d = 0.600000024f f- zmm0.d
zmm0.d = zmm6.d f* zmm6.d
zmm15.d = zmm15.d f- zmm0.d
zmm15.d = zmm15.d f- zmm1.d

if (zmm15.d f>= 0f)
    zmm15.d = zmm15.d f* zmm15.d
    zmm15.d = zmm15.d f* zmm15.d
    uint64_t rcx_4 = zx.q(*(zx.q(
        zx.d(*(zx.q(zx.d(*(zx.q(zx.d(rsi.b) + rbp) + arg1)) + zx.d(r14.b)) + arg1)) + zx.d(r15.b))
        + arg1 + 0x200))
    zmm6.d = zmm6.d f* *((rcx_4 << 2) + 0x142dfcdf0)
    zmm8.d = zmm8.d f* *((rcx_4 << 2) + 0x142dfcdc0)
    zmm5.d = zmm5.d f* *((rcx_4 << 2) + 0x142dfce20)
    zmm6.d = zmm6.d f+ zmm8.d
    zmm6.d = zmm6.d f+ zmm5.d
    zmm6.d = zmm6.d f* zmm15.d
else
    zmm6 = zx.o(0)

zmm0.d = zmm13.d f* zmm13.d
zmm1.d = zmm7.d f* zmm7.d
zmm5.d = 0.600000024f f- zmm0.d
zmm0.d = zmm14.d f* zmm14.d
zmm5.d = zmm5.d f- zmm1.d
zmm5.d = zmm5.d f- zmm0.d

if (zmm5.d f>= 0f)
    zmm5.d = zmm5.d f* zmm5.d
    zmm5.d = zmm5.d f* zmm5.d
    uint64_t rdx_4 = zx.q(
        zx.d(*(zx.q(zx.d(*(zx.q(zx.d(rsi.b + rdx.b) + rbp) + arg1)) + zx.d(r14.b + r11.b)) + arg1))
        + zx.d(r15.b + r8.b))
    uint64_t rcx_9 = zx.q(*(rdx_4 + arg1 + 0x200))
    zmm7.d = zmm7.d f* *((rcx_9 << 2) + 0x142dfcdf0)
    zmm13.d = zmm13.d f* *((rcx_9 << 2) + 0x142dfcdc0)
    zmm14.d = zmm14.d f* *((rcx_9 << 2) + 0x142dfce20)
    zmm7.d = zmm7.d f+ zmm13.d
    zmm7.d = zmm7.d f+ zmm14.d
    zmm7.d = zmm7.d f* zmm5.d
else
    zmm7 = zx.o(0)

zmm0.d = zmm11.d f* zmm11.d
zmm1.d = arg3.d f* arg3.d
zmm5.d = 0.600000024f f- zmm0.d
zmm0.d = zmm12.d f* zmm12.d
zmm5.d = zmm5.d f- zmm1.d
zmm5.d = zmm5.d f- zmm0.d

if (zmm5.d f>= 0f)
    zmm5.d = zmm5.d f* zmm5.d
    zmm5.d = zmm5.d f* zmm5.d
    uint64_t rdx_8 = zx.q(
        zx.d(*(zx.q(zx.d(*(zx.q(zx.d(rsi.b + r10.b) + rbp) + arg1)) + zx.d(r14.b + r9.b)) + arg1))
        + zx.d(r15.b + rbx.b))
    uint64_t rcx_14 = zx.q(*(rdx_8 + arg1 + 0x200))
    arg3.d = arg3.d f* *((rcx_14 << 2) + 0x142dfcdf0)
    zmm11.d = zmm11.d f* *((rcx_14 << 2) + 0x142dfcdc0)
    zmm12.d = zmm12.d f* *((rcx_14 << 2) + 0x142dfce20)
    arg3.d = arg3.d f+ zmm11.d
    arg3.d = arg3.d f+ zmm12.d
    arg3.d = arg3.d f* zmm5.d
else
    arg3 = zx.o(0)

zmm5 = arg5
zmm0.d = zmm9.d f* zmm9.d
zmm1.d = zmm5.d f* zmm5.d
float zmm4 = 0.600000024f f- zmm0.d
zmm0.d = zmm10.d f* zmm10.d
zmm4 = zmm4 f- zmm1.d f- zmm0.d

if (not(zmm4 < 0f))
    zmm4 = zmm4 * zmm4
    uint64_t rcx_19 = zx.q(*(zx.q(
        zx.d(*(zx.q(zx.d(*(zx.q(zx.d(rsi.b + 1) + rbp) + arg1)) + zx.d(r14.b + 1)) + arg1))
        + zx.d(r15.b + 1)) + arg1 + 0x200))
    arg4.d = zmm5.d f* *((rcx_19 << 2) + 0x142dfcdf0)
    zmm9.d = zmm9.d f* *((rcx_19 << 2) + 0x142dfcdc0)
    zmm10.d = zmm10.d f* *((rcx_19 << 2) + 0x142dfce20)
    arg4.d = arg4.d f+ zmm9.d
    arg4.d = arg4.d f+ zmm10.d
    arg4.d = arg4.d f* zmm4 * zmm4

arg3.d = arg3.d f+ arg4.d
zmm6.d = zmm6.d f+ zmm7.d
arg3.d = arg3.d f+ zmm6.d
arg3.d = arg3.d f* 32f
return arg3
