// 函数: sub_1403addff
// 地址: 0x1403addff
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2)
int64_t st1 = *(arg1 + result)
int64_t st2 = *(arg1 + (result << 1))
int64_t rcx = sx.q(arg4)
*arg3 = *arg1
*(arg3 + rcx) = st1
*(arg3 + (rcx << 1)) = st2
*(rcx * 3 + arg3) = *(result * 3 + arg1)
return result
