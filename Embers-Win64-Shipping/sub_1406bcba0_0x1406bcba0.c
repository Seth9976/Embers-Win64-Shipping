// 函数: sub_1406bcba0
// 地址: 0x1406bcba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
arg_10 = arg2
*arg2 = 0
int32_t rdi = *(arg1 + 0x28)
int64_t rsi = *(arg1 + 0x20)
arg2[1].d = rdi

if (rdi != 0)
    sub_1405a4c70(arg2, rdi, 0)
    memcpy(*arg2, rsi, rdi * 2)
else
    *(arg2 + 0xc) = 0

return arg2
