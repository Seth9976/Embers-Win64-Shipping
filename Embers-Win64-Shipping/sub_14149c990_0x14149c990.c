// 函数: sub_14149c990
// 地址: 0x14149c990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x1a0)
int32_t r8 = arg4[0x2a9].d
int64_t arg_8 = r12

if (*arg1 != 0xffff)
    int64_t arg_10
    int64_t* rcx = &arg_10
    
    if (r8 s< 3)
        sub_14137b7f0(rcx, arg2)
    else
        sub_14137baa0(rcx, arg2, 0xf, r8)
    
    sub_141083500(arg2, &arg_8, arg1, arg_10)
    sub_1405d1550(&arg_10)

void* arg_28
void* rsi = arg_28
int64_t* rcx_3 = *(rsi + 0x38)

if (rcx_3 == 0)
    rcx_3 = **(rsi + 0x28)

void* rbx = *((*(*rcx_3 + 0x10))(rcx_3) + 0x14)
arg_28 = rbx
float var_c8

if (arg1[0x19] u> 0)
    int32_t rax_6 = *(rsi + 0x540)
    uint128_t zmm1 = _mm_cvtepi32_ps(zx.o((rbx u>> 0x20).d))
    int32_t rcx_5 = *(rsi + 0x550)
    float zmm3 = 1f f/ zmm1.d
    float zmm2 = 1f f/ _mm_cvtepi32_ps(zx.o(rbx.d)).d
    uint128_t zmm0
    zmm0.d = float.s(zx.q(rax_6 + rcx_5))
    uint64_t rax_9 = zx.q(*(rsi + 0x544) + rcx_5)
    zmm0.d = zmm0.d f* zmm2
    var_c8 = zmm0.d
    zmm0.d = float.s(rax_9)
    zmm1.d = float.s(zx.q(*(rsi + 0x548)))
    zmm0.d = zmm0.d f* zmm3
    zmm1.d = zmm1.d f* zmm2
    int32_t var_c4_1 = zmm0.d
    zmm0.d = float.s(zx.q(*(rsi + 0x54c)))
    int32_t var_c0_1 = zmm1.d
    zmm0.d = zmm0.d f* zmm3
    int32_t var_bc_1 = zmm0.d
    sub_1405d0e10(arg2, &arg_8, &arg1[0x17], &var_c8, 0)

float r13 = arg_28:4.d
float var_e8
float var_e0
float var_d8
char arg_38
int32_t r9_3

if (arg_38 == 0)
    r9_3 = *(rsi + 0x540)
    var_d8 = *(rsi + 0x54c)
    var_e0 = *(rsi + 0x548)
    var_e8 = *(rsi + 0x544)
else
    var_d8 = r13
    r9_3 = 0
    var_e0 = rbx.d
    var_e8 = 0f

float var_a8[0x4][0x4]
uint128_t zmm8 = sub_14148bee0(rsi, &var_a8, arg4, r9_3, var_e8, var_e0, var_d8)
uint128_t zmm6 = sub_1405eb5d0(arg2, &arg_8, &arg1[1], &var_a8, 0)
float zmm7[0x4] = zx.o(0)
uint128_t zmm1_1
uint128_t zmm2_1

if (arg1[6] u> 0)
    int32_t rcx_9 = *(rsi + 0x570)
    int32_t rdx_5 = rcx_9 & 0x40
    void* r8_5
    
    if (rdx_5 != 0)
        r8_5 = *(*(rsi + 0x5c0) + 0x20)
    
    if (rdx_5 != 0 && ((*(r8_5 + 0x13c) - 1) & 0xfd) == 0)
        void* rax_17 = data_143ed96d0
        
        if ((rcx_9.b & 0x10) == 0)
            rax_17 = data_143ed97a8
        
        zmm2_1.d = zmm6.d f/ *(rax_17 + 4)
        zmm2_1.d = zmm2_1.d f* *(r8_5 + 0xd4) * 2f
    else if (rdx_5 != 0 && *(rsi + 0x534) s>= 0 && (rcx_9.b & 0x10) != 0)
        zmm2_1.d = (*(data_143ed9358 + 4)).d f/ (*(rsi + 0x164) f- *(rsi + 0x168))
        zmm1_1.d = (*(rsi + 0x3c0)).d f/ float.s(zx.q(*(rsi + 0x548)))
        zmm2_1.d = zmm2_1.d f* zmm1_1.d
        zmm2_1.d = zmm2_1.d f* *(*(*(rsi + 0x5c0) + 0x20) + 0xd4)
    else if (not(test_bit(rcx_9, 0xb)))
        void* rax_21 = data_143ed96d0
        
        if ((rcx_9.b & 0x10) == 0)
            rax_21 = data_143ed97a8
        
        zmm2_1.d = zmm6.d f/ *(rax_21 + 4)
        zmm2_1.d = zmm2_1.d f* *(*(*(rsi + 0x5c0) + 0x20) + 0xd4) * 2f
    else
        zmm2_1 = zx.o(0)
    
    zmm2_1 = __maxss_xmmss_memss(zmm2_1.d, 0x3727c5ac)
    var_c8.q = 0
    float var_c0_2 = zmm6.d f/ zmm2_1.d
    zmm6 = sub_1405d0f50(arg2, &arg_8, &arg1[4], &var_c8, 0)

