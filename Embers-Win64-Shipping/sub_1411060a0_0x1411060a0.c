// 函数: sub_1411060a0
// 地址: 0x1411060a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t r12 = *(arg2 + 0x1b0)
int64_t var_170 = r12
sub_1410809a0(arg1, arg2, r12, arg3[2])
sub_1410e8790(arg1 + 0x118, arg2, &var_170, arg3, arg4)
int32_t var_ec = 9
float (* var_f8)[0x1c] = nullptr
int32_t var_f0 = 0
float var_168[0x1c]
sub_1410f8450(*(*arg3 + 0x3c), &var_168)
float (* rdi_1)[0x1c] = var_f8
float (* rax_3)[0x1c] = &var_168
float zmm6 = 1f
int32_t var_17c = 0x3f800000
float var_188[0x4]
float zmm3[0x4] = var_188

if (rdi_1 != 0)
    rax_3 = rdi_1

float zmm1 = (*rax_3)[1]
zmm3[0] = *rax_3
float zmm2 = (*rax_3)[2]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm1
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float var_e8[0x4] = temp0_2
zmm1 = (*rax_3)[4]
temp0_2[0] = (*rax_3)[3]
zmm2 = (*rax_3)[5]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
temp0_3[0] = zmm1
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = zmm2
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
float var_d8[0x4] = temp0_5
zmm1 = (*rax_3)[7]
temp0_5[0] = (*rax_3)[6]
zmm2 = (*rax_3)[8]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
temp0_6[0] = zmm1
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
temp0_7[0] = zmm2
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float var_c8[0x4] = temp0_8
zmm1 = (*rax_3)[0xa]
temp0_8[0] = (*rax_3)[9]
zmm2 = (*rax_3)[0xb]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
temp0_9[0] = zmm1
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
temp0_10[0] = zmm2
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
float var_b8[0x4] = temp0_11
zmm1 = (*rax_3)[0xd]
temp0_11[0] = (*rax_3)[0xc]
zmm2 = (*rax_3)[0xe]
float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xe1)
temp0_12[0] = zmm1
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
temp0_13[0] = zmm2
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
float var_a8[0x4] = temp0_14
int32_t r8_2 = 0
zmm1 = (*rax_3)[0x10]
temp0_14[0] = (*rax_3)[0xf]
zmm2 = (*rax_3)[0x11]
int64_t rbx_1 = sx.q(*(arg1 + 0xe0))
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xe1)
temp0_15[0] = zmm1
float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
temp0_16[0] = zmm2
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
float var_98[0x4] = temp0_17
zmm1 = (*rax_3)[0x13]
temp0_17[0] = (*rax_3)[0x12]
zmm2 = (*rax_3)[0x14]
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xe1)
temp0_18[0] = zmm1
float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
temp0_19[0] = zmm2
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
float var_88[0x4] = temp0_20
zmm1 = (*rax_3)[0x16]
temp0_20[0] = (*rax_3)[0x15]
zmm2 = (*rax_3)[0x17]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xe1)
temp0_21[0] = zmm1
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
temp0_22[0] = zmm2
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
float var_78[0x4] = temp0_23
zmm1 = (*rax_3)[0x19]
temp0_23[0] = (*rax_3)[0x18]
zmm2 = (*rax_3)[0x1a]
int64_t rax_4 = data_143e52a90
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xe1)
temp0_24[0] = zmm1
float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
temp0_25[0] = zmm2
float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc9)
var_188 = temp0_26
float var_68[0x4] = temp0_26

if (rbx_1 s> 0)
    int64_t rdx_2 = 0
    
    while (true)
        void* rcx_3 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_3 + (rdx_2 << 3)) == rax_4)
            break
        
        r8_2 += 1
        rdx_2 += 1
        
        if (rdx_2 s>= rbx_1)
            goto label_14110635e

int16_t* rbx_2

if (rbx_1 s<= 0 || r8_2 == 0xffffffff)
label_14110635e:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
        
        rdi_1 = var_f8
    
    rbx_2 = &data_143ce8560
