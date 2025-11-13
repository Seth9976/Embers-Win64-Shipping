// 函数: sub_1408e8ae0
// 地址: 0x1408e8ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a8
uint32_t var_60
int32_t arg_8
float zmm6[0x4] = sub_1408e2810(arg1, arg2, arg3, arg4, &arg_8, &var_a8, &var_60)
int64_t rdx = *(arg1 + 0x78)
int64_t r8 = sx.q(arg_8)
int64_t rcx = r8 * 5
uint128_t zmm2 = *(rdx + (rcx << 3) + 0x10)
int64_t rcx_1 = sx.q(var_a8) * 5
uint128_t var_58 = *(rdx + (rcx << 3))
float zmm7[0x4] = var_58
uint128_t var_88 = *(rdx + (rcx_1 << 3))
uint128_t var_78 = *(rdx + (rcx_1 << 3) + 0x10)
int64_t rcx_2 = var_78:8.q
uint128_t zmm1 = zx.o(zmm2.12:4.q)
char rax_1 = _mm_bsrli_si128(zmm2, 0xc).b
uint64_t var_94 = zmm1.q
float rdx_1 = _mm_bsrli_si128(zmm2, 0xc).d

if (rax_1 != 0 && (rcx_2 u>> 0x20).b != 0)
    float temp0_2[0x4] = __minss_xmmss_memss(var_58:4.d[0], var_88:4.d)
    zmm1 = __maxss_xmmss_memss(var_78:4.d.d, var_94.d)
    int32_t temp0_4 = __minss_xmmss_memss(var_88:8.d, zmm7[1])
    int32_t temp0_5 = __minss_xmmss_memss(var_88:0xc.d, zmm7[2])
    int32_t temp0_6 = __maxss_xmmss_memss(var_78:8.d, var_94:4.d)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
    zmm2.d = zmm1.d
    temp0_7[0] = temp0_4
    float var_18_1[0x4] = zmm6
    float temp0_8[0x4] = __maxss_xmmss_memss(var_78.d[0], zmm7[3])
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
    temp0_9[0] = temp0_5
    _mm_shuffle_ps(zmm2, zmm2, 0xe1)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x27)
    zmm2.d = temp0_6
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
    temp0_11[0] = temp0_8[0]
    zmm1 = zmm2
    zmm7 = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
else if ((rcx_2 u>> 0x20).b != 0)
    zmm7 = var_88
    rdx_1 = var_78:0xc.d
    zmm1 = zx.o(var_78:4.q)

*arg6 = zmm7
arg6[1][0].q = zmm1.q
(*arg6)[6] = rdx_1
int32_t* result

if (*arg5 == r8.d)
    result.b = 0
    return result

*arg5 = r8.d
result.b = 1
return result
