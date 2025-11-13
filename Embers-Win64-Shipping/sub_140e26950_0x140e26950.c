// 函数: sub_140e26950
// 地址: 0x140e26950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x850) & 1) == 0)
    return 

char rax_1
uint128_t zmm0
rax_1, zmm0 = sub_140d9f540(arg1 + 0x7f0, arg2)
float arg_c

if (rax_1 == 0)
    float zmm1_1
    
    if ((*(arg1 + 0x850) & 2) == 0)
        zmm0 = *(arg1 + 0x7e0)
        zmm1_1 = *(arg1 + 0x7e4)
        arg_c = zmm1_1
        
        if (zmm0.d f!= *(arg1 + 0x790) || not(zmm1_1 f== *(arg1 + 0x794)))
            sub_140e1c780(arg1, zmm0.d.q)
    else
        float zmm2
        float zmm3
        
        if ((*(arg1 + 0x779) & 2) == 0)
            zmm0 = *(arg1 + 0x790)
            zmm3 = *(arg1 + 0x794)
            zmm2 = zmm0.d f+ *(arg1 + 0x7a0)
            zmm1_1 = zmm3 f+ *(arg1 + 0x7a4)
        else
            zmm2 = *(arg1 + 0x7a0)
            zmm0 = zx.o(0)
            zmm1_1 = *(arg1 + 0x7a4)
            zmm3 = (zx.o(0)).d
        
        if (zmm0.d f!= *(arg1 + 0x7e0) || zmm3 f!= *(arg1 + 0x7e4) || zmm2 f!= *(arg1 + 0x7e8)
                || not(zmm1_1 f== *(arg1 + 0x7ec)))
            sub_140e21b10(arg1, arg1 + 0x7e0)
    
    zmm1_1 = *(arg1 + 0x7cc)
    
    if (not(zmm1_1 f== *(arg1 + 0x76c)))
        int64_t* rcx_7 = *(arg1 + 0x910)
        *(arg1 + 0x76c) = zmm1_1
        (*(*rcx_7 + 0x98))(rcx_7)
    
    *(arg1 + 0x850) &= 0xfe
    *(arg1 + 0x2e) &= 0xfb
    
    if (sub_140db3510(arg1 + 0x18) != 0)
        sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))
else
    char rax
    float zmm0_1[0x4]
    zmm0_1, rax = sub_140da85e0(arg1 + 0x7f0, zmm0)
    float zmm6_1 = zmm0_1[0]
    float zmm1_2[0x4]
    int32_t zmm2_1
    
    if ((*(arg1 + 0x850) & 2) == 0)
        zmm0_1 = *(arg1 + 0x7d0)
        zmm1_2 = *(arg1 + 0x7d4)
        zmm2_1 = (*(arg1 + 0x7e0) f- zmm0_1[0]) f* zmm6_1 f+ zmm0_1[0]
        zmm0_1 = *(arg1 + 0x7e4)
        zmm0_1[0] = zmm0_1[0] - zmm1_2[0]
        bool cond:3_1 = zmm2_1 f!= *(arg1 + 0x790)
        zmm0_1[0] = zmm0_1[0] * zmm6_1
        zmm0_1[0] = zmm0_1[0] + zmm1_2[0]
        arg_c = zmm0_1[0]
        
        if (cond:3_1 || not(zmm0_1[0] f== *(arg1 + 0x794)))
            sub_140e1c780(arg1, zmm2_1.q)
    else
        bool cond:4_1 = (*(arg1 + 0x779) & 2) == 0
        zmm1_2 = *(arg1 + 0x7d0)
        zmm2_1 = *(arg1 + 0x7d4)
        int32_t zmm3_1 = *(arg1 + 0x7d8)
        int32_t zmm4_1 = *(arg1 + 0x7dc)
        float zmm7_1[0x4] = *(arg1 + 0x7e0)
        int64_t zmm5_1 = *(arg1 + 0x7e4)
        zmm7_1[0] = zmm7_1[0] - zmm1_2[0]
        zmm0_1 = *(arg1 + 0x7e8)
        zmm5_1.d = zmm5_1.d f- zmm2_1
        zmm0_1[0] = zmm0_1[0] f- zmm3_1
        zmm7_1[0] = zmm7_1[0] * zmm6_1
        zmm5_1.d = zmm5_1.d f* zmm6_1
        zmm7_1[0] = zmm7_1[0] + zmm1_2[0]
        zmm0_1[0] = zmm0_1[0] * zmm6_1
        zmm1_2 = *(arg1 + 0x7ec)
        zmm5_1.d = zmm5_1.d f+ zmm2_1
        zmm1_2[0] = zmm1_2[0] f- zmm4_1
        zmm0_1[0] = zmm0_1[0] f+ zmm3_1
        zmm1_2[0] = zmm1_2[0] * zmm6_1
        zmm1_2[0] = zmm1_2[0] f+ zmm4_1
        int32_t zmm8_1
        
        if (cond:4_1)
            zmm2_1 = *(arg1 + 0x790)
            zmm8_1 = *(arg1 + 0x794)
            zmm4_1 = zmm2_1 f+ *(arg1 + 0x7a0)
            zmm3_1 = zmm8_1 f+ *(arg1 + 0x7a4)
        else
            zmm4_1 = *(arg1 + 0x7a0)
            zmm2_1 = (zx.o(0)).d
            zmm3_1 = *(arg1 + 0x7a4)
            zmm8_1 = (zx.o(0)).d
        
        if (zmm7_1[0] f!= zmm2_1 || zmm5_1.d f!= zmm8_1 || zmm0_1[0] f!= zmm4_1
                || not(zmm1_2[0] f== zmm3_1))
            zmm1_2[0] = zmm1_2[0] f- zmm5_1.d
            zmm0_1[0] = zmm0_1[0] - zmm7_1[0]
            float temp0_1[0x4] = _mm_unpacklo_ps(zmm0_1, zmm1_2[0].q)
            rax, zmm6_1 = sub_140e21b40(arg1, _mm_unpacklo_ps(zmm7_1, zmm5_1)[0].q, temp0_1[0].q)
    zmm0_1 = *(arg1 + 0x7c8)
    zmm1_2 = *(arg1 + 0x7cc)
    zmm1_2[0] = zmm1_2[0] - zmm0_1[0]
    zmm1_2[0] = zmm1_2[0] * zmm6_1
    zmm1_2[0] = zmm1_2[0] + zmm0_1[0]
    
    if (not(zmm1_2[0] f== *(arg1 + 0x76c)))
        int64_t* rcx_4 = *(arg1 + 0x910)
        *(arg1 + 0x76c) = zmm1_2[0]
        jump(*(*rcx_4 + 0x98))
