// 函数: sub_141215990
// 地址: 0x141215990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* rax = sub_14139bef0(arg2)
int32_t rcx_1 = data_1439b6364
int32_t rsi

if (rcx_1 s>= 1)
    rsi = 8
    
    if (rcx_1 s< 8)
        rsi = rcx_1
else
    rsi = 1

void* arg_28
void* r15 = arg_28
int32_t zmm1 = float.s(zx.q(divu.dp.d(0:(*(r15 + 0x15a0) - *(r15 + 0x1598)), rsi)))
int64_t rax_7 = *(rax + 0x37c)
int64_t var_108 = rax_7
int32_t temp0_2 = divs.dp.d(sx.q(rax_7.d), rsi)
uint128_t zmm2
zmm2.d = float.s(zx.q(divu.dp.d(0:(*(r15 + 0x15a4) - *(r15 + 0x159c)), rsi)))
var_108.d = temp0_2
zmm2.d = zmm2.d f+ zmm2.d
var_108:4.d = divs.dp.d(sx.q(var_108:4.d), rsi)
uint128_t zmm10 = _mm_cvtepi32_ps(zx.o(temp0_2))
zmm2.d = zmm2.d f- 0.5f
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o((var_108 u>> 0x20).d))
zmm2.d = _mm_cvtepi32_ps(zx.o(int.d(zmm2.d) s>> 1)).d f/ zmm3.d
uint128_t zmm4
zmm4.d = _mm_cvtepi32_ps(zx.o(int.d(zmm1 f+ zmm1 f- 0.5f) s>> 1)).d f/ zmm10.d
zmm2.d = zmm2.d f* zmm10.d
int32_t var_e8 = zmm4.d
float zmm0 = zmm2.d f/ zmm3.d
zmm3.d = zmm3.d f/ zmm2.d
float var_e4 = zmm0
int32_t var_dc = zmm3.d
sub_1405d0e10(arg2, &arg_18, &arg1[0x15], &var_e8, 0)
int64_t* rcx_8 = *(arg4 + 0x20)
int32_t var_110 = *(r15 + 0x614)
int64_t var_118 = *(r15 + 0x60c)
float var_100
(*(*rcx_8 + 0x80))(rcx_8, &var_100, &var_118)
int32_t var_c8
sub_1422f9c00(r15, &var_c8, &var_100)
int64_t rax_19 = *(rax + 0x37c)
uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(rax_19.d))
bool cond:0 = data_1439c7a1c.d f<= 0f
int32_t var_bc
uint128_t zmm2_1
zmm2_1.d = 1f f/ var_bc
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o((rax_19 u>> 0x20).d))
uint128_t zmm3_1
int32_t var_c4

if (cond:0)
    zmm3_1.d = 1f f- var_c4
else
    zmm3_1 = var_c4
int32_t rcx_10 = *(r15 + 0x1598)
int32_t rdx_5 = *(r15 + 0x159c)
uint128_t zmm0_2
zmm0_2.d = var_c8.d f* 0.5f
zmm3_1.d = zmm3_1.d f* 0.5f
zmm0_2.d = zmm0_2.d f* zmm2_1.d
zmm3_1.d = zmm3_1.d f* zmm2_1.d
zmm0_2.d = zmm0_2.d f+ 0.5f
int32_t rax_23 = *(r15 + 0x15a4)
zmm2_1.d = 0.5f f- zmm3_1.d
uint128_t zmm1_1
zmm1_1.d = _mm_cvtepi32_ps(zx.o(*(r15 + 0x15a0) - rcx_10)).d f* zmm0_2.d
zmm1_1.d = zmm1_1.d f+ _mm_cvtepi32_ps(zx.o(rcx_10)).d
zmm1_1.d = zmm1_1.d f/ zmm4_1.d
zmm2_1.d = zmm2_1.d f* _mm_cvtepi32_ps(zx.o(rax_23 - rdx_5)).d
zmm1_1.d = zmm1_1.d f* 1f f/ zmm4.d
int32_t var_d8 = zmm1_1.d
zmm2_1.d = zmm2_1.d f+ _mm_cvtepi32_ps(zx.o(rdx_5)).d
zmm2_1.d = zmm2_1.d f/ zmm5.d
zmm2_1.d = zmm2_1.d f* var_dc
int32_t var_d4 = zmm2_1.d
int32_t zmm0_3 = sub_1405d0cd0(arg2, &arg_18, arg1, &var_d8, 0)
int64_t* rcx_12 = *(arg4 + 0x20)
(*(*rcx_12 + 0x18))(rcx_12)
var_118.d = var_100
float var_f8
float var_110_1 = var_f8
int32_t var_fc
var_118:4.d = var_fc.d
int32_t var_10c = zmm0_3
int32_t zmm0_4 = sub_1405d0e10(arg2, &arg_18, &arg1[3], &var_118, 0)
int64_t* rcx_14 = *(arg4 + 0x20)
(*(*rcx_14 + 0x28))(rcx_14)
arg_28.d = zmm0_4
sub_1405eb490(arg2, &arg_18, &arg1[6], &arg_28, 0)
void* rax_27 = *(arg4 + 0x20)

if (*(rax_27 + 0x13c) == 2)
    var_118.d = *(rax_27 + 0x40)
    var_118:4.d = *(rax_27 + 0x50)
    int32_t var_110_2 = (*(rax_27 + 0x60)).d
    sub_1405d0f50(arg2, &arg_18, &arg1[0xc], &var_118, 0)
    int64_t* rcx_17 = *(arg4 + 0x20)
    sub_1405d0cd0(arg2, &arg_18, &arg1[9], (*(*rcx_17 + 0x60))(rcx_17, &arg_28), 0)

