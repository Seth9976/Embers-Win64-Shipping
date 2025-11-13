// 函数: sub_141119530
// 地址: 0x141119530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
int64_t r15 = *(arg2 + 0x1b0)
int64_t arg_8 = r15
sub_1410809a0(arg1, arg2, r15, *(arg3 + 0x10))
void** rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = *(arg5 + 0x10)
void* rcx = &rbx_2[1]

if (rcx u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rbx_2[1]

*(arg2 + 0x30) = rcx
*rbx_2 = rax
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_4[6]

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_4[6]

*(arg2 + 0x30) = rax_1
void**** rax_2 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_2 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
rcx_4[5] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = 1
rcx_4[3] = rbx_2
rcx_4[4].d = 2
*(rcx_4 + 0x24) = 3
sub_141083370(arg1 + 0x118, arg2, &arg_8, *(arg5 + 8), *(arg5 + 0x10))
void* rdx_1 = data_143a2dd48
int32_t var_1c8 = *(rdx_1 + 0x60)
int32_t var_1c4 = *(rdx_1 + 0x64)
int32_t var_1c0 = *(rdx_1 + 0x68)
sub_141118370(arg1 + 0x14a, arg2, r15, &data_143e57960, rdx_1, &var_1c8, 0)
int32_t r8_3 = *(arg_18 + 0x1548)

if (*(arg1 + 0x17c) != 0xffff)
    int64_t* rcx_10 = &arg_18
    
    if (r8_3 s< 3)
        sub_14137b650(rcx_10)
    else
        sub_14137b9a0(rcx_10, arg2, 0xf, r8_3)
    
    sub_14077caf0(arg2, &arg_8, arg1 + 0x17c, arg_18)
    sub_1405d1550(&arg_18)

void arg_30
sub_14077c4b0(arg2, &arg_8, arg1 + 0x120, &arg_30, 0)
int64_t* rbx_5 = *(*(arg4 + 0x5c0) + 0x20)
int64_t var_140 = 0
int128_t var_198
(*(*rbx_5 + 0x68))(rbx_5, &var_198)
void var_178
sub_14077c5f0(arg2, &arg_8, arg1 + 0x126, &var_178, 0)
int128_t var_1a8 = var_198
sub_14077c870(arg2, &arg_8, arg1 + 0x12c, &var_1a8, 0)
int32_t var_15c
float zmm2[0x4] = var_15c
float zmm7[0x4] = 0x3a83126f
float zmm1

if (not(zmm2[0] != 0f))
    zmm1 = 20f
else if (zmm2[0] >= 0.00100000005f)
    zmm1 = _mm_min_ss(1f f/ (var_198:0xc.d f* 4f), zmm2[0])
else
    zmm1 = 0.00100000005f

arg_18.d = zmm1
sub_140741e30(arg2, &arg_8, arg1 + 0x132, &arg_18, 0)
arg_18.d = rbx_5[0x20].d
float zmm0_3[0x4] = sub_140741e30(arg2, &arg_8, arg1 + 0x138, &arg_18, 0)
(*(*rbx_5 + 0x48))(rbx_5)

if (not(zmm0_3[0] < 0.00100000005f))
    zmm0_3 = __minss_xmmss_memss(zmm0_3[0], 0x40a00000)
    zmm7 = zmm0_3

int64_t rax_12 = *rbx_5
zmm7[0] = zmm7[0] * 0.0174532924f
(*(rax_12 + 0x50))(rbx_5)
float zmm6 = zmm0_3[0]
float zmm0_4 = tanf(zmm7[0])
zmm7[0] = zmm7[0] + 1.57079637f
float var_1b8 = zmm0_4
float var_1b4 = cosf(zmm7[0])
float var_1b0 = zmm6
sub_14077c5f0(arg2, &arg_8, arg1 + 0x13e, &var_1b8, 0)
arg_18.d = arg6[1].d - *arg6
arg_18:4.d = *(arg6 + 0xc) - *(arg6 + 4)
var_1c8.q = *arg6
var_1c0.q = arg_18
sub_14077c870(arg2, &arg_8, arg1 + 0x144, &var_1c8, 0)

if (arg7 != 0)
    sub_141117ef0(arg1 + 0x17e, arg2, &arg_8, arg7)

float zmm3[0x4] = data_142d4cc00
float zmm4[0x4] = data_142d4cc20
float zmm5[0x4] = data_142d4cc30
float zmm10[0x4] = *(arg4 + 0xb0)
float zmm8[0x4] = *(arg4 + 0xa0)
float zmm11[0x4] = *(arg4 + 0xc0)
float zmm12[0x4] = *(arg4 + 0xd0)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
int32_t zmm6_1 = *(arg4 + 0x54)
zmm7 = *(arg4 + 0x58)
int128_t zmm9 = *(arg4 + 0x5c)
float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm12)
int32_t var_fc = 0x3f800000
float temp0_8[0x4] = _mm_mul_ps(temp0_3, zmm8)
float temp0_9[0x4] = _mm_mul_ps(temp0_4, zmm10)
float temp0_10[0x4] = _mm_mul_ps(temp0_5, zmm11)
float temp0_11[0x4] = _mm_add_ps(temp0_8, temp0_9)
float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm10)
float temp0_14[0x4] = _mm_add_ps(temp0_11, temp0_10)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm11)
float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_7)
float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm8)
float temp0_20[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
float var_f8[0x4] = temp0_17
float temp0_21[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_22[0x4] = _mm_add_ps(temp0_19, temp0_13)
float temp0_23[0x4] = _mm_mul_ps(temp0_21, zmm8)
float temp0_24[0x4] = _mm_mul_ps(temp0_20, zmm12)
float temp0_25[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
float temp0_26[0x4] = _mm_add_ps(temp0_22, temp0_16)
float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm10)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm11)
float temp0_30[0x4] = _mm_add_ps(temp0_23, temp0_27)
float temp0_31[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_32[0x4] = _mm_add_ps(temp0_26, temp0_24)
float temp0_33[0x4] = _mm_mul_ps(temp0_31, zmm12)
float temp0_34[0x4] = _mm_add_ps(temp0_30, temp0_29)
float var_e8[0x4] = temp0_32
float var_108[0x4]
var_108[0] = zmm6_1
float temp0_35[0x4] = _mm_shuffle_ps(var_108, var_108, 0xe1)
float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_33)
temp0_35[0] = zmm7[0]
float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc6)
temp0_37[0] = zmm9.d
float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
float var_d8[0x4] = temp0_36
float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0)
float temp0_40[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x55)
float temp0_41[0x4] = _mm_mul_ps(temp0_39, zmm8)
float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xaa)
float temp0_43[0x4] = _mm_mul_ps(temp0_40, zmm10)
float temp0_44[0x4] = _mm_mul_ps(temp0_42, zmm11)
float temp0_45[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xff)
float temp0_46[0x4] = _mm_add_ps(temp0_41, temp0_43)
float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm12)
float var_c8[0x4] = _mm_add_ps(_mm_add_ps(temp0_46, temp0_44), temp0_47)
sub_14077c730(arg2, &arg_8, arg1 + 0x1aa, &var_f8, 0)
sub_140741e30(arg2, &arg_8, arg1 + 0x1b0, &data_1439b5c20, 0)
void** r9_13 = &arg_18
int64_t* rdx_16 = &arg_8
int32_t rcx_29

