// 函数: sub_1411f2090
// 地址: 0x1411f2090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t rdi = *(arg2 + 0x1b0)
int64_t r9 = arg3[2]
int64_t var_178 = rdi
sub_1410809a0(arg1, arg2, rdi, r9)
sub_1410e8640(arg1 + 0x118, arg2, rdi, arg8)
sub_1410e8790(arg1 + 0x136, arg2, &var_178, arg3, arg6)
void** var_198
var_198.d = arg5
sub_1411b9820(arg1 + 0x150, arg2, rdi, data_1439b6298)
sub_141117ba0(arg1 + 0x15a, arg2, rdi, arg4, nullptr, nullptr)
int64_t rax_4 = *(arg7 + 0x20)
int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t var_188 = rax_4
void* rcx_4 = &rbx_3[1]

if (rcx_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rax_4 = var_188
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_4 = &rbx_3[1]

*(arg2 + 0x30) = rcx_4
*rbx_3 = rax_4
void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_8[6]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_8[6]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_8
*(arg2 + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142da7798
rcx_8[2].d = 1
rcx_8[3] = rbx_3
rcx_8[4].d = 2
*(rcx_8 + 0x24) = 3
rcx_8[5] = 0
sub_14077c370(arg1 + 0x172, arg2, &var_178, arg7 + 0x18)
float (* var_68)[0x8] = nullptr
int32_t var_60 = 0
int32_t var_5c = 9
float var_d8[0x8]
sub_1410f8450(*(*arg3 + 0x3c), &var_d8)
float (* rcx_14)[0x8] = &var_d8
float temp0[0x4] = _mm_shuffle_ps(0x3f800000, 0x3f800000, 0)

if (var_68 != 0)
    rcx_14 = var_68

float zmm1 = (*rcx_14)[1]
temp0[0] = *rcx_14
float zmm2 = (*rcx_14)[2]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xe1)
temp0_1[0] = zmm1
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = zmm2
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
float var_168[0x4] = temp0_3
zmm1 = (*rcx_14)[4]
temp0_3[0] = (*rcx_14)[3]
zmm2 = (*rcx_14)[5]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
temp0_4[0] = zmm1
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
temp0_5[0] = zmm2
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
float var_158[0x4] = temp0_6
zmm1 = (*rcx_14)[7]
temp0_6[0] = (*rcx_14)[6]
zmm2 = rcx_14[1][0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
temp0_7[0] = zmm1
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
temp0_8[0] = zmm2
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
float var_148[0x4] = temp0_9
zmm1 = (*rcx_14)[0xa]
temp0_9[0] = (*rcx_14)[9]
zmm2 = (*rcx_14)[0xb]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xe1)
temp0_10[0] = zmm1
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
temp0_11[0] = zmm2
float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
float var_138[0x4] = temp0_12
zmm1 = (*rcx_14)[0xd]
temp0_12[0] = (*rcx_14)[0xc]
zmm2 = (*rcx_14)[0xe]
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xe1)
temp0_13[0] = zmm1
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
temp0_14[0] = zmm2
int64_t rbx_6 = sx.q(*(arg1 + 0xe0))
int32_t r8_6 = 0
int64_t rax_10 = data_143e52a90
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc9)
float var_128[0x4] = temp0_15
zmm1 = rcx_14[2][0]
temp0_15[0] = (*rcx_14)[0xf]
zmm2 = (*rcx_14)[0x11]
float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xe1)
temp0_16[0] = zmm1
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc6)
temp0_17[0] = zmm2
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
float var_118[0x4] = temp0_18
zmm1 = (*rcx_14)[0x13]
temp0_18[0] = (*rcx_14)[0x12]
zmm2 = (*rcx_14)[0x14]
float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xe1)
temp0_19[0] = zmm1
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
temp0_20[0] = zmm2
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
float var_108[0x4] = temp0_21
zmm1 = (*rcx_14)[0x16]
temp0_21[0] = (*rcx_14)[0x15]
zmm2 = (*rcx_14)[0x17]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xe1)
temp0_22[0] = zmm1
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc6)
temp0_23[0] = zmm2
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc9)
float var_f8[0x4] = temp0_24
zmm1 = (*rcx_14)[0x19]
temp0_24[0] = rcx_14[3][0]
zmm2 = (*rcx_14)[0x1a]
float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xe1)
temp0_25[0] = zmm1
float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc6)
temp0_26[0] = zmm2
float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
var_188.o = temp0_27
float var_e8[0x4] = temp0_27

if (rbx_6 s> 0)
    int64_t rdx_6 = 0
    
    while (true)
        void* rcx_16 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_16 = (rcx_16 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_16 + (rdx_6 << 3)) == rax_10)
            break
        
        r8_6 += 1
        rdx_6 += 1
        
        if (rdx_6 s>= rbx_6)
            goto label_1411f2471

int16_t* r8_7

if (rbx_6 s<= 0 || r8_6 == 0xffffffff)
label_1411f2471:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_7 = &data_143ce8560
else
    void* rcx_24 = *(arg1 + 0xe8)
    
    if ((rcx_24.b & 1) != 0)
        rcx_24 = (rcx_24 s>> 1) + arg1 + 0xe8
    
    r8_7 = rcx_24 + (sx.q(r8_6) << 1)

sub_1411c7720(arg2, &var_178, r8_7, &var_168)
var_188.d = tanf(data_1439b5b9c)
void* const var_198_1
var_198_1.d = 0
uint64_t result = sub_140741e30(arg2, &var_178, arg1 + 0x17a, &var_188, var_198_1.d)

if (var_68 != 0)
    result = sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
