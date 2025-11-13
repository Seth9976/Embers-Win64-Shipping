// 函数: sub_1408e08c0
// 地址: 0x1408e08c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(*(arg2 + 0x1c))
int64_t rbx = *arg2
int32_t rcx = arg2[3].d
void* rbp = arg3
int32_t r12 = 0
int32_t r13 = 0
int64_t r11_2 = *(r10 + rbx) << rcx.b | arg2[2]
arg2[3].d = (rcx | 0x38) - 8
uint64_t r9_2 = zx.q(((0x3f - rcx) u>> 3) + r10.d)
*(arg2 + 0x1c) = r9_2.d
uint64_t rdx_1 = r11_2 u>> 8
arg2[2] = rdx_1
uint64_t r9_3 = zx.q(r9_2.d + ((0x3f - ((rcx | 0x38) - 8)) u>> 3))
int64_t r8_2 = *(r9_2 + rbx) << ((rcx | 0x38) - 8).b | rdx_1
*(arg2 + 0x1c) = r9_3.d
char arg_19 = r8_2.b
uint64_t rdx_3 = r8_2 u>> 8
arg2[2] = rdx_3
arg2[3].d = (((rcx | 0x38) - 8) | 0x38) - 8
int64_t r8_5 = *(r9_3 + rbx) << ((((rcx | 0x38) - 8) | 0x38) - 8).b | rdx_3
char arg_1a = r8_5.b
arg2[3].d = (((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
uint64_t r10_3 = zx.q(((0x3f - ((((rcx | 0x38) - 8) | 0x38) - 8)) u>> 3) + r9_3.d)
uint64_t rdx_5 = r8_5 u>> 8
arg2[2] = rdx_5
*(arg2 + 0x1c) = r10_3.d
int64_t r8_8 = *(r10_3 + rbx) << ((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8).b | rdx_5
*(arg2 + 0x1c) = ((0x3f - ((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8)) u>> 3) + r10_3.d
char arg_1b = r8_8.b
int32_t zmm3 = r11_2.b.d
arg2[2] = r8_8 u>> 8
uint64_t result = zx.q(arg5)
arg2[3].d = (((((((rcx | 0x38) - 8) | 0x38) - 8) | 0x38) - 8) | 0x38) - 8
char arg_18
arg_18.d = 0

if (result.d != 0)
    uint64_t var_58_1 = result
    uint64_t i
    
    do
        int32_t r8_9 = arg2[3].d
        uint64_t rdx_6 = zx.q(*(arg2 + 0x1c))
        int64_t r15_1 = *arg2
        int32_t r8_10 = r8_9 | 0x38
        uint64_t rbx_3 = zx.q(((0x3f - r8_9) u>> 3) + rdx_6.d)
        int64_t r10_6 = *(rdx_6 + r15_1) << r8_9.b | arg2[2]
        arg2[2] = r10_6
        arg2[3].d = r8_10
        uint64_t rax_8 = zx.q(r10_6.d) & 0x7ff
        *(arg2 + 0x1c) = rbx_3.d
        int32_t rcx_10 = sx.d(*(arg1 + (rax_8 << 1) + 0x6010))
        uint64_t r10_7 = r10_6 u>> rcx_10.b
        int32_t r8_11 = r8_10 - rcx_10
        arg2[2] = r10_7
        arg2[3].d = r8_11
        int64_t r11_3 = sx.q(*(arg1 + (rax_8 << 1) + 0x6011))
        int32_t r9_4 = (r11_3 - 2).d
        
        if (r11_3.d s>= 4)
            int32_t r9_5 = r9_4 s>> 1
            char rcx_11 = r9_5.b
            r8_11 -= r9_5
            uint64_t rdx_8 = r10_7 u>> rcx_11
            arg2[2] = rdx_8
            arg2[3].d = r8_11
            r9_4 = (((1 << rcx_11).d - 1) & r10_7.d) + *(&data_143cebee0 + (r11_3 << 2))
            r10_7 = rdx_8
        
        int64_t r11_6 = *(rbx_3 + r15_1) << r8_11.b | r10_7
        arg2[2] = r11_6
        uint64_t rax_10 = zx.q(r11_6.d) & 0x7ff
        int32_t r8_12 = r8_11 | 0x38
        uint64_t r14_3 = zx.q(((0x3f - r8_11) u>> 3) + rbx_3.d)
        arg2[3].d = r8_12
        *(arg2 + 0x1c) = r14_3.d
        int32_t rcx_13 = sx.d(*(arg1 + (rax_10 << 1) + 0x6010))
        uint64_t r11_7 = r11_6 u>> rcx_13.b
        int32_t r8_13 = r8_12 - rcx_13
        arg2[2] = r11_7
        arg2[3].d = r8_13
        int64_t rax_11 = sx.q(*(arg1 + (rax_10 << 1) + 0x6011))
        int32_t r10_8 = (rax_11 - 2).d
        
        if (rax_11.d s>= 4)
            int32_t r10_9 = r10_8 s>> 1
            char rcx_14 = r10_9.b
            r8_13 -= r10_9
            uint64_t rdx_10 = r11_7 u>> rcx_14
            arg2[2] = rdx_10
            arg2[3].d = r8_13
            r10_8 = (((1 << rcx_14).d - 1) & r11_7.d) + *(&data_143cebee0 + (rax_11 << 2))
            r11_7 = rdx_10
        
        int64_t rbx_6 = *(r14_3 + r15_1) << r8_13.b | r11_7
        int32_t r8_14 = r8_13 | 0x38
        arg2[2] = rbx_6
        *(arg2 + 0x1c) = ((0x3f - r8_13) u>> 3) + r14_3.d
        arg2[3].d = r8_14
        uint64_t rax_16 = zx.q(rbx_6.d) & 0x7ff
        int32_t rcx_16 = sx.d(*(arg1 + (rax_16 << 1) + 0x6010))
        uint64_t rbx_7 = rbx_6 u>> rcx_16.b
        int32_t r8_15 = r8_14 - rcx_16
        arg2[2] = rbx_7
        arg2[3].d = r8_15
        int64_t r11_8 = sx.q(*(arg1 + (rax_16 << 1) + 0x6011))
        int32_t rdx_11 = (r11_8 - 2).d
        
        if (r11_8.d s>= 4)
            int32_t rdx_12 = rdx_11 s>> 1
            char rcx_17 = rdx_12.b
            arg2[2] = rbx_7 u>> rcx_17
            arg2[3].d = r8_15 - rdx_12
            rdx_11 = (((1 << rcx_17).d - 1) & rbx_7.d) + *(&data_143cebee0 + (r11_8 << 2))
        
        r12 += r9_4
        int32_t r14_5 = arg_18.d + rdx_11
        r13 += r10_8
        arg_18.d = r14_5
        uint128_t zmm0
        zmm0.d = _mm_cvtepi32_ps(zx.o(r14_5)).d f* zmm3
        result = zx.q(zmm0.d)
        uint128_t zmm2
        zmm2.d = _mm_cvtepi32_ps(zx.o(r12)).d f* zmm3
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(r13)).d f* zmm3
        *rbp = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
        *(rbp + 8) = result.d
        rbp += arg4
        i = var_58_1
        var_58_1 -= 1
    while (i != 1)

return result
