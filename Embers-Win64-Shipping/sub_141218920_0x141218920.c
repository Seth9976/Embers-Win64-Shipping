// 函数: sub_141218920
// 地址: 0x141218920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = arg2
*arg1 = &data_142f41078
arg1[2].b = 1
void* rbx = &arg1[0x12]
__builtin_memset(&arg1[3], 0, 0x28)
void* rcx = &arg1[8]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
int16_t rsi = (data_1439b6344).w
arg1[0x10] = 0
arg1[0x11].d = 0
*(arg1 + 0x8c) = 0
arg1[0x21] = 0
arg1[0x22].d = 0
*(arg1 + 0x114) = 5
*(rbx + 0x80) += 1

if (*(rbx + 0x80) s> *(rbx + 0x84))
    sub_141238670(rbx, 0)

void* rax_2 = *(rbx + 0x78)

if (rax_2 != 0)
    rbx = rax_2

if (rbx != 0)
    *rbx = -1
    *(rbx + 8) = 0
    *(rbx + 0xc) = 0
    *(rbx + 0xe) = rsi
    *(rbx + 0x10) = rsi
    *(rbx + 0x12) = rsi
    *(rbx + 0x14) = 0

void* rcx_2 = &arg1[0x26]
arg1[0x24] = 0
arg1[0x25] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

*rcx_2 = 0
*(rcx_2 + 8) = 0
*(arg1 + 0x154) = 0
arg1[0x2a].d = 0xffffffff
arg1[0x2c] = 0
arg1[0x2d].d = 0
arg1[0x23].d = data_1439b6344 + 1
*(arg1 + 0x14) = data_1439b6344
return arg1
