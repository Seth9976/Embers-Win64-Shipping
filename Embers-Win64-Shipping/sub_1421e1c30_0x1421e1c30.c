// 函数: sub_1421e1c30
// 地址: 0x1421e1c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg4 + 4) * 0xbb38435 + 0x3619636b
int128_t zmm0
zmm0.d = (rdx u>> 9 | 0x3f800000).d f- 1f
int128_t zmm1
zmm1.d = ((rdx * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
*(arg4 + 4) = (rdx * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
char rcx_2 = (*(arg1 + 0x30)).b
int128_t zmm2
zmm2.d = (((rdx * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f

if ((rcx_2 & 9) == 9)
    zmm0.d = zmm0.d f+ zmm0.d
    zmm0.d = zmm0.d f- 1f
else if ((rcx_2 & 1) == 0)
    if ((rcx_2 & 8) == 0)
        zmm0 = zx.o(0)
    else
        zmm0 ^= 0x80000000

*arg3 = zmm0.d
char rdx_1 = (*(arg1 + 0x30)).b

if ((rdx_1 & 0x12) == 0x12)
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f- 1f
else if ((rdx_1 & 2) == 0)
    if ((rdx_1 & 0x10) == 0)
        zmm1 = zx.o(0)
    else
        zmm1 ^= 0x80000000

arg3[1] = zmm1.d
char rcx_3 = (*(arg1 + 0x30)).b
char result = rcx_3 & 0x24

if (result == 0x24)
    zmm2.d = zmm2.d f+ zmm2.d
    zmm2.d = zmm2.d f- 1f
    arg3[2] = zmm2.d
    return result

if ((rcx_3 & 4) == 0)
    if ((rcx_3 & 0x20) == 0)
        arg3[2] = 0
        return result
    
    zmm2 ^= 0x80000000

arg3[2] = zmm2.d
return result