float zmm0_1

if (arg1[9] u> 0)
    zmm1_1 = _mm_cvtepi32_ps(zx.o(rbx.d))
    zmm0_1 = zmm6.d f/ zmm1_1.d
    zmm2_1 = _mm_cvtepi32_ps(zx.o(r13))
    var_c8 = zmm1_1.d
    zmm1_1.d = zmm6.d f/ zmm2_1.d
    int32_t var_c4_2 = zmm2_1.d
    int32_t var_bc_2 = zmm1_1.d
    float var_c0_3 = zmm0_1
    zmm6 = sub_1405d0e10(arg2, &arg_8, &arg1[7], &var_c8, 0)

void* rax_23 = *(rsi + 0x38)

if (rax_23 == 0)
    rax_23 = data_1439b70c8

int64_t r13_1 = *(rax_23 + 0x10)
int64_t* rbx_1 = data_14395fa10

if (arg1[0xb] u> 0)
    arg_38.d = zx.d(arg1[0xa])
    void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_25 = &rcx_16[5]
    
    if (rax_25 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_25 = &rcx_16[5]
    
    *(arg2 + 0x30) = rax_25
    int64_t* rax_26 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_26 = rcx_16
    *(arg2 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    *rcx_16 = &data_142d5a070
    rcx_16[3].d = arg_38.d
    rcx_16[2] = r12
    rcx_16[4] = r13_1

if (arg1[0xd] u> 0)
    uint32_t r13_2 = zx.d(arg1[0xc])
    
    if ((*(*rbx_1 + 8))(rbx_1) == 0)
        void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_31 = &rcx_23[5]
        
        if (rax_31 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_31 = &rcx_23[5]
        
        *(arg2 + 0x30) = rax_31
        void**** rax_32 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_32 = rcx_23
        *(arg2 + 8) = &rcx_23[1]
        rcx_23[1] = 0
        *rcx_23 = &data_142d5a080
        rcx_23[2] = r12
        rcx_23[3].d = r13_2
        rcx_23[4] = rbx_1
    
    if (arg1[0xd] u> 0)
        uint32_t r13_3 = zx.d(arg1[0xc])
        
        if ((*(*rbx_1 + 8))(rbx_1) == 0)
            void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_36 = &rcx_30[5]
            
            if (rax_36 u> *(arg2 + 0x38))
                zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_36 = &rcx_30[5]
            
            *(arg2 + 0x30) = rax_36
            void**** rax_37 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_37 = rcx_30
            *(arg2 + 8) = &rcx_30[1]
            rcx_30[1] = 0
            *rcx_30 = &data_142d5a080
            rcx_30[2] = r12
            rcx_30[3].d = r13_3
            rcx_30[4] = rbx_1

uint32_t rdx_8 = zx.d(*(*(*(rsi + 0x5c0) + 0x20) + 0x13c))
void* rax_40

if (rdx_8 == 0)
    rax_40 = data_143ed96e8
label_14149ceef:
    zmm2_1 = *(rax_40 + 4)
label_14149cef4:
    
    if (zmm2_1.d f>= 0f)
        zmm2_1 = _mm_min_ss(zmm2_1.d, zmm6.d)
    else
        zmm2_1 = zx.o(0)
else
    if (rdx_8 == 1)
        zmm2_1 = *(rsi + 0x8f8)
        goto label_14149cef4
    
    if (rdx_8 == 2)
        rax_40 = data_143ed97c0
        goto label_14149ceef
    
    if (rdx_8 == 3)
        rax_40 = data_143ed9760
        goto label_14149ceef
    
    zmm2_1 = _mm_min_ss(zmm6.d, zmm6.d)
zmm1_1 = *(rsi + 0x8f8)
var_c8 = *(rsi + 0x8f4)
int32_t var_c4_3 = zmm1_1.d
zmm0_1 = zmm6.d f- zmm2_1.d
zmm1_1.d = (*(rsi + 0x164)).d f- *(rsi + 0x168)
int32_t var_bc_3 = zmm1_1.d
sub_1405d0e10(arg2, &arg_8, &arg1[0xe], &var_c8, 0)
float zmm6_1[0x4] = sub_1405eb490(arg2, &arg_8, &arg1[0x11], rsi + 0x3e0, 0)
uint128_t zmm0_2

if (arg1[0x16] u> 0 && arg7 != 0)
    zmm0_2.d = zmm6_1.d f/ *(rsi + 0x3e4)
    arg_38.d = zmm0_2.d
    zmm6_1 = sub_1405eb490(arg2, &arg_8, &arg1[0x14], &arg_38, 0)

float var_b8

if (arg1[0x1c] u> 0)
    void* rcx_38 = *(*(rsi + 0x5c0) + 0x20)
    zmm2_1 = *(rcx_38 + 0x50)
    float zmm3_1[0x4] = *(rcx_38 + 0x60)
    var_c8.o = *(rcx_38 + 0x20)
    float* r9_10
    
    if (*(rcx_38 + 0x13c) != 0)
        r9_10 = &var_b8
        var_b8 = var_c8.d
        int32_t var_b0_1 = zmm0_1.d
        float var_b4_1 = var_c4_3[0]
        int32_t var_ac_1 = 0x3f800000
    else
        var_c8 = (*(rcx_38 + 0x40))[0]
        r9_10 = &var_c8
        int32_t var_c4_4 = zmm2_1.d
        float var_c0_5 = zmm3_1[0]
        int32_t var_bc_4 = 0
    
    zmm6_1 = sub_1405d0e10(arg2, &arg_8, &arg1[0x1a], r9_10, 0)

if (arg6 != 0)
    void* rcx_40 = *(arg6 + 0x28)
    
    if (rcx_40 != 0)
        int64_t r13_4 = *(rcx_40 + 0x10)
        
        if (arg1[0x1e] u> 0)
            arg_38.d = zx.d(arg1[0x1d])
            void*** rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_44 = &rcx_43[5]
            
            if (rax_44 u> *(arg2 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_43 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_44 = &rcx_43[5]
            
            *(arg2 + 0x30) = rax_44
            int64_t* rax_45 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_45 = rcx_43
            *(arg2 + 8) = &rcx_43[1]
            rcx_43[1] = 0
            *rcx_43 = &data_142d5a070
            rcx_43[3].d = arg_38.d
            rcx_43[2] = r12
            rcx_43[4] = r13_4
        
        if ((*(rsi + 0x570) & 0x10) != 0)
            zmm0_2 = *(rsi + 0x3d0)
            uint128_t var_68_1 = zmm8
            var_b8.q = 0
            zmm7 = *(arg4 + 0x2b0)
            zmm6_1 = *(arg4 + 0x2a0)
            float zmm5_1[0x4] = *(arg4 + 0x290)
            float zmm4_1[0x4] = *(arg4 + 0x280)
            int32_t var_ac_2 = 0x3f800000
            zmm2_1 = var_b8.o
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
            zmm2_1.d = zmm0_2.d
            int32_t var_c0_6 = 0
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            var_b8.o = zmm2_1
            zmm8 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm0_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), zmm6_1)
            var_b8.q = 0
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm7)
            int32_t var_ac_3 = 0x3f800000
            zmm0_2 = _mm_mul_ps(zmm0_2, zmm5_1)
            int32_t var_bc_5 = 0x3f800000
            zmm8 = _mm_mul_ps(zmm8, zmm4_1)
            int32_t var_c0_7 = 0
            float temp0_18[0x4] = _mm_add_ps(temp0_13, zmm2_1)
            int32_t var_bc_6 = 0x3f800000
            zmm2_1 = var_b8.o
            _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
            zmm8 = _mm_add_ps(zmm8, zmm0_2)
            zmm2_1.d = (*(rsi + 0x3d4)).d
            zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
            float temp0_22[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            zmm8 = _mm_add_ps(zmm8, temp0_18)
            zmm0_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            float temp0_25[0x4] = _mm_mul_ps(temp0_22, zmm4_1)
            float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), zmm6_1)
            zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm7)
            zmm6_1 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xff)
            zmm0_2 = _mm_mul_ps(zmm0_2, zmm5_1)
            float temp0_33[0x4] = _mm_add_ps(temp0_27, zmm2_1)
            zmm6_1[0] = zmm6_1[0] f/ zmm8.d
            float temp0_35[0x4] = _mm_add_ps(_mm_add_ps(temp0_25, zmm0_2), temp0_33)
            zmm7 = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
            float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xff)
            zmm7[0] = zmm7[0] / temp0_37[0]
        
        arg_28.d = zmm6_1[0]
        arg_28:4.d = zmm7[0]
        sub_1405d0cd0(arg2, &arg_8, &arg1[0x25], &arg_28, 0)
        arg_38.d = zx.d(arg7)
        sub_1405eb490(arg2, &arg_8, &arg1[0x28], &arg_38, 0)

sub_1405eb490(arg2, &arg_8, &arg1[0x1f], rsi + 0x5b8, 0)
uint64_t result
int512_t zmm6_2
result, zmm6_2 = sub_1405eb490(arg2, &arg_8, &arg1[0x22], rsi + 0x5bc, 0)
zmm6_2.o = arg5
return result
