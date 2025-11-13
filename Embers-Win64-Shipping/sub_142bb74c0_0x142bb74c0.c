// 函数: sub_142bb74c0
// 地址: 0x142bb74c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
int64_t rdi = *(rcx + 0x300)

if (rdi != 0)
    int64_t rax_1 = sub_142b922e0(*(*(rcx + 0x90) + 8), "pshinter")
    
    if (rax_1 != 0)
        *(*(arg1 + 0xf0) + 0x28) = (*(rdi + 8))(rax_1)

return 0
