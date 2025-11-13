// 函数: sub_142a3ecb0
// 地址: 0x142a3ecb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx_1 = arg1 & 0xffffffffffc00000
void* r8_2 = ((arg1 - rdx_1) u>> (*(rdx_1 + 0x58)).b) * 0x50 + rdx_1

if (((*(r8_2 + 0x98)).b & 3) == 2 && *(r8_2 + 0x80) - *(r8_2 + 0x90) == 1)
    int64_t rax_4
    rax_4.b = 0
    return rax_4

*arg1 = *(r8_2 + 0x88)
*(r8_2 + 0x80) -= 1
int64_t rdx_2 = *(r8_2 + 0x90)
int64_t rax_6 = *(r8_2 + 0x80)
*(r8_2 + 0x88) = arg1

if (rax_6 == rdx_2)
    sub_142a40310(r8_2 + 0x70)
    int64_t rax_8
    rax_8.b = 1
    return rax_8

if ((*(r8_2 + 0x76) & 1) != 0)
    sub_142a40400(r8_2 + 0x70)

uint64_t rax_7
rax_7.b = 1
return rax_7
