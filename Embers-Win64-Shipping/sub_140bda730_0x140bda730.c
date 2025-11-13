// 函数: sub_140bda730
// 地址: 0x140bda730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x25]

if (rax != 0)
    int32_t rdx_1 = *(rax + 0x5c)
    int32_t r8_4 = (*(rax + 0x58) - 1 + rdx_1) & neg.d(rdx_1)
    int64_t rax_3 = sub_140a82f30(sx.q(r8_4), rdx_1, r8_4)
    void* rcx_1 = arg1[0x25]
    arg1[0x24] = rax_3
    int64_t* rcx_2 = *(rcx_1 + 0xb8)
    int64_t r8_5 = *rcx_2
    (*(r8_5 + 0x18))(rcx_2, rax_3, r8_5)

if (arg1[0x24] == 0)
    return arg1[0x24]

int64_t rax_5 = (*(*arg1 + 0x380))(arg1)
int64_t* rcx_4 = arg1[8]
void* const rax_6

if (rcx_4 == 0)
    rax_6 = nullptr
else
    int64_t rdx_3 = *rcx_4
    rax_6 = (*(rdx_3 + 0x148))(rcx_4, rdx_3)

if (rax_5 == 0)
    return arg1[0x24]

for (int64_t* i = *(rax_6 + 0x70); i != 0; i = i[0xb])
    int64_t rcx_5 = sx.q(*(i + 0x4c))
    int64_t r10_2 = arg1[0x24] + rcx_5
    int64_t rdx_4 = rcx_5 + rax_5
    
    if (r10_2 != rdx_4)
        if (not(test_bit(zx.q(i[8].d), 0x1e)))
            (*(*i + 0xb0))(i, r10_2, rdx_4, zx.q(i[7].d))
        else
            memcpy(r10_2, rdx_4, *(i + 0x3c) * i[7].d)

return arg1[0x24]