if ((*(arg4 + 0x570) & 0x10) == 0)
    arg_18.d = 0
    sub_140741e30(arg2, rdx_16, arg1 + 0x1b6, r9_13, 0)
    arg_18 = 0x4130000000000000
    rcx_29 = sub_14077c4b0(arg2, &arg_8, arg1 + 0x1bc, &arg_18, 0)
else
    arg_18.d = *(arg4 + 0x3d0) f- *(arg4 + 0x3d8)
    sub_140741e30(arg2, rdx_16, arg1 + 0x1b6, r9_13, 0)
    rcx_29 = sub_140741e30(arg2, &arg_8, arg1 + 0x1bc, arg4 + 0x3d4, 0)

arg_18.d = sbb.d(rcx_29, rcx_29, data_143e56de4 != 0) + 2
uint64_t result = sub_140741e30(arg2, &arg_8, arg1 + 0x1c2, &arg_18, 0)

if (*(arg1 + 0x1cc) u> 0)
    int32_t rbx_7 = sbb.d(rbx_5.d, rbx_5.d, data_143e56de4 != 0) + 2
    int64_t rcx_34 = data_143ec4fdc
    float zmm1_2 = 1f f/ _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(rcx_34.d), rbx_7))).d
    uint128_t zmm0_9 = _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q((rcx_34 u>> 0x20).d), rbx_7)))
    arg_18.d = zmm1_2
    int128_t zmm13
    zmm13.d = 1f f/ zmm0_9.d
    arg_18:4.d = zmm13.d
    result = sub_14077c4b0(arg2, &arg_8, arg1 + 0x1c8, &arg_18, 0)
    int64_t* rbx_8 = data_14395fa10
    
    if (*(arg1 + 0x1d0) u> 0)
        uint32_t r12_1 = zx.d(*(arg1 + 0x1ce))
        void*** rcx_39 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_29 = &rcx_39[5]
        
        if (rax_29 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_39 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_29 = &rcx_39[5]
        
        *(arg2 + 0x30) = rax_29
        void**** rax_30 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_30 = rcx_39
        *(arg2 + 8) = &rcx_39[1]
        rcx_39[1] = 0
        *rcx_39 = &data_142da77b8
        result = arg8
        rcx_39[3].d = r12_1
        rcx_39[4] = result
        rcx_39[2] = r15
    
    if (*(arg1 + 0x1d4) u> 0)
        uint32_t r14_1 = zx.d(*(arg1 + 0x1d2))
        result = (*(*rbx_8 + 8))(rbx_8)
        
        if (result.b == 0)
            void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_33 = &rcx_46[5]
            
            if (rax_33 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_33 = &rcx_46[5]
            
            *(arg2 + 0x30) = rax_33
            void**** rax_34 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_34 = rcx_46
            *(arg2 + 8) = &rcx_46[1]
            rcx_46[1] = 0
            result = &data_142da77c8
            *rcx_46 = &data_142da77c8
            rcx_46[2] = r15
            rcx_46[3].d = r14_1
            rcx_46[4] = rbx_8

return result
