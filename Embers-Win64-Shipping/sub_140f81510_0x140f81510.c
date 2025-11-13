// 函数: sub_140f81510
// 地址: 0x140f81510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6

if ((*(arg4 + 8) & 0xc) != 0)
    *arg2 = 0
else
    Dbg1::Reset(&arg1[0x95])
    int128_t zmm2 = *(arg4 + 0x64)
    
    if (arg1[0x7b].b == 0)
        zmm2.d = zmm2.d f* *(arg1 + 0x4d4)
        arg4.b = 1
        (*(*arg1 + 0x250))(arg1, arg3, zmm2 ^ data_142d3f780, arg4)
    else
        int128_t zmm7
        
        zmm7 = zmm2.d f< 0f ? 0x3f800000 : 0xbf800000
        
        arg5 = zx.o((*(*arg1 + 0x268))(arg1))
        int64_t rax_3 = *arg1
        arg5.d = _mm_cvtepi32_ps(arg5).d f* zmm7.d
        double temp0_2[0x2] = _mm_cvtps_pd(arg5.q)
        arg5 = zx.o(0)
        temp0_2[0] = temp0_2[0] f+ arg1[0x7e]
        (*(rax_3 + 0x258))(arg5, _mm_cvtpd_ps(_mm_max_sd(temp0_2[0], 0)))
    
    char rax_5 = *(arg1 + 0x4e5)
    
    if (rax_5 != 1)
        arg5 = __andps_xmmxud_memxud(arg5, data_142d3f770)
    
    if (rax_5 != 1 && (arg5.d f<= 0f || rax_5 == 2))
        *arg2 = 0
    else
        *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
