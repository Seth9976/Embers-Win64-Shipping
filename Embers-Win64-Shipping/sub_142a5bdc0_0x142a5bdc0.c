// 函数: sub_142a5bdc0
// 地址: 0x142a5bdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax = *(arg1 + 0x170)
void* result

if (rax != 0)
    result = *rax
else
    result = sub_142abb060()

if (*(result + 0x70) == 0xffffffff && *(result + 0x5c) == 0xffffffff)
    result.b = 0
    return result

result.b = 1
return result
