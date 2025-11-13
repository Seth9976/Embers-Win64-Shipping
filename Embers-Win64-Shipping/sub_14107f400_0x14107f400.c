// 函数: sub_14107f400
// 地址: 0x14107f400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rcx = data_1439b70f8

if (arg7 != 1)
    rcx = data_1439b70f0

void* rax_3 = (*(*rcx + 0x10))(rcx)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg6))
int32_t rcx_1 = *(rax_3 + 0x14)
zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o(*(rax_3 + 0x18))).d
uint128_t zmm15 = _mm_cvtepi32_ps(zx.o(rcx_1))
int32_t var_164 = zmm1.d
uint128_t zmm12
zmm12.d = _mm_cvtepi32_ps(zx.o(arg5)).d f/ zmm15.d
uint128_t zmm6 = zx.o(0)
int128_t zmm10 = *(arg3 + 0x11ec)
int64_t var_178 = (*(arg3 + 0x1598)).q
uint64_t rsi = zx.q(divs.dp.d(sx.q(data_143ec4fdc.d), arg5))
int32_t var_168 = 0x3f800000

if ((*(arg3 + 0x11f0) & 1) == 0)
    zmm10.d = zmm10.d f* 0.00249999994f
    var_168 = 0

TEB* gsbase
void* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143cda914 s> *(rbx_1 + 0x14))
    _Init_thread_header(&data_143cda914)
    int32_t rax_14 = data_143cda914
    
    if (rax_14 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)
        rax_14 = data_143cda914
    
    if (rax_14 s> *(rbx_1 + 0x14))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)

uint128_t zmm13
zmm13.d = float.s(rsi)
uint128_t zmm0_1
zmm0_1.d = logf(zmm13.d).d f* data_143cda910
uint128_t zmm0_2
zmm0_2.d = powf((*(arg3 + 0x1210)).d, zmm0_1.d).d f* 0.25f
float zmm9[0x4] = *(arg3 + 0x11e8)
zmm10.d = zmm10.d f* zmm0_2.d
uint128_t zmm14 = zx.o(*(arg3 + 0x260) - *(arg3 + 0x258))
bool cond:2 = zmm9[0] >= 0f
zmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x264) - *(arg3 + 0x25c)))
zmm14.d = _mm_cvtepi32_ps(zmm14).d f/ zmm0_2.d
int64_t var_160
var_160.d = (*(arg3 + 0x280)).d

if (cond:2)
    zmm9 = _mm_min_ss(zmm9[0], 0x3f800000)
else
    zmm9 = zx.o(0)

float zmm8[0x4] = 0x3f800000
int64_t* rcx_4 = *(arg3 + 8)
float temp0_10[0x4] = _mm_max_ss((*(arg3 + 0x11f8))[0], 0x3f800000)
float zmm4[0x4] = zx.o(0)
float zmm5[0x4] = zx.o(0)
zmm8[0] = 1f / temp0_10[0]

if (rcx_4 != 0)
    zmm5 = zx.o(0)
    zmm0_2.d = 1f f/ zmm15.d
    zmm5[0] = float.s(zx.q((*(*rcx_4 + 0x60))(rcx_4)) & 7)
    zmm4 = zmm5
    zmm5[0] = zmm5[0] * 7.51999998f
    zmm4[0] = zmm4[0] * 2.48000002f
    zmm5[0] = zmm5[0] f* zmm0_2.d
    zmm4[0] = zmm4[0] f* zmm0_2.d

zmm0_2 = *(data_143e2de38 + 4)

if (not(zmm0_2.d f< 0f))
    zmm6 = __minss_xmmss_memss(zmm0_2.d, 0x42c80000)

zmm0_2 = __maxss_xmmss_memss((*(arg3 + 0x11fc)).d, 0x38d1b717)
zmm1.d = (*(arg3 + 0x1204)).d f* 0.00100000005f
int32_t rax_24 = *(arg3 + 0x15a0) - *(arg3 + 0x1598)
float zmm2 = *(arg3 + 0x11e4)
float zmm3[0x4] = *(arg3 + 0x1200)
float temp0_13[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_13[0] = zmm1.d
_mm_shuffle_ps(zmm12, zmm12, 0xe1)
zmm1 = *(arg3 + 0x120c)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
int128_t zmm7
zmm7.d = 1f f/ zmm0_2.d
int32_t var_180 = 0
int32_t var_188 = 6
zmm12.d = var_164.d
float temp0_16[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
zmm0_2 = *(arg3 + 0x1214)
temp0_15[0] = zmm7.d
zmm0_2.d = zmm0_2.d f/ zmm13.d
float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x27)
temp0_16[0] = zmm5[0]
temp0_17[0] = zmm2
_mm_shuffle_ps(zmm13, zmm13, 0xe1)
zmm13.d = zmm0_2.d
float var_158[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x39)
zmm3 = zx.o(0)
zmm3[0] = float.s(rax_24)
int32_t rax_26 = *(arg3 + 0x15a4) - *(arg3 + 0x159c)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc6)
float temp0_21[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_20[0] = zmm9[0]
_mm_shuffle_ps(zmm13, zmm13, 0xc6)
zmm13.d = var_168.d
_mm_shuffle_ps(zmm12, zmm12, 0xc6)
zmm12.d = zmm10.d
float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x27)
temp0_24[0] = var_160.d.d
_mm_shuffle_ps(zmm13, zmm13, 0x27)
zmm0_2 = *(arg3 + 0x11f4)
zmm13.d = zmm1.d
temp0_10[0] = temp0_10[0] f- zmm0_2.d
_mm_shuffle_ps(zmm12, zmm12, 0x27)
zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0x39)
zmm1.d = float.s(divs.dp.d(sx.q(var_178.d), rsi.d))
temp0_10[0] = temp0_10[0] * zmm8[0]
zmm12.d = zmm14.d
float temp0_28[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
temp0_28[0] = temp0_10[0]
zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0x39)
float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc6)
temp0_30[0] = zmm6.d
float temp0_31[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x39)
float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x27)
temp0_32[0] = zmm0_2.d
uint128_t var_148 = zmm12
float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x39)
zmm0_2.d = float.s(rax_26)
uint128_t var_138 = zmm13
temp0_21[0] = zmm0_2.d
float var_128[0x4] = temp0_31
float temp0_34[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
temp0_34[0] = zmm1.d
float var_118[0x4] = temp0_33
float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x27)
temp0_35[0] = float.s(divs.dp.d(sx.q(var_178:4.d), rsi.d))
float var_108[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x39)
uint64_t result = sub_14077c9b0(arg2, &arg_20, arg1, &var_158, var_188, var_180)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
