// 函数: sub_142717c50
// 地址: 0x142717c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x4f].b != 0)
    float zmm6[0x4]
    float zmm7[0x4]
    float zmm8[0x4]
    float zmm9[0x4]
    float zmm10[0x4]
    int128_t zmm11
    return sub_142718460(arg1, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11)

void* rdx = arg1[0x20]
int16_t arg_8
int16_t rax_19
char arg_a

if (rdx == 0)
    rax_19 = data_143b58116 | 0x20
    arg_a = 3
else
    int64_t* rcx = arg1[0x1d]
    
    if (rcx == 0)
        rax_19 = data_143b58116 | 0x20
        arg_a = 3
    else
        int32_t rax_2 = *(rdx + 0x98)
        
        if ((rax_2.b & 2) != 0 && *(rdx + 0x30) s> 1)
            if ((rax_2.b & 1) != 0 || ((rax_2 u>> 8).b & 1) != 0)
                goto label_142717cc3
            
            rax_19 = data_143b58116 | 0x20
            arg_a = 3
        else if (((rax_2 u>> 8).b & 1) == 0)
            rax_19 = data_143b58116 | 0x20
            arg_a = 3
        else
        label_142717cc3:
            void* rax_4 = rcx[0x16]
            uint64_t var_48
            float var_40_1
            
            if (rax_4 == 0)
                var_48 = data_143b58088
                var_40_1 = data_143b58090
            else
                float zmm1[0x4] = *(rax_4 + 0x1d0)
                var_48.d = zmm1[0]
                float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                temp0_2[0] = temp0_2[0] f- *(rax_4 + 0x114)
                var_48:4.d = temp0_1[0]
                var_40_1 = temp0_2[0]
            
            int64_t var_38 = var_48
            float var_30_1 = var_40_1
            char result = (*(*rcx + 0x528))()
            
            if (result == 0 || arg1[0x37].b != 3)
                return result
            
            int32_t var_58
            int128_t zmm6_1
            int128_t zmm7_1
            result, zmm6_1, zmm7_1 = sub_141e912d0(&arg1[0x29], &var_58)
            char r8_1 = *(arg1 + 0x1b9)
            
            if ((r8_1 & 0x10) == 0)
                char rcx_3 = *(arg1 + 0x275)
                
                if ((rcx_3 & 0x20) != 0)
                    int128_t var_18_1 = zmm6_1
                    int128_t var_28_1 = zmm7_1
                    void* rdx_2 = *(arg1[0x1d] + 0xb0)
                    float var_40_2
                    uint128_t zmm0_1
                    float zmm1_1[0x4]
                    
                    if (rdx_2 == 0)
                        var_48 = data_143b58088
                        var_40_2 = data_143b58090
                    else
                        zmm1_1 = *(rdx_2 + 0x1d0)
                        var_48.d = zmm1_1[0]
                        zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                        float temp0_4[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                        temp0_4[0] = temp0_4[0] f- *(rdx_2 + 0x114)
                        var_48:4.d = zmm0_1.d
                        var_40_2 = temp0_4[0]
                    
                    bool cond:1_1 = (*(arg1 + 0x276) & 1) != 0
                    zmm1_1 = zx.o(var_48)
                    zmm0_1 = zmm1_1
                    zmm7_1.d = var_58.d f- zmm1_1[0]
                    int32_t var_54
                    int128_t zmm2_1
                    zmm2_1.d = var_54.d f- _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55).d
                    int32_t var_50
                    zmm6_1.d = var_50.d f- var_40_2
                    int64_t var_48_1 = zmm1_1.q
                    
                    if (cond:1_1 || (rcx_3 & 0x40) != 0)
                        zmm1_1 = arg1[0x4d].d
                        
                        if (_mm_and_ps(zmm1_1, 0x7fffffff).d f> 9.99999975e-05f)
                        label_142717e6b:
                            zmm2_1.d = zmm2_1.d f* *(arg1 + 0x26c)
                            zmm6_1.d = zmm6_1.d f* arg1[0x4e].d
                            zmm1_1[0] = zmm1_1[0] f* zmm7_1.d
                            zmm2_1.d = zmm2_1.d f+ zmm1_1[0]
                            zmm2_1.d = zmm2_1.d f+ zmm6_1.d
                            
                            if (zmm2_1.d f>= 0f)
                                rdx_2.b = 0
                            else
                                rdx_2.b = 1
                        else
                            if (_mm_and_ps(*(arg1 + 0x26c), 0x7fffffff).d f> 9.99999975e-05f)
                                goto label_142717e6b
                            
                            if (not(_mm_and_ps(arg1[0x4e].d, 0x7fffffff).d f<= 9.99999975e-05f))
                                goto label_142717e6b
                            
                            rdx_2.b = 0
                    else
                        rdx_2.b = 0
                    
                    float zmm3_1[0x4] = *(arg1 + 0x114)
                    uint64_t var_48_2 = *(arg1 + 0x1a4)
                    
                    if (((*(arg1[0x20] + 0x98) u>> 2).b & 1) != 0)
                        zmm0_1.d = (*(arg1 + 0x1ac)).d f- var_50
                        zmm1_1 = var_48_2.d
                        zmm2_1.d = var_48_2:4.d.d f- var_54
                        zmm1_1[0] = zmm1_1[0] f- var_58
                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                        zmm2_1.d = zmm2_1.d f* zmm2_1.d
                        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                        zmm2_1.d = zmm2_1.d f+ zmm1_1[0]
                        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                        uint128_t temp0_9 = _mm_sqrt_ss(0, zmm2_1.d)
                        zmm3_1[0] = zmm3_1[0] f- temp0_9.d
                        zmm3_1 = __maxss_xmmss_memss(zmm3_1[0], arg1[0x22].d)
                    
                    if (rdx_2.b != 0)
                        goto label_142717f64
                    
                    if ((r8_1 & 1) == 0)
                        zmm0_1 = zx.o(0)
                    else
                        zmm0_1 = *(arg1 + 0x11c)
                    
                    result =
                        sub_142703ae0(arg1, &var_58, zx.o(0), zx.o(0), &var_38, zmm3_1[0], zmm0_1.d)
                    
                    if (result != 0)
                        goto label_142717f64
                else if (rcx_3 s< 0)
                    result = sub_142703ae0(arg1, &var_58, zx.o(0), zx.o(0), &var_38, 0, 4f)
                    
                    if (result != 0)
                        result = sub_142714f40(arg1)
            else
                (*(*arg1 + 0x448))(arg1)
            label_142717f64:
                arg_8 = data_143b58110
                arg_a = 0
                result = (*(*arg1 + 0x440))(arg1, &arg_8)
            
            if (arg1[0x37].b != 3)
                return result
            
            if (*(arg1 + 0x1b9) s< 0)
                int64_t* rdi_1 = arg1[0x20]
                int32_t rax_16
                int32_t* rcx_10
                
                if (rdi_1[0xe].d != data_143b580b8)
                    rcx_10 = rdi_1[0xf]
                    
                    if (rcx_10 != 0)
                        rax_16 = sub_14268a5a0(rcx_10, &data_143b580b8)
                
                if (rdi_1[0xe].d == data_143b580b8 || (rcx_10 != 0 && rax_16.b != 0))
                    rax_16.b = 1
                else
                    rax_16.b = 0
                
                int64_t* rcx_11 = nullptr
                
                if (rax_16.b != 0)
                    rcx_11 = rdi_1
                
                if (rcx_11 != 0)
                    (*(*rcx_11 + 0x70))(rcx_11, &var_38, 1)
            
            result = (*(*arg1 + 0x4e8))(arg1)
            
            if (result == 0)
                return result
            
            result = sub_1427040e0(arg1)
            
            if (result == 0)
                return result
            
            rax_19 = data_143b58112
            arg_a = 1
arg_8 = rax_19
return (*(*arg1 + 0x440))(arg1, &arg_8)
