// 函数: sub_142b70500
// 地址: 0x142b70500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    char rax_1 = sub_142b70490(arg1, arg2)
    
    if (rax_1 == 0)
        return rax_1
    
    if (*(arg1 + 0x18) != *(arg2 + 0x18) || *(arg1 + 0x20) != *(arg2 + 0x20)
            || *(arg1 + 0x28) != *(arg2 + 0x28))
        return 0

int64_t rax
rax.b = 1
return rax
