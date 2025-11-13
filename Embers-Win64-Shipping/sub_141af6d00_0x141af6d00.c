// 函数: sub_141af6d00
// 地址: 0x141af6d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d9ab38
arg1[1] = 0
int64_t rbp = sx.q(*(arg2 + 0x10))
int64_t r14 = *(arg2 + 8)
arg1[2].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[1], rbp.d, 0)
    memcpy(arg1[1], r14, (rbp << 2).d)
else
    *(arg1 + 0x14) = 0

arg1[3].b = *(arg2 + 0x18)
*(arg1 + 0x19) = *(arg2 + 0x19)
arg1[4] = 0
uint32_t count = *(arg2 + 0x28)
int64_t rdi_1 = *(arg2 + 0x20)
arg1[5].d = count

if (count != 0)
    sub_1405da9e0(&arg1[4], count, 0)
    memcpy(arg1[4], rdi_1, count)
else
    __builtin_memset(arg1 + 0x2c, 0, 0x24)

void* rcx_4 = &arg1[0xa]
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_2 = *(rcx_4 + 0x10)

if (rax_2 != 0)
    rcx_4 = rax_2

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
return arg1
