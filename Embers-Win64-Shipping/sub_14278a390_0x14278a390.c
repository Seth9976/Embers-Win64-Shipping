// 函数: sub_14278a390
// 地址: 0x14278a390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

int64_t rdx_1 = rdi << 3
*(rdx_1 + *arg1) = *arg2
*arg2 = 0
int64_t rsi_1 = sx.q(arg1[3].d)
int64_t* r14_1 = *arg1 + rdx_1
int32_t rbp = *(*r14_1 + 8)
int32_t rax_3 = (rsi_1 + 1).d
arg1[3].d = rax_3

if (rax_3 s> *(arg1 + 0x1c))
    sub_1405a4cf0(&arg1[2])

*(arg1[2] + (rsi_1 << 2)) = rbp
void* rax_5 = *r14_1
void* arg_10 = rax_5
int32_t arg_8 = *(rax_5 + 8)
return sub_140bd26e0(&arg1[6], &arg_8, &arg_10)
