// 函数: sub_141f1e5b0
// 地址: 0x141f1e5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t rbp = arg2

if (data_143f3b1ac == 0 && arg2 != 0 && not(arg3[0] <= 0f))
    int64_t* rdi_1 = *(arg1 + 0xa0)
    
    if (rdi_1 == 0)
    label_141f1e6a1:
        rdi_1 = nullptr
    label_141f1e6a3:
        result.b = 0
    label_141f1e6a5:
        
        if (result.b != 0)
            rdi_1 = rdi_1[0x4a]
            
            if (rdi_1 != 0)
                goto label_141f1e6bd
    else
        void* rax = sub_14255d000()
        arg2 = rdi_1[2]
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_1 << 3)) != rax + 0x30)
            void* rax_3 = sub_142497110()
            arg2 = rdi_1[2]
            result = sx.q(*(rax_3 + 0x38))
            
            if (result.d s> *(arg2 + 0x38))
                goto label_141f1e6a1
            
            if ((*(arg2 + 0x30))[result] != rax_3 + 0x30)
                goto label_141f1e6a1
            
            int32_t rax_4 = *(rdi_1 + 0xc)
            void* const rax_11
            
            if (rax_4 s>= data_143e1d9b4)
                rax_11 = nullptr
            else
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_4)
                uint32_t rdx_1 = zx.d(temp2_1)
                int32_t rax_6 = temp3_1 + rdx_1
                arg2 = sx.q(zx.d(rax_6.w) - rdx_1) * 3
                rax_11 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + (arg2 << 3)
            
            if (((*(rax_11 + 8) u>> 0x1d).b & 1) != 0)
                goto label_141f1e6a3
            
            result.b = 1
            goto label_141f1e6a5
        
    label_141f1e6bd:
        int32_t rax_13 = *(rdi_1 + 0xc)
        void* const rax_20
        
        if (rax_13 s>= data_143e1d9b4)
            rax_20 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_13)
            uint32_t rdx_3 = zx.d(temp0_1)
            int32_t rax_15 = temp1_1 + rdx_3
            arg2 = sx.q(zx.d(rax_15.w) - rdx_3) * 3
            rax_20 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3)) + (arg2 << 3)
        
        result = zx.q(*(rax_20 + 8) u>> 0x1d)
        
        if ((result.b & 1) == 0 && rdi_1[0x4b] != 0)
            int64_t var_80
            float zmm0[0x4]
            float zmm8[0x4]
            
            if (rbp != rdi_1)
                void* rax_22 = rdi_1[0x26]
                float var_78_1
                
                if (rax_22 == 0)
                    float rax_23 = data_143dbb200
                    var_80 = data_143dbb1f8.q
                    var_78_1 = rax_23
                else
                    float zmm1[0x4] = *(rax_22 + 0x1d0)
                    var_80.d = zmm1[0]
                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    var_78_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                    var_80:4.d = zmm0[0]
                
                zmm0 = zx.o(var_80)
                zmm8 = zmm0
                int64_t rax_25 = *rdi_1
                zmm8[0] = zmm8[0] f- *arg4
                int128_t zmm6
                zmm6.d = var_78_1.d f- arg4[2]
                float zmm7[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                zmm7[0] = zmm7[0] f- arg4[1]
                var_80 = zmm0.q
                int32_t var_88
                arg2 = (*(rax_25 + 0x560))(rdi_1, &var_88, &var_80)
                zmm0 = var_88
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm6.d = zmm6.d f* zmm6.d
                zmm8[0] = zmm8[0] + zmm7[0]
                zmm0[0] = zmm0[0] * zmm0[0]
                zmm8[0] = zmm8[0] f+ zmm6.d
            
            if (rbp == rdi_1 || zmm8[0] <= zmm0[0])
                result = *(arg1 + 0xa8)
                
                if (result == 0)
                    result, arg2 = sub_141ee69e0(arg1)
                
                zmm0 = result[0xa4].d
                zmm0[0] = zmm0[0] f- *(arg1 + 0xd0)
                
                if (zmm0[0] f> *(arg1 + 0xc0) || not(arg3[0] f< *(arg1 + 0xcc)))
                    void* rax_28 = *(arg1 + 0xa8)
                    *(arg1 + 0xcc) = arg3[0]
                    
                    if (rax_28 == 0)
                        rax_28, arg2 = sub_141ee69e0(arg1)
                    
                    result = zx.q(*(rax_28 + 0x520))
                    *(arg1 + 0xd0) = result.d
            else
                result = *(arg1 + 0xa8)
                
                if (result == 0)
                    result, arg2 = sub_141ee69e0(arg1)
                
                zmm0 = result[0xa4].d
                zmm0[0] = zmm0[0] f- *(arg1 + 0xc8)
                
                if (zmm0[0] f> *(arg1 + 0xc0) || not(arg3[0] f< *(arg1 + 0xc4)))
                    *(arg1 + 0xc4) = arg3[0]
                    *(arg1 + 0xb4) = *arg4
                    *(arg1 + 0xbc) = arg4[2]
                    void* rax_27 = *(arg1 + 0xa8)
                    
                    if (rax_27 == 0)
                        rax_27, arg2 = sub_141ee69e0(arg1)
                    
                    result = zx.q(*(rax_27 + 0x520))
                    *(arg1 + 0xc8) = result.d
            
            if ((*(arg1 + 0xb0) & 1) != 0)
                zmm0 = zx.o(*arg4)
                int32_t var_60_1 = arg4[2]
                var_80 = 0
                int64_t rax_30 = var_80
                data_143f3b1ac = 1
                int64_t var_68 = zmm0.q
                result = sub_141dcf4f0(rbp, arg2, rdi_1, &var_68, 0, rax_30)
                data_143f3b1ac = 0

return result
