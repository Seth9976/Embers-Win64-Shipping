// 函数: sub_142082440
// 地址: 0x142082440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int64_t rdi = sx.q(rbx[1].d)
int32_t rax = (rdi + 1).d
rbx[1].d = rax

if (rax s> *(rbx + 0xc))
    sub_1405a4df0(rbx)

int64_t* rcx_2 = *rbx + rdi * 0x18
*rcx_2 = *arg2
return sub_1405d5180(&rcx_2[1], &arg2[1]) __tailcall
