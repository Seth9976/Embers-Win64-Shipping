// 函数: sub_140f61a50
// 地址: 0x140f61a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm3[0x2] = arg1

if (not(arg2.q f== 0.0))
    arg1.q = arg2.q f* 0.5
    arg1.q = arg1.q f+ zmm3[0]
    zmm3 = arg1
    zmm3[0] = zmm3[0] f/ arg2.q
    int64_t rcx_1 = int.q(zmm3[0])
    
    if (rcx_1 != -0x8000000000000000)
        arg1.q = float.d(rcx_1)
        
        if (not(arg1.q f== zmm3[0]))
            uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm3, zmm3[0]))
            zmm3 = zx.o(0)
            zmm3[0] = float.d(rcx_1 - (zx.q(temp0_2) & 1))
    
    zmm3[0] = zmm3[0] f* arg2.q

arg1 = -0x3810000020000000

if (zmm3[0] f< arg1.q)
    return arg1

return __minsd_xmmsd_memsd(zmm3[0], 0x47efffffe0000000)
