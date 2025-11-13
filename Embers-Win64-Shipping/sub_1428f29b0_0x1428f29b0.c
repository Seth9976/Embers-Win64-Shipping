// 函数: sub_1428f29b0
// 地址: 0x1428f29b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t count = sx.q(*arg1)
int32_t rax = count.d
int32_t result = rax - *arg2

if (rax == *arg2)
    result = memcmp(*(arg1 + 8), *(arg2 + 8), count)
    
    if (result == 0)
        return arg1[1] - arg2[1]

return result
