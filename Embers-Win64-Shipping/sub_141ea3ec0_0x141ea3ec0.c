// 函数: sub_141ea3ec0
// 地址: 0x141ea3ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(data_143a2d528)
void* rax = *(arg1 + 0x68)
int32_t r8 = data_143a2d530
*arg2 = zmm1.q
arg2[1].d = r8
uint64_t var_18
uint128_t zmm0

if (rax != 0)
    void* rax_1 = *(rax + 0xb0)
    int32_t var_10_1
    
    if (rax_1 == 0)
        var_18 = zmm1.q
        var_10_1 = r8
    else
        zmm1 = *(rax_1 + 0x1d0)
        var_18.d = zmm1.d
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm1.d = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d f- *(rax_1 + 0x114)
        var_18:4.d = zmm0.d
        var_10_1 = zmm1.d
    
    *arg2 = var_18
    arg2[1].d = var_10_1

if (not(data_143a2d528.d.d f!= *arg2) && not(data_143a2d528:4.d.d f!= *(arg2 + 4))
        && not(data_143a2d530.d f!= arg2[1].d))
    void* rax_3 = *(arg1 + 0x70)
    
    if (rax_3 != 0)
        float zmm3[0x4] = *(rax_3 + 0x1e0)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        temp0_3[0] = temp0_3[0] f* *(rax_3 + 0x420)
        void* rax_4 = *(arg1 - 0xf0)
        int32_t var_10_2
        
        if (rax_4 == 0)
            var_18 = data_143dbb1f8.q
            var_10_2 = data_143dbb200
        else
            zmm1 = *(rax_4 + 0x1d0)
            var_18.d = zmm1.d
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_10_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
            var_18:4.d = zmm0.d
        
        zmm1 = zx.o(var_18)
        zmm0.d = var_10_2.d f- temp0_3[0]
        *arg2 = (_mm_unpacklo_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x55).q)).q
        arg2[1].d = zmm0.d

return arg2
