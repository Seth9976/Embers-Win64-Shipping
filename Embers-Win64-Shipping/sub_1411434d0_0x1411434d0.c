// 函数: sub_1411434d0
// 地址: 0x1411434d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t rax_2 = *(arg2 + 0x1b0)
int64_t var_198 = rax_2
sub_1410809a0(arg1, arg2, rax_2, arg3[2])
sub_1410e8790(arg1 + 0x118, arg2, &var_198, arg3, arg4)
int32_t var_ec = 9
float (* var_f8)[0x1c] = nullptr
int32_t var_f0 = 0
float var_168[0x1c]
sub_1410f8450(*(*arg3 + 0x3c), &var_168)
float (* rsi)[0x1c] = var_f8
float (* rax_4)[0x1c] = &var_168
float zmm6 = 1f
int32_t var_19c = 0x3f800000
float var_1a8[0x4]
float zmm3[0x4] = var_1a8

if (rsi != 0)
    rax_4 = rsi

float zmm1 = (*rax_4)[1]
zmm3[0] = *rax_4
float zmm2 = (*rax_4)[2]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm1
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float var_e8[0x4] = temp0_2
zmm1 = (*rax_4)[4]
temp0_2[0] = (*rax_4)[3]
zmm2 = (*rax_4)[5]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
temp0_3[0] = zmm1
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = zmm2
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
float var_d8[0x4] = temp0_5
zmm1 = (*rax_4)[7]
temp0_5[0] = (*rax_4)[6]
zmm2 = (*rax_4)[8]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
temp0_6[0] = zmm1
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
temp0_7[0] = zmm2
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float var_c8[0x4] = temp0_8
zmm1 = (*rax_4)[0xa]
temp0_8[0] = (*rax_4)[9]
zmm2 = (*rax_4)[0xb]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
temp0_9[0] = zmm1
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
temp0_10[0] = zmm2
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
float var_b8[0x4] = temp0_11
zmm1 = (*rax_4)[0xd]
temp0_11[0] = (*rax_4)[0xc]
zmm2 = (*rax_4)[0xe]
float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xe1)
temp0_12[0] = zmm1
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
temp0_13[0] = zmm2
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
float var_a8[0x4] = temp0_14
int32_t r8_2 = 0
zmm1 = (*rax_4)[0x10]
temp0_14[0] = (*rax_4)[0xf]
zmm2 = (*rax_4)[0x11]
int64_t rbx_1 = sx.q(*(arg1 + 0xe0))
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xe1)
temp0_15[0] = zmm1
float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
temp0_16[0] = zmm2
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
float var_98[0x4] = temp0_17
zmm1 = (*rax_4)[0x13]
temp0_17[0] = (*rax_4)[0x12]
zmm2 = (*rax_4)[0x14]
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xe1)
temp0_18[0] = zmm1
float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
temp0_19[0] = zmm2
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
float var_88[0x4] = temp0_20
zmm1 = (*rax_4)[0x16]
temp0_20[0] = (*rax_4)[0x15]
zmm2 = (*rax_4)[0x17]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xe1)
temp0_21[0] = zmm1
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
temp0_22[0] = zmm2
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
float var_78[0x4] = temp0_23
zmm1 = (*rax_4)[0x19]
temp0_23[0] = (*rax_4)[0x18]
zmm2 = (*rax_4)[0x1a]
int64_t rax_5 = data_143e52a90
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xe1)
temp0_24[0] = zmm1
float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
temp0_25[0] = zmm2
float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc9)
var_1a8 = temp0_26
float var_68[0x4] = temp0_26

if (rbx_1 s> 0)
    int64_t rdx_2 = 0
    
    while (true)
        void* rcx_3 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_3 + (rdx_2 << 3)) == rax_5)
            break
        
        r8_2 += 1
        rdx_2 += 1
        
        if (rdx_2 s>= rbx_1)
            goto label_14114378f

int16_t* rbx_2

if (rbx_1 s<= 0 || r8_2 == 0xffffffff)
label_14114378f:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
        
        rsi = var_f8
    
    rbx_2 = &data_143ce8560
else
    void* rcx_30 = *(arg1 + 0xe8)
    
    if ((rcx_30.b & 1) != 0)
        rcx_30 = (rcx_30 s>> 1) + arg1 + 0xe8
    
    rbx_2 = rcx_30 + (sx.q(r8_2) << 1)

void** var_1b8

