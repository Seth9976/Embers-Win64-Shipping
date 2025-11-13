// 函数: sub_141e19980
// 地址: 0x141e19980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1.d
uint128_t var_28 = arg5
uint128_t var_38 = arg6
uint128_t zmm8
uint128_t var_48 = zmm8
uint128_t zmm9
uint128_t var_58 = zmm9
uint128_t zmm10
uint128_t var_68 = zmm10
uint128_t zmm11
uint128_t var_78 = zmm11
uint128_t zmm12
uint128_t var_88 = zmm12
uint128_t zmm13 = arg1
int128_t zmm14 = zx.o(0)
char rcx

rcx = arg9.d f!= 0f ? 0 : 1

int32_t rax = arg4[1].d
uint64_t var_108
uint64_t var_f8
uint64_t* rax_1
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
float zmm4
uint128_t zmm5

if (arg3 == 0)
    int32_t var_f0_1 = rax
    rax_1 = &var_f8
    var_f8 = *arg4
else
    zmm13 = *(arg3 + 0x10)
    zmm12 = *(arg3 + 0x14)
    zmm9 = *(arg3 + 0x18)
    zmm1 = zx.o(*arg4)
    arg5 = *(arg3 + 0x1c)
    var_108 = zmm1.q
    zmm4 = var_108.d
    zmm11 = rax
    rax_1 = &var_108
    zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm1 = zmm12
    arg1.d = zmm9.d f* zmm8.d
    zmm10.d = zmm12.d f* zmm11.d
    arg6.d = zmm9.d f* zmm4
    zmm10.d = zmm10.d f- arg1.d
    zmm5.d = zmm13.d f* zmm8.d
    arg1.d = zmm13.d f* zmm11.d
    zmm10.d = zmm10.d f+ zmm10.d
    arg6.d = arg6.d f- arg1.d
    arg1.d = zmm12.d f* zmm4
    zmm12.d = zmm12.d f* zmm10.d
    zmm5.d = zmm5.d f- arg1.d
    zmm2.d = arg5.d f* zmm10.d
    arg1 = zmm9
    arg6.d = arg6.d f+ arg6.d
    zmm9.d = zmm9.d f* zmm10.d
    zmm5.d = zmm5.d f+ zmm5.d
    zmm2.d = zmm2.d f+ zmm4
    arg1.d = arg1.d f* arg6.d
    zmm3.d = arg5.d f* arg6.d
    zmm1.d = zmm1.d f* zmm5.d
    arg5.d = arg5.d f* zmm5.d
    zmm3.d = zmm3.d f+ zmm8.d
    zmm1.d = zmm1.d f- arg1.d
    arg1 = zmm13
    zmm13.d = zmm13.d f* arg6.d
    arg1.d = arg1.d f* zmm5.d
    arg5.d = arg5.d f+ zmm11.d
    zmm13.d = zmm13.d f- zmm12.d
    zmm1.d = zmm1.d f+ zmm2.d
    zmm9.d = zmm9.d f- arg1.d
    zmm13.d = zmm13.d f+ arg5.d
    var_108.d = zmm1.d
    zmm9.d = zmm9.d f+ zmm3.d
    int32_t var_100_2 = zmm13.d
    zmm13 = arg_8
    var_108:4.d = zmm9.d

