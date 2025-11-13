// 函数: sub_141c276d0
// 地址: 0x141c276d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141ddacb0(arg1, arg2)

if (arg1[0x45] != 0 && (arg1[0xf2].b & 1) != 0)
    int32_t var_38
    sub_141c269f0(arg1, &var_38)
    void* rax = arg1[0x26]
    uint64_t var_48
    float var_40_1
    float zmm1[0x4]
    
    if (rax == 0)
        float rax_1 = data_143dbb200
        var_48 = data_143dbb1f8.q
        var_40_1 = rax_1
    else
        zmm1 = *(rax + 0x1d0)
        var_48.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_40_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_48:4.d = temp0_1[0]
    
    bool cond:0_1 = (arg1[0xfc].b & 1) == 0
    uint128_t zmm3_1 = zx.o(var_48)
    float var_58
    int32_t* rcx_1 = &var_58
    float zmm0_1[0x4] = var_38
    zmm1 = zmm3_1
    zmm0_1[0] = zmm0_1[0] f- zmm3_1.d
    float var_34
    float zmm2_1 = var_34 - _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
    var_48 = zmm3_1.q
    var_58 = zmm0_1[0]
    int32_t var_30
    zmm0_1 = var_30
    zmm0_1[0] = zmm0_1[0] - var_40_1
    float var_54_1 = zmm2_1
    float var_50_1 = zmm0_1[0]
    int32_t var_28[0x4]
    int32_t* rax_3
    
    if (cond:0_1)
        int32_t* rax_4
        float zmm6_2[0x4]
        rax_4, zmm6_2 = sub_140adf3c0(rcx_1, &var_48)
        rax_3 = sub_140ade640(&var_28, &arg1[0xf3], rax_4, zmm6_2, *(arg1 + 0x794))
    else
        rax_3 = sub_140adf3c0(rcx_1, &var_38)
    
    int64_t zmm6_1 = *rax_3
    float rdi_1 = rax_3[2]
    
    if ((*(arg1 + 0x7dc) & 1) != 0)
        void* rdi_2 = arg1[0x26]
        int32_t rax_8
        float zmm0_2[0x4]
        
        if (rdi_2 == 0)
            zmm0_2 = zx.o(data_143dbb208)
            rax_8 = data_143dbb210
        else
            float zmm1_1[0x4] = *(rdi_2 + 0x1c0)
            uint32_t temp0_5 = _mm_movemask_ps(_mm_cmpeq_ps(*(rdi_2 + 0x180), zmm1_1, 4))
            var_38.o = zmm1_1
            
            if (temp0_5 != 0)
                *(rdi_2 + 0x180) = zmm1_1
                int32_t* rax_6
                rax_6, zmm6_1 = sub_140adf5d0(&var_38, &var_28)
                *(rdi_2 + 0x190) = *rax_6
                *(rdi_2 + 0x198) = rax_6[2]
            
            zmm0_2 = zx.o(*(rdi_2 + 0x190))
            rax_8 = *(rdi_2 + 0x198)
        
        var_38.q = zmm0_2.q
        rdi_1 = rax_8[0]
    
    var_38.q = zmm6_1
    float var_30_3 = rdi_1
    int64_t zmm6_3
    result, zmm6_3 = sub_141dd7190(arg1, &var_38, 0)
    arg1[0xf3] = zmm6_3
    arg1[0xf4].d = rdi_1

arg1[0xfc].b &= 0xfe
return result
