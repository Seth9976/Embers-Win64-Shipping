// 函数: sub_141bb8560
// 地址: 0x141bb8560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x3a0)
void* result

if (rbx != 0)
    result = sub_140d21950(rbx, sub_141c00390())
    
    if (result != 0)
        jump(*(*result + 0x10))

result.b = 1
return result
