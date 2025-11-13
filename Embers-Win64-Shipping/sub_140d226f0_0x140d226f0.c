// 函数: sub_140d226f0
// 地址: 0x140d226f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x20)
void* result = nullptr

while (i != 0)
    void* rdx = *(i + 0x10)
    int64_t r8_1 = sx.q(*(arg2 + 0x38))
    
    if (r8_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (r8_1 << 3)) == arg2 + 0x30)
        result = i
    
    i = *(i + 0x20)
    
    if (result != 0)
        break

return result
