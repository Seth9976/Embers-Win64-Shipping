// 函数: sub_14266cb10
// 地址: 0x14266cb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140d3e110(arg1 + 0x40)

if (result.b != 0)
    int64_t* rcx_1 = *(arg1 + 0x48)
    int64_t* rax_1
    void var_20
    
    if (rcx_1 == 0)
        void* rcx_3 = *(sub_140d3c6e0(arg1 + 0x40) + 0x130)
        uint64_t var_38
        float var_30_1
        
        if (rcx_3 == 0)
            var_38 = data_143dbb1f8.q
            var_30_1 = data_143dbb200
        else
            float zmm1[0x4] = *(rcx_3 + 0x1d0)
            var_38.d = zmm1[0]
            uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_30_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            var_38:4.d = zmm0.d
        
        float var_24_1 = var_30_1
        uint64_t var_2c
        rax_1 = &var_2c
        var_2c = var_38
    else
        rax_1 = (*(*rcx_1 + 0x18))(rcx_1, &var_20)
    *(arg1 + 0xf0) = *rax_1
    result = rax_1[1].d
    *(arg1 + 0xf8) = result

return result
