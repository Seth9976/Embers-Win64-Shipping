// 函数: sub_141f21cc0
// 地址: 0x141f21cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr

if ((*(arg1 + 0x20d) & 0x40) != 0)
    void* rdi_1
    
    if (arg3[1] == 0)
    label_141f21d63:
        int64_t* rax_7 = sub_142496c20()
        rdi_1 = rax_7[0x23]
        
        if (rdi_1 == 0)
            int64_t rdx_2 = *rax_7
            (*(rdx_2 + 0x390))(rax_7, rdx_2)
            rdi_1 = rax_7[0x23]
    else
        void* rax = sub_142496c20()
        
        if (rax == 0)
            goto label_141f21d63
        
        void* rdx = arg3[1]
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30 || rdx == 0)
            goto label_141f21d63
        
        void* rax_3 = sub_142496c20()
        int64_t rax_4
        int64_t* rsi_1
        
        if (rax_3 != 0)
            rsi_1 = arg3[1]
            rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_3 == 0 || rax_4.d s> rsi_1[7].d || *(rsi_1[6] + (rax_4 << 3)) != rax_3 + 0x30)
            rsi_1 = nullptr
        
        rdi_1 = rsi_1[0x23]
        
        if (rdi_1 == 0)
            (*(*rsi_1 + 0x390))(rsi_1)
            rdi_1 = rsi_1[0x23]
    
    result = (*(*arg3 + 0x10))(arg3, 1)
    uint64_t var_58
    uint128_t zmm2
    int64_t zmm3
    
    if (result == 0)
        result = (*(*arg3 + 0x10))(arg3, 2)
        
        if (result != 0)
            zmm3 = *(rdi_1 + 0x2c)
            
            if (not(zmm3.d f<= zx.o(0).d))
                int64_t r8_2 = *arg1
                zmm2 = *(arg3 + 0x1c)
                int32_t var_50_2 = *(arg3 + 0x2c)
                uint8_t rax_17 = (*(rdi_1 + 0x28) u>> 2).b & 1
                var_58 = *(arg3 + 0x24)
                return (*(r8_2 + 0x5c0))(arg1, &var_58, zmm2, zmm3, 1, rax_17)
    else if (not(zx.o(0).d f>= *(rdi_1 + 0x2c)))
        if (_mm_and_ps(*(arg3 + 0x14), 0x7fffffff).d f> 9.99999975e-05f)
        label_141f21dfd:
            result = (*(*arg1 + 0x3e8))(arg1, arg3[0x13], 0x38d1b717)
            
            if (result != 0)
                int128_t zmm6 = *(arg3 + 0x1c)
                uint128_t zmm7 = *(arg3 + 0x14)
                uint128_t zmm8 = arg3[3].d
                zmm2.d = zmm7.d f* zmm7.d
                uint128_t zmm0_1
                zmm0_1.d = zmm8.d f* zmm8.d
                int64_t zmm1
                zmm1.d = zmm6.q.d f* zmm6.d
                zmm2.d = zmm2.d f+ zmm0_1.d
                zmm2.d = zmm2.d f+ zmm1.d
                uint64_t var_68
                
                if (not(zmm2.d f!= 1f))
                    zmm0_1 = zx.o(*(arg3 + 0x14))
                    zmm6 = *(arg3 + 0x1c)
                    var_68 = zmm0_1.q
                    zmm7 = var_68.d
                    zmm2 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                else if (zmm2.d f>= 9.99999994e-09f)
                    zmm3 = zmm2.q
                    float temp0_5[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3.d)
                    zmm3.d = zmm3.d f* 0.5f
                    zmm0_1.d = temp0_5.d f* temp0_5[0]
                    zmm1.d = zmm3.d f* zmm0_1.d
                    zmm2.d = 0.5f f- zmm1.d
                    zmm0_1.d = temp0_5.d f* zmm2.d
                    temp0_5[0] = temp0_5[0] f+ zmm0_1.d
                    zmm1.d = temp0_5[0].q.d f* temp0_5[0]
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm0_1.d = temp0_5.d f* (0.5f f- zmm3.d)
                    temp0_5[0] = temp0_5[0] f+ zmm0_1.d
                    zmm8.d = zmm8.d f* temp0_5[0]
                    zmm7.d = zmm7.d f* temp0_5[0]
                    zmm2 = zmm8
                    zmm6.d = zmm6.d f* temp0_5[0]
                else
                    zmm7 = data_143dbb1f8
                    zmm2 = data_143dbb1fc
                    zmm6 = data_143dbb200
                
                zmm0_1 = *(rdi_1 + 0x2c)
                int64_t r9_1 = arg3[0x13]
                zmm6.d = zmm6.d f* zmm0_1.d
                int32_t var_60_2 = *(arg3 + 0x44)
                zmm7.d = zmm7.d f* zmm0_1.d
                var_68 = *(arg3 + 0x3c)
                zmm1.d = zmm0_1.q.d f* zmm2.d
                int32_t var_50_1 = zmm6.d
                int64_t rax_13 = *arg1
                var_58 = (_mm_unpacklo_ps(zmm7, zmm1)).q
                return (*(rax_13 + 0x5b8))(arg1, &var_58, &var_68, r9_1)
        else
            if (_mm_and_ps(arg3[3].d, 0x7fffffff).d f> 9.99999975e-05f)
                goto label_141f21dfd
            
            if (not(_mm_and_ps(*(arg3 + 0x1c), 0x7fffffff).d f<= 9.99999975e-05f))
                goto label_141f21dfd

return result
