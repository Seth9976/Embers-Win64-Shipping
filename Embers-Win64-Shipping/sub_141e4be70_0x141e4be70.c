// 函数: sub_141e4be70
// 地址: 0x141e4be70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = arg1[1]
sub_140596d10(arg2, *arg1)
int64_t* rcx_1 = &arg2[5]
arg2[2].b = *rdi
arg2[3] = 0
arg2[4] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_1 = rcx_1[2]

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
rcx_1[1] = 0
arg2[9].d = 0xffffffff
*(arg2 + 0x4c) = 0
arg2[0xb] = 0
arg2[0xc].d = 0
sub_140780e10(&arg2[3], &rdi[8])

if (*(rdi + 0x48) == 0)
    memmove(&arg2[0xa], &rdi[0x40], 4)

int64_t rcx_4 = arg2[0xb]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg2[0xb] = *(rdi + 0x48)
*(rdi + 0x48) = 0
arg2[0xc].d = *(rdi + 0x50)
*(rdi + 0x50) = 0
arg2[0xd].d = *(rdi + 0x58)
*(arg2 + 0x6c) = *(rdi + 0x5c)
arg2[0xe].d = *(rdi + 0x60)
*(arg2 + 0x74) = rdi[0x64]
arg2[0xf] = *(rdi + 0x68)
arg2[0x10].d = *(rdi + 0x70)
return arg2
