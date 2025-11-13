// 函数: sub_141c0c260
// 地址: 0x141c0c260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int128_t var_28 = zx.o(0)

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t result = *(arg2 + 0x20)
int128_t var_18 = var_28
int64_t rcx_1
rcx_1.b = result != 0
*(arg2 + 0x20) = rcx_1 + result
sub_141be5270(arg1, &var_18)
return result
