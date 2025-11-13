// 函数: sub_14138dbd0
// 地址: 0x14138dbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
uint128_t zmm7 = *arg4
void*** r15 = zmm7.q
uint128_t var_178 = zmm7
int72_t var_168 = arg4[1].9
char var_1b8
float _X
uint128_t var_128
uint128_t var_108
uint128_t var_f8
int64_t rdx
int32_t rbx_1
float _X_1

if (r15 == 0)
label_14138dcaa:
    void* rax_4 = arg4[2].q
    var_128 = *(rax_4 + 0x30)
    uint128_t var_118 = *(rax_4 + 0x40)
    var_108 = *(rax_4 + 0x50)
    var_108:8.w = 1
    uint128_t var_e8_1 = *(rax_4 + 0x70)
    var_f8:8.w = 0
    var_e8_1:8.b = 1
    var_f8:4.d = ((*(rax_4 + 0x60)):4.d & 0xfffeffff) | 1
    int32_t rax_9
    
    if (*(arg4 + 0x48) != 0)
        rbx_1 = arg3[0x4b].d
        _X_1 = arg3[0x4c].d
        var_118:4.d = arg3[0x4c].d
        var_118:8.d = *(arg3 + 0x264)
        var_178:0xc.d = *(arg3 + 0x25c)
        rax_9 = *(arg3 + 0x264)
    else
        sub_14141fde0(arg3, &_X)
        sub_1419a97d0(&_X, &var_118:4)
        rbx_1 = data_143dbb180.d
        _X_1 = _X
        var_178:0xc.d = data_143dbb180:4.d
        int32_t var_1a4
        rax_9 = var_1a4
    
    var_168:4.d = rax_9
    var_f8.d |= data_143ed33b8
    var_168.d = _X_1
    var_178:8.d = rbx_1
    void*** rax_14 = sub_141188e50(arg2, &var_128, u"Upscale", 0)
    var_178.q = rax_14
    r15 = rax_14
    var_1b8 = 2
    rdx = var_178:8.q
else
    _X_1 = var_168.d
    rbx_1 = _mm_bsrli_si128(zmm7, 8).d
    var_178:8.d = rbx_1
    
    if (_X_1 != rbx_1)
        var_1b8 = var_168:8.b
        rdx = var_178:8.q
    else
        rdx = _mm_bsrli_si128(zmm7, 8).q
        
        if ((var_168.q u>> 0x20).d == (rdx u>> 0x20).d)
            goto label_14138dcaa
        
        var_1b8 = var_168:8.b

uint128_t zmm1 = arg4[2]
uint128_t zmm9 = zx.o(*(arg4 + 0x3c))
void* rcx_5 = zmm1.q
uint64_t var_188 = arg4[3].q
uint128_t temp0_3 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_4 = _mm_bsrli_si128(zmm1, 8)
int32_t var_158 = *(rcx_5 + 0x44)
int32_t var_154 = *(rcx_5 + 0x48)
uint32_t var_14c = (temp0_3.q u>> 0x20).d
uint32_t var_144 = (var_188 u>> 0x20).d
int32_t var_150 = temp0_4.d
int32_t var_140 = *(r15 + 0x44)
int32_t var_13c = r15[9].d
uint32_t var_12c = (var_168.q u>> 0x20).d
*(arg4 + 0x44)
int32_t var_138 = rbx_1
uint32_t var_134 = (rdx u>> 0x20).d
uint64_t var_198 = zmm9.q
zmm9 = _mm_max_ss(zmm9.d, 0)
int64_t* rdx_5 = *(arg2 + 8)
bool var_1b7 = zmm9.d f> 0.00999999978f
int64_t* rax_27 = sub_14081d830(0x1c0, rdx_5, 1, 0)
int64_t* rbx_2 = rax_27

if (rax_27 == 0)
    rbx_2 = nullptr
else
    *rax_27 = 0
    __builtin_memset(&rax_27[0x1e], 0, 0x20)
    sub_14117af20(&rax_27[0x26])

