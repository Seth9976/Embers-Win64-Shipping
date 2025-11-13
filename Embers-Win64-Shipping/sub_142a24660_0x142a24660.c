// 函数: sub_142a24660
// 地址: 0x142a24660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a24f00(arg1 + 0x10e8)
int64_t rcx_1 = *(arg1 + 0x440)
*(arg1 + 0x10eb) = 0

if (rcx_1 != 0 && *(arg1 + 0x115c) == 0)
    memset(rcx_1, 0, sx.q(*(arg1 + 0x364) * *(arg1 + 0x35c)))

int64_t rcx_2 = *(arg1 + 0x448)

if (rcx_2 != 0)
    memset(rcx_2, 0, sx.q(*(arg1 + 0x364) * *(arg1 + 0x35c)))

*(arg1 + 0x10ce) = 0
*(arg1 + 0x10c8) = 0x10101
*(arg1 + 0x10cc) = 0xffff
*(arg1 + 0x10c4) = 0xffffffff
sub_142a23610(arg1)
sub_142a23d80(*(arg1 + 0x1168))
sub_142a23d20(arg1)
*(*(arg1 + 0x1168) + 0x7f8) = 1
int32_t rax_6

if (*(arg1 + 0x338) != 0 && *(arg1 + 0x4534) == 0)
    rax_6 = *(arg1 + 0x350)

int128_t zmm0_1

if (*(arg1 + 0x338) == 0 || *(arg1 + 0x4534) != 0 || rax_6 == 3)
    int128_t* rcx_6 = *(arg1 + 0x1168)
    int64_t i_9 = 0xf
    int128_t* rdx_2 = *(arg1 + 0x1170)
    int64_t i_5 = 0xf
    int64_t i
    
    do
        rdx_2 = &rdx_2[8]
        zmm0_1 = *rcx_6
        rcx_6 = &rcx_6[8]
        rdx_2[-8] = zmm0_1
        rdx_2[-7] = rcx_6[-7]
        rdx_2[-6] = rcx_6[-6]
        rdx_2[-5] = rcx_6[-5]
        rdx_2[-4] = rcx_6[-4]
        rdx_2[-3] = rcx_6[-3]
        rdx_2[-2] = rcx_6[-2]
        rdx_2[-1] = rcx_6[-1]
        i = i_5
        i_5 -= 1
    while (i != 1)
    *rdx_2 = *rcx_6
    rdx_2[1] = rcx_6[1]
    rdx_2[2] = rcx_6[2]
    rdx_2[3] = rcx_6[3]
    rdx_2[4] = rcx_6[4]
    rdx_2[5] = rcx_6[5]
    rdx_2[6] = rcx_6[6]
    rdx_2[7].q = rcx_6[7].q
    *(rdx_2 + 0x78) = *(rcx_6 + 0x78)
    int64_t i_6 = 0xf
    int128_t* rcx_7 = *(arg1 + 0x1168)
    int128_t* rdx_4 = *(arg1 + 0x1170) + 0x7fc
    int64_t i_1
    
    do
        rdx_4 = &rdx_4[8]
        zmm0_1 = *rcx_7
        rcx_7 = &rcx_7[8]
        rdx_4[-8] = zmm0_1
        rdx_4[-7] = rcx_7[-7]
        rdx_4[-6] = rcx_7[-6]
        rdx_4[-5] = rcx_7[-5]
        rdx_4[-4] = rcx_7[-4]
        rdx_4[-3] = rcx_7[-3]
        rdx_4[-2] = rcx_7[-2]
        rdx_4[-1] = rcx_7[-1]
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)
    *rdx_4 = *rcx_7
    rdx_4[1] = rcx_7[1]
    rdx_4[2] = rcx_7[2]
    rdx_4[3] = rcx_7[3]
    rdx_4[4] = rcx_7[4]
    rdx_4[5] = rcx_7[5]
    rdx_4[6] = rcx_7[6]
    rdx_4[7].q = rcx_7[7].q
    *(rdx_4 + 0x78) = *(rcx_7 + 0x78)
    int64_t i_7 = 0xf
    int128_t* rcx_8 = *(arg1 + 0x1168)
    int128_t* rdx_6 = *(arg1 + 0x1170) + 0xff8
    int64_t i_2
    
    do
        rdx_6 = &rdx_6[8]
        zmm0_1 = *rcx_8
        rcx_8 = &rcx_8[8]
        rdx_6[-8] = zmm0_1
        rdx_6[-7] = rcx_8[-7]
        rdx_6[-6] = rcx_8[-6]
        rdx_6[-5] = rcx_8[-5]
        rdx_6[-4] = rcx_8[-4]
        rdx_6[-3] = rcx_8[-3]
        rdx_6[-2] = rcx_8[-2]
        rdx_6[-1] = rcx_8[-1]
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)
    *rdx_6 = *rcx_8
    rdx_6[1] = rcx_8[1]
    rdx_6[2] = rcx_8[2]
    rdx_6[3] = rcx_8[3]
    rdx_6[4] = rcx_8[4]
    rdx_6[5] = rcx_8[5]
    rdx_6[6] = rcx_8[6]
    rdx_6[7].q = rcx_8[7].q
    *(rdx_6 + 0x78) = *(rcx_8 + 0x78)
    int128_t* rcx_9 = *(arg1 + 0x1168)
    int128_t* rdx_8 = *(arg1 + 0x1170) + 0x17f4
    int64_t i_3
    
    do
        rdx_8 = &rdx_8[8]
        zmm0_1 = *rcx_9
        rcx_9 = &rcx_9[8]
        rdx_8[-8] = zmm0_1
        rdx_8[-7] = rcx_9[-7]
        rdx_8[-6] = rcx_9[-6]
        rdx_8[-5] = rcx_9[-5]
        rdx_8[-4] = rcx_9[-4]
        rdx_8[-3] = rcx_9[-3]
        rdx_8[-2] = rcx_9[-2]
        rdx_8[-1] = rcx_9[-1]
        i_3 = i_9
        i_9 -= 1
    while (i_3 != 1)
    *rdx_8 = *rcx_9
    rdx_8[1] = rcx_9[1]
    rdx_8[2] = rcx_9[2]
    rdx_8[3] = rcx_9[3]
    rdx_8[4] = rcx_9[4]
    rdx_8[5] = rcx_9[5]
    rdx_8[6] = rcx_9[6]
    rdx_8[7].q = rcx_9[7].q
    *(rdx_8 + 0x78) = *(rcx_9 + 0x78)
