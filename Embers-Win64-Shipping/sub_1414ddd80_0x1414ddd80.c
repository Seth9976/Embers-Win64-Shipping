// 函数: sub_1414ddd80
// 地址: 0x1414ddd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg3 + 0x10)
int64_t rbp = *(arg2 + 0x1a0)
int64_t arg_8 = rbp
sub_141080ac0(arg1, arg2, rbp, r9)
int64_t* rax = sub_14139bef0(arg2)
int64_t* rcx_1 = rax[0x37]
int64_t rdx = *rcx_1
void* rax_1 = (*(rdx + 0x10))(rcx_1, rdx)
int64_t* rcx_2 = rax[0x37]
int64_t rdx_1 = *rcx_2
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(rax_1 + 0x14)))
void* rax_2 = (*(rdx_1 + 0x10))(rcx_2, rdx_1)
int32_t var_58 = zmm6.d
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(*(rax_2 + 0x18)))
float var_50 = 1f f/ zmm6.d
int32_t var_54 = zmm2.d
float var_4c = 1f f/ zmm2.d
sub_1405d0e10(arg2, &arg_8, arg1 + 0x11a, &var_58, 0)
int64_t r12 = *(rax[0x37] + 0x10)

if (*(arg1 + 0x126) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x124))
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_6[5]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_6[5]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    *rcx_6 = &data_142d5a070
    rcx_6[2] = rbp
    rcx_6[3].d = r14_1
    rcx_6[4] = r12

int64_t r14_2 = *(rax[0x39] + 8)

if (*(arg1 + 0x122) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x120))
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_12[5]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_12[5]
    
    *(arg2 + 0x30) = rax_8
    void**** rax_9 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_9 = rcx_12
    *(arg2 + 8) = &rcx_12[1]
    rcx_12[1] = 0
    *rcx_12 = &data_142d5a070
    rcx_12[2] = rbp
    rcx_12[3].d = r15_1
    rcx_12[4] = r14_2

int64_t* r14_3 = data_14395f4d0

if (*(arg1 + 0x12a) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x128))
    
    if ((*(*r14_3 + 8))(r14_3) == 0)
        void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_13 = &rcx_19[5]
        
        if (rax_13 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_13 = &rcx_19[5]
        
        *(arg2 + 0x30) = rax_13
        void**** rax_14 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_14 = rcx_19
        *(arg2 + 8) = &rcx_19[1]
        rcx_19[1] = 0
        *rcx_19 = &data_142d5a080
        rcx_19[2] = rbp
        rcx_19[3].d = r15_2
        rcx_19[4] = r14_3

int64_t* r14_4 = data_14395fa10

if (*(arg1 + 0x12e) u> 0)
    uint32_t r15_3 = zx.d(*(arg1 + 0x12c))
    
    if ((*(*r14_4 + 8))(r14_4) == 0)
        void*** rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_18 = &rcx_26[5]
        
        if (rax_18 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_18 = &rcx_26[5]
        
        *(arg2 + 0x30) = rax_18
        void**** rax_19 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_19 = rcx_26
        *(arg2 + 8) = &rcx_26[1]
        rcx_26[1] = 0
        *rcx_26 = &data_142d5a080
        rcx_26[2] = rbp
        rcx_26[3].d = r15_3
        rcx_26[4] = r14_4

int32_t r8_2 = *(arg3 + 0x1548)
int64_t arg_10 = *(arg2 + 0x1a0)

if (*(arg1 + 0x118) == 0xffff)
    return 0xffff

int64_t* rcx_30 = &arg_8

if (r8_2 s< 3)
    sub_14137b7f0(rcx_30, arg2)
else
    sub_14137baa0(rcx_30, arg2, 0xf, r8_2)

sub_141083500(arg2, &arg_10, arg1 + 0x118, arg_8)
return sub_1405d1550(&arg_8)
