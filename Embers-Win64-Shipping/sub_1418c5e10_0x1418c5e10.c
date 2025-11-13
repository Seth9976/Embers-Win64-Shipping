// 函数: sub_1418c5e10
// 地址: 0x1418c5e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rax = 4

if (*(arg1 + 0xc) != 0 || rdi.d u> 4)
    rax = ((rdi * 3) u>> 3) + 0x10 + rdi

int64_t rax_5
int64_t rdx
rdx:rax_5 = mulu.dp.q(-0xb7672a07a44c6af, sub_140a846a0(rax * 0x218, 0))
int64_t result = 0x7fffffff
uint32_t rdx_1 = (rdx u>> 9).d

if (rdi.d s> rdx_1)
    rdx_1 = 0x7fffffff

*(arg1 + 0xc) = rdx_1
int64_t rcx_2 = *arg1

if (rcx_2 != 0 || rdx_1 != 0)
    result = sub_140a84c80(rcx_2, sx.q(rdx_1) * 0x218, 0)
    *arg1 = result

return result
