// 函数: sub_142909410
// 地址: 0x142909410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* result = *(arg1 + 0x28)

if (result == 0)
    result = sub_1428c1750()
    *(arg1 + 0x28) = result
    
    if (result == 0)
        return result

int32_t r8
r8.b = *(arg2 + 0x10) == &data_14351c7e0
return sub_14290a3c0(result, *(arg2 + 0x28), r8) __tailcall
