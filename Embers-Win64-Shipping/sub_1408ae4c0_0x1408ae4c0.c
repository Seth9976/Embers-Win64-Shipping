// 函数: sub_1408ae4c0
// 地址: 0x1408ae4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1
int32_t* arg_28
int32_t* rbp = arg_28
int32_t i_2 = 1
float zmm1 = 1f
int32_t rbx = arg1
float zmm2 = *rbp
int32_t r10 = *arg5
float zmm0 = zmm2
int32_t rax = 1

if (r10 s> 1)
    if (r10 s> 8)
        uint64_t rax_3 = zx.q(((r10 - 9) u>> 3) + 1)
        uint64_t i_4 = zx.q(rax_3.d)
        rax = ((rax_3 << 3) + 1).d
        uint64_t i
        
        do
            zmm1 = zmm1 + zmm0
            zmm0 = zmm0 * zmm2
            zmm1 = zmm1 + zmm0
            zmm0 = zmm0 * zmm2
            zmm1 = zmm1 + zmm0
            zmm0 = zmm0 * zmm2
            zmm1 = zmm1 + zmm0
            zmm0 = zmm0 * zmm2
            zmm1 = zmm1 + zmm0
            zmm0 = zmm0 * zmm2
            zmm1 = zmm1 + zmm0
            zmm0 = zmm0 * zmm2
            zmm1 = zmm1 + zmm0
            zmm0 = zmm0 * zmm2
            zmm1 = zmm1 + zmm0
            zmm0 = zmm0 * zmm2
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    if (r10 s<= 8 || rax s< r10)
        uint64_t i_3 = zx.q(r10 - rax)
        uint64_t i_1
        
        do
            zmm1 = zmm1 + zmm0
            zmm0 = zmm0 * zmm2
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

int128_t zmm9 = *arg3
int128_t zmm8
zmm8.d = (*arg2).d f/ zmm1
arg_28.d = zmm8.d
char result
uint128_t zmm6
uint128_t zmm7
result, zmm6, zmm7 = sub_1408b0f50(&arg_8, &arg_28, arg3, arg6, arg7)

