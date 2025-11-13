// 函数: sub_1429daec0
// 地址: 0x1429daec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1429dddd0(1, 0x328)

if (rax == 0)
    return zx.q((rax + 1).d)

int32_t rax_2 = *(arg1 + 0x20)
*(arg1 + 0x30) = rax
*(rax + 8) = rax_2
*(rax + 0x108) = 0
*(rax + 0x110) = 0
*(rax + 0xe4) = 0x10
int64_t* rax_3 = *(arg1 + 0x28)

if (rax_3 != 0)
    *(rax + 0xd8) = *rax_3
    *(rax + 0xe0) = rax_3[1].d
    *(arg1 + 0x28) = rax + 0xd8

return 0
