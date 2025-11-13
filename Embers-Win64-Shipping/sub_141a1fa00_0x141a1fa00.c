// 函数: sub_141a1fa00
// 地址: 0x141a1fa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142114600(arg1, arg2)
void* i = *arg2
void* rcx = *(i + 8)

if ((*(rcx + 0x28) & 1) != 0 && *(rcx + 0x40) s< 0x17c)
    i = *(arg1 + 0x40)
    
    for (void* rcx_2 = i + sx.q(*(arg1 + 0x48)) * 0x48; i != rcx_2; i += 0x48)
        if (*(i + 8) == 1)
            *(i + 8) = 0

return i
