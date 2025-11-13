// 函数: sub_1421bde50
// 地址: 0x1421bde50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg3
int128_t zmm7 = arg4
int64_t zmm0

if ((*(*(*(arg1 + 0x28) + 0x30) + 0x59) & 1) == 0)
    arg4 = *(arg1 + 0x134)
    float zmm4 = *(arg1 + 0x138)
    float zmm1 = *(arg1 + 0x50) f- arg4.d
    float zmm5 = *(arg1 + 0x13c)
    int128_t zmm9 = *(arg1 + 0x54)
    int128_t zmm10 = *(arg1 + 0x58)
    arg3.d = zmm9.d f- zmm4
    zmm0.d = zmm10.q.d f- zmm5
    arg3.d = arg3.d f* arg3.d
    zmm0.d = zmm0.d f* zmm0.d
    arg3.d = arg3.d f+ zmm1 * zmm1
    arg3.d = arg3.d f+ zmm0.d
    
    if (not(arg3.d f<= 1f))
        arg4.d = arg4.d f- *(arg1 + 0x50)
        arg4.d = arg4.d f* zmm6.d
        arg4.d = arg4.d f+ arg2[2].d
        zmm5 = (zmm5 f- zmm10.d) f* zmm6.d f+ arg2[3].d
        arg2[2].d = arg4.d
        *(arg2 + 0x14) = (zmm4 f- zmm9.d) f* zmm6.d f+ *(arg2 + 0x14)
        arg2[3].d = zmm5

int32_t rax_1 = arg2[3].d
*arg2 = arg2[2]
arg2[1].d = rax_1
zmm0.d = zmm7.q.d f* arg2[6].d
zmm0.d = zmm0.d f+ arg2[2].d
arg3.d = arg2[7].d.d f* zmm7.d
arg3.d = arg3.d f+ arg2[3].d
arg2[2].d = zmm0.d
*(arg2 + 0x14) = *(arg2 + 0x34) f* zmm7.d f+ *(arg2 + 0x14)
arg2[3].d = arg3.d
int32_t result = *(arg1 + 0x11c) & 0x1ffffff
*(arg2 + 0x5c) |= result
*(arg1 + 0x11c) += 1
*(arg2 + 0x5c) |= 0x2000000
return result
