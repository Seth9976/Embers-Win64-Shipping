// 函数: sub_1408e1940
// 地址: 0x1408e1940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(*(arg2 + 0x1c))
int64_t rbx = *arg2
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
char var_47 = r8_2.b
uint64_t rdx_3 = r8_2 u>> 8
arg2[2] = rdx_3
arg2[3].d = (((rcx | 0x38) - 8) | 0x38) - 8
int64_t r8_5 = *(r9_3 + rbx) << ((((rcx | 0x38) - 8) | 0x38) - 8).b | rdx_3
uint64_t r10_3 = zx.q(((0x3f - ((((rcx | 0x38) - 8) | 0x38) - 8)) u>> 3) + r9_3.d)
char var_46 = r8_5.b
*(arg2 + 0x1c) = r10_3.d
uint64_t rdx_5 = r8_5 u>> 8
arg2[2] = rdx_5
arg2[3].d = (((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
int64_t r8_8 = *(r10_3 + rbx) << ((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b | rdx_5
uint64_t r9_6 = zx.q(((0x3f - ((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r10_3.d)
char var_45 = r8_8.b
*(arg2 + 0x1c) = r9_6.d
arg2[3].d = (((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
uint64_t rdx_7 = r8_8 u>> 8
arg2[2] = rdx_7
int64_t r8_11 =
    *(r9_6 + rbx) << ((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b | rdx_7
uint64_t r10_6 =
    zx.q(((0x3f - ((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r9_6.d)
uint64_t rdx_9 = r8_11 u>> 8
*(arg2 + 0x1c) = r10_6.d
arg2[3].d = (((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
arg2[2] = rdx_9
int64_t r8_14 = *(r10_6 + rbx)
    << ((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b | rdx_9
char var_43 = r8_14.b
arg2[3].d =
    (((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
uint64_t rdx_11 = r8_14 u>> 8
uint64_t r11_5 = zx.q(((0x3f
    - ((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r10_6.d)
arg2[2] = rdx_11
*(arg2 + 0x1c) = r11_5.d
uint64_t r10_9 = zx.q(((0x3f -
    ((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8))
    u>> 3) + r11_5.d)
int64_t r9_9 = *(r11_5 + rbx) <<
    ((((((((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b
    | rdx_11
*(arg2 + 0x1c) = r10_9.d
char var_42 = r9_9.b
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
char var_41 = rdx_14.b
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
char var_3f = rdx_20.b
arg2[2] u>>= 8
char var_3e = rdx_23.b
uint64_t r9_15 = zx.q(((0x3f - (((rcx_17 - 8) | 0x38) - 8)) u>> 3) + r8_22.d)
arg2[3].d = ((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8
*(arg2 + 0x1c) = r9_15.d
int64_t rdx_26 = *(r9_15 + rbx) << (((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8).b | arg2[2]
*(arg2 + 0x1c) = ((0x3f - (((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r9_15.d
char var_3d = rdx_26.b
float temp0[0x4] = __maxss_xmmss_memss(r8_11.b.d[0], rdx_17.b.d)
arg2[2] = rdx_26
arg2[2] u>>= 8
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(r11_2.b.d))
arg2[3].d = ((((((rcx_17 - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
int32_t r14 = 0
int32_t r15 = 0
uint64_t result = zx.q(arg5)
zmm1 = _mm_cvtepi32_ps(zx.o(int.d(powf(2f, zmm1.d).d)))
temp0[0] = temp0[0] f/ zmm1.d

if (result.d != 0)
    void* rbx_1 = arg3 + 4
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t r8_25 = arg2[3].d
        uint64_t rdx_27 = zx.q(*(arg2 + 0x1c))
        int64_t r12_1 = *arg2
        int32_t r8_26 = r8_25 | 0x38
        uint64_t rsi_3 = zx.q(((0x3f - r8_25) u>> 3) + rdx_27.d)
        int64_t r10_12 = *(rdx_27 + r12_1) << r8_25.b | arg2[2]
        arg2[2] = r10_12
        arg2[3].d = r8_26
        uint64_t rax_12 = zx.q(r10_12.d) & 0x7ff
        *(arg2 + 0x1c) = rsi_3.d
        int32_t rcx_25 = sx.d(*(arg1 + (rax_12 << 1) + 0x5010))
        uint64_t r10_13 = r10_12 u>> rcx_25.b
        int32_t r8_27 = r8_26 - rcx_25
        arg2[2] = r10_13
        arg2[3].d = r8_27
        int64_t r11_6 = sx.q(*(arg1 + (rax_12 << 1) + 0x5011))
        int32_t r9_16 = (r11_6 - 2).d
        
        if (r11_6.d s>= 4)
            int32_t r9_17 = r9_16 s>> 1
            char rcx_26 = r9_17.b
            r8_27 -= r9_17
            uint64_t rdx_29 = r10_13 u>> rcx_26
            arg2[2] = rdx_29
            arg2[3].d = r8_27
            r9_16 = (((1 << rcx_26).d - 1) & r10_13.d) + *(&data_143cebee0 + (r11_6 << 2))
            r10_13 = rdx_29
        
        int64_t r11_9 = *(rsi_3 + r12_1) << r8_27.b | r10_13
        int32_t r8_28 = r8_27 | 0x38
        arg2[2] = r11_9
        *(arg2 + 0x1c) = ((0x3f - r8_27) u>> 3) + rsi_3.d
        arg2[3].d = r8_28
        result = zx.q(r11_9.d) & 0x7ff
        int32_t rcx_28 = sx.d(*(arg1 + (result << 1) + 0x5010))
        uint64_t r11_10 = r11_9 u>> rcx_28.b
        int32_t r8_29 = r8_28 - rcx_28
        arg2[2] = r11_10
        arg2[3].d = r8_29
        int64_t r10_14 = sx.q(*(arg1 + (result << 1) + 0x5011))
        int32_t rdx_30 = (r10_14 - 2).d
        
        if (r10_14.d s>= 4)
            int32_t rdx_31 = rdx_30 s>> 1
            char rcx_29 = rdx_31.b
            result = r11_10 u>> rcx_29
            arg2[2] = result
            arg2[3].d = r8_29 - rdx_31
            rdx_30 = (((1 << rcx_29).d - 1) & r11_10.d) + *(&data_143cebee0 + (r10_14 << 2))
        
        r14 += r9_16
        r15 += rdx_30
        zmm1 = _mm_cvtepi32_ps(zx.o(r14))
        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(r15))
        zmm1.d = zmm1.d f* temp0[0]
        zmm0_1.d = zmm0_1.d f* temp0[0]
        *(rbx_1 - 4) = zmm1.d
        *rbx_1 = zmm0_1.d
        rbx_1 += arg4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
