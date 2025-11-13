// 函数: sub_141d96ee0
// 地址: 0x141d96ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
char result = sub_140b16090(sub_141d9ef80(*arg1, &var_18, &arg1[1]))
int64_t rcx_2 = var_18
int64_t rsi
rsi.b = result == 0

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

if (rsi.b == 0)
    *(arg2 + 8) = 0
    return sub_140597df0(arg2 + 0x10, &arg1[1]) __tailcall

*(arg2 + 8) = 2
return result
