// 函数: sub_142a6b500
// 地址: 0x142a6b500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int32_t result_2 = (*(*arg1 + 0xa8))(arg1, zx.q(rsi.d))
int64_t r9 = *arg1
int32_t result = (*(r9 + 0xa0))(arg1, zx.q(rsi.d), arg3, r9)
int32_t rcx_1 = *(arg1 + (rsi << 2) + 0xc)
int32_t result_1

if (rcx_1 s<= result_2)
    if (rcx_1 s>= result)
        return result
    
    result_1 = result
else
    result_1 = result_2

return sub_142a6c030(arg1, rsi.d, result_1)
