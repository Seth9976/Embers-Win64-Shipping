// 函数: sub_1425cea00
// 地址: 0x1425cea00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int32_t i_1 = *(arg1 + 0x30)
void* rdi = *(arg1 + 0x28)
arg2[1].d = i_1

if (i_1 == 0)
    *(arg2 + 0xc) = 0
    return arg2

sub_1407751d0(arg2, i_1, 0)
int64_t* rbx = *arg2
void* rdi_1 = rdi + 0x10
int32_t i

do
    *rbx = *(rdi_1 - 0x10)
    rbx[1] = *(rdi_1 - 8)
    sub_140596d10(&rbx[2], rdi_1)
    int64_t zmm0_1 = *(rdi_1 + 0x10)
    rdi_1 += 0x28
    rbx[4] = zmm0_1
    rbx = &rbx[5]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg2
