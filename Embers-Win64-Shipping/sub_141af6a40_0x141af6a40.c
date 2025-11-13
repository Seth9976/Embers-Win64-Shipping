// 函数: sub_141af6a40
// 地址: 0x141af6a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
arg1[2].b = 0
*arg1 = &data_1430521c0
int64_t rbx = *(arg3 + 0x60)
int64_t arg_10 = 0
int64_t arg_8 = 0
void var_38
int64_t* rax = sub_140596d10(&var_38, arg3 + 0x68)
arg1[4] = rbx
arg1[5] = 0
arg1[5] = *rax
*rax = 0
arg1[6].d = rax[1].d
*(arg1 + 0x34) = *(rax + 0xc)
rax[1] = 0
arg1[7] = 0
arg1[8] = 0
int64_t rcx_4 = *rax

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[9] = &data_143051e50
arg1[0xa] = 0
int64_t rbp = sx.q(*(arg2 + 0xf0))
int64_t r14 = *(arg2 + 0xe8)
arg1[0xb].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[0xa], rbp.d, 0)
    memcpy(arg1[0xa], r14, (rbp << 2).d)
else
    *(arg1 + 0x5c) = 0

*(arg1 + 0x60) = *(arg2 + 0xf8)
*(arg1 + 0x70) = *(arg2 + 0x108)
arg1[0x10] = *(arg2 + 0x118)
arg1[0x11] = 0
int64_t rbp_1 = sx.q(*(arg2 + 0x128))
int64_t rsi_1 = *(arg2 + 0x120)
arg1[0x12].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1407751d0(&arg1[0x11], rbp_1.d, 0)
    memcpy(arg1[0x11], rsi_1, (rbp_1 * 0x28).d)
else
    __builtin_memset(arg1 + 0x94, 0, 0x24)

void* rcx_9 = &arg1[0x17]
*(rcx_9 + 0x10) = 0
*(rcx_9 + 0x18) = 0
*(rcx_9 + 0x1c) = 0x80
void* rax_1 = *(rcx_9 + 0x10)

if (rax_1 != 0)
    rcx_9 = rax_1

*rcx_9 = 0
*(rcx_9 + 8) = 0
arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
arg1[0x1d] = 0
arg1[0x1e].d = 0
return arg1
