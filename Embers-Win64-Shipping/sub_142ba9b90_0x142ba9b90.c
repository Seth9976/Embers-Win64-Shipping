// 函数: sub_142ba9b90
// 地址: 0x142ba9b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *arg2
int32_t r8 = 0

if ((r10.b & 1) != 0)
    r8 = *(*(*arg1 + 0x90) + 0x78)

if ((r10.b & 2) != 0 && *(arg1 + 0x1bd) != 0)
    r8 |= 0x100

if ((r10.b & 4) != 0 && *(arg1 + 0x1be) != 0)
    r8 |= 0x200

if ((r10.b & 8) != 0 && *(*arg1 + 0x410) != 0)
    r8 |= 0x400

if ((r10.b & 0x20) != 0 && arg1[0x6e].b != 0)
    r8 |= 0x1000

void* rax_3 = *arg1

if (*(*(rax_3 + 0x90) + 0x78) != 0x28 || *(arg1 + 0x371) == 0)
    *arg2 = r8
    return rax_3

int32_t rcx_2 = r8 | 0x2000

if ((r10.b & 0x40) == 0)
    rcx_2 = r8

int32_t r8_2 = rcx_2

if (test_bit(r10, 8) && *(arg1 + 0x372) != 0)
    r8_2 |= 0x8000

int32_t rcx_4 = r8_2 | 0x20000
int32_t rax_6 = r10 & 0x400

if (rax_6 == 0)
    rcx_4 = r8_2

if (test_bit(r10, 0xb))
    rcx_4 |= 0x40000

if (test_bit(r10, 0xc) && *(arg1 + 0x376) != 0)
    rcx_4 |= 0x80000

*arg2 = rcx_4
return rax_6
