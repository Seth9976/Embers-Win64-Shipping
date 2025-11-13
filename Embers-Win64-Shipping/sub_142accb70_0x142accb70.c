// 函数: sub_142accb70
// 地址: 0x142accb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = 0x4194997000000000
int128_t zmm7 = arg1
arg1.q = arg1.q f/ zmm6.q
uint128_t zmm0 = sub_142a4b9b0(arg1.q)
uint128_t zmm3 = zmm0
double zmm2 = zmm7.q - zmm0.q f* zmm6.q

if (0.0 > zmm2 || not(zmm2 f< zmm6.q))
    double zmm1 = zmm3.q
    int32_t rax_1 = 1
    
    if (0.0 > zmm2)
        rax_1 = -1
    
    zmm3.q = zmm3.q f+ _mm_cvtepi32_pd(zx.q(rax_1)).q
    zmm1 f- zmm3.q
    
    if (is_unordered.q(zmm1, zmm3.q) || zmm1 f!= zmm3.q)
        zmm0.q = zmm3.q f* zmm6.q
        zmm2 = zmm7.q f- zmm0.q
    else
        zmm2 = (zx.o(0)).q

*arg5 = int.d(zmm2)
return sub_142acc6b0(zmm3, arg2, arg3, arg4) __tailcall
