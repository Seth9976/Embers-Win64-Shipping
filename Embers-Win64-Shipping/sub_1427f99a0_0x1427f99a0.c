// 函数: sub_1427f99a0
// 地址: 0x1427f99a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x68) != 0)
    int64_t r8_3 = (*(arg2 + 8) + 0xf) & 0xfffffffffffffff0
    *(arg2 + 8) = r8_3 + 0x70
    *(arg1 + 0x68) = r8_3

int32_t* rax_2 = *(arg2 + 8)
void* rcx = nullptr
uint64_t rdx = zx.q(*rax_2)
*(arg2 + 8) = &rax_2[1]

if (rdx.d != 0)
    rcx = &rax_2[1]

*(arg1 + 0x20) = rcx
*(arg2 + 8) += rdx
return &rax_2[1]
