// 函数: sub_14271e2d0
// 地址: 0x14271e2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i = *(arg1 + 0x138)
int32_t r9 = *(arg2 + 0x2c)

for (void* r10 = &i[sx.q(*(arg1 + 0x140)) * 0xa]; i != r10; i = &i[0xa])
    if (*i == r9)
        *(i + 0x10) = data_143b58120.q
        int32_t rax_1 = data_143b58128
        *(i + 0x20) &= 0xfffffffffffffffe
        i[6] = rax_1

int32_t* i_1 = *(arg1 + 0x128)

for (void* r8 = &i_1[sx.q(*(arg1 + 0x130)) * 0xa]; i_1 != r8; i_1 = &i_1[0xa])
    if (*i_1 == r9)
        *(i_1 + 0x10) = data_143b58120.q
        int32_t rcx_1 = data_143b58128
        *(i_1 + 0x20) &= 0xfffffffffffffffe
        i_1[6] = rcx_1

return i_1
