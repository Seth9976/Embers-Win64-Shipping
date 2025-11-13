// 函数: sub_1411f25d0
// 地址: 0x1411f25d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = *(arg2 + 0x1a0)
uint64_t rdx = zx.q(arg3[0x2a9].d)
int64_t rax = *arg5
void* arg_10 = r12
int64_t arg_8 = 0
int32_t var_150 = 0
sub_141439ac0(arg1, arg2, r12, arg5, (*(rax + 0x40))(arg5, rdx, &arg_8), arg3, arg3.d + 0x10)
int64_t var_168
var_168.d = arg6
sub_1411b9cf0(arg1 + 0x130, arg2, r12, data_1439b6298)
void* arg_38
sub_1411b99b0(arg1 + 0x13a, arg2, r12, arg_38)
void* rax_3 = *(arg4 + 0x20)
float zmm2[0x4] = *(rax_3 + 0x60)
int32_t zmm1 = *(rax_3 + 0x50)
float var_148 = *(rax_3 + 0x40)
int32_t var_144 = zmm1
float var_140 = zmm2[0]
sub_1405d0f50(arg2, &arg_10, arg1 + 0x14a, &var_148, 0)
void* rax_4 = *(arg4 + 0x20)
uint64_t r15_1 = zx.q(*(arg1 + 0x154))
zmm2 = *(rax_4 + 0xc8)
float zmm1_1 = zmm2[0]
zmm2[0] = zmm2[0] f* *(rax_4 + 0x3c)
zmm1_1 = zmm1_1 f* *(rax_4 + 0x38)
float zmm0_1 = zmm2[0] f* *(rax_4 + 0x34)
zmm2[0] = zmm2[0] f* *(rax_4 + 0x30)
float var_140_1 = zmm1_1

if (r15_1.d u>= 0x10)
    r15_1 = 0x10

float var_144_1 = zmm0_1
var_148 = zmm2[0]
float var_13c = zmm2[0]

