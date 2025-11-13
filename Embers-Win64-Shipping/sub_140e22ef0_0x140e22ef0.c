// 函数: sub_140e22ef0
// 地址: 0x140e22ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = -1

do
    rbx += 1
while (arg3[rbx] != 0)

int32_t rax_2

if (*(arg1 + 0x28) == 0)
    rax_2 = 2

if (*(arg1 + 0x28) != 0 || (rbx + 1).d == 0)
    rax_2 = 1

int32_t rdx = rax_2 + rbx.d
*arg2 = 0
int32_t r14 = *(arg1 + 0x28)
int64_t rbp = *(arg1 + 0x20)
arg2[1].d = r14

if (r14 != 0 || rdx != 0)
    sub_1405a4c70(arg2, rdx + r14, 0)
    memcpy(*arg2, rbp, r14 * 2)
else
    *(arg2 + 0xc) = 0

sub_140a2cf70(arg2, arg3, rbx.d)
return arg2
