// 函数: sub_14249a300
// 地址: 0x14249a300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg2 + 0x20)
int64_t r9
r9.b = result != 0
*(arg2 + 0x20) = r9 + result

if ((*(arg1 + 0x294) & 2) != 0)
    result = (*(*arg1 + 0x6a8))()
    
    if (result.b != 0)
        *arg3 = 1
        return result

*arg3 = 0
return result
