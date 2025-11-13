// 函数: sub_140a1c600
// 地址: 0x140a1c600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1 + 0x88
int64_t i_1 = 2
int64_t i

do
    rbx[-9] = 0
    *rbx = 0
    int32_t rax_1 = sub_140a2d7c0(&data_143cf0ae0)
    rbx[-9] &= 0xfffffffffc000000
    rbx = &rbx[0x1a]
    uint64_t rcx = zx.q(rax_1)
    rbx[-0x23] |= rcx
    rbx[-0x1a] &= 0xfffffffffc000000
    rbx[-0x1a] |= rcx
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x1a0) = 0
return arg1
