// 函数: sub_140b40000
// 地址: 0x140b40000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == 0)
    return 

void* rbx_1 = *(arg1 + 0x58)
int64_t rsi_1 = sx.q(*(rbx_1 + 0x68))
int32_t rax_1 = (rsi_1 + 1).d
*(rbx_1 + 0x68) = rax_1

if (rax_1 s> *(rbx_1 + 0x6c))
    sub_1405a4d70(rbx_1 + 0x60)

*(*(rbx_1 + 0x60) + (rsi_1 << 3)) = arg1
