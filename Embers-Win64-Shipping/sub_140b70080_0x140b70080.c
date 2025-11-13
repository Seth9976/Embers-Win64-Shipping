// 函数: sub_140b70080
// 地址: 0x140b70080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(*(arg2 + 6))
int64_t r10 = 0

if (rbx != 0)
    int64_t r9_1 = 0
    
    do
        uint64_t r8 = zx.q(*(r9_1 + arg2 + 0x114))
        
        if (arg3 u>= r8 && arg3 u< zx.q(*(r9_1 + arg2 + 0x118) + r8.d))
            return zx.q(*(r9_1 + arg2 + 0x11c)) - r8 + arg1 + arg3
        
        r10 += 1
        r9_1 += 0x28
    while (r10 u< rbx)

return 0
