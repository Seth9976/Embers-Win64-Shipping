// 函数: sub_140ae1bc0
// 地址: 0x140ae1bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float temp0_1[0x4] =
    __maxss_xmmss_memss(__maxss_xmmss_memss((*arg1)[0], *(arg1 + 4))[0], *(arg1 + 8))
int32_t _Y

if (not(temp0_1[0] >= 1.00000002e-32f))
    _Y = 0
    *arg2 = _Y
    return arg2

double _X = _mm_cvtps_pd(temp0_1[0].q)
frexp(_X, &_Y)
char rax_2 = 0
int64_t zmm2
zmm2.d = fconvert.s(_X)
zmm2.d = zmm2.d f/ temp0_1[0]
zmm2.d = zmm2.d f* 255f
double zmm0
zmm0.d = zmm2.d f* *arg1
int32_t rdx_1 = int.d(zmm0.d)
char rcx

if (rdx_1 s>= 0)
    rcx = -1
    
    if (rdx_1 s< 0xff)
        rcx = rdx_1.b
else
    rcx = 0

*(arg2 + 2) = rcx
zmm0.d = zmm2.d f* *(arg1 + 4)
int32_t rdx_2 = int.d(zmm0.d)
char rcx_1

if (rdx_2 s>= 0)
    rcx_1 = -1
    
    if (rdx_2 s< 0xff)
        rcx_1 = rdx_2.b
else
    rcx_1 = 0

zmm2.d = zmm2.d f* *(arg1 + 8)
*(arg2 + 1) = rcx_1
int32_t rcx_2 = int.d(zmm2.d)

if (rcx_2 s>= 0)
    rax_2 = -1
    
    if (rcx_2 s< 0xff)
        rax_2 = rcx_2.b

int32_t _Y_1 = _Y
*arg2 = rax_2
char rax_3

if (_Y_1 s>= 0xffffff80)
    rax_3 = 0x7f
    
    if (_Y_1 s< 0x7f)
        rax_3 = _Y_1.b
else
    rax_3 = -0x80

*(arg2 + 3) = rax_3 - 0x80
return arg2
