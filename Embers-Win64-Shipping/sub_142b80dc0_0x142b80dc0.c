// 函数: sub_142b80dc0
// 地址: 0x142b80dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x9c))

if (rax.d s>= *(arg1 + 0xa0))
    return 0xffffffff

void* rbx_2 = (rax << 4) + arg1
int32_t temp0 = *(rbx_2 + 0x38)
*(rbx_2 + 0x38) -= 1
int32_t rdi = *(rbx_2 + 0x2c)

if (temp0 != 1)
    *(rbx_2 + 0x2c) = sub_142b80b10(arg1, rdi, *(rbx_2 + 0x34))
    return zx.q(rdi)

*(arg1 + 0x9c) += 1
return zx.q(rdi)
