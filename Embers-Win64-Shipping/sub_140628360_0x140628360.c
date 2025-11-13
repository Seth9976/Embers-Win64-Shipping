// 函数: sub_140628360
// 地址: 0x140628360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && sub_140d23de0(arg1) != 0 && arg2 != 0 && sub_140d23de0(arg2) != 0)
    void* rax_1 = *(arg2 + 0x130)
    uint64_t var_28
    float var_20
    
    if (rax_1 == 0)
        float rax_2 = data_143dbb200
        var_28 = data_143dbb1f8.q
        var_20 = rax_2
    else
        float zmm1[0x4] = *(rax_1 + 0x1d0)
        var_28.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_20 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_28:4.d = temp0_1[0]
    
    int64_t var_18 = var_28
    float var_10 = var_20
    sub_141dd67f0(arg1, &var_18, 0, nullptr, 0)
    void* rbx_1 = *(arg2 + 0x130)
    int32_t rax_7
    uint128_t zmm0_1
    
    if (rbx_1 == 0)
        zmm0_1 = zx.o(data_143dbb208)
        rax_7 = data_143dbb210
    else
        float zmm1_1[0x4] = *(rbx_1 + 0x1c0)
        uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1_1, 4))
        var_28.o = zmm1_1
        
        if (temp0_4 != 0)
            *(rbx_1 + 0x180) = zmm1_1
            int32_t* rax_5 = sub_140adf5d0(&var_28, &var_18)
            *(rbx_1 + 0x190) = *rax_5
            *(rbx_1 + 0x198) = rax_5[2]
        
        zmm0_1 = zx.o(*(rbx_1 + 0x190))
        rax_7 = *(rbx_1 + 0x198)
    
    var_18 = zmm0_1.q
    var_28 = var_18
    int32_t var_20_1 = rax_7
    sub_141dd7190(arg1, &var_28, 0)
    int64_t result
    result.b = 1
    return result

return 0
