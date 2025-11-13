// 函数: sub_141141db0
// 地址: 0x141141db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
int64_t rbp = *(arg2 + 0x1a0)
int64_t arg_8 = rbp
sub_141080ac0(arg1, arg2, rbp, *(arg3 + 0x10))
int64_t* r14 = data_14395f4d0
int64_t r12 = *(arg5 + 8)

if (*(arg1 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142d5a070
    rcx_2[2] = rbp
    rcx_2[3].d = r15_1
    rcx_2[4] = r12

if (*(arg1 + 0x11e) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x11c))
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_9[5]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_6
        void**** rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142d5a080
        rcx_9[2] = rbp
        rcx_9[3].d = r15_2
        rcx_9[4] = r14

int64_t r15_3 = *(arg4 + 8)
int64_t* r14_1 = data_14395f4d0

if (*(arg1 + 0x134) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x132))
    void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_15[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_15[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_15
    *(arg2 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    rcx_15[3].d = r12_1
    *rcx_15 = &data_142d5a070
    rcx_15[2] = rbp
    rcx_15[4] = r15_3

if (*(arg1 + 0x138) u> 0)
    uint32_t r15_4 = zx.d(*(arg1 + 0x136))
    
    if ((*(*r14_1 + 8))(r14_1) == 0)
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_14 = &rcx_22[5]
        
        if (rax_14 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_14 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_14
        void** rax_15 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_15 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142d5a080
        rcx_22[2] = rbp
        rcx_22[3].d = r15_4
        rcx_22[4] = r14_1

sub_1405eb490(arg2, &arg_8, arg1 + 0x120, &data_1439b5c38, 0)
void* rcx_28 = *(sub_14139bef0(arg2) + 0x37c)
arg5 = rcx_28
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rcx_28.d)
int32_t rax_21 = (temp1 - temp0) s>> 1
arg5.d = rax_21
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg5:4.d)
int32_t rax_25 = (temp3 - temp2) s>> 1
arg5:4.d = rax_25
uint128_t zmm0
zmm0.d = 1f f/ _mm_cvtepi32_ps(zx.o(rax_21)).d
int32_t arg_10 = zmm0.d
float arg_14 = 1f f/ _mm_cvtepi32_ps(zx.o((arg5 u>> 0x20).d)).d
int32_t zmm6_1 = sub_1405d0cd0(arg2, &arg_8, arg1 + 0x126, &arg_10, 0)
void* rcx_33 = arg_18
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(*(rcx_33 + 0x15a0) - *(rcx_33 + 0x1598))
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(*(rcx_33 + 0x15a4) - *(rcx_33 + 0x159c))
uint128_t zmm0_1
zmm0_1.d = _mm_cvtepi32_ps(zx.o((temp5 - temp4) s>> 1)).d f- 2.5f
zmm0_1.d = zmm0_1.d f/ zmm6_1
uint128_t zmm1_1
zmm1_1.d = _mm_cvtepi32_ps(zx.o((temp7 - temp6) s>> 1)).d f- 2.5f
arg_18.d = zmm0_1.d
zmm1_1.d = zmm1_1.d f/ _mm_cvtepi32_ps(zx.o(rax_25)).d
arg_18:4.d = zmm1_1.d
return sub_1405d0cd0(arg2, &arg_8, arg1 + 0x12c, &arg_18, 0)
