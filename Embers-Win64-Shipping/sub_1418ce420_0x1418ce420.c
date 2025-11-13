// 函数: sub_1418ce420
// 地址: 0x1418ce420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = 0xffffffff
*arg1 = 0
arg1[1].d = 0
arg1[2].w = 0
arg1[3] = 0
arg1[4].d = 0
*(arg1 + 0x24) = 0xffffffff
arg1[5].w = 0
arg1[6] = 0
arg1[7].d = 0
*(arg1 + 0x3c) = 0xffffffff
arg1[8].w = 0
arg1[9] = 0
arg1[0xa].d = 0
*(arg1 + 0x54) = 0xffffffff
arg1[0xb].w = 0
arg1[0xc] = 0
arg1[0xd].d = 0
*(arg1 + 0x6c) = 0xffffffff
arg1[0xe].w = 0
arg1[0xf] = 0
arg1[0x10].d = 0
*(arg1 + 0x84) = 0xffffffff
arg1[0x11].w = 0
arg1[0x12] = 0
arg1[0x13].d = 0
*(arg1 + 0x9c) = 0xffffffff
arg1[0x14].w = 0
arg1[0x15] = 0
arg1[0x16].d = 0
*(arg1 + 0xb4) = 0xffffffff
arg1[0x17].w = 0
arg1[0x18].d = arg2
char rax

if (arg2 s<= 0 || *(arg3 + 0x10) != 2)
    rax = 0
else
    rax = 1

*(arg1 + 0xc4) = rax
arg1[0x19] = 0
arg1[0x1a].d = 0
*(arg1 + 0xd4) = 0xffffffff
arg1[0x1b].w = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
*(arg1 + 0xec) = 0xffffffff
arg1[0x1e].w = 0
arg1[0x1f] = 0
arg1[0x20].d = 0
*(arg1 + 0x104) = 0xffffffff
arg1[0x21].w = 0
arg1[0x22] = 0
arg1[0x23].d = 0
*(arg1 + 0x11c) = 0xffffffff
arg1[0x24].w = 0
arg1[0x25] = 0
arg1[0x26].d = 0
*(arg1 + 0x134) = 0xffffffff
arg1[0x27].w = 0
arg1[0x28] = 0
arg1[0x29].d = 0
*(arg1 + 0x14c) = 0xffffffff
arg1[0x2a].w = 0
arg1[0x2b] = 0
arg1[0x2c].d = 0
*(arg1 + 0x164) = 0xffffffff
arg1[0x2d].w = 0
arg1[0x2e] = 0
arg1[0x2f].d = 0
*(arg1 + 0x17c) = 0xffffffff
arg1[0x30].w = 0
arg1[0x31].b = 0
*(arg1 + 0x190) = *arg4

if (*arg4 == 0 || *(arg4 + 8) != 2)
    rax = 0
else
    rax = 1

int64_t i_1 = sx.q(arg2)
arg1[0x34].b = rax
int64_t* rax_1 = arg1
arg1[0x35] = 0

if (i_1 s<= 0)
    return rax_1

int128_t* r8 = arg3 - arg1
int64_t i

do
    int128_t zmm0 = *(r8 + rax_1)
    rax_1 = &rax_1[3]
    *(rax_1 - 0x18) = zmm0
    rax_1[-1] = *(r8 + rax_1 - 8)
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
