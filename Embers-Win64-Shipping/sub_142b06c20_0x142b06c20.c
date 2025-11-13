// 函数: sub_142b06c20
// 地址: 0x142b06c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 8) != 0)
    return 

int16_t* rax_1 = sub_142a7dd00(0x30)
*(arg1 + 0x10) = rax_1

if (rax_1 == 0)
    *arg3 = 7
    return 

*rax_1 = 0xfffe
*(arg1 + 0x48) = 0xffff
rax_1[1] = 0
*(rax_1 + 0x19) = 0
int32_t rcx = *(arg2 + 0xc)

if ((rcx.b & 0xf) u>= 9)
    sub_142a7dcd0(*(arg1 + 0x10))
    *(arg1 + 0x10) = 0
    *arg3 = 1
    return 

int16_t rcx_3 = (*(&data_143668660 + (zx.q(rcx) & 0xf) * 0xc) << 7).w
rax_1[2] = rcx_3
rax_1[4] = rcx_3
rax_1[3] = rcx_3
int32_t rax_7 = *((zx.q(*(arg2 + 0xc)) & 0xf) * 0xc + 0x143668664)
*(rax_1 + 0x14) = rax_7
*(rax_1 + 0x10) = rax_7
*(rax_1 + 0xc) = rax_7
rax_1[0xc].b = 1
__builtin_strncpy(&rax_1[0xd], "ISCII,version=", 0xf)
int64_t rax_8 = -1

do
    rax_8 += 1
while (*(rax_1 + rax_8 + 0x1a) != 0)

*(sx.q(rax_8.d) + rax_1 + 0x1a) = (*(arg2 + 0xc) & 0xf) + 0x30
*(sx.q(rax_8.d + 1) + rax_1 + 0x1a) = 0
*(rax_1 + 0x2c) = 0
