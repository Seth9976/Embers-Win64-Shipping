// 函数: sub_141e21d50
// 地址: 0x141e21d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(*(arg1 + 0x151))
uint128_t zmm6
uint128_t zmm1

if (r10 == 2)
    zmm1 = *(arg1 + 0x90)
    zmm6 = zx.o(0)
    
    if (not(zmm1.d f<= 0f))
        uint128_t zmm0
        zmm0.d = (*(arg4 + 4)).d f/ zmm1.d
        
        if (not(zmm0.d f< 0f))
            zmm6 = __minss_xmmss_memss(zmm0.d, 0x3f800000)
    
    zmm6.d = zmm6.d f* *(*(arg1 + 0x158) + 0x90)
else
    if (r10 != 3)
        return sub_141e0ba30(arg2)
    
    void* rcx_1 = *(arg1 + 0x158)
    zmm6 = zx.o(0)
    int32_t rax = *(rcx_1 + 0xa8)
    
    if (rax s> 0)
        zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x160))).d f/ _mm_cvtepi32_ps(zx.o(rax)).d
        
        if (not(zmm1.d f< 0f))
            zmm6 = __minss_xmmss_memss(zmm1.d, 0x3f800000)
    
    zmm6.d = zmm6.d f* *(rcx_1 + 0x90)
void var_48
sub_141e11a80(&var_48, arg4)
int32_t var_44_1 = zmm6.d
int64_t result = sub_141e227d0(*(arg1 + 0x158), arg2, arg3, &var_48, 1)
int64_t var_30

if (var_30 != 0)
    result = sub_140a74f90(var_30)

int64_t var_40

if (var_40 == 0)
    return result

return sub_140a74f90(var_40)
