// 函数: sub_141c26910
// 地址: 0x141c26910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141c27b40()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rax_1 = rax[0x23]

*arg1 = 0
int32_t i_1 = *(rax_1 + 0x868)
void* rbx_1 = *(rax_1 + 0x860)
arg1[1].d = i_1

if (i_1 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_1407751d0(arg1, i_1, 0)
void* r14 = *arg1
void* rsi = r14 + 0x10
int32_t i

do
    sub_140596d10(r14, rbx_1)
    r14 += 0x28
    rsi += 0x28
    *(rsi - 0x28) = *(rbx_1 + 0x10)
    int64_t zmm1 = *(rbx_1 + 0x20)
    rbx_1 += 0x28
    *(rsi - 0x18) = zmm1
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
