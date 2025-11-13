// 函数: sub_1408ab2b0
// 地址: 0x1408ab2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg2 + 0x20)
int64_t r9
r9.b = result != 0
*(arg2 + 0x20) = r9 + result
int32_t rdx = *(arg1 + 0x44c)

if (rdx != 0)
    if (rdx == 1)
        *arg3 = 1
        return result
    
    if (rdx == 2)
        *arg3 = 2
        return result

*arg3 = 0
return result
