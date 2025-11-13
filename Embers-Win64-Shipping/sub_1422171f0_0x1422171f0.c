// 函数: sub_1422171f0
// 地址: 0x1422171f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142192ca0(arg1[2], 0)
int64_t r8 = *arg1

if ((*(r8 + 0x118))(arg1, rax, r8) == 0 || (arg1[0x1c].b & 1) == 0)
    return 0

void*** result_1 = sub_1421ab380(0x150)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    *(rax + 0x30)
    sub_1421a88a0(result_1)
    result[5].d &= 0xfffffffe
    result[7].d = 0xffffffff
    *(result + 0x3c) = (*(result + 0x3c) & 0xffffffc2) | 2
    result[4] = 0
    *result = &data_1432e43f8
    result[8].d = 0x41480000
    *(result + 0x44) = 0x41c80000
    sub_1421a88d0(&result[0xa])
    result[0x24] = 0
    result[0xa] = &data_1432e43e8
    result[0x25] = 0
    result[0x26].d = 0xffffffff
    *(result + 0x134) = 0
    result[0x27].d = 1
    *(result + 0x13c) = 1

*(result + 0x3c) ^= (*(arg1[0x47] + 0x40) u>> 2 ^ *(result + 0x3c)) & 1
int32_t rdx_6 = (((*(arg1[0x47] + 0x4c) * 2) ^ *(result + 0x3c)) & 2) ^ *(result + 0x3c)
*(result + 0x3c) = rdx_6
int32_t rcx_12 = (((*(arg1[0x47] + 0x4c) * 2) ^ rdx_6) & 4) ^ rdx_6
*(result + 0x3c) = rcx_12
int32_t rdx_11 = (((*(arg1[0x47] + 0x4c) * 2) ^ rcx_12) & 8) ^ rcx_12
*(result + 0x3c) = rdx_11
int32_t r8_5 = (((*(arg1[0x47] + 0x4c) * 2) ^ rdx_11) & 0x10) ^ rdx_11
*(result + 0x3c) = r8_5
result[8].d = *(arg1[0x47] + 0x54)
*(result + 0x44) = *(arg1[0x47] + 0x5c)
result[0x29].d ^= (zx.d(*(arg1[0x47] + 0x44)) ^ result[0x29].d) & 3
int32_t zmm1 = *(arg1[0x47] + 0x50)
result[9].d = zmm1
int32_t r8_6 = r8_5 | 0x20

if (zmm1 f<= (zx.o(0)).d)
    r8_6 = r8_5 & 0xffffffdf

*(result + 0x3c) = r8_6
char rax_17 = (*(*arg1 + 0x218))(arg1, &result[0xa])
void** r8_7 = *result

if (rax_17 != 0)
    r8_7[0x10](result, zx.q(arg2), r8_7)
    return result

(*r8_7)(result, 1, r8_7)
return nullptr
