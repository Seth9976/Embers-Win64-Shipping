// 函数: sub_1413a8510
// 地址: 0x1413a8510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 8)
void* rcx = r8
int32_t r9 = *(r8 + 0x44)

if (r9 - *(r8 + 0x40) s< arg2)
    int32_t rdx = arg2 + r9
    
    if (rdx s> r9)
        sub_1405c55e0(r8 + 0x38, rdx)
        rcx = *(arg1 + 8)

int32_t r8_1 = *(rcx + 0x54)
int32_t result = r8_1 - *(rcx + 0x50)

if (result s< arg2)
    int32_t rdx_1 = r8_1 + arg2
    
    if (rdx_1 s> r8_1)
        return sub_140a05f70(rcx + 0x48, rdx_1)

return result
