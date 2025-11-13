// 函数: sub_141c473a0
// 地址: 0x141c473a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = arg1[4]
float zmm5 = arg2[0]
float zmm4 = arg1[3]
arg2 = arg1[2]
bool rdx = zmm4 > zmm2
char result

if (zmm2 < arg2[0] || arg2[0] < 0f)
    result = 1
else
    result = 0

zmm2 = zmm2 + zmm5
arg1[4] = zmm2

if (rdx != 0 && result != 0)
    arg2 = arg1[1]
    
    if (not(zmm4 >= zmm2))
        *arg1 = arg2[0]
        return sub_141c46fb0(arg1) __tailcall
    
    int128_t zmm6 = *arg1
    float zmm3 = arg2[0] f- zmm6.d
    float zmm0[0x4] = _mm_min_ss(arg2[0], zmm6.d)
    zmm3 = zmm3 * zmm5 / (zmm4 - zmm2) f+ zmm6.d
    
    if (not(zmm3 < zmm0[0]))
        zmm0 = _mm_min_ss(_mm_max_ss(arg2[0], zmm6.d)[0], zmm3)
    
    *arg1 = zmm0[0]
    
    if (not(zmm5 <= 9.99999994e-09f))
        zmm0[0] = zmm0[0] - arg2[0]
        
        if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] > 9.99999994e-09f))
            return sub_141c46fb0(arg1) __tailcall

return result
