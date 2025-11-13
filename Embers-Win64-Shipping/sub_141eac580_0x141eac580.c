// 函数: sub_141eac580
// 地址: 0x141eac580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int64_t r8
result, r8 = sub_140ca3250(arg1, arg2)

if ((arg2[5].b & 1) != 0 && (arg2[6].d & 0x1000) == 0)
    r8.b = 1
    (*(*arg1 + 0x330))(arg1, arg1[0x23], r8, 0, 0)
    result = sub_140d21d80(arg1)
    
    if (result != 0)
        result = zx.q(*(result + 0x50) u>> 5)
        
        if ((result.b & 1) != 0)
            *(arg1 + 0xcc) |= 0x2000000

return result
