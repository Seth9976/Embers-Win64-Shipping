// 函数: sub_1421fc980
// 地址: 0x1421fc980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xe8)

if (rbx == 0)
    return 

void* rax_1 = sub_14249ed50()
void* rdx_1 = *(rbx + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

*(rbx + 0x30) |= 2
*(rbx + 0x38) = 0x3f800000
*(rbx + 0x3c) = 0x3f800000
