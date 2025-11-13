// 函数: sub_141dd19d0
// 地址: 0x141dd19d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_38
uint32_t result = sub_14200cc70(&var_38, &arg1[0xf], arg1)
int64_t* rbx = arg1[0x26]

if (rbx != 0 && (rbx[0x11].b & 1) != 0)
    uint128_t zmm0_1 = *(rbx + 0x1d0)
    float zmm4_1 = var_38
    float var_30
    float zmm2_1 = var_30
    float var_34
    float zmm3 = var_34
    uint128_t var_18 = zmm0_1
    
    if (zmm4_1 f!= zmm0_1.d || zmm3 f!= var_18:4.d || zmm2_1 f!= var_18:8.d)
        goto label_141dd1ae8
    
    float zmm1_1[0x4] = *(rbx + 0x1c0)
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx + 0x180), zmm1_1, 4))
    float var_28
    var_28.o = zmm1_1
    
    if (temp0_2 != 0)
        *(rbx + 0x180) = zmm1_1
        int32_t* rax_1 = sub_140adf5d0(&var_28, &var_18)
        rbx[0x32] = *rax_1
        rbx[0x33].d = rax_1[2]
        zmm2_1 = var_30
        zmm3 = var_34
        zmm4_1 = var_38
    
    zmm0_1 = zx.o(rbx[0x32])
    result = rbx[0x33].d
    var_28.q = zmm0_1.q
    int32_t var_24
    
    if (zmm0_1.d f!= *(arg1 + 0x84) || var_24.d f!= arg1[0x11].d
            || not(result.d f== *(arg1 + 0x8c)))
        rbx = arg1[0x26]
    label_141dd1ae8:
        result = *(arg1 + 0x8c)
        var_18.q = *(arg1 + 0x84)
        var_18:8.d = result
        
        if (rbx != 0)
            zmm1_1 = *(rbx + 0x1d0)
            zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            zmm4_1 = zmm4_1 - zmm1_1[0]
            zmm2_1 = zmm2_1 - _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            var_28 = zmm4_1
            float var_20_2 = zmm2_1
            float var_24_1 = zmm3 f- zmm0_1.d
            return sub_141f42080(rbx, &var_28, &var_18, 0, nullptr, 0, 0)

return result
