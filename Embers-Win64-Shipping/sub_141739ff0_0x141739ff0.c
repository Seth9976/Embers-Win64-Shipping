// 函数: sub_141739ff0
// 地址: 0x141739ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm2 = 0x7f7fffff
int32_t rax = arg4[1].d
*arg2 = *arg4
uint128_t zmm0 = *arg4
arg2[1].d = rax

if (not(zmm0.d f<= 9.99999975e-05f))
    zmm0 = *arg3
    
    if (not(zmm0.d f>= 3.40282347e+38f))
        zmm2 = zmm0.d
        int32_t var_20_1 = 0
        *arg2 = (_mm_unpacklo_ps(zx.o(0), 0)).q
        arg2[1].d = 0
        *arg2 = 0x3f800000
else if (not(zmm0.d f>= -9.99999975e-05f))
    zmm0 = *arg3 ^ 0x80000000
    
    if (not(zmm0.d f>= 3.40282347e+38f))
        zmm2 = zmm0.d
        int32_t var_14_1 = 0
        *arg2 = (_mm_unpacklo_ps(zx.o(0), 0)).q
        arg2[1].d = 0
        *arg2 = 0xbf800000

zmm0 = *(arg4 + 4)

if (not(zmm0.d f<= 9.99999975e-05f))
    int32_t zmm1 = *(arg3 + 4)
    
    if (not(zmm1 f>= zmm2))
        int32_t var_20_2 = 0
        zmm2 = zmm1
        *arg2 = (_mm_unpacklo_ps(zx.o(0), 0)).q
        arg2[1].d = 0
        *(arg2 + 4) = 0x3f800000
else if (not(zmm0.d f>= -9.99999975e-05f))
    zmm0 = *(arg3 + 4) ^ 0x80000000
    
    if (not(zmm0.d f>= zmm2))
        zmm2 = zmm0.d
        int32_t var_14_2 = 0
        *arg2 = (_mm_unpacklo_ps(zx.o(0), 0)).q
        arg2[1].d = 0
        *(arg2 + 4) = 0xbf800000

zmm0 = arg4[1].d

if (zmm0.d f<= 9.99999975e-05f)
    if (not(zmm0.d f>= -9.99999975e-05f) && not((*(arg3 + 8) ^ 0x80000000).d f>= zmm2))
        int32_t var_14_3 = 0
        *arg2 = (_mm_unpacklo_ps(zx.o(0), 0)).q
        arg2[1].d = 0xbf800000
else if (not((*(arg3 + 8)).d f>= zmm2))
    int32_t var_20_3 = 0
    *arg2 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg2[1].d = 0x3f800000

return arg2
