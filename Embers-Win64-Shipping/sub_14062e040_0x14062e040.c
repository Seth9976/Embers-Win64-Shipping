// 函数: sub_14062e040
// 地址: 0x14062e040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_8
int64_t var_28

if (arg2 == 0 || arg3 == 0)
    int32_t var_20_1 = data_143dbb200
    rax_8 = &var_28
    var_28 = data_143dbb1f8.q
else
    void* rax = *(arg3 + 0x130)
    float r8 = data_143dbb200
    int64_t zmm2 = data_143dbb1f8.q
    int64_t var_48
    float var_40_1
    float zmm1[0x4]
    
    if (rax == 0)
        var_48 = zmm2
        var_40_1 = r8
    else
        zmm1 = *(rax + 0x1d0)
        var_48.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_40_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_48:4.d = temp0_1[0]
    
    void* rcx = *(arg2 + 0x130)
    int64_t var_58_1 = var_48
    float var_38[0x4]
    int32_t rax_5
    float zmm0[0x4]
    
    if (rcx == 0)
        zmm0 = zx.o(data_143dbb208)
        rax_5 = data_143dbb210
    else
        zmm1 = *(rcx + 0x1c0)
        void* rbx_1 = rcx + 0x180
        uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*rbx_1, zmm1, 4))
        var_38 = zmm1
        
        if (temp0_4 != 0)
            *rbx_1 = zmm1
            int32_t* rax_3 = sub_140adf5d0(&var_38, &var_28)
            *(rbx_1 + 0x10) = *rax_3
            *(rbx_1 + 0x18) = rax_3[2]
            rcx = *(arg2 + 0x130)
            r8 = data_143dbb200
            zmm2 = data_143dbb1f8.q
        
        zmm0 = zx.o(*(rbx_1 + 0x10))
        rax_5 = *(rbx_1 + 0x18)
    
    var_48 = zmm0.q
    int32_t var_20 = rax_5
    var_28 = var_48
    float var_40_3
    
    if (rcx == 0)
        var_48 = zmm2
        var_40_3 = r8
    else
        zmm1 = *(rcx + 0x1d0)
        var_48.d = zmm1[0]
        float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_40_3 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_48:4.d = temp0_5[0]
    
    uint128_t zmm3 = zx.o(var_48)
    zmm0 = var_58_1.d
    zmm0[0] = zmm0[0] f- zmm3.d
    zmm1 = zmm3
    var_38[2] = var_40_3
    zmm2.d = var_58_1:4.d.d f- _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
    var_48.d = zmm0[0]
    zmm0 = var_40_1
    zmm0[0] = zmm0[0] - var_38[2]
    var_48:4.d = zmm2.d
    float var_40_4 = zmm0[0]
    float var_18[0x4]
    sub_140ae3100(&var_28, &var_18, &var_48)
    rax_8 = &var_18
int32_t rax_10 = rax_8[1].d
*arg1 = *rax_8
arg1[1].d = rax_10
return arg1
