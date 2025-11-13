// 函数: sub_141012b00
// 地址: 0x141012b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_1 = *(arg1 + 8) + 0x120
int32_t rax = rbx_1[1].d + 1
rbx_1[1].d = rax

if (rax s> *(rbx_1 + 0xc))
    sub_1405c4e40(rbx_1)
    rax = rbx_1[1].d

int64_t rax_1 = *rbx_1
int64_t rcx_2 = sx.q(rax) << 5
*(rcx_2 + rax_1 - 0x20) = 2
*(rcx_2 + rax_1 - 0x18) = 0
void* result = *(arg1 + 8)
void* rcx_3 = *(result + 0x20)
*(rcx_3 + 0x3b8c) += 1
return result