memset(rbx_2, 0, 0x130)
memset(&rbx_2[0x28], 0, 0x80)
char var_1a0 = var_1b8
_X.q = r15
int16_t var_19f = 0
int32_t var_19c = 0xffffffff
*(rbx_2 + 0x130) = _X.o
int32_t* rax_29 = sub_141455b70(&var_128, &var_158)
rbx_2[2] = *rax_29
rbx_2[3] = *(rax_29 + 8)
rbx_2[4] = *(rax_29 + 0x10)
rbx_2[5] = *(rax_29 + 0x18)
rbx_2[6].d = rax_29[8]
*(rbx_2 + 0x34) = rax_29[9]
rbx_2[7].d = rax_29[0xa]
*(rbx_2 + 0x3c) = rax_29[0xb]
rbx_2[8] = *(rax_29 + 0x30)
rbx_2[9] = *(rax_29 + 0x38)
rbx_2[0xa] = *(rax_29 + 0x40)
rbx_2[0xb] = *(rax_29 + 0x48)
rbx_2[0xc] = *(rax_29 + 0x50)
rbx_2[0xd] = *(rax_29 + 0x58)
rbx_2[0xe] = *(rax_29 + 0x60)
rbx_2[0xf] = *(rax_29 + 0x68)
int32_t* rax_34 = sub_141455b70(&var_128, &var_140)
rbx_2[0x10] = *rax_34
rbx_2[0x11] = *(rax_34 + 8)
rbx_2[0x12] = *(rax_34 + 0x10)
rbx_2[0x13] = *(rax_34 + 0x18)
rbx_2[0x14].d = rax_34[8]
*(rbx_2 + 0xa4) = rax_34[9]
rbx_2[0x15].d = rax_34[0xa]
*(rbx_2 + 0xac) = rax_34[0xb]
rbx_2[0x16] = *(rax_34 + 0x30)
rbx_2[0x17] = *(rax_34 + 0x38)
rbx_2[0x18] = *(rax_34 + 0x40)
rbx_2[0x19] = *(rax_34 + 0x48)
rbx_2[0x1a] = *(rax_34 + 0x50)
rbx_2[0x1b] = *(rax_34 + 0x58)
rbx_2[0x1c] = *(rax_34 + 0x60)
rbx_2[0x1d] = *(rax_34 + 0x68)
rbx_2[0x1e] = arg4[2].q
rbx_2[0x1f] = data_1439b5bb0
rbx_2[0x20] = arg4[2].q
rbx_2[0x21] = data_1439b69b8
int128_t zmm7_1
float zmm8[0x4]
int64_t zmm9_1
float zmm10_1
zmm7_1, zmm8, zmm9_1, zmm10_1 = sub_14130f320(&arg3[0x50], &_X)
float zmm0_5[0x4] = tanf(_X)
float zmm6 = zmm0_5[0]
int32_t zmm5 = var_198:4.d
float zmm1_3[0x4] = zmm0_5
zmm1_3[0] = zmm1_3[0] * zmm6
float zmm4[0x4] = zmm0_5
zmm0_5 = 0x3f800000
zmm1_3[0] = zmm1_3[0] + 1f
float temp0_6[0x4] = _mm_sqrt_ss(zmm1_3[0], zmm1_3[0])
zmm4[0] = zmm4[0] / temp0_6[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm0_5[0] = 1f - zmm4[0]
int32_t temp0_7 = _mm_sqrt_ss(0, zmm0_5[0])
zmm0_5 = var_198.o
zmm0_5[0] = zmm9_1.d
float temp0_8[0x4] = _mm_shuffle_ps(zmm0_5, zmm0_5, 0xe1)
temp0_8[0] = zmm5
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
temp0_9[0] = (zmm6 / ((zmm9_1.d + 1f) f/ (temp0_7 f+ zmm9_1.d) * zmm4[0]) - 1f) * zmm10_1 + 1f
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
*(rbx_2 + 0x110) = temp0_10
var_198.o = temp0_10
zmm1_3 = *(data_143ec41e0 + 4)

if (not(zmm1_3[0] < zmm8[0]))
    zmm8 = _mm_min_ss(zmm1_3[0], 0x3f800000)

rbx_2[0x24].d = zmm8[0]
sub_1405d16e0(rbx_2, arg3[2])
sub_1419a2ec0(arg3[0xa2a], &var_198, &data_143ec4260, zx.d(*(arg4 + 0x38)))
int128_t zmm0_6 = var_158.o
int512_t zmm6_1
zmm6_1.o = var_198.o
zmm8 = var_140.o
var_128.q = arg3
var_128:8.b = var_1b7
var_108.q = rbx_2
var_f8:8.q = var_188.d.q
void*** rax_45
char rcx_16
rax_45, rcx_16 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
void*** rdi_1 = rax_45

if (rax_45 == 0)
    rdi_1 = nullptr
else
    var_198 = rbx_2
    int128_t zmm6_2 = sub_14139f460(rcx_16)
    int32_t var_190
    var_190.q = &data_143ec6540
    var_198.o = var_198.o
    sub_141992bd0(rdi_1, &var_1b7, &var_198, 1)
    uint128_t zmm0_8 = var_128
    *rdi_1 = &data_142f6e150
    *(rdi_1 + 0x38) = zmm0_8
    *(rdi_1 + 0x48) = zmm6_2
    *(rdi_1 + 0x58) = zmm0_6
    *(rdi_1 + 0x68) = var_f8
    *(rdi_1 + 0x78) = zmm8
    rdi_1[0x11] = _X_1.q

sub_1419968d0(arg2, rdi_1)
*arg1 = zmm7_1
arg1[1].q = var_168.q
__security_check_cookie(rax_1 ^ &var_1d8)
return arg1
