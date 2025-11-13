// 函数: sub_1423c4080
// 地址: 0x1423c4080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xac) &= 0xffff207e
void* rdx = arg1 + 0x10
int64_t rax = *(arg1 + 0xb8)
*(arg1 + 0xac) |= 0x2000
*(arg1 + 0x88) = rax
void* rax_1 = *(rdx + 0x68)

if (rax_1 != 0)
    rdx = rax_1

*(rdx + 0x10) = *(arg1 + 0xb0)
*(rdx + 0x40) = 0
*(rdx + 0x50) = 0
*(rdx + 8) = &data_143f55b10
*(rdx + 0x44) = 2
*(rdx + 0x54) = 3
return &data_143f55b10
