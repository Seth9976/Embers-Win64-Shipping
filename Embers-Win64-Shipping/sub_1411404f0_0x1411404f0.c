// 函数: sub_1411404f0
// 地址: 0x1411404f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t r14 = *(arg2 + 0x1b0)
int64_t var_178 = r14
sub_1410809a0(arg1, arg2, r14, arg3[2])
int32_t r8_1 = arg3[0x2a9].d
uint32_t var_188

if (*(arg1 + 0x118) != 0xffff)
    int32_t* rcx = &var_188
    
    if (r8_1 s< 3)
        sub_14137b7f0(rcx, arg2)
    else
        sub_14137baa0(rcx, arg2, 0xf, r8_1)
    
    sub_14077caf0(arg2, &var_178, arg1 + 0x118, var_188.q)
    sub_1405d1550(&var_188)

void* r8_3 = data_143a2dd48
int64_t var_198 = 0
int32_t rcx_3 = *(r8_3 + 0x64)
int32_t rdx_2 = *(r8_3 + 0x68)
var_188 = *(r8_3 + 0x60)
int32_t var_184 = rcx_3
int32_t var_180 = rdx_2
sub_1410e8980(arg1 + 0x11a, arg2, r14, &data_143e570b0, r8_3, &var_188, var_198)
sub_1410e8640(arg1 + 0x14c, arg2, r14, arg5)
sub_1410e8790(arg1 + 0x16a, arg2, &var_178, arg3, arg4)
float (* var_f8)[0x1c] = nullptr
int32_t var_f0 = 0
int32_t var_ec = 9
float var_168[0x1c]
sub_1410f8450(*(*arg3 + 0x3c), &var_168)
float (* rcx_8)[0x1c] = &var_168
int512_t zmm6
zmm6.o = 0x3f800000
int32_t var_17c = 0x3f800000
float zmm3[0x4] = var_188.o

if (var_f8 != 0)
    rcx_8 = var_f8

float zmm1 = (*rcx_8)[1]
zmm3[0] = *rcx_8
float zmm2 = (*rcx_8)[2]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm1
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float var_e8[0x4] = temp0_2
zmm1 = (*rcx_8)[4]
temp0_2[0] = (*rcx_8)[3]
zmm2 = (*rcx_8)[5]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
temp0_3[0] = zmm1
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = zmm2
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
float var_d8[0x4] = temp0_5
zmm1 = (*rcx_8)[7]
temp0_5[0] = (*rcx_8)[6]
zmm2 = (*rcx_8)[8]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
temp0_6[0] = zmm1
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
temp0_7[0] = zmm2
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float var_c8[0x4] = temp0_8
zmm1 = (*rcx_8)[0xa]
temp0_8[0] = (*rcx_8)[9]
zmm2 = (*rcx_8)[0xb]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
temp0_9[0] = zmm1
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
temp0_10[0] = zmm2
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
float var_b8[0x4] = temp0_11
int32_t r8_7 = 0
zmm1 = (*rcx_8)[0xd]
temp0_11[0] = (*rcx_8)[0xc]
zmm2 = (*rcx_8)[0xe]
int64_t rbx = sx.q(*(arg1 + 0xe0))
int64_t rax_5 = data_143e52a90
float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xe1)
temp0_12[0] = zmm1
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
temp0_13[0] = zmm2
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
float var_a8[0x4] = temp0_14
zmm1 = (*rcx_8)[0x10]
temp0_14[0] = (*rcx_8)[0xf]
zmm2 = (*rcx_8)[0x11]
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xe1)
temp0_15[0] = zmm1
float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
temp0_16[0] = zmm2
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
float var_98[0x4] = temp0_17
zmm1 = (*rcx_8)[0x13]
temp0_17[0] = (*rcx_8)[0x12]
zmm2 = (*rcx_8)[0x14]
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xe1)
temp0_18[0] = zmm1
float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
temp0_19[0] = zmm2
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
float var_88[0x4] = temp0_20
zmm1 = (*rcx_8)[0x16]
temp0_20[0] = (*rcx_8)[0x15]
zmm2 = (*rcx_8)[0x17]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xe1)
temp0_21[0] = zmm1
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
temp0_22[0] = zmm2
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
float var_78[0x4] = temp0_23
zmm1 = (*rcx_8)[0x19]
temp0_23[0] = (*rcx_8)[0x18]
zmm2 = (*rcx_8)[0x1a]
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xe1)
temp0_24[0] = zmm1
float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
temp0_25[0] = zmm2
float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc9)
var_188.o = temp0_26
float var_68[0x4] = temp0_26

