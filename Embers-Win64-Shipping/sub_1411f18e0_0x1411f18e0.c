// 函数: sub_1411f18e0
// 地址: 0x1411f18e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t r15 = *(arg2 + 0x1b0)
int64_t r9 = arg3[2]
int64_t var_188 = r15
sub_1410809a0(arg1, arg2, r15, r9)
sub_1410e8640(arg1 + 0x118, arg2, r15, arg7)
sub_1410e8790(arg1 + 0x136, arg2, &var_188, arg3, arg5)
void** var_1a8
var_1a8.d = arg4
sub_1411b9820(arg1 + 0x150, arg2, r15, data_1439b6298)
int64_t rax_4 = *(arg6 + 0xa8)
int64_t* rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t var_180 = rax_4
void* rcx_3 = &rdi_3[1]

if (rcx_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rax_4 = var_180
    rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_3 = &rdi_3[1]

*(arg2 + 0x30) = rcx_3
*rdi_3 = rax_4
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_7[6]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_7[6]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_7
*(arg2 + 8) = &rcx_7[1]
rcx_7[3] = rdi_3
rcx_7[1] = 0
*rcx_7 = &data_142da7798
rcx_7[5] = 0
rcx_7[2].d = 1
rcx_7[4].d = 2
*(rcx_7 + 0x24) = 3
sub_14077c370(arg1 + 0x15a, arg2, &var_188, arg6 + 0xa0)
var_180.d = tanf(data_1439b5b9c)
var_1a8.d = 0
sub_140741e30(arg2, &var_188, arg1 + 0x162, &var_180, var_1a8.d)
sub_1411b94e0(arg1 + 0x168, arg2, r15, arg8)
float (* var_f8)[0x1c] = nullptr
int32_t var_f0 = 0
int32_t var_ec = 9
float var_168[0x1c]
sub_1410f8450(*(*arg3 + 0x3c), &var_168)
float (* rcx_15)[0x1c] = &var_168
int512_t zmm6
zmm6.o = 0x3f800000
int32_t var_18c = 0x3f800000

if (var_f8 != 0)
    rcx_15 = var_f8

float zmm1 = (*rcx_15)[1]
float var_198[0x4]
var_198[0] = *rcx_15
float zmm2 = (*rcx_15)[2]
float temp0[0x4] = _mm_shuffle_ps(var_198, var_198, 0xe1)
temp0[0] = zmm1
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float var_e8[0x4] = temp0_2
zmm1 = (*rcx_15)[4]
temp0_2[0] = (*rcx_15)[3]
zmm2 = (*rcx_15)[5]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
temp0_3[0] = zmm1
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = zmm2
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
float var_d8[0x4] = temp0_5
zmm1 = (*rcx_15)[7]
temp0_5[0] = (*rcx_15)[6]
zmm2 = (*rcx_15)[8]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
temp0_6[0] = zmm1
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
temp0_7[0] = zmm2
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float var_c8[0x4] = temp0_8
zmm1 = (*rcx_15)[0xa]
zmm2 = (*rcx_15)[0xb]
temp0_8[0] = (*rcx_15)[9]
int64_t rax_10 = data_143e52a90
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
int32_t r8_7 = 0
temp0_9[0] = zmm1
int64_t rdi_6 = sx.q(*(arg1 + 0xe0))
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
temp0_10[0] = zmm2
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
float var_b8[0x4] = temp0_11
zmm1 = (*rcx_15)[0xd]
temp0_11[0] = (*rcx_15)[0xc]
zmm2 = (*rcx_15)[0xe]
float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xe1)
temp0_12[0] = zmm1
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
temp0_13[0] = zmm2
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
float var_a8[0x4] = temp0_14
zmm1 = (*rcx_15)[0x10]
temp0_14[0] = (*rcx_15)[0xf]
zmm2 = (*rcx_15)[0x11]
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xe1)
temp0_15[0] = zmm1
float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
temp0_16[0] = zmm2
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
float var_98[0x4] = temp0_17
zmm1 = (*rcx_15)[0x13]
temp0_17[0] = (*rcx_15)[0x12]
zmm2 = (*rcx_15)[0x14]
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xe1)
temp0_18[0] = zmm1
float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
temp0_19[0] = zmm2
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
float var_88[0x4] = temp0_20
zmm1 = (*rcx_15)[0x16]
temp0_20[0] = (*rcx_15)[0x15]
zmm2 = (*rcx_15)[0x17]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xe1)
temp0_21[0] = zmm1
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
temp0_22[0] = zmm2
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
float var_78[0x4] = temp0_23
zmm1 = (*rcx_15)[0x19]
temp0_23[0] = (*rcx_15)[0x18]
zmm2 = (*rcx_15)[0x1a]
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xe1)
temp0_24[0] = zmm1
float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
temp0_25[0] = zmm2
float var_68[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc9)

