// 函数: sub_1406aa900
// 地址: 0x1406aa900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return 

void* const i_1 = arg3
void* i = arg1

while (i != 0)
    int32_t rdx = *(i + 8)
    
    if (rdx == 0xa || rdx == 0xb)
        sub_1406aa900(*(i + 0x20), 0, 0)
    else if (rdx == 0x10)
        if (i_1 != 0)
            *(i_1 + 0x34) = 0
        
        for (void* j = *(i + 0x28); j != 0; j = *(j + 0x28))
            sub_1406aa900(*(j + 0x10), *(j + 0x20), i_1)
    else if (rdx == 0x12)
        if (i_1 == 0)
            i_1 = i
        else
            *(i_1 + 0x34) = 0
            *(i + 0x34) = 0
    else if (rdx == 0x13 && i_1 == *(i + 0x20))
        if (*(i_1 + 0x34) == 0xffffffff)
            *(i_1 + 0x34) = rdx - 0x12
        
        i_1 = nullptr
    
    i = *(i + 0x10)
    
    if (i == arg2)
        break