if (rbx s> 0)
    int64_t rdx_7 = 0
    
    while (true)
        void* rcx_10 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_10 = (rcx_10 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_10 + (rdx_7 << 3)) == rax_5)
            break
        
        r8_7 += 1
        rdx_7 += 1
        
        if (rdx_7 s>= rbx)
            goto label_141140865

int16_t* rbx_1

if (rbx s<= 0 || r8_7 == 0xffffffff)
label_141140865:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rbx_1 = &data_143ce8560
else
    void* rcx_39 = *(arg1 + 0xe8)
    
    if ((rcx_39.b & 1) != 0)
        rcx_39 = (rcx_39 s>> 1) + arg1 + 0xe8
    
    rbx_1 = rcx_39 + (sx.q(r8_7) << 1)

void** var_1a8_1

if (*rbx_1 != 0xffff)
    int64_t* rcx_13 = data_143f0f180
    int32_t* var_1a0
    var_1a0.d = 1
    var_1a8_1.d = 0
    (*(*rcx_13 + 0xf8))(rcx_13, &var_188, &var_e8, &data_143e52aa0, var_1a8_1, var_1a0)
    int64_t r12_1 = var_188.q
    uint32_t r13_1 = zx.d(*rbx_1)
    void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_16[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_16[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_16
    *(arg2 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    *rcx_16 = &data_142da77a8
    rcx_16[2] = r14
    rcx_16[3].d = r13_1
    rcx_16[4] = r12_1
    sub_1405d1550(&var_188)

void* r13_2 = *(arg3[0x2b5] + 0xd40)
int64_t r12_2 = *(r13_2 + 0x40)

if (*(arg1 + 0x1c4) u> 0)
    int64_t rcx_22 = *(arg2 + 0x30) + 7
    var_188 = zx.d(*(arg1 + 0x1c2))
    void*** rcx_23 = rcx_22 & 0xfffffffffffffff8
    void* rax_14 = &rcx_23[5]
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_23[5]
    
    *(arg2 + 0x30) = rax_14
    void** rax_15 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_15 = rcx_23
    *(arg2 + 8) = &rcx_23[1]
    rcx_23[1] = 0
    *rcx_23 = &data_142d99560
    rcx_23[3].d = var_188
    rcx_23[2] = r14
    rcx_23[4] = r12_2

var_1a8_1.d = 0
sub_14077c4b0(arg2, &var_178, arg1 + 0x1c6, r13_2 + 0xd0, var_1a8_1.d)
sub_14077c370(arg1 + 0x1cc, arg2, &var_178, r13_2 + 0x50)
sub_14077c370(arg1 + 0x1d4, arg2, &var_178, r13_2 + 0x70)
sub_14077c370(arg1 + 0x1dc, arg2, &var_178, r13_2 + 0x90)
sub_14077c370(arg1 + 0x1e4, arg2, &var_178, r13_2 + 0xb0)
var_188 = tanf(data_1439b5b9c)
var_1a8_1.d = 0
float zmm6_1 = sub_140741e30(arg2, &var_178, arg1 + 0x1ec, &var_188, var_1a8_1.d)
float (* rcx_33)[0x1c] = &var_168
var_1a8_1.d = 0

if (var_f8 != 0)
    rcx_33 = var_f8

float zmm0_3 = (*rcx_33)[2] + (*rcx_33)[5] + (*rcx_33)[8] + (*rcx_33)[0xb] + (*rcx_33)[0xe]
    + (*rcx_33)[0x11] + (*rcx_33)[0x14]
float zmm1_1 = (*rcx_33)[4] + (*rcx_33)[1] + (*rcx_33)[7] + (*rcx_33)[0xa] + (*rcx_33)[0xd]
    + (*rcx_33)[0x10] + (*rcx_33)[0x13]
zmm2 = *rcx_33 + (*rcx_33)[3] + (*rcx_33)[6] + (*rcx_33)[9] + (*rcx_33)[0xc] + (*rcx_33)[0xf]
    + (*rcx_33)[0x12] + (*rcx_33)[0x15]
zmm0_3 = zmm0_3 + (*rcx_33)[0x17] + (*rcx_33)[0x1a]
zmm2 = zmm2 + (*rcx_33)[0x18]
zmm1_1 = zmm1_1 + (*rcx_33)[0x16] + (*rcx_33)[0x19]
float var_170 =
    zmm6_1 / _mm_sqrt_ss(0, (zmm2 * zmm2 + zmm1_1 * zmm1_1 + zmm0_3 * zmm0_3) * 0.0123456791f)
sub_140741e30(arg2, &var_178, arg1 + 0x1f2, &var_170, var_1a8_1.d)
int64_t result = sub_14077c370(arg1 + 0x1f8, arg2, &var_178, *(arg3[0x2b5] + 0xd48) + 0x18)

if (var_f8 != 0)
    result = sub_140a74f90(var_f8)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
