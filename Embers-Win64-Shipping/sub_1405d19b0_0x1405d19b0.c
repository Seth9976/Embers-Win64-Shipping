// 函数: sub_1405d19b0
// 地址: 0x1405d19b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void var_1c8
sub_1405d1370(&var_1c8)
sub_1419686f0(arg2, &var_1c8)
int32_t result_1
uint64_t result = zx.q(result_1)
*(arg1 + 0xa0) = result.d
uint64_t rdx_1 = 0

if (result.d != 0)
    do
        uint64_t rcx_2 = rdx_1 * 3
        result = rdx_1 * 3
        rdx_1 = zx.q(rdx_1.d + 1)
        int64_t var_1b8[0x16]
        int64_t zmm1_1 = var_1b8[rcx_2]
        *(arg1 + (result << 3) + 0xa8) = *(&var_1c8 + (rcx_2 << 3))
        *(arg1 + (result << 3) + 0xb8) = zmm1_1
    while (rdx_1.d u< *(arg1 + 0xa0))

int128_t var_38
*(arg1 + 0x168) = var_38
int64_t var_20
*(arg1 + 0x17a) = var_20 != 0
__security_check_cookie(rax_1 ^ &var_1e8)
return result
