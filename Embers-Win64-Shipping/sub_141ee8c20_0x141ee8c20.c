// 函数: sub_141ee8c20
// 地址: 0x141ee8c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm10 = arg3
void* result = (*(*arg1 + 0x5c0))()

if (result.b != 0)
    (*(*arg1 + 0x9a0))(arg1, zx.q(arg4))
    int64_t* rcx_1 = arg1[0x29]
    (*(*rcx_1 + 0x838))(rcx_1, zmm10)
    uint64_t var_98
    int64_t* rax_4 = (*(*arg1 + 0x8f8))(arg1, &var_98, arg6)
    uint128_t zmm0 = zx.o(*rax_4)
    *(arg1 + 0x22c) = zmm0.q
    *(arg1 + 0x234) = rax_4[1].d
    (*(*arg1 + 0x6d0))(arg1)
    uint128_t zmm6 = zmm0
    int32_t rax_7
    uint128_t zmm1
    
    if (zmm6.d f>= 9.99999975e-05f)
        uint128_t zmm7 = *(arg1 + 0x22c)
        uint128_t zmm8 = arg1[0x46].d
        arg3.d = zmm7.d f* zmm7.d
        zmm0.d = zmm8.d f* zmm8.d
        uint128_t zmm9 = *(arg1 + 0x234)
        arg3.d = arg3.d f+ zmm0.d
        zmm1.d = zmm9.d f* zmm9.d
        zmm0.d = zmm6.d f* zmm6.d
        arg3.d = arg3.d f+ zmm1.d
        
        if (arg3.d f<= zmm0.d)
            zmm1 = zx.o(*(arg1 + 0x22c))
            rax_7 = *(arg1 + 0x234)
        else
            uint128_t zmm5_1 = _mm_rsqrt_ss(arg3.d, arg3.d)
            arg5.d = arg3.d f* 0.5f
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = arg5.d f* zmm0.d
            arg3.d = 0.5f f- zmm1.d
            zmm0.d = zmm5_1.d f* arg3.d
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm1.d = zmm5_1.d f* zmm5_1.d
            arg5.d = arg5.d f* zmm1.d
            zmm0.d = zmm5_1.d f* (0.5f f- arg5.d)
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm5_1.d = zmm5_1.d f* zmm6.d
            zmm7.d = zmm7.d f* zmm5_1.d
            zmm8.d = zmm8.d f* zmm5_1.d
            zmm1.d = zmm7.d
            zmm9.d = zmm9.d f* zmm5_1.d
            _mm_shuffle_ps(zmm1, zmm1, 0xe1)
            zmm1.d = zmm8.d
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
            rax_7 = zmm9.d
            var_98 = zmm1.q
    else
        arg3 = data_143dbb1f8
        arg5 = data_143dbb1fc
        zmm1.d = arg3.d
        rax_7 = data_143dbb200.d
        _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        zmm0.d = arg5.d
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        var_98 = zmm0.q
        zmm1 = zmm0
    
    *(arg1 + 0x22c) = zmm1.q
    *(arg1 + 0x234) = rax_7
    (*(*arg1 + 0x588))(arg1)
    void* rax_9 = arg1[0x16]
    void* rcx_5 = arg1[0x29]
    *(arg1 + 0x28c) = zmm0.d
    zmm1 = *(rax_9 + 0x1d0)
    int32_t var_88 = zmm1.d
    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    int32_t var_80_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
    int32_t var_84_1 = zmm0.d
    uint128_t var_68 = *(rax_9 + 0x1c0)
    char rax_10 = sub_141ea5ff0(rcx_5)
    int64_t rdx_2 = *arg1
    (*(rdx_2 + 0x928))(arg1, rdx_2, arg3, arg5)
    int64_t rdx_3 = *arg1
    result = (*(rdx_3 + 0x5c0))(arg1, rdx_3)
    
    if (result.b != 0)
        void* rcx_8 = arg1[0x29]
        
        if (rcx_8 != 0 && (*(rcx_8 + 0x330) & 8) == 0 && sub_141ea5ff0(rcx_8) == 0)
            void* rcx_9 = arg1[0x29]
            
            if (*(rcx_9 + 0x280) != 0)
                if (rax_10 == 0)
                    sub_141efcd30(arg1, zmm10)
                    rcx_9 = arg1[0x29]
                
                sub_141f375c0(*(rcx_9 + 0x280))
        
        result = arg1[0x29]
        
        if (result != 0 && arg1[0x16] != 0 && data_143a2d660 != 0 && *(result + 0x5f) == 2)
            int64_t* rcx_12 = arg1[0x14]
            
            if (rcx_12 != 0)
                result = sub_141dcdc50(rcx_12)
                
                if (result.d == 2)
                    void* rax_12 = arg1[0x16]
                    float var_78[0x4] = *(rax_12 + 0x1c0)
                    float zmm1_1[0x4] = *(rax_12 + 0x1d0)
                    int64_t rax_13 = arg1[0x28]
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    var_98.d = zmm1_1[0]
                    float var_90_3 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                    var_98:4.d = temp0_8[0]
                    return (*(rax_13 + 0x20))(temp0_8, &var_88, &var_68, &var_98, &var_78)

return result
