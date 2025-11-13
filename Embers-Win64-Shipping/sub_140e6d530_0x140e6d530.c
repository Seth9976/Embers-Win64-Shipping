// 函数: sub_140e6d530
// 地址: 0x140e6d530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    arg1[3] = 0
    arg1[4] = 0
else
    arg3.d = float.s(*arg2)
    arg1[3].d = int.d(arg3.d)
    arg3.d = float.s(arg2[1])
    *(arg1 + 0x1c) = int.d(arg3.d)
    arg3.d = float.s(arg2[2])
    arg1[4].d = int.d(arg3.d) - 1
    arg3.d = float.s(arg2[3])
    *(arg1 + 0x24) = int.d(arg3.d) - 1

int32_t arg_8
(*(*arg1 + 0x18))(arg3, &arg_8)
char rdx_1 = 0
int32_t r8 = arg1[3].d
int32_t result = arg1[4].d - r8

if ((*(arg1 + 0x24) - *(arg1 + 0x1c)) * result s> 0)
    int32_t zmm1 = arg_8
    arg3 = _mm_cvtepi32_ps(zx.o(r8))
    
    if (zmm1 f< arg3.d)
    label_140e6d5cd:
        arg_8 = arg3.d
        rdx_1 = 1
        zmm1 = arg3.d
    else
        arg3 = _mm_cvtepi32_ps(zx.o(arg1[4].d))
        
        if (not(zmm1 f<= arg3.d))
            goto label_140e6d5cd
    
    arg3 = arg4
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c)))
    
    if (not(arg3.d f>= zmm2.d))
    label_140e6d5eb:
        arg4 = zmm2.d
        return (*(*arg1 + 0x20))(arg1, zx.q(int.d(zmm1)), zx.q(int.d(zmm2.d)))
    
    zmm2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x24)))
    
    if (arg3.d f> zmm2.d)
        goto label_140e6d5eb
    
    if (rdx_1 != 0)
        return (*(*arg1 + 0x20))(arg1, zx.q(int.d(zmm1)), zx.q(int.d(arg3.d)))

return result
