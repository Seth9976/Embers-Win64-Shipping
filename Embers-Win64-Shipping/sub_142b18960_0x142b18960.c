// 函数: sub_142b18960
// 地址: 0x142b18960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x2c)

if (rax s<= arg1[5].d)
    *(arg1 + 0xc) = rax
    arg1[1].d = rax
    *(arg1 + 0x2c) = rax + 1
    int32_t rax_1
    rax_1.b = 1
    arg1[2] = 0
    return rax_1

int32_t rdx = *(arg1 + 0x24)

if (rdx s< arg1[4].d)
    int64_t rax_2 = *arg1
    *(arg1 + 0x24) = rdx + 1
    (*(rax_2 + 0x10))()
    int32_t rax_3 = *(arg1 + 0x2c)
    *(arg1 + 0xc) = rax_3
    arg1[1].d = rax_3
    *(arg1 + 0x2c) = rax_3 + 1
    int32_t rax_4
    rax_4.b = 1
    arg1[2] = 0
    return rax_4

int32_t rdx_2 = arg1[6].d

if (rdx_2 s>= *(arg1 + 0x34))
    rax.b = 0
    return rax

arg1[1].d = 0xffffffff
arg1[6].d = rdx_2 + 1
arg1[2] = sub_142ae72d0(*(arg1[3] + 0x50), rdx_2)
int64_t rax_6
rax_6.b = 1
return rax_6
