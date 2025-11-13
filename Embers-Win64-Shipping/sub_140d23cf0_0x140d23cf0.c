// 函数: sub_140d23cf0
// 地址: 0x140d23cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x20)

if (result != 0)
    bool cond:0_1
    
    if (((*(result + 8) u>> 4).b & 1) == 0)
        cond:0_1 = sub_140d209c0(arg1) == *(*(arg1 + 0x10) + 0x118)
    
    if (((*(result + 8) u>> 4).b & 1) != 0 || not(cond:0_1))
        result.b = 1
        return result

result.b = 0
return result
