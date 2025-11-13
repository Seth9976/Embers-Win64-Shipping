// 函数: sub_140adf900
// 地址: 0x140adf900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _Y = (zx.o(0)).q
modf(arg1.q, &_Y)
uint128_t zmm3 = 0x3fe0000000000000
uint128_t zmm2 = arg1
uint128_t zmm1

if (arg1.q f>= 0.0)
    arg1.q = arg1.q f- zmm3.q
    
    if (__andps_xmmxud_memxud(arg1, data_142d57d00).q f> 9.9999999392252903e-09)
        arg1 = zmm2
    else
        arg1 = zmm3
else
    zmm1 = arg1
    arg1 = -0x4020000000000000
    zmm1.q = zmm1.q f- arg1.q
    
    if (not(__andps_xmmxud_memxud(zmm1, data_142d57d00).q f<= 9.9999999392252903e-09))
        arg1 = zmm2

arg1.q = arg1.q f+ _Y
arg1.q f- 0.0
bool c = arg1.q f< 0.0
zmm1 = arg1

if (c != 0)
    zmm1 ^= data_142d8e3c0

int64_t rcx = int.q(zmm1.q)

if (rcx != -0x8000000000000000)
    zmm2.q = float.d(rcx)
    
    if (not(zmm2.q f== zmm1.q))
        zmm1.q = float.d(rcx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))

zmm2 = 0x43e0000000000000
int64_t rcx_2 = 0

if (not(zmm1.q f< zmm2.q))
    zmm1.q = zmm1.q f- zmm2.q
    
    if (not(zmm1.q f>= zmm2.q))
        rcx_2 = -0x8000000000000000

uint64_t result
result.b = not.b((int.q(zmm1.q) + rcx_2).b)

if ((result.b & 1) != 0)
    if (c != 0)
        goto label_140adfa3b
    
    goto label_140adf9e6

if (c != 0)
label_140adf9e6:
    arg1.q = arg1.q f- zmm3.q
    int64_t rcx_3 = int.q(arg1.q)
    
    if (rcx_3 != -0x8000000000000000)
        zmm1.q = float.d(rcx_3)
        
        if (not(zmm1.q f== arg1.q))
            result = (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(arg1, arg1.q))) & 1) ^ 1
            arg1.q = float.d(rcx_3 + result)
else
label_140adfa3b:
    arg1.q = arg1.q f+ zmm3.q
    int64_t rcx_5 = int.q(arg1.q)
    
    if (rcx_5 != -0x8000000000000000)
        zmm1.q = float.d(rcx_5)
        
        if (not(zmm1.q f== arg1.q))
            result = zx.q(_mm_movemask_pd(_mm_unpacklo_pd(arg1, arg1.q))) & 1
            arg1.q = float.d(rcx_5 - result)

return result
