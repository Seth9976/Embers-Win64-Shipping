// 函数: sub_14237d6f0
// 地址: 0x14237d6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2
int64_t rax
int64_t rdx_2
rdx_2:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, arg2[1] - rdi)
*arg1 = 0
int64_t rsi_1 = rdx_2 s>> 2
int32_t i_1 = rsi_1.d + (rsi_1 u>> 0x3f).d
arg1[1].d = i_1

if (i_1 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_140808f70(arg1, i_1, 0)
void* rbx = *arg1
int32_t i

do
    *rbx = *rdi
    sub_140596d10(rbx + 8, &rdi[1])
    rbx += 0x18
    rdi = &rdi[3]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