else if (rax_6 == 2)
    int64_t i_8 = 0xf
    int128_t* rdx_1 = *(arg1 + 0x1168)
    int128_t* r8_4 = zx.q(*(arg1 + 0x1178)) * 0x7fc + *(arg1 + 0x1170)
    int64_t i_4
    
    do
        r8_4 = &r8_4[8]
        zmm0_1 = *rdx_1
        rdx_1 = &rdx_1[8]
        r8_4[-8] = zmm0_1
        r8_4[-7] = rdx_1[-7]
        r8_4[-6] = rdx_1[-6]
        r8_4[-5] = rdx_1[-5]
        r8_4[-4] = rdx_1[-4]
        r8_4[-3] = rdx_1[-3]
        r8_4[-2] = rdx_1[-2]
        r8_4[-1] = rdx_1[-1]
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)
    *r8_4 = *rdx_1
    r8_4[1] = rdx_1[1]
    r8_4[2] = rdx_1[2]
    r8_4[3] = rdx_1[3]
    r8_4[4] = rdx_1[4]
    r8_4[5] = rdx_1[5]
    r8_4[6] = rdx_1[6]
    r8_4[7].q = rdx_1[7].q
    *(r8_4 + 0x78) = *(rdx_1 + 0x78)

if (*(arg1 + 0x338) == 0 || *(arg1 + 0x348) != 0)
    int64_t rcx_10 = *(arg1 + 0x3d8)
    
    if (rcx_10 != 0 && *(arg1 + 0x115c) == 0)
        memset(rcx_10, 0, sx.q((*(arg1 + 0x35c) + 1) * *(arg1 + 0x368)) * 0x44)

*(arg1 + 0x10a4) = 0
*(arg1 + 0x10ac) = 0
*(arg1 + 0x1178) = 0
return 0
