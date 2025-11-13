// 函数: sub_141096bb0
// 地址: 0x141096bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = (zx.o(0)).d
int128_t zmm1 = *(data_143e2de20 + 4)

if (zmm1.d f>= 0f)
    zmm0 = _mm_min_ss(*(arg1 + 0x1208), zmm1.d)
else
    zmm1 ^= data_142d3f780
    
    if (not(zmm1.d f< 0f))
        zmm0 = __minss_xmmss_memss(zmm1.d, 0x42c80000)

int32_t rax
rax.b = zmm0 f> 75f
int32_t rcx
rcx.b = zmm0 f> 55f
int32_t rcx_1
rcx_1.b = zmm0 f> 25f
int32_t rdx
rdx.b = zmm0 f> 5f
return zx.q(rax + rcx + rcx_1 + rdx)
