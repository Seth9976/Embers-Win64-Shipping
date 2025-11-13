// 函数: sub_14221e040
// 地址: 0x14221e040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x26]
float var_68
float var_64
int64_t var_58
int32_t result_1
int32_t* rax_1

if (rax == 0)
    result_1 = data_143dbb200
    rax_1 = &var_58
    var_58 = data_143dbb1f8.q
else
    float zmm1[0x4] = *(rax + 0x1d0)
    rax_1 = &var_68
    var_68 = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float var_60_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_64 = temp0_1[0]

uint128_t zmm6 = zx.o(*rax_1)
int32_t rax_3 = rax_1[2]
int64_t var_38
int64_t* result = sub_14200cc70(&var_38, &arg1[0xf], arg1)
var_68.q = zmm6.q
float var_48[0x4]
float zmm0_1[0x4]
float zmm1_1[0x4]

if (zmm6.d f!= *result || var_64[0] f!= *(result + 4) || rax_3[0] f!= result[1].d)
label_14221e1d1:
    
    if (arg1[0x1e].b == 1)
        void* rax_8 = sub_140f76fa0(arg1)
        zmm0_1 = *(rax_8 + 0x20)
        zmm0_1[0] = zmm0_1[0] + 0.00999999978f
        *(rax_8 + 0x20) = zmm0_1[0]
        void* rcx_4 = arg1[0x26]
        float var_60_4
        
        if (rcx_4 == 0)
            var_68.q = data_143dbb1f8.q
            var_60_4 = data_143dbb200
        else
            zmm1_1 = *(rcx_4 + 0x1d0)
            var_68 = zmm1_1[0]
            float temp0_5[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            var_60_4 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            float var_64_1 = temp0_5[0]
        
        float var_30_1 = var_60_4
        var_38 = var_68.q
        
        if (rcx_4 == 0)
            zmm0_1 = data_142d3f660
        else
            zmm0_1 = *(rcx_4 + 0x1c0)
        
        var_48 = zmm0_1
        float var_28[0x4] = var_48
        sub_14200cc70(&var_58, rax_8 + 0x18, arg1)
        var_68.q = *(rax_8 + 0x24)
        int32_t var_60_5 = *(rax_8 + 0x2c)
        var_48[0].q = var_58
        var_48[2] = result_1
        sub_141dd6920(arg1, &var_48, &var_68, 0, nullptr, 0)
        result = (*(*arg1 + 0x628))(arg1)
        
        if (result != 0)
            result = sub_140d21950(result, sub_14254d8b0())
            
            if (result != 0)
                return (*(*result + 0x20))(result, &var_38, &var_28, &var_58, 
                    sub_140ade170(rax_8 + 0x24, &var_48))
else
    void* rdi_1 = arg1[0x26]
    int32_t result_2
    
    if (rdi_1 == 0)
        zmm0_1 = zx.o(data_143dbb208)
        result_2 = data_143dbb210
    else
        zmm1_1 = *(rdi_1 + 0x1c0)
        uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rdi_1 + 0x180), zmm1_1, 4))
        var_48 = zmm1_1
        
        if (temp0_4 != 0)
            *(rdi_1 + 0x180) = zmm1_1
            int32_t* rax_5 = sub_140adf5d0(&var_48, &var_38)
            *(rdi_1 + 0x190) = *rax_5
            *(rdi_1 + 0x198) = rax_5[2]
        
        zmm0_1 = zx.o(*(rdi_1 + 0x190))
        result_2 = *(rdi_1 + 0x198)
    
    result_1 = result_2
    var_58 = zmm0_1.q
    zmm0_1 = zx.o(var_58)
    result = zx.q(result_1)
    var_68.q = zmm0_1.q
    
    if (zmm0_1[0] f!= *(arg1 + 0x84) || var_64[0] f!= arg1[0x11].d
            || result.d[0] f!= *(arg1 + 0x8c))
        goto label_14221e1d1
    
    result = (*(*arg1 + 0x150))(arg1)
    
    if (not(result[0xa4].d[0] f!= *(arg1 + 0x9c)))
        goto label_14221e1d1
return result