if (rdi_6 s> 0)
    int64_t rdx_7 = 0
    
    while (true)
        void* rcx_17 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_17 = (rcx_17 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_17 + (rdx_7 << 3)) == rax_10)
            break
        
        r8_7 += 1
        rdx_7 += 1
        
        if (rdx_7 s>= rdi_6)
            goto label_1411f1d0e

int16_t* r8_8

if (rdi_6 s<= 0 || r8_7 == 0xffffffff)
label_1411f1d0e:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_8 = &data_143ce8560
else
    void* rcx_47 = *(arg1 + 0xe8)
    
    if ((rcx_47.b & 1) != 0)
        rcx_47 = (rcx_47 s>> 1) + arg1 + 0xe8
    
    r8_8 = rcx_47 + (sx.q(r8_7) << 1)

float zmm6_1 = sub_1411c7720(arg2, &var_188, r8_8, &var_e8)
float (* rcx_21)[0x1c] = &var_168
var_1a8.d = 0

if (var_f8 != 0)
    rcx_21 = var_f8

float zmm0_3 = (*rcx_21)[2] + (*rcx_21)[5] + (*rcx_21)[8] + (*rcx_21)[0xb] + (*rcx_21)[0xe]
    + (*rcx_21)[0x11] + (*rcx_21)[0x14]
float zmm1_1 = (*rcx_21)[4] + (*rcx_21)[1] + (*rcx_21)[7] + (*rcx_21)[0xa] + (*rcx_21)[0xd]
    + (*rcx_21)[0x10] + (*rcx_21)[0x13]
zmm2 = *rcx_21 + (*rcx_21)[3] + (*rcx_21)[6] + (*rcx_21)[9] + (*rcx_21)[0xc] + (*rcx_21)[0xf]
    + (*rcx_21)[0x12] + (*rcx_21)[0x15]
zmm0_3 = zmm0_3 + (*rcx_21)[0x17] + (*rcx_21)[0x1a]
zmm2 = zmm2 + (*rcx_21)[0x18]
zmm1_1 = zmm1_1 + (*rcx_21)[0x16] + (*rcx_21)[0x19]
var_180.d =
    zmm6_1 / _mm_sqrt_ss(0, (zmm1_1 * zmm1_1 + zmm2 * zmm2 + zmm0_3 * zmm0_3) * 0.0123456791f)
sub_140741e30(arg2, &var_188, arg1 + 0x178, &var_180, var_1a8.d)

if (var_f8 != 0)
    sub_140a74f90(var_f8)

int64_t* rdi_7 = data_14395f4d0
int64_t r12_1 = *(*(arg8 + 0x30) + 0x10)

if (*(arg1 + 0x180) u> 0)
    uint32_t r13_1 = zx.d(*(arg1 + 0x17e))
    void*** rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_16 = &rcx_26[5]
    
    if (rax_16 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_16 = &rcx_26[5]
    
    *(arg2 + 0x30) = rax_16
    void**** rax_17 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_17 = rcx_26
    *(arg2 + 8) = &rcx_26[1]
    rcx_26[1] = 0
    rcx_26[3].d = r13_1
    *rcx_26 = &data_142da77b8
    rcx_26[2] = r15
    rcx_26[4] = r12_1

if (*(arg1 + 0x184) u> 0)
    uint32_t r12_2 = zx.d(*(arg1 + 0x182))
    
    if ((*(*rdi_7 + 8))(rdi_7) == 0)
        void*** rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_21 = &rcx_33[5]
        
        if (rax_21 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_21 = &rcx_33[5]
        
        *(arg2 + 0x30) = rax_21
        void**** rax_22 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_22 = rcx_33
        *(arg2 + 8) = &rcx_33[1]
        rcx_33[1] = 0
        *rcx_33 = &data_142da77c8
        rcx_33[2] = r15
        rcx_33[3].d = r12_2
        rcx_33[4] = rdi_7

var_1a8.d = 0
sub_140741e30(arg2, &var_188, arg1 + 0x186, &data_1439b6104, var_1a8.d)
var_1a8.d = 0
uint64_t result = sub_140741e30(arg2, &var_188, arg1 + 0x18c, &data_1439b6108, var_1a8.d)
int64_t r12_3 = *(arg6 + 0x50)

if (*(arg1 + 0x194) u> 0)
    uint32_t rdi_8 = zx.d(*(arg1 + 0x192))
    void*** rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_41[5]
    
    if (rax_24 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_41[5]
    
    *(arg2 + 0x30) = rax_24
    void**** rax_25 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_25 = rcx_41
    *(arg2 + 8) = &rcx_41[1]
    rcx_41[1] = 0
    result = &data_142d99560
    *rcx_41 = &data_142d99560
    rcx_41[2] = r15
    rcx_41[3].d = rdi_8
    rcx_41[4] = r12_3

__security_check_cookie(rax_1 ^ &var_1c8)
return result
