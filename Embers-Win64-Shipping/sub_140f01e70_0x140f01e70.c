// 函数: sub_140f01e70
// 地址: 0x140f01e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38
sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_38)
void* rcx_2 = var_38
__andps_xmmxud_memxud(*(arg1 + 0x10c), data_142d3f770)
int16_t rax_1
int32_t zmm6_1
int32_t zmm7_1
rax_1, zmm6_1, zmm7_1 = sub_140da8a50(rcx_2, arg1 + 0x90, arg2.d)
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xa0))).d f* zmm7_1
zmm1.d = zmm1.d f+ zmm6_1
zmm1.d = zmm1.d f+ _mm_cvtepi32_ps(zx.o(rax_1)).d
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        int64_t rdx_2 = *var_30
        (*rdx_2)(var_30, rdx_2)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_30
            (*(r8_1 + 8))(var_30, 1, r8_1)

return zx.q((int.d(zmm1.d)).w)
