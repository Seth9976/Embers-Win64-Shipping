// 函数: sub_141ef0e40
// 地址: 0x141ef0e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg4
float zmm4[0x4] = arg6
float r13 = arg5[1].d
zmm4[0] = zmm4[0] f+ arg7
float zmm11[0x4] = arg3
uint128_t zmm12 = zx.o(*arg5)
float zmm8[0x4] = zmm4 ^ data_142d3f780

if (zmm8[0] <= -9.99999994e-09f)
    uint128_t zmm0 = arg5[1].d
    float zmm1[0x4] = *arg5
    float zmm3[0x4] = zmm0
    arg3 = *(arg5 + 4)
    zmm3[0] = zmm3[0] + zmm4[0]
    zmm0.d = zmm0.d f- arg7
    bool cond:0_1 = (arg1[0x7d].b & 1) == 0
    float var_138 = zmm1[0]
    float var_130_1 = zmm3[0]
    float var_134_1 = arg3[0]
    float var_128 = zmm1[0]
    float var_124_1 = arg3[0]
    int32_t var_120_1 = zmm0.d
    int64_t r12
    
    if (cond:0_1 || zmm1[0] f!= arg1[0x85].d || arg3[0] f!= *(arg1 + 0x42c)
            || zmm3[0] f!= arg1[0x86].d || zmm1[0] f!= *(arg1 + 0x434) || arg3[0] f!= arg1[0x87].d
            || zmm0.d f!= *(arg1 + 0x43c))
        r12.b = 0
    else
        r12.b = 1
    
    int128_t zmm9 = zx.o(0)
    zmm0.d = (*(arg1 + 0x474)).d f- zmm11[0]
    *(arg1 + 0x474) = zmm0.d
    
    if (not(zmm0.d f> 0f))
        if (r12.b == 0 || (*(arg1 + 0x389) & 1) != 0)
            char var_118
            memset(&var_118, 0, 0x88)
            int32_t var_110_1 = 0x3f800000
            (*(*arg1 + 0x780))(arg1, &var_138, &var_128, rdi, arg5, &var_118)
            char rax_2 = var_118
            
            if ((rax_2 & 2) != 0 || (rax_2 & 1) == 0)
                int32_t rdi_1 = arg1[0x86].d
                int32_t rbx_1 = *(arg1 + 0x43c)
                uint128_t zmm6 = zx.o(*(arg1 + 0x434))
                uint128_t zmm7 = zx.o(arg1[0x85])
                memset(&arg1[0x7d], 0, 0x88)
                arg1[0x85] = zmm7.q
                *(arg1 + 0x434) = zmm6.q
                arg1[0x86].d = rdi_1
                rdi = arg4
                arg1[0x7e].d = 0x3f800000
                *(arg1 + 0x43c) = rbx_1
            else
                *(arg1 + 0x3e8) = var_118.o
                float var_108[0x4]
                *(arg1 + 0x3f8) = var_108
                uint128_t var_f8
                *(arg1 + 0x408) = var_f8
                float var_e8[0x4]
                *(arg1 + 0x418) = var_e8
                uint128_t var_d8
                *(arg1 + 0x428) = var_d8
                float var_c8[0x4]
                *(arg1 + 0x438) = var_c8
                uint128_t var_b8
                *(arg1 + 0x448) = var_b8
                float var_a8[0x4]
                *(arg1 + 0x458) = var_a8
                int64_t var_98
                arg1[0x8d] = var_98
            
            zmm3 = var_130_1
        
        zmm1 = arg1[0x8e].d
        zmm0 = zx.o(0)
        
        if (not(zmm1[0] <= 9.99999994e-09f))
            zmm0, zmm8, zmm9 = sub_140a454f0(*(arg1 + 0x474) ^ data_142d3f780, zmm1)
            zmm1 = arg1[0x8e].d
            zmm3 = var_130_1
        
        zmm1[0] = zmm1[0] f- zmm0.d
        *(arg1 + 0x474) = zmm1[0]
    
    if ((arg1[0x7d].b & 1) != 0)
        if (r12.b != 0)
            zmm1 = *(rdi + 8)
            zmm0.d = zmm1.d f- *(arg1 + 0x40c)
            zmm0 = __andps_xmmxud_memxud(zmm0, data_142d3f770)
        
        float var_120_2
        
        if (r12.b == 0 || zmm0.d f> 0.00999999978f)
            zmm0.d = (*(arg1 + 0x404)).d f- var_138
            arg3 = arg1[0x83].d
            zmm4 = arg1[0x81].d
            zmm4[0] = zmm4[0] - var_134_1
            zmm1 = *(arg1 + 0x40c)
            zmm0.d = zmm0.d f* arg1[0x82].d
            zmm1[0] = zmm1[0] - zmm3[0]
            zmm4[0] = zmm4[0] f* *(arg1 + 0x414)
            zmm1[0] = zmm1[0] * arg3[0]
            zmm4[0] = zmm4[0] f+ zmm0.d
            arg3[0] = arg3[0] * zmm8[0]
            zmm0 = var_120_1
            zmm4[0] = zmm4[0] + zmm1[0]
            zmm4[0] = zmm4[0] / arg3[0]
            zmm4[0] = zmm4[0] * zmm8[0]
            zmm4[0] = zmm4[0] + zmm3[0]
            
            if (not(zmm4[0] f>= zmm0.d))
                zmm4 = zmm0
            else if (not(zmm4[0] < zmm3[0]))
                zmm4 = zmm3
            
            float zmm0_1 =
                sub_140ad6340(*(rdi + 8), zmm4, zmm11, _mm_max_ss(arg1[0x8f].d[0], zmm9.d)[0])
            zmm1 = var_120_1
            
            if (zmm0_1 < zmm1[0])
                zmm0_1 = zmm1[0]
            else
                zmm1 = var_130_1
                
                if (not(zmm0_1 < zmm1[0]))
                    zmm0_1 = zmm1[0]
            
            var_120_2 = zmm0_1
        else
            var_120_2 = zmm1[0]
        
        r13 = var_120_2
    
    *arg2 = zmm12.q
    arg2[1].d = r13
else
    *arg2 = zmm12.q
    arg2[1].d = r13

return arg2
