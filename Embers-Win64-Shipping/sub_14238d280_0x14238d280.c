// 函数: sub_14238d280
// 地址: 0x14238d280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14239a450(arg1 + 0x10)
void* result

if (*(arg1 + 0x20) != 0 || arg2 == 0)
    result = *(arg1 + 0x20)
else
    result = *(arg1 + 8)
    *(arg1 + 0x20) = result
    
    if (result != 0)
        *(result + 8) += 1
        result = *(arg1 + 0x20)

*(arg1 + 0x28) = 0
return result
