// 函数: sub_140ce3340
// 地址: 0x140ce3340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x28)
void* result

if (rcx != 0 && ((*(rcx + 8) u>> 6).b & 1) == 0)
    result = sub_140d23d40(rcx, data_143e1b7d0)

if (rcx == 0 || ((*(rcx + 8) u>> 6).b & 1) != 0 || result.b != 0)
    *(arg1 + 8) |= 0x40
    result = *(arg1 + 0x28)
    
    if (result != 0)
        *(result + 8) |= 0x40

return result
