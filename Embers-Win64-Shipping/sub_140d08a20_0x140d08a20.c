// 函数: sub_140d08a20
// 地址: 0x140d08a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

int64_t rdx_1 = *arg1
memmove(rdx_1 + 8, rdx_1, (rdi << 3).d)
int64_t* result = *arg1
*result = arg2
return result
