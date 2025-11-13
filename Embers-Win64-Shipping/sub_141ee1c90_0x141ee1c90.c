// 函数: sub_141ee1c90
// 地址: 0x141ee1c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = arg2
void* result

if ((*(arg1[-0x28] + 0x5c0))(&arg1[-0x28]).b == 0 || arg1[5].b == 0 || *(arg1[-0x12] + 0x14f) != 2)
    result.b = 0
else
    int64_t* rcx_1 = arg1[1]
    (*(*rcx_1 + 0x838))(rcx_1, zmm6)
    int64_t var_68
    int64_t* rax_3 = (*(arg1[-0x28] + 0x8f8))(&arg1[-0x28], &var_68, arg1 + 0xec)
    uint128_t zmm0 = zx.o(*rax_3)
    *(arg1 + 0xec) = zmm0.q
    *(arg1 + 0xf4) = rax_3[1].d
    (*(arg1[-0x28] + 0x6d0))(&arg1[-0x28])
    uint128_t zmm7 = zmm0
    int32_t rax_6
    uint128_t zmm2
    uint128_t entry_zmm3
    
    if (zmm7.d f>= 9.99999975e-05f)
        uint128_t zmm8 = *(arg1 + 0xec)
        uint128_t zmm9 = arg1[0x1e].d
        zmm2.d = zmm8.d f* zmm8.d
        zmm0.d = zmm9.d f* zmm9.d
        uint128_t zmm10 = *(arg1 + 0xf4)
        zmm2.d = zmm2.d f+ zmm0.d
        arg2.d = zmm10.d f* zmm10.d
        zmm0.d = zmm7.d f* zmm7.d
        zmm2.d = zmm2.d f+ arg2.d
        
        if (zmm2.d f<= zmm0.d)
            arg2 = zx.o(*(arg1 + 0xec))
            rax_6 = *(arg1 + 0xf4)
        else
            uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
            entry_zmm3.d = zmm2.d f* 0.5f
            zmm0.d = zmm5_1.d f* zmm5_1.d
            arg2.d = entry_zmm3.d f* zmm0.d
            zmm2.d = 0.5f f- arg2.d
            zmm0.d = zmm5_1.d f* zmm2.d
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            arg2.d = zmm5_1.d f* zmm5_1.d
            entry_zmm3.d = entry_zmm3.d f* arg2.d
            zmm0.d = zmm5_1.d f* (0.5f f- entry_zmm3.d)
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm5_1.d = zmm5_1.d f* zmm7.d
            zmm8.d = zmm8.d f* zmm5_1.d
            zmm9.d = zmm9.d f* zmm5_1.d
            arg2.d = zmm8.d
            zmm10.d = zmm10.d f* zmm5_1.d
            _mm_shuffle_ps(arg2, arg2, 0xe1)
            arg2.d = zmm9.d
            rax_6 = zmm10.d
            arg2 = _mm_shuffle_ps(arg2, arg2, 0xe1)
    else
        zmm2 = data_143dbb1f8
        entry_zmm3 = data_143dbb1fc
        arg2.d = zmm2.d
        rax_6 = data_143dbb200.d
        _mm_shuffle_ps(arg2, arg2, 0xe1)
        zmm0.d = entry_zmm3.d
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        arg2 = zmm0
    
    *(arg1 + 0xec) = arg2.q
    *(arg1 + 0xf4) = rax_6
    (*(arg1[-0x28] + 0x588))(&arg1[-0x28])
    *(arg1 + 0x14c) = zmm0.d
    void* rax_8 = arg1[0x70]
    
    if (rax_8 == 0)
        rax_8 = (*(*arg1 + 0x30))(arg1)
        arg1[0x70] = rax_8
    
    zmm0.d = zmm6.d f+ *(rax_8 + 0x60)
    arg2.q = fconvert.d(zmm6.d)
    *(rax_8 + 0x60) = zmm0.d
    arg2.q = arg2.q f+ *(rax_8 + 0x68)
    *(rax_8 + 0x68) = arg2.q
    (*(arg1[-0x28] + 0x928))(&arg1[-0x28], zmm6, zmm2, entry_zmm3)
    result.b = 1

return result
