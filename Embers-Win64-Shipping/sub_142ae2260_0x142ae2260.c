// 函数: sub_142ae2260
// 地址: 0x142ae2260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0
void* rdx = arg1 + 0x14
int32_t r8 = 2

do
    if (*(rdx - 4) != 0)
        result |= 1 << ((r8 - 2) u% 0x20)
    
    if (*rdx != 0)
        result |= 1 << ((r8 - 1) u% 0x20)
    
    if (*(rdx + 4) != 0)
        result |= 1 << (r8 u% 0x20)
    
    if (*(rdx + 8) != 0)
        result |= 1 << ((r8 + 1) u% 0x20)
    
    r8 += 4
    rdx += 0x10
while (r8 - 2 s< 0x10)

return result