else
    void* rcx_33 = *(arg1 + 0xe8)
    
    if ((rcx_33.b & 1) != 0)
        rcx_33 = (rcx_33 s>> 1) + arg1 + 0xe8
    
    rbx_2 = rcx_33 + (sx.q(r8_2) << 1)

void** var_198

if (*rbx_2 != 0xffff)
    int64_t* rcx_6 = data_143f0f180
    var_198.d = 0
    (*(*rcx_6 + 0xf8))(rcx_6, &var_188, &var_e8, &data_143e52aa0, var_198, 1)
    int64_t rdi_2 = var_188[0].q
    uint32_t r15_1 = zx.d(*rbx_2)
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_9[5]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_8
    void**** rax_9 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_9 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    *rcx_9 = &data_142da77a8
    rcx_9[2] = r12
    rcx_9[3].d = r15_1
    rcx_9[4] = rdi_2
    zmm6 = sub_1405d1550(&var_188)
    rdi_1 = var_f8

var_198.d = 0
float (* rax_11)[0x1c] = &var_168

if (rdi_1 != 0)
    rax_11 = rdi_1

float zmm0 = (*rax_11)[2] + (*rax_11)[5] + (*rax_11)[8] + (*rax_11)[0xb] + (*rax_11)[0xe]
    + (*rax_11)[0x11] + (*rax_11)[0x14]
zmm1 = (*rax_11)[1] + (*rax_11)[4] + (*rax_11)[7] + (*rax_11)[0xa] + (*rax_11)[0xd]
    + (*rax_11)[0x10] + (*rax_11)[0x13]
zmm2 = *rax_11 + (*rax_11)[3] + (*rax_11)[6] + (*rax_11)[9] + (*rax_11)[0xc] + (*rax_11)[0xf]
    + (*rax_11)[0x12] + (*rax_11)[0x15]
zmm0 = zmm0 + (*rax_11)[0x17] + (*rax_11)[0x1a]
zmm2 = zmm2 + (*rax_11)[0x18]
zmm1 = zmm1 + (*rax_11)[0x16] + (*rax_11)[0x19]
float var_178 = zmm6 / _mm_sqrt_ss(0, (zmm1 * zmm1 + zmm2 * zmm2 + zmm0 * zmm0) * 0.0123456791f)
sub_140741e30(arg2, &var_170, arg1 + 0x132, &var_178, var_198.d)
int64_t r15_2 = *(arg5 + 0x50)

if (*(arg1 + 0x13a) u> 0)
    uint32_t rdi_3 = zx.d(*(arg1 + 0x138))
    void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_17[5]
    
    if (rax_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_17[5]
    
    *(arg2 + 0x30) = rax_12
    void**** rax_13 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_13 = rcx_17
    *(arg2 + 8) = &rcx_17[1]
    rcx_17[1] = 0
    *rcx_17 = &data_142d99560
    rcx_17[2] = r12
    rcx_17[3].d = rdi_3
    rcx_17[4] = r15_2

int64_t rax_15 = *(arg5 + 0x68)
int64_t* rbx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
var_188[0].q = rax_15
void* rcx_21 = &rbx_5[1]

if (rcx_21 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rax_15 = var_188[0].q
    rbx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_21 = &rbx_5[1]

*(arg2 + 0x30) = rcx_21
*rbx_5 = rax_15
void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_16 = &rcx_25[6]

if (rax_16 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_25[6]

*(arg2 + 0x30) = rax_16
void**** rax_17 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_17 = rcx_25
*(arg2 + 8) = &rcx_25[1]
rcx_25[1] = 0
rcx_25[5] = 0
*rcx_25 = &data_142da7798
rcx_25[2].d = 1
rcx_25[3] = rbx_5
rcx_25[4].d = 2
*(rcx_25 + 0x24) = 3
int64_t result = sub_14077c370(arg1 + 0x13c, arg2, &var_170, arg5 + 0x60)

if (var_f8 != 0)
    result = sub_140a74f90(var_f8)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
