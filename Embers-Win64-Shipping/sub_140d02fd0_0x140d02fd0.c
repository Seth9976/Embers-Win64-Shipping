// 函数: sub_140d02fd0
// 地址: 0x140d02fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x78)
int64_t rbx_1 = sx.q(arg2[1].d)
int32_t rax = (rbx_1 + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rbx_1 << 3)) = rsi
return result