if (*arg5 s> 1)
    uint128_t zmm0_1 = *(arg7 + 4)
    uint128_t var_38_1 = zmm6
    uint128_t var_48_1 = zmm7
    uint128_t zmm15 = *arg7
    arg_28.d = zmm0_1.d
    
    do
        zmm9.d = zmm9.d f* *arg4
        uint32_t rcx_1 = zx.d(*arg6)
        rbx += 1
        zmm8.d = zmm8.d f* *rbp
        uint128_t zmm1_1
        zmm1_1.d = zmm15.d f* zmm9.d
        uint128_t zmm2_1
        zmm2_1.d = zmm0_1.d f* zmm9.d
        zmm0_1.d = zmm1_1.d f+ zmm1_1.d
        zmm0_1.d = zmm0_1.d f- 0.5f
        int32_t r8_1 = int.d(zmm0_1.d) s>> 1
        zmm0_1.d = zmm2_1.d f+ zmm2_1.d
        zmm0_1.d = zmm0_1.d f- 0.5f
        int32_t rdx_2 = int.d(zmm0_1.d) s>> 1
        
        if (rcx_1 == 0)
            zmm7.d = zmm2_1.d f- _mm_cvtepi32_ps(zx.o(rdx_2)).d
            zmm6.d = zmm1_1.d f- _mm_cvtepi32_ps(zx.o(r8_1)).d
        else if (rcx_1 == 1)
            zmm0_1.d = float.s(r8_1)
            zmm1_1.d = zmm1_1.d f- zmm0_1.d
            zmm0_1.d = zmm1_1.d f+ zmm1_1.d
            zmm1_1.d = zmm1_1.d f* zmm1_1.d
            zmm6.d = 3f f- zmm0_1.d
            zmm0_1.d = float.s(rdx_2)
            zmm6.d = zmm6.d f* zmm1_1.d
            zmm2_1.d = zmm2_1.d f- zmm0_1.d
            zmm0_1.d = zmm2_1.d f+ zmm2_1.d
            zmm2_1.d = zmm2_1.d f* zmm2_1.d
            zmm7.d = 3f f- zmm0_1.d
            zmm7.d = zmm7.d f* zmm2_1.d
        else if (rcx_1 != 2)
            zmm7.d = zmm2_1.d f- _mm_cvtepi32_ps(zx.o(rdx_2)).d
            zmm6.d = zmm1_1.d f- _mm_cvtepi32_ps(zx.o(r8_1)).d
        else
            zmm0_1.d = float.s(r8_1)
            zmm1_1.d = zmm1_1.d f- zmm0_1.d
            zmm0_1.d = float.s(rdx_2)
            zmm6.d = zmm1_1.d f* 6f
            zmm2_1.d = zmm2_1.d f- zmm0_1.d
            zmm6.d = zmm6.d f- 15f
            zmm7.d = zmm2_1.d f* 6f
            zmm6.d = zmm6.d f* zmm1_1.d
            zmm7.d = zmm7.d f- 15f
            zmm6.d = zmm6.d f+ 10f
            zmm7.d = zmm7.d f* zmm2_1.d
            zmm6.d = zmm6.d f* zmm1_1.d
            zmm7.d = zmm7.d f+ 10f
            zmm1_1.d = zmm1_1.d f* zmm1_1.d
            zmm6.d = zmm6.d f* zmm1_1.d
            zmm7.d = zmm7.d f* zmm2_1.d
            zmm2_1.d = zmm2_1.d f* zmm2_1.d
            zmm7.d = zmm7.d f* zmm2_1.d
        
        int32_t rdx_3 = rdx_2 * 0x7a69
        int32_t r9_1 = r8_1 * 0x653
        int32_t r8_2 = (r8_1 + 1) * 0x653
        int32_t rcx_5 = r9_1 ^ rdx_3 ^ rbx
        int64_t rcx_6 = sx.q(rcx_5 * rcx_5 * rcx_5 * 0xec4d)
        uint64_t rcx_7 = zx.q((rcx_6 s>> 0xd).b) ^ zx.q(rcx_6.b)
        zmm0_1 = *(&data_143980ca0 + (rcx_7 << 3))
        zmm1_1 = *((rcx_7 << 3) + 0x143980ca4)
        int32_t rdx_4 = (rdx_2 + 1) * 0x7a69
        int32_t rcx_10 = r8_2 ^ rdx_3 ^ rbx
        int64_t rcx_11 = sx.q(rcx_10 * rcx_10 * rcx_10 * 0xec4d)
        uint64_t rcx_12 = zx.q((rcx_11 s>> 0xd).b) ^ zx.q(rcx_11.b)
        int32_t rcx_15 = rdx_4 ^ r9_1 ^ rbx
        int32_t rdx_6 = rdx_4 ^ r8_2 ^ rbx
        float zmm5_1 = (*((rcx_12 << 3) + 0x143980ca4) f- zmm1_1.d) f* zmm6.d f+ zmm1_1.d
        float zmm4_1 = (*(&data_143980ca0 + (rcx_12 << 3)) f- zmm0_1.d) f* zmm6.d f+ zmm0_1.d
        int64_t rcx_16 = sx.q(rcx_15 * rcx_15 * rcx_15 * 0xec4d)
        uint64_t rcx_17 = zx.q((rcx_16 s>> 0xd).b) ^ zx.q(rcx_16.b)
        zmm1_1 = *(&data_143980ca0 + (rcx_17 << 3))
        int32_t zmm3_1 = *((rcx_17 << 3) + 0x143980ca4)
        int64_t rcx_18 = sx.q(rdx_6 * rdx_6 * rdx_6 * 0xec4d)
        result = (rcx_18 s>> 0xd).b ^ rcx_18.b
        uint64_t result_1 = zx.q(result)
        zmm0_1.d = (*(&data_143980ca0 + (result_1 << 3))).d f- zmm1_1.d
        zmm2_1.d = (*((result_1 << 3) + 0x143980ca4)).d f- zmm3_1
        zmm0_1.d = zmm0_1.d f* zmm6.d
        zmm2_1.d = zmm2_1.d f* zmm6.d
        zmm0_1.d = zmm0_1.d f+ zmm1_1.d
        zmm2_1.d = zmm2_1.d f+ zmm3_1
        zmm0_1.d = zmm0_1.d f- zmm4_1
        zmm2_1.d = zmm2_1.d f- zmm5_1
        zmm0_1.d = zmm0_1.d f* zmm7.d
        zmm2_1.d = zmm2_1.d f* zmm7.d
        zmm0_1.d = zmm0_1.d f+ zmm4_1
        zmm2_1.d = zmm2_1.d f+ zmm5_1
        zmm0_1.d = zmm0_1.d f* zmm8.d
        zmm0_1.d = zmm0_1.d f+ zmm15.d
        *arg7 = zmm0_1.d
        zmm15 = zmm0_1
        zmm2_1.d = zmm2_1.d f* zmm8.d
        i_2 += 1
        zmm2_1.d = zmm2_1.d f+ arg_28.d
        *(arg7 + 4) = zmm2_1.d
        zmm0_1 = zmm2_1
        arg_28.d = zmm2_1.d
    while (i_2 s< *arg5)

return result
