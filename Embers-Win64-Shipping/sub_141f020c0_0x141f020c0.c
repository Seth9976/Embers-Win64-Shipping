// 函数: sub_141f020c0
// 地址: 0x141f020c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
void* r8 = r10
void* rcx_1 = sx.q(arg1[1].d) * 0x8c + r10

if (r10 != rcx_1)
    do
        if (*(arg2 + 0x74) == *(r8 + 0x74) && *(arg2 + 0x78) == *(r8 + 0x78)
                && *(arg2 + 0x60) == *(r8 + 0x60))
            return (r8 - r10) s/ 0x8c
        
        r8 += 0x8c
    while (r8 != rcx_1)

return 0xffffffff
