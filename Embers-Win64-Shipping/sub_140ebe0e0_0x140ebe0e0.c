// 函数: sub_140ebe0e0
// 地址: 0x140ebe0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rax_1

if (*(arg1 + 0x560) != 0)
    rax_1 = *(arg1 + 0x568)

if (*(arg1 + 0x560) == 0 || rax_1 == 0 || *(rax_1 + 8) s<= 0)
    rax_1 = nullptr
else
    rax_1.b = 1

*arg2 = 0

if (rax_1.b == 0)
    arg2[1] = 0
else
    void* rcx = *(arg1 + 0x568)
    arg2[1] = rcx
    
    if (rcx != 0)
        int32_t rax_2 = *(rcx + 8)
        int64_t rcx_1
        
        if (rax_2 == 0)
            arg2[1] = 0
            rcx_1 = 0
        else
            *(rcx + 8) = rax_2 + 1
            rcx_1 = arg2[1]
        
        if (rcx_1 != 0)
            *arg2 = *(arg1 + 0x560)

return arg2
