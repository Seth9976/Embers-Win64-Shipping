// 函数: sub_142838f3c
// 地址: 0x142838f3c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg6
*(arg1 + 5) = sub_141840b50(arg3)
*(arg1 + 6) = arg4
*(arg1 + 7) = arg5
arg1[0x36a] = arg7
*(arg1 + 8) = arg3
*(arg1 + 0xd90) = 0
*(arg1 + 0xd98) = arg2
*(arg1 + 0xdac) = 0
arg1[0x3ef] = 0
arg1[0x3d8] = 0xbf800000
arg1[0x3dd] = 1
arg1[0x3ee] = sub_14283e0b8(arg3)
*(arg1 + 0xe80) = 0
arg1[0x3a2] = 0
arg1[0x36d] = 0
*(arg1 + 0xf20) = 0
arg1[0x3ca] = 0
arg1[0x3cd] = 0
arg1[0x3d3] = 0
*(arg1 + 0xf6c) = 0
sub_14283ba28(&arg1[4], arg3)
float zmm2[0x2] = arg8
uint128_t zmm1 = _mm_cvtps_pd(zmm2)
arg1[0x37c] = zmm2[0]

if (not(0x3e7ad7f29abcaf48 f<= zmm1.q))
    zmm2 = 0x33d6bf95
    arg1[0x37c] = 0x33d6bf95

void* rax_4 = *(arg1 + 0xd98)
zmm1.q = 0x3eff75104d551d69 f/ _mm_cvtps_pd(zmm2)
zmm2 = _mm_cvtpd_ps(zmm1)
arg1[0x3a3] = zmm2[0]
arg1[0x3a4] = zmm2[0]
*(rax_4 + 0x58) += 1
return 0
