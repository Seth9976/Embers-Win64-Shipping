// 函数: sub_141b1cbe0
// 地址: 0x141b1cbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58
float var_50_1

if (*(arg1 + 0x50) == 0)
    int64_t rbx_1 = sx.q(*(arg3 + 0x10))
    
    if (*(arg1 + 8) != 0xffffffff)
        void* r9_1 = *((*(*arg4 + 8))(arg4) + 8)
        
        if (*(r9_1 + 0xd8) != *(r9_1 + 0x104))
            void* r8 = r9_1 + 0x108
            void* rcx_1 = *(r8 + 8)
            
            if (rcx_1 != 0)
                r8 = rcx_1
            
            int32_t* rcx_4
            
            for (int32_t i = *(r8 + (((sx.q(*(r9_1 + 0x118)) - 1) & rbx_1) << 2)); i != 0xffffffff; 
                    i = rcx_4[0x3c])
                rcx_4 = sx.q(i) * 0xf8 + *(r9_1 + 0xd0)
                
                if (*rcx_4 == rbx_1.d)
                    if (i != 0xffffffff && rcx_4 != 0 && rcx_4 != -8)
                        int32_t var_20
                        sub_141a644b0(arg1 + 8, &var_20, rbx_1.d, 
                            *((*(*arg4 + 8))(arg4) + 8) + 0xd0)
                        rbx_1 = zx.q(var_20)
                    
                    break
    
    float zmm0[0x4] = *(arg1 + 0x10)
    int32_t var_28 = rbx_1.d
    float var_38[0x4] = zmm0
    void* var_48
    uint64_t result = sub_141a4a790(arg4, &var_48, &var_38, &var_28)
    int32_t var_40
    
    if (var_40 == 0)
        return result
    
    void* rax_8 = sub_140d3c6e0(var_48)
    
    if (rax_8 != 0)
        void* rax_9 = sub_142452380()
        void* rcx_9 = *(rax_8 + 0x10)
        int64_t rdx_5 = sx.q(*(rax_9 + 0x38))
        
        if (rdx_5.d s<= *(rcx_9 + 0x38) && *(*(rcx_9 + 0x30) + (rdx_5 << 3)) == rax_9 + 0x30)
            void* rax_11 = *(rax_8 + 0x130)
            float var_40_2
            
            if (rax_11 == 0)
                float rax_12 = data_143dbb200
                var_48 = data_143dbb1f8.q
                var_40_2 = rax_12
            else
                float zmm1_1[0x4] = *(rax_11 + 0x1d0)
                var_48.d = zmm1_1[0]
                float temp0_4[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_40_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                var_48:4.d = temp0_4[0]
            
            var_50_1 = var_40_2
            var_58 = var_48
else
    float zmm2[0x4] = *(arg1 + 0x30)
    var_50_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    var_58 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
return sub_141f809b0(sub_141f88540(), &var_58, 0x3f800000, 0, 0)
