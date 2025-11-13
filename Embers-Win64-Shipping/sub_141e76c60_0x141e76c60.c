// 函数: sub_141e76c60
// 地址: 0x141e76c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x160) == 0)
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
double zmm1 = data_143dbb3b8
*(arg1 + 0x170) = zmm1
*(arg1 + 0x1f0) = 0
__builtin_memcpy(arg1 + 0x1f8, 
    "\x00\x00\x16\x44\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x7a\x44\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\xfa\x44\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x40\x1c\x46\x00\x00\x80\x3f\x00\x00\x80\x
        3f", 
    0x30)
*(arg1 + 0x1f0) = _mm_cvtps_pd(*(*(arg1 + 0x160) + 0x8c)) f+ zmm1
*(arg1 + 0x160) = 0
