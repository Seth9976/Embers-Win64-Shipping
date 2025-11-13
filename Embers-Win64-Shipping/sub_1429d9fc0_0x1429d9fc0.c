// 函数: sub_1429d9fc0
// 地址: 0x1429d9fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 8).d)

int64_t rax_1 = *(arg1 + 8)

if (rax_1 != 0)
    int64_t rcx = *(arg1 + 0x30)
    
    if (rcx != 0)
        (*(rax_1 + 0x18))(rcx)
        __builtin_memset(arg1, 0, 0x14)
        *(arg1 + 0x30) = 0
        return 0

*(arg1 + 0x10) = 1
return 1
