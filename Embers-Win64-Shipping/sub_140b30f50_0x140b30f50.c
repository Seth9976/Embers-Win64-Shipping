// 函数: sub_140b30f50
// 地址: 0x140b30f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140597df0(arg1, arg2)
int64_t i_1 = 8
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5].b = arg2[5].b
void* rbx_1 = arg2 + 0x2a
*(arg1 + 0x29) = *(arg2 + 0x29)
void* rax_5 = arg1 + 0x2a
int64_t i

do
    rax_5 += 0x80
    int128_t zmm0_1 = *rbx_1
    rbx_1 += 0x80
    *(rax_5 - 0x80) = zmm0_1
    *(rax_5 - 0x70) = *(rbx_1 - 0x70)
    *(rax_5 - 0x60) = *(rbx_1 - 0x60)
    *(rax_5 - 0x50) = *(rbx_1 - 0x50)
    *(rax_5 - 0x40) = *(rbx_1 - 0x40)
    *(rax_5 - 0x30) = *(rbx_1 - 0x30)
    *(rax_5 - 0x20) = *(rbx_1 - 0x20)
    *(rax_5 - 0x10) = *(rbx_1 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
