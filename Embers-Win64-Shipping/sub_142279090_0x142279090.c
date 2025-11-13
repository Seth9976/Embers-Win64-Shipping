// 函数: sub_142279090
// 地址: 0x142279090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140962f60(arg2)
int64_t* rcx_1 = *result

if (rcx_1 != 0)
    int64_t* rbx_1 = nullptr
    
    if (rcx_1[1].w == 6)
        rbx_1 = rcx_1
    
    if (rbx_1 != 0)
        void var_38
        char* rax_1
        int64_t r8
        rax_1, r8 = (*(*rbx_1 + 0x178))(rbx_1, &var_38)
        float var_30
        float zmm2[0x4]
        float zmm3[0x4]
        
        if ((*rax_1 & 1) != 0)
            void var_37
            char* rax_3
            rax_3, r8 = (*(*rbx_1 + 0x60))(rbx_1, &var_37)
            
            if ((*rax_3 & 8) == 0)
                if (arg4 != 0)
                    void* rcx_4 = *(arg1 + 0x50)
                    
                    if (rcx_4 != 0 && sub_14243ade0(rcx_4) != 0 && *(arg1 + 0x48) != 0)
                        sub_142279220(*(arg1 + 0x110), arg2, arg3)
                
                zmm2 = *arg3
                zmm3 = arg3[1]
                int64_t rax_5 = *rbx_1
                float var_2c_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
                float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                var_30 = zmm2[0]
                float var_20_1 = zmm3[0]
                float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                float var_18_1 = temp0_4[0]
                float var_28_1 = temp0_3[0]
                float var_24_1 = temp0_5[0]
                float var_1c_1 = temp0_2[0]
                return (*(rax_5 + 0x1b0))(rbx_1, &var_30)
        
        zmm2 = *arg3
        zmm3 = arg3[1]
        int64_t rax_6 = *rbx_1
        r8.b = 1
        float var_2c_2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
        float temp0_7[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        var_30 = zmm2[0]
        float var_20_2 = zmm3[0]
        float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float var_18_2 = temp0_9[0]
        float var_28_2 = temp0_7[0]
        float var_24_2 = temp0_10[0]
        float var_1c_2 = temp0_8[0]
        return (*(rax_6 + 0xa8))(rbx_1, &var_30, r8)

return result
