// 函数: sub_140b285d0
// 地址: 0x140b285d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t i = *arg1
void* rcx = &arg1[1]

while (i != 0)
    if (i == 0x2013)
        i.b = 1
        return i
    
    i = *rcx
    rcx += 2

i.b = 0
return i
