// 函数: sub_141268070
// 地址: 0x141268070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1[1] + 0x1030) = 1
void* rbx = arg1[1]
int64_t rdi = sx.q(*(rbx + 0x1018))
int32_t rax_1 = (rdi + 1).d
*(rbx + 0x1018) = rax_1

if (rax_1 s> *(rbx + 0x101c))
    sub_1405a4d70(rbx + 0x1010)

int64_t result = *arg1
*(*(rbx + 0x1010) + (rdi << 3)) = result
return result
