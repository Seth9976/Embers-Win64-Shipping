// 函数: sub_142829844
// 地址: 0x142829844
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 8))(arg2, sub_142828cd8(*(arg1 + 8)) + 8)

if (*(sub_142828cd8(*(arg1 + 8)) + 4) == 1)
    sub_142828d00(*(arg1 + 8))

sub_142829ce4(arg1, arg2, arg3)
(*(*arg2 + 0x10))(arg2)

while (true)
    void* result = sub_142828cbc(*(arg1 + 8))
    
    if (result.b != 0)
        return result
    
    result = sub_142828cd8(*(arg1 + 8))
    
    if (*(result + 4) != 2)
        return result
    
    sub_142828d00(*(arg1 + 8))
