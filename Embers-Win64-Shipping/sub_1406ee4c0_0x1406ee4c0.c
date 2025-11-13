// 函数: sub_1406ee4c0
// 地址: 0x1406ee4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]
sub_140745220(arg2, *arg1)
arg2[5] = *rdi
void* rax_1 = rdi[1]
arg2[6] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg2[7].d = rdi[2].d
arg2[8] = rdi[3]
void* rax_4 = rdi[4]
arg2[9] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg2[0xa].d = rdi[5].d
arg2[0xb].b = rdi[6].b
*(arg2 + 0x5c) = *(rdi + 0x34)
arg2[0xc].b = rdi[7].b
sub_1407450b0(&arg2[0xd], &rdi[8])
sub_1407450b0(&arg2[0x10], &rdi[0xb])
arg2[0x13] = 0
void* rdx_3 = &arg2[0x15]
arg2[0x14] = 0
*(rdx_3 + 0x10) = 0
*(rdx_3 + 0x18) = 0
*(rdx_3 + 0x1c) = 0x80
void* rax_9 = *(rdx_3 + 0x10)

if (rax_9 != 0)
    rdx_3 = rax_9

*rdx_3 = 0
*(rdx_3 + 8) = 0
arg2[0x19].d = 0xffffffff
*(arg2 + 0xcc) = 0
arg2[0x1b] = 0
arg2[0x1c].d = 0
sub_140747450(&arg2[0x13], &rdi[0xe])
arg2[0x1d] = rdi[0x18]
arg2[0x1e].d = rdi[0x19].d
*(arg2 + 0xf4) = *(rdi + 0xcc)
arg2[0x1f].d = rdi[0x1a].d
*(arg2 + 0xfc) = *(rdi + 0xd4)
*(arg2 + 0xfd) = *(rdi + 0xd5)
arg2[0x20] = rdi[0x1b]
arg2[0x21].b = rdi[0x1c].b
*(arg2 + 0x109) = *(rdi + 0xe1)
return arg2
