// 函数: sub_142076920
// 地址: 0x142076920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = nullptr
__builtin_memset(arg1, 0, 0x20)

if (arg2 != 0)
    void* rcx = *(arg2 + 0x20)
    
    if (rcx != 0)
        rax = sub_142314ee0(rcx)
    
    *arg1 = rax
    *(arg1 + 0x10) = *(arg2 + 0xc0)
    arg1[1] = *(arg2 + 0xd0)

return arg1
