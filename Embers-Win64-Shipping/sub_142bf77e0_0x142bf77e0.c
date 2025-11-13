// 函数: sub_142bf77e0
// 地址: 0x142bf77e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_14 = 1
int32_t var_48 = 0
int128_t var_40
__builtin_memset(&var_40, 0, 0x15)
int32_t var_28 = 0
int64_t var_20 = 0
int32_t var_18 = 0
int32_t* rax_1 = sub_142bf7200(&var_48, sub_142bfb150(arg1, 0x6d617870))
int128_t* const rcx_1 = &data_14369a5d0

if (rax_1[6] u>= 6)
    rcx_1 = *(rax_1 + 0x10)

uint32_t rbx_2 = (zx.d(*(rcx_1 + 4)) << 8) + zx.d(*(rcx_1 + 5))
*(arg1 + 0x30) = rbx_2
sub_142c09b70(rax_1)
return zx.q(rbx_2)
