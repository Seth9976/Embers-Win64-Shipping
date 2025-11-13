// 函数: sub_141e87420
// 地址: 0x141e87420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i

if (arg2 == 0)
    i = *(arg1 + 0x10)
    
    for (int64_t rdx_3 = sx.q(*(arg1 + 0x18)) * 0x90 + i; i != rdx_3; i += 0x90)
        *(i + 0x80) = 0
else
    void* rdx = *(arg1 + 0x10)
    i = sx.q(*(arg1 + 0x18))
    void* rcx_2 = i * 0x90 + rdx
    
    if (rdx != rcx_2)
        do
            *(rdx + 0x80) = 1
            rdx += 0x90
        while (rdx != rcx_2)

return i
