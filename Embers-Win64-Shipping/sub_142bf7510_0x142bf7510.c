// 函数: sub_142bf7510
// 地址: 0x142bf7510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r11 = zx.q(arg3)
int32_t rcx

if (arg3 != 0 && *(arg1 + 8) u<= arg2 && arg2 u<= *(arg1 + 0x10) && arg1[4] - arg2.d u>= r11.d)
    rcx = arg1[6]
    arg1[6] = rcx - 1

int64_t rbx

if (arg3 == 0 ||
        (*(arg1 + 8) u<= arg2 && arg2 u<= *(arg1 + 0x10) && arg1[4] - arg2.d u>= r11.d && rcx s> 0))
    rbx.b = 1
else
    rbx.b = 0

char const* const rax_4 = "OUT-OF-RANGE"

if (rbx.b != 0)
    rax_4 = &data_14369cdc0

char const* const var_18 = rax_4
int64_t var_20 = *(arg1 + 0x10)
int64_t var_28 = *(arg1 + 8)
int32_t var_30 = r11.d
int64_t var_38 = arg2 + r11
int64_t var_40 = arg2
char const* const var_48 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
int64_t var_50 = 0
int32_t var_58 = *arg1 + 1
return zx.q(rbx.b)
