// 函数: sub_141d2a930
// 地址: 0x141d2a930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx

if (*(arg3 + 8) != 0)
    float zmm2 = (arg4[3] - *arg4) * 0.5f
    float zmm4 = (arg4[4] - arg4[1]) * 0.5f
    float zmm3 = (arg4[5] - arg4[2]) * 0.5f
    int32_t rcx_1
    int32_t rdx_1
    int32_t r8_1
    uint128_t zmm0
    uint128_t zmm1
    
    if (not(zmm2 >= zmm4) && not(zmm2 >= zmm3))
        rcx_1 = arg5
        zmm1.d = 1f / zmm2
        zmm0 = zmm1
        zmm1.d = zmm1.d f* zmm3
        zmm0.d = zmm0.d f* zmm4
        rdx_1 = int.d(zmm0.d) * rcx_1
        r8_1 = int.d(zmm1.d) * rcx_1
    else if (zmm4 >= zmm3)
        r8_1 = arg5
        rcx_1 = int.d(zmm2 / zmm3) * r8_1
        rdx_1 = int.d(zmm4 / zmm3) * r8_1
    else
        rdx_1 = arg5
        rcx_1 = int.d(zmm2 / zmm4) * rdx_1
        r8_1 = int.d(zmm3 / zmm4) * rdx_1
    
    uint128_t zmm9 = zx.o(*(arg4 + 0xc))
    uint128_t zmm8 = zx.o(*arg4)
    
    if (rcx_1 s> arg6)
        rcx_1 = arg6
    
    int128_t zmm6 = zmm9.q:4.d
    
    if (rdx_1 s> arg6)
        rdx_1 = arg6
    
    uint64_t var_78 = zmm8.q
    zmm3 = var_78:4.d
    uint128_t zmm7
    zmm7.d = zmm9.d f- zmm8.d
    zmm0 = _mm_cvtepi32_ps(zx.o(rcx_1))
    
    if (r8_1 s> arg6)
        r8_1 = arg6
    
    float rax_3 = arg4[5]
    zmm1 = arg4[2]
    int64_t zmm5
    zmm5.d = zmm6.q.d f- zmm3
    zmm7.d = zmm7.d f/ zmm0.d
    zmm5.d = zmm5.d f/ _mm_cvtepi32_ps(zx.o(rdx_1)).d
    zmm8.d = zmm8.d f- zmm7.d
    zmm0 = _mm_cvtepi32_ps(zx.o(r8_1))
    var_78.d = zmm8.d
    zmm2 = (rax_3 f- zmm1.d) f/ zmm0.d
    zmm6.d = zmm6.d f+ zmm5.d
    zmm1.d = zmm1.d f- zmm2
    var_78:4.d = zmm3 f- zmm5.d
    zmm9.d = zmm9.d f+ zmm7.d
    float var_4c_1 = zmm2
    int32_t var_60_1 = rcx_1 + 2
    int32_t var_5c_1 = rdx_1 + 2
    int32_t var_58_1 = r8_1 + 2
    int32_t var_70_2 = zmm1.d
    uint64_t var_6c_1
    var_6c_1.d = zmm9.d
    var_6c_1:4.d = zmm6.d
    float var_64_2 = rax_3 + zmm2
    uint64_t var_54_1 = (_mm_unpacklo_ps(zmm7, zmm5)).q
    void*** rax_8 = j_sub_140a82f30(0xb8)
    void*** result = nullptr
    
    if (rax_8 != 0)
        result = sub_141760f00(rax_8, arg1, &var_78, arg2, arg3, 0)
    
    if (*(arg1 + 1) == 0)
        if (result != 0)
            if (arg7 != 1)
                rax_8 = sub_1405e66c0(result)
            else
                rax_8.b = 6
            
            *(result + 9) = rax_8.b
            
            if (arg7 == 1 && sub_1405e66c0(result) == 6)
                *(result + 0xa) = 0
        
        int64_t rcx_9 = *(arg1 + 8)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        return result
    
    *(arg1 + 1) = 0
    
    if (result != 0)
        sub_141762300(result)
        j_sub_140a74f90(result)
    
    rcx = *(arg1 + 8)
else
    rcx = *(arg1 + 8)

if (rcx != 0)
    sub_140a74f90(rcx)

return nullptr
