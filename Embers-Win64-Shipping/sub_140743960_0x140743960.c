// 函数: sub_140743960
// 地址: 0x140743960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t* rax = sub_140745220(&var_48, arg2)
arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
*arg1 = &data_142d9aae0
arg1[2].b = 0
sub_140745220(&arg1[4], rax)
int64_t rcx_2 = rax[3]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142d9ad30
arg1[9] = &data_142d9acb8
arg1[0xa] = 0
int64_t rbp = sx.q(*(arg3 + 0x10))
int64_t r14 = *(arg3 + 8)
arg1[0xb].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[0xa], rbp.d, 0)
    memcpy(arg1[0xa], r14, (rbp << 2).d)
else
    *(arg1 + 0x5c) = 0

arg1[0xc].d = *(arg3 + 0x18)
*(arg1 + 0x64) = *(arg3 + 0x1c)
arg1[0xd] = 0
int64_t rbp_1 = sx.q(*(arg3 + 0x28))
int64_t rsi_1 = *(arg3 + 0x20)
arg1[0xe].d = rbp_1.d

if (rbp_1.d != 0)
    sub_140638750(&arg1[0xd], rbp_1.d, 0)
    memcpy(arg1[0xd], rsi_1, (rbp_1 << 2).d)
else
    __builtin_memset(arg1 + 0x74, 0, 0x24)

void* rcx_7 = &arg1[0x13]
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_3 = *(rcx_7 + 0x10)

if (rax_3 != 0)
    rcx_7 = rax_3

*rcx_7 = 0
*(rcx_7 + 8) = 0
arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
arg1[0x19] = 0
arg1[0x1a].d = 0
int64_t rcx_8 = arg2[3]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
