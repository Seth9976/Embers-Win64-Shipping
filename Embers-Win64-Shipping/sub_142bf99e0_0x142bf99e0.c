// 函数: sub_142bf99e0
// 地址: 0x142bf99e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(arg3)
int32_t r8 = arg1[8]

if (r8 u>= 0x20)
    int64_t result
    result.b = 0
    return result

char const* const rax = "DENIED"
bool cond:0 = arg1[7].b != 0
arg1[8] = r8 + 1

if (cond:0)
    rax = "GRANTED"

char const* const var_10 = rax
int64_t var_18 = *(arg1 + 0x10)
int64_t var_20 = *(arg1 + 8)
int32_t var_28 = r9.d
int64_t var_30 = arg2 + r9
int64_t var_38 = arg2
int32_t var_40 = r8 + 1
char const* const var_48 = "may_edit(%u) [%p..%p] (%d bytes) in [%p..%p] -> %s"
int64_t var_50 = 0
int32_t var_58 = *arg1 + 1
return zx.q(arg1[7].b)
