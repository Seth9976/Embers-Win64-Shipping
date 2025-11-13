// 函数: sub_141384d70
// 地址: 0x141384d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t i_1 = arg2[1].d
void* rbx = *arg2
arg1[1].d = i_1

if (i_1 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_1413a86d0(arg1, i_1, 0)
void* rdi = *arg1
int32_t i

do
    sub_140596d10(rdi, rbx)
    int64_t rax_2 = *(rbx + 0x10)
    rbx += 0x18
    *(rdi + 0x10) = rax_2
    rdi += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
