// 函数: sub_14153eaf0
// 地址: 0x14153eaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2[1].d

if (i_2 == 0)
    return 

int32_t rax_1 = arg1[1].d
int32_t rdx = rax_1 + i_2

if (rdx s> *(arg1 + 0xc))
    sub_1405a52a0(arg1, rdx)
    rax_1 = arg1[1].d

int128_t* r9_1 = *arg2
int32_t i_1 = i_2
int64_t rax = (sx.q(rax_1) << 6) + *arg1
void* r8_1 = r9_1 + 0x28
void* rdx_1 = rax + 0x28
int32_t i

do
    rdx_1 += 0x40
    rax += 0x40
    uint128_t zmm0 = *r9_1
    r9_1 = &r9_1[4]
    r8_1 += 0x40
    *(rax - 0x40) = zmm0
    *(rax - 0x30) = r9_1[-3]
    *(rax - 0x20) = r9_1[-2].q
    *(rdx_1 - 0x40) = *(r8_1 - 0x40)
    *(rdx_1 - 0x38) = *(r8_1 - 0x38)
    *(rdx_1 - 0x34) = *(r8_1 - 0x34)
    *(rdx_1 - 0x2c) = *(r8_1 - 0x2c)
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[1].d += i_2
