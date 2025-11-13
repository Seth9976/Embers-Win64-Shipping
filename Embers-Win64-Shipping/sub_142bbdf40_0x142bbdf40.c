// 函数: sub_142bbdf40
// 地址: 0x142bbdf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
int64_t rdi = *(*(rcx + 0x3e8) + 0x10d8)

if (rdi != 0)
    int64_t rax_1 = sub_142b922e0(*(*(rcx + 0x90) + 8), "pshinter")
    
    if (rax_1 != 0)
        *(*(arg1 + 0xf0) + 0x28) = (*(rdi + 0x10))(rax_1)

return 0
