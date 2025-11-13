// 函数: sub_1428d4fa0
// 地址: 0x1428d4fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result

if (arg3 - 1 u> 0xe || arg4 - 1 u> 0xf)
    result = 0xffffffff
else
    memset(arg1 + 0x60, 0, 0x50)
    int64_t var_77_1 = 0
    int32_t var_6f_1 = 0
    int16_t var_6b_1 = 0
    char var_69 = 0
    uint128_t var_68
    memcpy(&var_68 - arg3, arg2, arg3.d)
    int64_t r8_1 = *(arg1 + 0x10)
    void* rax_4 = &var_69 - arg3
    *rax_4 |= 1
    uint128_t zmm0_1 = (arg4.b << 4).o
    uint128_t var_48 = zmm0_1
    var_48:0xf.b = (_mm_bsrli_si128(zmm0_1, 8).q u>> 0x38).b & 0xc0
    (*arg1)(&var_48, &var_68, r8_1)
    uint128_t zmm1 = var_68
    uint32_t rdi_1 = zx.d(var_69)
    char rcx_3 = _mm_bsrli_si128(zmm1, 1).b
    char rdx_2 = _mm_bsrli_si128(zmm1, 2).b
    uint128_t temp0_4 = _mm_bsrli_si128(zmm1, 3)
    char var_58 = zmm1.b ^ rcx_3
    char rcx_4 = temp0_4.b
    char var_57_1 = rdx_2 ^ rcx_3
    char rdx_3 = _mm_bsrli_si128(zmm1, 4).b
    char var_56_1 = rcx_4 ^ rdx_2
    char rcx_5 = _mm_bsrli_si128(zmm1, 5).b
    char var_55_1 = rdx_3 ^ rcx_4
    char rdx_4 = _mm_bsrli_si128(zmm1, 6).b
    char var_54_1 = rcx_5 ^ rdx_3
    char rcx_6 = _mm_bsrli_si128(zmm1, 7).b
    char var_53_1 = rdx_4 ^ rcx_5
    var_68 = zmm1
    char var_52_1 = rcx_6 ^ rdx_4
    uint64_t rdi_2 = zx.q(rdi_1) & 0x3f
    char var_51_1 = _mm_bsrli_si128(zmm1, 8).b ^ rcx_6
    char rbx_2 = rdi_2.b & 7
    uint64_t rdi_3 = rdi_2 u>> 3
    sub_1428d5190(&var_68 + rdi_3, rbx_2, arg1 + 0x90)
    result = 1
    *(arg1 + 0x9f) |= (0xff << (8 - rbx_2) & (&var_58)[rdi_3]) u>> (8 - rbx_2)

__security_check_cookie(rax_1 ^ &var_98)
return result