if (*rbx_2 != 0xffff)
    int64_t* rcx_6 = data_143f0f180
    var_1b8.d = 0
    (*(*rcx_6 + 0xf8))(rcx_6, &var_1a8, &var_e8, &data_143e52aa0, var_1b8, 1)
    int64_t rsi_1 = var_1a8[0].q
    uint32_t r12_1 = zx.d(*rbx_2)
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_9[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    *rcx_9 = &data_142da77a8
    rcx_9[2] = var_198
    rcx_9[3].d = r12_1
    rcx_9[4] = rsi_1
    zmm6 = sub_1405d1550(&var_1a8)
    rsi = var_f8

var_1b8.d = 0
float (* rax_13)[0x1c] = &var_168

if (rsi != 0)
    rax_13 = rsi

float zmm0 = (*rax_13)[2] + (*rax_13)[5] + (*rax_13)[8] + (*rax_13)[0xb] + (*rax_13)[0xe]
    + (*rax_13)[0x11] + (*rax_13)[0x14]
zmm1 = (*rax_13)[1] + (*rax_13)[4] + (*rax_13)[7] + (*rax_13)[0xa] + (*rax_13)[0xd]
    + (*rax_13)[0x10] + (*rax_13)[0x13]
zmm2 = *rax_13 + (*rax_13)[3] + (*rax_13)[6] + (*rax_13)[9] + (*rax_13)[0xc] + (*rax_13)[0xf]
    + (*rax_13)[0x12] + (*rax_13)[0x15]
zmm0 = zmm0 + (*rax_13)[0x17] + (*rax_13)[0x1a]
zmm2 = zmm2 + (*rax_13)[0x18]
zmm1 = zmm1 + (*rax_13)[0x16] + (*rax_13)[0x19]
float var_190 = zmm6 / _mm_sqrt_ss(0, (zmm1 * zmm1 + zmm2 * zmm2 + zmm0 * zmm0) * 0.0123456791f)
sub_140741e30(arg2, &var_198, arg1 + 0x132, &var_190, var_1b8.d)
int64_t* rsi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* r12_2 = *(arg3[0x2b5] + 0xd48)
int64_t rax_15 = *(arg5 + 0x10)
var_1a8[0].q = rax_15
void* rcx_15 = &rsi_4[1]

if (rcx_15 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rax_15 = var_1a8[0].q
    rsi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_15 = &rsi_4[1]

*(arg2 + 0x30) = rcx_15
*rsi_4 = rax_15
void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_16 = &rcx_19[6]

if (rax_16 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_19[6]

*(arg2 + 0x30) = rax_16
void**** rax_17 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_17 = rcx_19
*(arg2 + 8) = &rcx_19[1]
rcx_19[1] = 0
rcx_19[5] = 0
*rcx_19 = &data_142da7798
rcx_19[2].d = 1
rcx_19[3] = rsi_4
rcx_19[4].d = 2
*(rcx_19 + 0x24) = 3
sub_141083370(arg1 + 0x148, arg2, &var_198, *(arg5 + 8), *(arg5 + 0x10))
int64_t r12_3 = *(r12_2 + 0x28)

if (*(arg1 + 0x146) u> 0)
    uint32_t rsi_7 = zx.d(*(arg1 + 0x144))
    void*** rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_20 = &rcx_26[5]
    
    if (rax_20 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_20 = &rcx_26[5]
    
    *(arg2 + 0x30) = rax_20
    void**** rax_21 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_21 = rcx_26
    *(arg2 + 8) = &rcx_26[1]
    rcx_26[1] = 0
    *rcx_26 = &data_142d99560
    rcx_26[2] = var_198
    rcx_26[3].d = rsi_7
    rcx_26[4] = r12_3

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg3[0x2b4].d - arg3[0x2b3].d)
int64_t var_1b8_1
var_1b8_1.d = 0
int32_t var_188 = divs.dp.d(sx.q((temp3 - temp2) s>> 1), data_1439b5c50) - 1
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(*(arg3 + 0x15a4) - *(arg3 + 0x159c))
int32_t var_184 = divs.dp.d(sx.q((temp11 - temp10) s>> 1), data_1439b5c50) - 1
sub_14077c4b0(arg2, &var_198, arg1 + 0x13e, &var_188, var_1b8_1.d)
int32_t var_180
sub_1410f8060(&var_180)
int32_t temp18
int32_t temp19
temp18:temp19 = sx.q(arg3[0x2b4].d - arg3[0x2b3].d)
var_1b8_1.d = 0
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(var_180))
int32_t temp20
int32_t temp21
temp20:temp21 = sx.q(*(arg3 + 0x15a4) - *(arg3 + 0x159c))
uint128_t zmm1_1
zmm1_1.d = _mm_cvtepi32_ps(zx.o((temp19 - temp18) s>> 1)).d f- 0.5f
zmm1_1.d = zmm1_1.d f/ zmm0_1.d
int32_t var_178 = zmm1_1.d
zmm1_1.d = _mm_cvtepi32_ps(zx.o((temp21 - temp20) s>> 1)).d f- 0.5f
int32_t var_17c
zmm1_1.d = zmm1_1.d f/ _mm_cvtepi32_ps(zx.o(var_17c)).d
int32_t var_174 = zmm1_1.d
uint64_t result = sub_14077c4b0(arg2, &var_198, arg1 + 0x138, &var_178, var_1b8_1.d)

if (var_f8 != 0)
    result = sub_140a74f90(var_f8)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
