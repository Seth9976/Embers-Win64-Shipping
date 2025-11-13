// 函数: sub_1408e0d60
// 地址: 0x1408e0d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(*(arg2 + 0x1c))
int64_t rbx = *arg2
void* rbp = arg3
int32_t rcx = arg2[3].d
int64_t r11_2 = *(r10 + rbx) << rcx.b | arg2[2]
arg2[3].d = (rcx | 0x38) - 8
uint64_t r9_2 = zx.q(((0x3f - rcx) u>> 3) + r10.d)
*(arg2 + 0x1c) = r9_2.d
uint64_t rdx_1 = r11_2 u>> 8
arg2[2] = rdx_1
uint64_t r9_3 = zx.q(r9_2.d + ((0x3f - ((rcx | 0x38) - 8)) u>> 3))
int64_t r8_2 = *(r9_2 + rbx) << ((rcx | 0x38) - 8).b | rdx_1
*(arg2 + 0x1c) = r9_3.d
char var_4f = r8_2.b
uint64_t rdx_3 = r8_2 u>> 8
arg2[2] = rdx_3
arg2[3].d = (((rcx | 0x38) - 8) | 0x38) - 8
int64_t r8_5 = *(r9_3 + rbx) << ((((rcx | 0x38) - 8) | 0x38) - 8).b | rdx_3
uint64_t r10_3 = zx.q(((0x3f - ((((rcx | 0x38) - 8) | 0x38) - 8)) u>> 3) + r9_3.d)
char var_4e = r8_5.b
*(arg2 + 0x1c) = r10_3.d
uint64_t rdx_5 = r8_5 u>> 8
arg2[2] = rdx_5
arg2[3].d = (((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
int64_t r8_8 = *(r10_3 + rbx) << ((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b | rdx_5
uint64_t r9_6 = zx.q(((0x3f - ((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r10_3.d)
char var_4d = r8_8.b
*(arg2 + 0x1c) = r9_6.d
arg2[3].d = (((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
uint64_t rdx_7 = r8_8 u>> 8
arg2[2] = rdx_7
int64_t r8_11 =
    *(r9_6 + rbx) << ((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b | rdx_7
uint64_t r10_6 =
    zx.q(((0x3f - ((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r9_6.d)
*(arg2 + 0x1c) = r10_6.d
uint64_t rdx_9 = r8_11 u>> 8
arg2[2] = rdx_9
arg2[3].d = (((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
int64_t r8_14 = *(r10_6 + rbx)
    << ((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b | rdx_9
char var_4b = r8_14.b
uint64_t rdx_11 = r8_14 u>> 8
arg2[2] = rdx_11
arg2[3].d =
    (((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
uint64_t r11_5 = zx.q(((0x3f
    - ((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r10_6.d)
*(arg2 + 0x1c) = r11_5.d
uint64_t r10_9 = zx.q(((0x3f -
    ((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8))
    u>> 3) + r11_5.d)
int64_t r9_9 = *(r11_5 + rbx) <<
    ((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b
    | rdx_11
*(arg2 + 0x1c) = r10_9.d
char var_4a = r9_9.b
arg2[3].d = (((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)
    | 0x38) - 8) | 0x38) - 8
uint64_t r8_16 = r9_9 u>> 8
arg2[2] = r8_16
int64_t rdx_13 = *(r10_9 + rbx) << ((((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38)
    - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b
int64_t rdx_14 = rdx_13 | r8_16
arg2[2] = rdx_14
arg2[2] u>>= 8
arg2[3].d = (((((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)
    | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
int32_t r9_10 = 0x3f - ((((((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)
    | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)
uint32_t r8_18 = (0x3f - ((((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)
    | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3
uint64_t r8_19 = zx.q(r8_18 + r10_9.d)
*(arg2 + 0x1c) = r8_19.d
uint64_t r9_12 = zx.q((r9_10 u>> 3) + r8_19.d)
char var_49 = rdx_14.b
int64_t rdx_16 = *(r8_19 + rbx) << ((((((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)
    | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b
int32_t rcx_17 = ((((((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38)
    - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38
int64_t rdx_17 = rdx_16 | arg2[2]
arg2[2] = rdx_17
arg2[2] u>>= 8
arg2[3].d = rcx_17 - 8
*(arg2 + 0x1c) = r9_12.d
int64_t rdx_20 = *(r9_12 + rbx) << (rcx_17 - 8).b | arg2[2]
arg2[2] = rdx_20
arg2[2] u>>= 8
uint64_t r8_22 = zx.q(((0x3f - (rcx_17 - 8)) u>> 3) + r9_12.d)
arg2[3].d = ((rcx_17 - 8) | 0x38) - 8
*(arg2 + 0x1c) = r8_22.d
int64_t rdx_23 = *(r8_22 + rbx) << (((rcx_17 - 8) | 0x38) - 8).b | arg2[2]
arg2[2] = rdx_23
char var_47 = rdx_20.b
arg2[2] u>>= 8
arg2[3].d = ((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8
uint64_t r9_15 = zx.q(((0x3f - (((rcx_17 - 8) | 0x38) - 8)) u>> 3) + r8_22.d)
char var_46 = rdx_23.b
*(arg2 + 0x1c) = r9_15.d
uint64_t r8_25 = zx.q(((0x3f - (((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r9_15.d)
int64_t rdx_26 = *(r9_15 + rbx) << (((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8).b | arg2[2]
arg2[2] = rdx_26
arg2[2] u>>= 8
arg2[3].d = ((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
*(arg2 + 0x1c) = r8_25.d
int64_t rdx_29 =
    *(r8_25 + rbx) << (((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b | arg2[2]
arg2[2] = rdx_29
arg2[2] u>>= 8
arg2[3].d = ((((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
uint64_t r9_18 =
    zx.q(((0x3f - (((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r8_25.d)
char var_45 = rdx_26.b
*(arg2 + 0x1c) = r9_18.d
int64_t rdx_32 =
    *(r9_18 + rbx) << (((((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b
    | arg2[2]
arg2[2] = rdx_32
arg2[2] u>>= 8
arg2[3].d = ((((((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
char var_43 = rdx_32.b
uint64_t r8_28 = zx.q(((0x3f
    - (((((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r9_18.d)
*(arg2 + 0x1c) = r8_28.d
uint64_t r9_21 = zx.q(((0x3f
    - (((((((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3)
    + r8_28.d)
int64_t rdx_35 = *(r8_28 + rbx)
    << (((((((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b
    | arg2[2]
arg2[2] = rdx_35
arg2[2] u>>= 8
char var_42 = rdx_35.b
arg2[3].d = ((((((((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)
    | 0x38) - 8
*(arg2 + 0x1c) = r9_21.d
int64_t rdx_37 = *(r9_21 + rbx) << (((((((((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)
    | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b
int64_t rdx_38 = rdx_37 | arg2[2]
int32_t rax_12 = ((0x3f - (((((((((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38)
    - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r9_21.d
arg2[2] = rdx_38
*(arg2 + 0x1c) = rax_12
arg2[2] u>>= 8
int32_t zmm3 = r11_2.b.d
int32_t r12 = 0
arg2[3].d = ((((((((((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38)
    - 8) | 0x38) - 8) | 0x38) - 8
int32_t r13 = 0
uint64_t result = zx.q(arg5)
char var_41 = rdx_38.b
int32_t arg_18 = 0

if (result.d != 0)
    uint64_t var_68_1 = result
    uint64_t i
    
    do
        int32_t r8_31 = arg2[3].d
        uint64_t rdx_39 = zx.q(*(arg2 + 0x1c))
        int64_t r15_1 = *arg2
        int32_t r8_32 = r8_31 | 0x38
        uint64_t rbx_3 = zx.q(((0x3f - r8_31) u>> 3) + rdx_39.d)
        int64_t r9_24 = *(rdx_39 + r15_1) << r8_31.b | arg2[2]
        arg2[2] = r9_24
        arg2[3].d = r8_32
        uint64_t rax_15 = zx.q(r9_24.d) & 0x7ff
        *(arg2 + 0x1c) = rbx_3.d
        int32_t rcx_33 = sx.d(*(arg1 + (rax_15 << 1) + 0x1010))
        uint64_t r9_25 = r9_24 u>> rcx_33.b
        int32_t r8_33 = r8_32 - rcx_33
        arg2[2] = r9_25
        arg2[3].d = r8_33
        int64_t r11_6 = sx.q(*(arg1 + (rax_15 << 1) + 0x1011))
        int32_t r10_10 = (r11_6 - 2).d
        
        if (r11_6.d s>= 4)
            int32_t r10_11 = r10_10 s>> 1
            char rcx_34 = r10_11.b
            r8_33 -= r10_11
            uint64_t rdx_41 = r9_25 u>> rcx_34
            arg2[2] = rdx_41
            arg2[3].d = r8_33
            r10_10 = (((1 << rcx_34).d - 1) & r9_25.d) + *(&data_143cebee0 + (r11_6 << 2))
            r9_25 = rdx_41
        
        int64_t r11_9 = *(rbx_3 + r15_1) << r8_33.b | r9_25
        arg2[2] = r11_9
        uint64_t rax_17 = zx.q(r11_9.d) & 0x7ff
        int32_t r8_34 = r8_33 | 0x38
        uint64_t r14_3 = zx.q(((0x3f - r8_33) u>> 3) + rbx_3.d)
        arg2[3].d = r8_34
        *(arg2 + 0x1c) = r14_3.d
        int32_t rcx_36 = sx.d(*(arg1 + (rax_17 << 1) + 0x1010))
        uint64_t r11_10 = r11_9 u>> rcx_36.b
        int32_t r8_35 = r8_34 - rcx_36
        arg2[2] = r11_10
        arg2[3].d = r8_35
        int64_t rax_18 = sx.q(*(arg1 + (rax_17 << 1) + 0x1011))
        int32_t r9_26 = (rax_18 - 2).d
        
        if (rax_18.d s>= 4)
            int32_t r9_27 = r9_26 s>> 1
            char rcx_37 = r9_27.b
            r8_35 -= r9_27
            uint64_t rdx_43 = r11_10 u>> rcx_37
            arg2[2] = rdx_43
            arg2[3].d = r8_35
            r9_26 = (((1 << rcx_37).d - 1) & r11_10.d) + *(&data_143cebee0 + (rax_18 << 2))
            r11_10 = rdx_43
        
        int64_t rbx_6 = *(r14_3 + r15_1) << r8_35.b | r11_10
        int32_t r8_36 = r8_35 | 0x38
        arg2[2] = rbx_6
        *(arg2 + 0x1c) = ((0x3f - r8_35) u>> 3) + r14_3.d
        arg2[3].d = r8_36
        uint64_t rax_23 = zx.q(rbx_6.d) & 0x7ff
        int32_t rcx_39 = sx.d(*(arg1 + (rax_23 << 1) + 0x1010))
        uint64_t rbx_7 = rbx_6 u>> rcx_39.b
        int32_t r8_37 = r8_36 - rcx_39
        arg2[2] = rbx_7
        arg2[3].d = r8_37
        int64_t r11_11 = sx.q(*(arg1 + (rax_23 << 1) + 0x1011))
        int32_t rdx_44 = (r11_11 - 2).d
        
        if (r11_11.d s>= 4)
            int32_t rdx_45 = rdx_44 s>> 1
            char rcx_40 = rdx_45.b
            arg2[2] = rbx_7 u>> rcx_40
            arg2[3].d = r8_37 - rdx_45
            rdx_44 = (((1 << rcx_40).d - 1) & rbx_7.d) + *(&data_143cebee0 + (r11_11 << 2))
        
        r12 += r10_10
        int32_t r14_5 = arg_18 + rdx_44
        r13 += r9_26
        arg_18 = r14_5
        uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r8_11.b.d + r12))
        uint128_t zmm0
        zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_29.b.d + r14_5)).d f* zmm3
        result = zx.q(zmm0.d)
        zmm2.d = zmm2.d f* zmm3
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_17.b.d + r13)).d f* zmm3
        *rbp = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
        *(rbp + 8) = result.d
        rbp += arg4
        i = var_68_1
        var_68_1 -= 1
    while (i != 1)

return result
