// 函数: sub_1418e3670
// 地址: 0x1418e3670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
char rdx = *(arg2 + 0x2d)

if ((rdx & 4) == 0 || *arg2 != *(arg1 + 8) || arg2[1] != *(arg1 + 0x10)
        || arg2[2] != *(arg1 + 0x18))
    float zmm2[0x4] = *(arg1 + 8)
    uint128_t zmm0 = zx.o(*(arg1 + 0x18))
    int64_t rcx = arg2[8]
    float var_38[0x4] = zmm2
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    temp0_1[0] = temp0_1[0] + temp0_2[0]
    uint64_t var_28_1 = zmm0.q
    var_38[3] = (temp0_2 ^ data_142d3f780)[0]
    var_38[1] = temp0_1[0]
    data_143efb960(rcx, 0, 1, &var_38, var_38, var_28_1, rax_1)
    *arg2 = *(arg1 + 8)
    arg2[2] = *(arg1 + 0x18)
    *(arg2 + 0x2d) |= 4
    rdx = *(arg2 + 0x2d)

uint64_t result

if ((rdx & 8) != 0 && arg2[3] == *(arg1 + 0x20))
    result = arg2[4]

if ((rdx & 8) == 0 || arg2[3] != *(arg1 + 0x20) || result != *(arg1 + 0x28))
    result = data_143efb968(arg2[8], 0, 1, arg1 + 0x20)
    *(arg2 + 0x18) = *(arg1 + 0x20)
    *(arg2 + 0x2d) |= 8
    rdx = *(arg2 + 0x2d)

int32_t r8 = *(arg1 + 0x34)

if ((rdx & 0x10) == 0 || arg2[5].d != r8)
    data_143efb9a0(arg2[8], 3, r8)
    result = zx.q(*(arg1 + 0x34))
    rdx = *(arg2 + 0x2d) | 0x10
    arg2[5].d = result.d

*(arg2 + 0x2d) = rdx & 0xfe
__security_check_cookie(rax_1 ^ &var_58)
return result
