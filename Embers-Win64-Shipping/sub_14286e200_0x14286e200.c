// 函数: sub_14286e200
// 地址: 0x14286e200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(arg2)
void* rcx = *(arg1 + 0xeb0)
uint32_t r8 = zx.d(*(rcx + 2))

if (r10 == r8 - 1)
    *(rcx + 0x58) = *(arg1 + 0xea0)
    void* r8_1 = *(arg1 + 0xeb0)
    int64_t rax_2 = *(r8_1 + 0x50)
    *(arg1 + 0xea0) = rax_2
    *(r8_1 + 2) = arg2
    return rax_2

uint64_t rax_3 = zx.q(r8 + 1)

if (r10 == rax_3.d)
    *(rcx + 0x50) = *(arg1 + 0xea0)
    rcx = *(arg1 + 0xeb0)
    rax_3 = *(rcx + 0x58)
    *(arg1 + 0xea0) = rax_3

*(rcx + 2) = arg2
return rax_3