float zmm5_1 = *(r15 + 0x60c)
uint128_t zmm4_2 = *(r15 + 0x610)
zmm3_1 = *(r15 + 0x614)
var_118.d = zmm5_1
float zmm1_3 = zmm5_1 - var_100
var_118:4.d = zmm4_2.d
zmm2_1.d = zmm4_2.d f- var_fc
int32_t var_110_3 = zmm3_1.d
float zmm0_5 = zmm3_1.d - var_f8
zmm2_1.d = zmm2_1.d f* zmm2_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_3 * zmm1_3
zmm2_1.d = zmm2_1.d f+ zmm0_5 * zmm0_5
int32_t var_10c_1 = _mm_sqrt_ss((zx.o(0)).d, zmm2_1.d) f+ 200f
sub_1405d0e10(arg2, &arg_18, &arg1[0xf], &var_118, 0)
void* r8_9 = *(r15 + 0x1598)
arg_28 = r8_9
int32_t temp0_15 = divs.dp.d(sx.q(r8_9.d), rsi)
zmm3_1 = _mm_cvtepi32_ps(zx.o(var_108:4.d))
arg_28.d = temp0_15
arg_28:4.d = divs.dp.d(sx.q(arg_28:4.d), rsi)
uint32_t rax_37 = (arg_28 u>> 0x20).d
uint128_t zmm1_4 = _mm_cvtepi32_ps(zx.o(temp0_15))
uint64_t rcx_21 = zx.q(divu.dp.d(0:(*(r15 + 0x15a0) - r8_9.d), rsi))
int32_t rax_42 = *(r15 + 0x15a4) - (r8_9 u>> 0x20).d
zmm2_1 = _mm_cvtepi32_ps(zx.o(rax_37))
float var_b8 = (zmm1_4.d + 0.5f) f/ zmm10.d
float var_b4 = (zmm2_1.d + 0.5f) f/ zmm3_1.d
float var_b0 = (float.s(rcx_21) f+ zmm1_4.d - 0.5f) f/ zmm10.d
float var_ac = (float.s(zx.q(divu.dp.d(0:rax_42, rsi))) f+ zmm2_1.d - 0.5f) f/ zmm3_1.d
sub_1405d0e10(arg2, &arg_18, &arg1[0x12], &var_b8, 0)
int32_t var_98
sub_140acc920(&var_98, arg4 + 0x74)
var_118.d = var_98
int32_t var_94
var_118:4.d = var_94
int32_t var_90
int32_t var_110_4 = var_90
int32_t var_10c_2 = *(arg4 + 0x6c)
sub_1405d0e10(arg2, &arg_18, &arg1[0x1b], &var_118, 0)
sub_1405eb490(arg2, &arg_18, &arg1[0x1e], arg4 + 0x70, 0)
int64_t* rcx_27 = *(arg4 + 0x20)
int32_t var_f0
float arg_20
(*(*rcx_27 + 0x78))(rcx_27, &var_f0, &arg_20)
int32_t var_9c = var_f0
int32_t var_a0 = 0x3f800000
float var_a8 = 1f / arg_20
float var_a4 = *(arg4 + 0x68)
float zmm0_9
float zmm6_1
zmm0_9, zmm6_1 = sub_1405d0e10(arg2, &arg_18, &arg1[0x18], &var_a8, 0)
int64_t* rcx_29 = *(arg4 + 0x20)
float arg_8 = 0f

if (*(rcx_29 + 0x13c) != 0)
    (*(*rcx_29 + 0x18))(rcx_29)
    zmm6_1 = zmm6_1 / (zmm0_9 * 5f)
    
    if (not(zmm6_1 < 0f))
        arg_8 = _mm_min_ss(zmm6_1, 0x3f800000)

sub_1405eb490(arg2, &arg_18, &arg1[0x21], &arg_8, 0)
int64_t* result = arg5
void* rcx_31 = *result

if (rcx_31 != 0)
    int64_t r15_1 = *(rcx_31 + 0x10)
    int64_t* r14_1 = data_14395f4d0
    
    if (arg1[0x25] u> 0)
        uint32_t r13_1 = zx.d(arg1[0x24])
        void*** rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_46 = &rcx_34[5]
        
        if (rax_46 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_46 = &rcx_34[5]
        
        *(arg2 + 0x30) = rax_46
        void**** rax_47 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_47 = rcx_34
        *(arg2 + 8) = &rcx_34[1]
        rcx_34[1] = 0
        result = &data_142d5a070
        rcx_34[3].d = r13_1
        *rcx_34 = &data_142d5a070
        rcx_34[2] = arg3
        rcx_34[4] = r15_1
    
    if (arg1[0x27] u> 0)
        uint32_t rsi_1 = zx.d(arg1[0x26])
        result = (*(*r14_1 + 8))(r14_1)
        
        if (result.b == 0)
            void*** rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_50 = &rcx_41[5]
            
            if (rax_50 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_50 = &rcx_41[5]
            
            *(arg2 + 0x30) = rax_50
            void** rax_51 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_51 = rcx_41
            *(arg2 + 8) = &rcx_41[1]
            rcx_41[1] = 0
            result = &data_142d5a080
            *rcx_41 = &data_142d5a080
            rcx_41[2] = arg3
            rcx_41[3].d = rsi_1
            rcx_41[4] = r14_1

return result