zmm11 = zx.o(*rax_1)
int32_t rax_2 = rax_1[1].d
void* rsi = arg7
var_f8 = zmm11.q
zmm10 = *(rsi + 0x14)
zmm12 = *(rsi + 0x18)
zmm1 = zx.o(*arg8)
zmm2 = *(rsi + 0x10)
zmm5 = *(rsi + 0x1c)
int32_t rax_4 = arg8[1].d
var_108 = zmm1.q
zmm3 = var_108.d
arg6 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
arg1.d = zmm12.d f* arg6.d
zmm9 = rax_4
zmm8.d = zmm10.d f* zmm9.d
arg5.d = zmm12.d f* zmm3.d
zmm8.d = zmm8.d f- arg1.d
arg1.d = zmm2.d f* zmm9.d
zmm8.d = zmm8.d f+ zmm8.d
arg5.d = arg5.d f- arg1.d
arg1.d = zmm10.d f* zmm3.d
zmm1.d = zmm5.d f* zmm8.d
zmm4 = zmm2.d f* arg6.d f- arg1.d
arg1 = zmm10
zmm10.d = zmm10.d f* zmm8.d
arg5.d = arg5.d f+ arg5.d
zmm1.d = zmm1.d f+ zmm3.d
zmm4 = zmm4 + zmm4
zmm2.d = zmm5.d f* arg5.d
arg1.d = arg1.d f* zmm4
zmm2.d = zmm2.d f+ arg6.d
zmm5.d = zmm5.d f* zmm4
arg8.d = arg1.d
arg1.d = zmm12.d f* arg5.d
zmm5.d = zmm5.d f+ zmm9.d
zmm12.d = zmm12.d f* zmm8.d
uint128_t zmm15
zmm15.d = arg8.d.d f- arg1.d
zmm3.d = zmm15.d f+ zmm1.d
zmm15 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
zmm1 = *(rsi + 0x10)
arg1 = zmm1
zmm1.d = zmm1.d f* arg5.d
arg5 = var_f8.d
arg1.d = arg1.d f* zmm4
zmm1.d = zmm1.d f- zmm10.d
arg8.d = zmm3.d
zmm10 = rax_2
zmm12.d = zmm12.d f- arg1.d
zmm9.d = zmm3.d f* zmm15.d
zmm1.d = zmm1.d f+ zmm5.d
zmm12.d = zmm12.d f+ zmm2.d
arg7.d = zmm1.d
arg1.d = zmm1.d f* zmm15.d
zmm8.d = zmm1.d f* arg5.d
arg6.d = zmm12.d f* zmm10.d
arg6.d = arg6.d f- arg1.d
arg1.d = zmm3.d f* zmm10.d
zmm8.d = zmm8.d f- arg1.d
arg1.d = zmm12.d f* arg5.d
zmm2.d = zmm8.d f* zmm8.d
zmm9.d = zmm9.d f- arg1.d
arg1.d = arg6.d f* arg6.d
zmm2.d = zmm2.d f+ arg1.d
zmm1.d = zmm9.d f* zmm9.d
zmm2.d = zmm2.d f+ zmm1.d

if (zmm2.d f== 1f)
    goto label_141e19d6d

int32_t var_100_4

if (zmm2.d f>= 9.99999994e-09f)
    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
    zmm3.d = zmm2.d f* 0.5f
    arg1.d = zmm5.d f* zmm5.d
    zmm1.d = zmm3.d f* arg1.d
    zmm2.d = 0.5f f- zmm1.d
    arg1.d = zmm5.d f* zmm2.d
    zmm5.d = zmm5.d f+ arg1.d
    zmm1.d = zmm5.d f* zmm5.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm4 = 0.5f f- zmm3.d
    zmm3 = arg8.d
    arg1.d = zmm5.d f* zmm4
    zmm5.d = zmm5.d f+ arg1.d
    arg6.d = arg6.d f* zmm5.d
    zmm8.d = zmm8.d f* zmm5.d
    zmm9.d = zmm9.d f* zmm5.d
label_141e19d6d:
    var_100_4 = zmm9.d
    var_108:4.d = zmm8.d
    var_108.d = arg6.d
else
    var_108.d = data_143dbb1f8.d
    var_100_4 = data_143dbb200.d
    var_108:4.d = data_143dbb1fc.d

zmm10.d = zmm10.d f* arg7.d
arg5.d = arg5.d f* zmm3.d
zmm12.d = zmm12.d f* zmm15.d
arg5.d = arg5.d f+ zmm12.d
arg5.d = arg5.d f+ zmm10.d

if (arg5.d f>= 0f)
    arg1 = 0xbf800000
    arg5 = _mm_min_ss(arg5.d, 0x3f800000)
    
    if (not(arg5.d f< -1f))
        arg1 = _mm_min_ss(arg5.d, 0x3f800000)
else
    arg1 = _mm_min_ss(zx.o(0).d, 0x3f800000)

zmm15 = arg9

if (rcx == 0)
    zmm1.d = zmm15.d f* 0.0174532924f
    zmm2.d = acosf(arg1.d).d f- zmm1.d
    zmm2.d = zmm2.d f/ zmm13.d
else
    zmm2 = arg10

if (not(zmm15.d f> 0f))
    zmm14 = 0xff7fffff

uint64_t var_d8 = var_108
int32_t var_c0 = 0x7f7fffff
int32_t var_c8 = zmm2.d
int32_t var_c4 = zmm14.d
void* var_e8 = arg3
void* var_e0 = rsi
int32_t var_d0 = var_100_4
int32_t var_cc = 0
int512_t zmm6
int512_t zmm7
zmm6, zmm7 = sub_141e32730(&var_e8)
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_6 = (rdi_1 + 1).d
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_1405c4f50(arg2)

int64_t result = *arg2
int64_t rcx_4 = rdi_1 * 6
zmm6.o = var_28
zmm7.o = var_38
*(result + (rcx_4 << 3)) = var_e8.o
*(result + (rcx_4 << 3) + 0x10) = var_d8.o
*(result + (rcx_4 << 3) + 0x20) = var_c8.o
return result
