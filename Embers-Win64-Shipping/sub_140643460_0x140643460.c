// 函数: sub_140643460
// 地址: 0x140643460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1 == 0 || arg2 == 0)
    result.b = 0
    return result

do
    void* rcx = *(arg1 + 0x28)
    
    if (rcx != 0)
        arg1 = *(rcx + 0x28)
    
    if (rcx == 0 || arg1 == 0)
        result.b = 0
        return result
while (arg1 != arg2)

result.b = 1
return result