if (r15_1.d != 0)
    arg_8.d = zx.d(*(arg1 + 0x152))
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg5.d = zx.d(*(arg1 + 0x150))
    int64_t rax_7 = rbx_3 + r15_1
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (r15_1 + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_7 = rbx_3 + r15_1
    
    *(arg2 + 0x30) = rax_7
    memcpy(rbx_3, &var_148, r15_1.d)
    void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_10[6]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_10[6]
    
    *(arg2 + 0x30) = rax_8
    void**** rax_9 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_9 = rcx_10
    *(arg2 + 8) = &rcx_10[1]
    rcx_10[1] = 0
    *rcx_10 = &data_142d549d8
    rcx_10[4].d = arg5.d
    *(rcx_10 + 0x24) = arg_8.d
    rcx_10[2] = r12
    rcx_10[3] = rbx_3
    rcx_10[5].d = r15_1.d

void arg_40
sub_1405eb490(arg2, &arg_10, arg1 + 0x156, &arg_40, 0)
int64_t* rdi_1 = data_14395f4d0
int64_t r13 = *(*(arg_38 + 0x28) + 0x10)

if (*(arg1 + 0x15e) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x15c))
    void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_18[5]
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_18[5]
    
    *(arg2 + 0x30) = rax_14
    void**** rax_15 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_15 = rcx_18
    *(arg2 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142d5a070
    rcx_18[2] = r12
    rcx_18[3].d = r15_2
    rcx_18[4] = r13

if (*(arg1 + 0x162) u> 0)
    uint32_t r15_3 = zx.d(*(arg1 + 0x160))
    
    if ((*(*rdi_1 + 8))(rdi_1) == 0)
        void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_19 = &rcx_25[5]
        
        if (rax_19 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_19 = &rcx_25[5]
        
        *(arg2 + 0x30) = rax_19
        void** rax_20 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_20 = rcx_25
        *(arg2 + 8) = &rcx_25[1]
        rcx_25[1] = 0
        *rcx_25 = &data_142d5a080
        rcx_25[2] = r12
        rcx_25[3].d = r15_3
        rcx_25[4] = rdi_1

int32_t zmm13 = 0x3f800000
zmm2 = 0x3f800000
float zmm12[0x4] = data_142d3f660
int64_t var_120 = 0
void* rcx_29 = *(arg4 + 0x20)
float zmm10[0x4] = 0:4.o
float temp0[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe1)
int64_t var_134 = 0
float zmm3[0x4] = *(rcx_29 + 0x40)
float zmm6[0x4] = *(rcx_29 + 0x50)
float zmm9[0x4] = *(rcx_29 + 0x60)
uint128_t zmm1_2 = zx.o(*(rcx_29 + 0x110))
float zmm0_2[0x4] = zmm1_2
float zmm11[0x4] = *(rcx_29 + 0x70)
float zmm5 = 1f f/ zmm1_2.d
int32_t var_10c = 0
var_148.q = zmm1_2.q
zmm1_2.d = 1f f/ *(rcx_29 + 0x118)
float zmm8[0x4] = 0.o
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float var_138[0x4]
var_138[0] = zmm1_2.d
zmm2[0] = 1f / _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)[0]
zmm1_2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
temp0[0] = zmm2[0]
float temp0_5[0x4] = _mm_mul_ps(temp0_4, var_138)
float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float temp0_8[0x4] = _mm_mul_ps(temp0_6, zmm12)
float temp0_9[0x4] = _mm_shuffle_ps(temp0, temp0, 0xe1)
float temp0_10[0x4] = _mm_mul_ps(temp0_7, temp0_9)
float temp0_11[0x4] = _mm_mul_ps(temp0_1, temp0_9)
float temp0_12[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
temp0_12[0] = zmm5
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_14[0x4] = _mm_add_ps(temp0_11, temp0_5)
zmm1_2 = _mm_mul_ps(zmm1_2, temp0_13)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), var_138)
float temp0_18[0x4] = _mm_add_ps(temp0_14, zmm1_2)
zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), temp0_13)
float temp0_21[0x4] = _mm_add_ps(temp0_10, temp0_17)
float temp0_22[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
float temp0_23[0x4] = _mm_add_ps(temp0_18, temp0_8)
float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm12)
float temp0_25[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
float temp0_26[0x4] = _mm_add_ps(temp0_21, zmm1_2)
float temp0_27[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
float temp0_28[0x4] = _mm_mul_ps(temp0_25, temp0_9)
zmm1_2 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
float temp0_30[0x4] = _mm_mul_ps(temp0_27, var_138)
float temp0_31[0x4] = _mm_add_ps(temp0_26, temp0_24)
zmm1_2 = _mm_mul_ps(zmm1_2, temp0_13)
float temp0_33[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
float temp0_34[0x4] = _mm_add_ps(temp0_28, temp0_30)
float temp0_35[0x4] = _mm_mul_ps(temp0_33, zmm12)
float var_e8[0x4] = temp0_31
float var_f8[0x4] = temp0_23
float var_d8[0x4] = _mm_add_ps(_mm_add_ps(temp0_34, zmm1_2), temp0_35)
float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), var_138)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x55), temp0_9)
zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xaa), temp0_13)
float temp0_44[0x4] = _mm_add_ps(temp0_39, temp0_41)
float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xff), zmm12)
float var_c8[0x4] = _mm_add_ps(_mm_add_ps(temp0_44, zmm1_2), temp0_46)
float _X = sub_1405eb5d0(arg2, &arg_10, arg1 + 0x164, &var_f8, 0)
int64_t* rcx_31 = *(arg4 + 0x20)
arg_38 = r12
char rbx_7 = *(rcx_31 + 0x13c)
float zmm1_3

if (rbx_7 != 2)
    zmm1_3 = 1f
else
    (*(*rcx_31 + 0x20))()
    zmm1_3 = tanf(_X)

if (rbx_7 != 1)
    _X = (zx.o(0)).d
else
    _X = 1f

if (rbx_7 != 2)
    zmm13 = (zx.o(0)).d

var_148 = zmm1_3
int32_t var_140_3 = zmm13
float _X_1 = _X
int32_t var_144_2 = 0x3f800000
return sub_1405d0e10(arg2, &arg_38, arg1 + 0x16a, &var_148, 0)
