// 函数: sub_141145a50
// 地址: 0x141145a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg2 + 0x1a0)
int64_t arg_8 = rsi
sub_141080ac0(arg1, arg2, rsi, *(arg3 + 0x10))
int32_t r8_1 = *(arg3 + 0x1548)

if (*(arg1 + 0x118) != 0xffff)
    int64_t arg_10
    int64_t* rcx = &arg_10
    
    if (r8_1 s< 3)
        sub_14137b7f0(rcx, arg2)
    else
        sub_14137baa0(rcx, arg2, 0xf, r8_1)
    
    sub_141083500(arg2, &arg_8, arg1 + 0x118, arg_10)
    sub_1405d1550(&arg_10)

int64_t var_80 = arg6
sub_14113bbe0(arg1 + 0x138, arg2, rsi, arg3, sub_1411180a0(arg1 + 0x11a, arg2, rsi, arg8), arg5)
int64_t* r15_1 = data_14395f4d0
void* arg_38
int64_t r13 = *(arg_38 + 8)

if (*(arg1 + 0x16e) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x16c))
    void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_7[5]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_7[5]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_7
    *(arg2 + 8) = &rcx_7[1]
    rcx_7[1] = 0
    *rcx_7 = &data_142d5a070
    rcx_7[2] = rsi
    rcx_7[3].d = r12_1
    rcx_7[4] = r13

if (*(arg1 + 0x172) u> 0)
    uint32_t r12_2 = zx.d(*(arg1 + 0x170))
    
    if ((*(*r15_1 + 8))(r15_1) == 0)
        void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_14[5]
        
        if (rax_8 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_14[5]
        
        *(arg2 + 0x30) = rax_8
        void**** rax_9 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_9 = rcx_14
        *(arg2 + 8) = &rcx_14[1]
        rcx_14[1] = 0
        *rcx_14 = &data_142d5a080
        rcx_14[2] = rsi
        rcx_14[3].d = r12_2
        rcx_14[4] = r15_1

sub_1405eb490(arg2, &arg_8, arg1 + 0x174, &data_1439b5c38, 0)
sub_1405eb490(arg2, &arg_8, arg1 + 0x17a, &data_1439b5c3c, 0)
int32_t zmm0

if (data_1439b5c34 == 0 || data_1439b55a0 s< 2)
    zmm0 = (zx.o(0)).d
else
    zmm0 = 0x3f800000

arg_38.d = zmm0
sub_1405eb490(arg2, &arg_8, arg1 + 0x180, &arg_38, 0)
void* rax_11 = arg7

if (rax_11 == 0)
    rax_11 = data_143f10e68

int64_t r12_3 = *(rax_11 + 0x10)
int64_t* r15_2 = data_14395f4d0

if (*(arg1 + 0x188) u> 0)
    uint32_t r13_1 = zx.d(*(arg1 + 0x186))
    void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_13 = &rcx_23[5]
    
    if (rax_13 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_13 = &rcx_23[5]
    
    *(arg2 + 0x30) = rax_13
    void**** rax_14 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_14 = rcx_23
    *(arg2 + 8) = &rcx_23[1]
    rcx_23[1] = 0
    rcx_23[3].d = r13_1
    *rcx_23 = &data_142d5a070
    rcx_23[2] = rsi
    rcx_23[4] = r12_3

if (*(arg1 + 0x18c) u> 0)
    uint32_t r12_4 = zx.d(*(arg1 + 0x18a))
    
    if ((*(*r15_2 + 8))(r15_2) == 0)
        void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_18 = &rcx_30[5]
        
        if (rax_18 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_18 = &rcx_30[5]
        
        *(arg2 + 0x30) = rax_18
        void** rax_19 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_19 = rcx_30
        *(arg2 + 8) = &rcx_30[1]
        rcx_30[1] = 0
        *rcx_30 = &data_142d5a080
        rcx_30[2] = rsi
        rcx_30[3].d = r12_4
        rcx_30[4] = r15_2

void* rcx_35 = *(sub_14139bef0(arg2) + 0x37c)
arg_38 = rcx_35
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rcx_35.d)
int32_t rax_25 = (temp1 - temp0) s>> 1
arg_38.d = rax_25
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg_38:4.d)
arg_38:4.d = (temp3 - temp2) s>> 1
uint32_t rax_31 = (arg_38 u>> 0x20).d
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_25))
int32_t r9_6 = arg4[2]
int32_t rdx_9 = *arg4
int32_t r8_8 = arg4[3]
int32_t rcx_38 = arg4[1]
float zmm6_1 = 1f f/ zmm0_1.d
int128_t zmm7
zmm7.d = 1f f/ _mm_cvtepi32_ps(zx.o(rax_31)).d
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(r9_6 - rdx_9))
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rcx_38))
zmm0_1.d = zmm4.d f* zmm6_1
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r8_8 - rcx_38))
zmm0_1.d = zmm0_1.d f* 0.5f
zmm4.d = zmm4.d f* 0.5f
int32_t var_78 = zmm0_1.d
zmm0_1.d = data_1439c7a1c.d f* -2f
uint128_t zmm1
zmm1.d = zmm2.d f* zmm7.d
zmm2.d = zmm2.d f* 0.5f
zmm1.d = zmm1.d f/ zmm0_1.d
zmm2.d = zmm2.d f+ zmm3.d
int32_t var_74 = zmm1.d
zmm0_1 = _mm_cvtepi32_ps(zx.o(rdx_9))
zmm3.d = zmm3.d f+ 0.5f
zmm4.d = zmm4.d f+ zmm0_1.d
zmm2.d = zmm2.d f* zmm7.d
zmm0_1.d = zmm0_1.d f+ 0.5f
zmm0_1.d = zmm0_1.d f* zmm6_1
zmm1.d = _mm_cvtepi32_ps(zx.o(r8_8)).d f- 0.5f
zmm4.d = zmm4.d f* zmm6_1
int32_t var_68 = zmm0_1.d
zmm1.d = zmm1.d f* zmm7.d
zmm0_1.d = _mm_cvtepi32_ps(zx.o(r9_6)).d f- 0.5f
zmm3.d = zmm3.d f* zmm7.d
int32_t var_5c = zmm1.d
int32_t var_70 = zmm2.d
int32_t var_6c = zmm4.d
zmm0_1.d = zmm0_1.d f* zmm6_1
int32_t var_64 = zmm3.d
int32_t var_60 = zmm0_1.d
sub_1405d0e10(arg2, &arg_8, arg1 + 0x18e, &var_78, 0)
return sub_1405d0e10(arg2, &arg_8, arg1 + 0x194, &var_68, 0)
