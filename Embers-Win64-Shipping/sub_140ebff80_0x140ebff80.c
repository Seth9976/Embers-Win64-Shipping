// 函数: sub_140ebff80
// 地址: 0x140ebff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r8 = *(arg1 + 0x3f0)
int64_t r9 = 0

if (r8 != 0)
    int32_t rax_1 = *(r8 + 8)
    
    if (rax_1 != 0)
        *(r8 + 8) = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        r8 = nullptr
    
    if (r8 != 0)
        r9 = *(arg1 + 0x3e8)

*arg2 = r9
arg2[1] = r8
return arg2
