// 函数: sub_141d03270
// 地址: 0x141d03270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0xd0)
int64_t rsi = sx.q(arg2)
int64_t rbx = rsi << 3

if (*(rbx + rax) == 0)
    void* const rax_1 = j_sub_140a82f30(0x38)
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        __builtin_memset(rax_1, 0, 0x30)
        *(rax_1 + 0x30) = 0xffffffff
        *(rax_1 + 0x34) = 0
        *(rax_1 + 0x36) = 0
    
    *(rbx + *(arg1 + 0xd0)) = rax_1
    *((*(arg1 + 0xd0))[rsi] + 0x30) = rsi.d
    rax = *(arg1 + 0xd0)

return *(rbx + rax)
