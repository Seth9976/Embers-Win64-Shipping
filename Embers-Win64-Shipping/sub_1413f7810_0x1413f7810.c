// 函数: sub_1413f7810
// 地址: 0x1413f7810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t arg_18 = arg3
int64_t arg_10 = *(arg2 + 0x1a0)
sub_1405eb490(arg2, &arg_10, arg1 + 0x118, &arg_18, 0)
arg_10 = *(arg2 + 0x1a0)
sub_1405eb490(arg2, &arg_10, arg1 + 0x11e, &arg_20, 0)
int64_t* rsi = data_14395f4d0
int64_t r15 = *(arg2 + 0x1a0)
int64_t* arg_38
int64_t r13 = *arg_38

if (*(arg1 + 0x126) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x124))
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_4[5]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_4[5]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142d5a070
    rcx_4[2] = r15
    rcx_4[3].d = r12_1
    rcx_4[4] = r13

if (*(arg1 + 0x12a) u> 0)
    uint32_t r12_2 = zx.d(*(arg1 + 0x128))
    
    if ((*(*rsi + 8))(rsi) == 0)
        void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_11[5]
        
        if (rax_8 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_11[5]
        
        *(arg2 + 0x30) = rax_8
        void**** rax_9 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_9 = rcx_11
        *(arg2 + 8) = &rcx_11[1]
        rcx_11[1] = 0
        *rcx_11 = &data_142d5a080
        rcx_11[2] = r15
        rcx_11[3].d = r12_2
        rcx_11[4] = rsi

uint32_t arg_28
uint32_t rcx_15 = arg_28
int32_t rax_11
rax_11.b = rcx_15 == 0
int32_t rax_12
rax_12.b = rcx_15 == 1
int32_t var_68 = _mm_cvtepi32_ps(zx.o(rax_11)).d
int32_t rax_13
rax_13.b = rcx_15 == 2
int32_t var_64 = _mm_cvtepi32_ps(zx.o(rax_12)).d
int32_t rax_14
rax_14.b = rcx_15 == 3
int32_t var_60 = _mm_cvtepi32_ps(zx.o(rax_13)).d
int32_t rax_15
rax_15.b = rcx_15 == 4
int32_t var_5c = _mm_cvtepi32_ps(zx.o(rax_14)).d
int32_t rax_16
rax_16.b = rcx_15 == 5
int32_t var_58 = _mm_cvtepi32_ps(zx.o(rax_15)).d
int32_t rax_17
rax_17.b = rcx_15 == 6
int32_t var_54 = _mm_cvtepi32_ps(zx.o(rax_16)).d
int32_t rax_18
rax_18.b = rcx_15 == 7
int32_t var_50 = _mm_cvtepi32_ps(zx.o(rax_17)).d
int32_t rax_19
rax_19.b = rcx_15 == 8
int32_t var_4c = _mm_cvtepi32_ps(zx.o(rax_18)).d
int64_t* rax_20 = *(arg2 + 0x1a0)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_19))
arg_38 = rax_20
int32_t arg_8 = zmm0.d
sub_1405d0e10(arg2, &arg_38, arg1 + 0x12c, &var_68, 0)
arg_38 = *(arg2 + 0x1a0)
sub_1405d0e10(arg2, &arg_38, arg1 + 0x132, &var_58, 0)
uint64_t r15_1 = zx.q(*(arg1 + 0x13c))

if (r15_1.d u>= 4)
    r15_1 = 4

if (r15_1.d != 0)
    uint32_t r13_1 = zx.d(*(arg1 + 0x13a))
    int64_t rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg_28 = zx.d(*(arg1 + 0x138))
    arg_38 = *(arg2 + 0x1a0)
    int64_t rax_24 = rdi_3 + r15_1
    
    if (rax_24 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (r15_1 + 0x10).d)
        rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_24 = r15_1 + rdi_3
    
    *(arg2 + 0x30) = rax_24
    memcpy(rdi_3, &arg_8, r15_1.d)
    void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_25 = &rcx_22[6]
    
    if (rax_25 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_25 = &rcx_22[6]
    
    *(arg2 + 0x30) = rax_25
    void** rax_26 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_26 = rcx_22
    *(arg2 + 8) = &rcx_22[1]
    rcx_22[1] = 0
    *rcx_22 = &data_142d549d8
    rcx_22[2] = arg_38
    uint32_t rax_29 = arg_28
    rcx_22[3] = rdi_3
    rcx_22[4].d = rax_29
    *(rcx_22 + 0x24) = r13_1
    rcx_22[5].d = r15_1.d

arg_28 = arg5 * arg5 * 6
arg_38 = *(arg2 + 0x1a0)
return sub_1405eb490(arg2, &arg_38, arg1 + 0x13e, &arg_28, 0)
