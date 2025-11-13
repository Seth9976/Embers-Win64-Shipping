// 函数: sub_141d35c80
// 地址: 0x141d35c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg2
int64_t rsi = *arg1
int64_t rdi = sx.q(*(rbx + 0x20))
int32_t rax = (rdi + 1).d
*(rbx + 0x20) = rax

if (rax s> *(rbx + 0x24))
    sub_1405a4d70(rbx + 0x18)

int64_t result = *(rbx + 0x18)
*(result + (rdi << 3)) = rsi
return result
