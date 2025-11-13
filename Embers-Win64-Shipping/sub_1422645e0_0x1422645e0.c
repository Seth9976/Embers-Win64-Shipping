// 函数: sub_1422645e0
// 地址: 0x1422645e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *arg2

for (void* rdi_2 = (sx.q(arg2[1].d) << 4) + i; i != rdi_2; i += 0x10)
    int32_t r8_1 = *(i + 0xc)
    int32_t r9_1 = r8_1
    uint8_t rdx_1 = (r8_1 u>> 2).b
    r8_1.b &= 1
    (*(*arg1 + 0x8a0))(arg1, *i, r8_1, (r9_1 u>> 1).b & 1, rdx_1 & 1, *(i + 8))
