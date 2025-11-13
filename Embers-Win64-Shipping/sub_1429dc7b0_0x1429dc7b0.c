// 函数: sub_1429dc7b0
// 地址: 0x1429dc7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t var_28 = 0
int32_t var_20 = 0
int64_t rax_2 = sx.q(*(arg1 + 0x1d4))
*(arg1 + 0x1c8)
int32_t temp1 = mods.dp.d(sx.q(rax_2.d + 1), *(arg1 + 0x1c8))
int64_t* r14 = *(rax_2 * 0x30 + *(arg1 + 0x1c0) + 0x18)
*(arg1 + 0x1d4) = temp1
int32_t r9 = data_143cc7028(arg2, temp1, &data_143cc7018)
r14[6].d = 0
*(arg1 + 0x1d8) += 1
void* rax_6 = *r14

if (*(arg1 + 0x54c) == 1 && *(rax_6 + 0x4ec0) == 0
        && (*(rax_6 + 0x5b8) != 0 || *(rax_6 + 0x5a8) == 0))
    *(arg1 + 0x54c) = 0

void var_b8
uint32_t result = sub_1429e7c60(*r14, &var_b8)

if (result == 0)
    void* rbx_1 = *r14
    int64_t rdi_1 = *(rbx_1 + 0x47e8)
    *(arg1 + sx.q(*(arg1 + 0x540)) * 0x90 + 0x1e0) = *(rbx_1 + 0x5a0)
    sub_1429dc940(sx.q(*(arg1 + 0x540)) * 0x90 + 0x1e8 + arg1, &var_b8, r14[4], r9)
    *(arg1 + sx.q(*(arg1 + 0x540)) * 0x90 + 0x268) = *(sx.q(*(rbx_1 + 0x5a0)) * 0xd0 + rdi_1 + 0x68)
    int32_t rcx_14 = *(arg1 + 0x540) + 1
    result = rcx_14 s/ 6 * 6
    *(arg1 + 0x548) += 1
    *(arg1 + 0x540) = rcx_14 s% 6

__security_check_cookie(rax_1 ^ &var_d8)
return result
