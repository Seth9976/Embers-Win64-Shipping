// 函数: sub_141e871e0
// 地址: 0x141e871e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint64_t rax = *(arg1 + 0x160)

if ((arg2 == rax && arg4 == 0) || (rax != 0 && arg3 == 0 && (*(rax + 0x2c))[0] f>= *(arg2 + 0x2c)))
    return 

*(arg1 + 0x170) = *(arg1 + 0x1b0)
*(arg1 + 0x178) = *(arg1 + 0x1b8)
*(arg1 + 0x17c) = *(arg1 + 0x1bc)
*(arg1 + 0x180) = *(arg1 + 0x1c0)
*(arg1 + 0x184) = *(arg1 + 0x1c4)
*(arg1 + 0x188) = *(arg1 + 0x1c8)
*(arg1 + 0x18c) = *(arg1 + 0x1cc)
*(arg1 + 0x190) = *(arg1 + 0x1d0)
*(arg1 + 0x194) = *(arg1 + 0x1d4)
*(arg1 + 0x198) = *(arg1 + 0x1d8)
*(arg1 + 0x19c) = *(arg1 + 0x1dc)
*(arg1 + 0x1a0) = *(arg1 + 0x1e0)
*(arg1 + 0x1a4) = *(arg1 + 0x1e4)
*(arg1 + 0x170) = data_143dbb3b8
float zmm0[0x2]

if ((*(arg2 + 0x28) & 1) == 0)
    zmm0 = 0x3f800000
    *(arg1 + 0x1f0) = 0
    __builtin_memcpy(arg1 + 0x1f8, 
        "\x00\x00\x16\x44\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x7a\x44\x00\x00\x80\x3f\x00\x00\x80\x"
    "3f\x00\x00\xfa\x44\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x40\x1c\x46\x00\x00\x80\x3f", 
        0x2c)
else
    *(arg1 + 0x1f0) = *(arg2 + 0x38)
    *(arg1 + 0x1f8) = *(arg2 + 0x40)
    *(arg1 + 0x1fc) = *(arg2 + 0x44)
    *(arg1 + 0x200) = *(arg2 + 0x48)
    *(arg1 + 0x204) = *(arg2 + 0x4c)
    *(arg1 + 0x208) = *(arg2 + 0x50)
    *(arg1 + 0x20c) = *(arg2 + 0x54)
    *(arg1 + 0x210) = *(arg2 + 0x58)
    *(arg1 + 0x214) = *(arg2 + 0x5c)
    *(arg1 + 0x218) = *(arg2 + 0x60)
    *(arg1 + 0x21c) = *(arg2 + 0x64)
    *(arg1 + 0x220) = *(arg2 + 0x68)
    zmm0 = *(arg2 + 0x6c)

*(arg1 + 0x224) = zmm0[0]
*(arg1 + 0x1f0) = _mm_cvtps_pd(*(arg2 + 0x84)) f+ data_143dbb3b8
sub_141e76a10(arg1 + 0x1e8)
*(arg1 + 0x22b) = 1
*(arg1 + 0x160) = arg2
