// 函数: sub_141fdaaf0
// 地址: 0x141fdaaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int64_t rdi = sx.q(*(rbx + 0x28))
int32_t rax = (rdi + 1).d
*(rbx + 0x28) = rax

if (rax s> *(rbx + 0x2c))
    sub_1405a4cf0(rbx + 0x20)

*(*(rbx + 0x20) + (rdi << 2)) = arg2
void* rbx_1 = *(arg1 + 8)
int64_t rdi_1 = sx.q(*(rbx_1 + 0x28))
int32_t rax_2 = (rdi_1 + 1).d
*(rbx_1 + 0x28) = rax_2

if (rax_2 s> *(rbx_1 + 0x2c))
    sub_1405a4cf0(rbx_1 + 0x20)

*(*(rbx_1 + 0x20) + (rdi_1 << 2)) = arg3
void* rbx_2 = *(arg1 + 8)
int64_t rdi_2 = sx.q(*(rbx_2 + 0x28))
int32_t rax_4 = (rdi_2 + 1).d
*(rbx_2 + 0x28) = rax_4

if (rax_4 s> *(rbx_2 + 0x2c))
    sub_1405a4cf0(rbx_2 + 0x20)

int64_t result = *(rbx_2 + 0x20)
*(result + (rdi_2 << 2)) = arg4
return result
