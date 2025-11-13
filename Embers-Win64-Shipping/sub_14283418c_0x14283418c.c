// 函数: sub_14283418c
// 地址: 0x14283418c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return nullptr

void* rax_1 = *(arg1 + 8)

if (rax_1 == 0)
    return arg1

void* rdx = arg1

while (true)
    void* rax_2 = *(rax_1 + 8)
    
    if (rax_2 != 0)
        rax_1 = *(rax_2 + 8)
    
    if (rax_2 == 0 || rax_1 == 0)
        int64_t rcx = *(rdx + 8)
        *(rdx + 8) = 0
        void* rax_3 = sub_14283418c(rcx, arg2)
        return sub_142834210(sub_14283418c(arg1, arg2), rax_3, arg2)
    
    rdx = *(rdx + 8)
