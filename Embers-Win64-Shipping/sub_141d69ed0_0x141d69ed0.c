// 函数: sub_141d69ed0
// 地址: 0x141d69ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1[0x1e].b != 3)
    int64_t arg_10 = arg1[3]
    int16_t* var_28
    sub_140b63b70(&arg_10, &var_28)
    int16_t* const rbx_1 = &data_142d40450
    int16_t* const r8_3 = &data_142d40450
    int32_t var_20
    
    if (var_20 != 0)
        r8_3 = var_28
    
    int16_t* var_38
    sub_140a2e390(&var_38, Cannot initiate playback when Sequence does not have authority (%s)", 
        r8_3)
    int32_t var_30
    
    if (var_30 != 0)
        rbx_1 = var_38
    
    result = sub_140d23f50(rbx_1, 3)
    int16_t* rcx_12 = var_38
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)
    
    int16_t* rcx_13 = var_28
    
    if (rcx_13 != 0)
        return sub_140a74f90(rcx_13)
else
    void* rax_1 = (*(*arg1 + 0x150))()
    int64_t* rcx
    
    if (rax_1 == 0)
        rcx = nullptr
    else
        rcx = *(rax_1 + 0x130)
    
    if (rcx != 0)
        (*(*rcx + 0x630))(rcx)
        arg1[0x47].d = arg2
    
    int128_t zmm6_1
    result, zmm6_1 = sub_141dcdc50(arg1)
    
    if (result != 1 && not(-1.17549435e-38f f== arg1[0x47].d) && arg1[0x45] != 0)
        int128_t var_18 = zmm6_1
        zmm6_1 = zx.o(0)
        void* rax_4 = (*(*arg1 + 0x150))(arg1)
        int64_t* rcx_3
        
        if (rax_4 == 0)
            rcx_3 = nullptr
        else
            rcx_3 = *(rax_4 + 0x130)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x630))(rcx_3)
            zmm6_1.d = -1.17549435e-38f f- arg1[0x47].d
        
        int64_t* r10 = *(arg1[0x45] + 0x248)
        int64_t* r9
        
        if (r10 == 0 || r10[0x8c] == 0)
            r9 = nullptr
        else
            r9 = r10
        
        int64_t r8_1 = sx.q(r9[0x8d].d)
        double zmm2[0x2] = zx.o(0)
        int64_t r9_1 = r9[0xf8]
        int64_t arg_8
        arg_8.d = r8_1.d
        uint32_t rdx_2 = (r9_1 u>> 0x20).d
        arg_8:4.d = 0
        uint128_t zmm0
        zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_2)).d f* arg_8:4.d
        zmm2[0] = float.d(sx.q(rdx_2) * r8_1)
        zmm0 = _mm_cvtps_pd(zmm0.q)
        uint128_t zmm1 = _mm_cvtepi32_pd(zx.q(r9_1.d))
        zmm2[0] = zmm2[0] f+ zmm0.q
        zmm0.q = fconvert.d(zmm6_1.d)
        zmm2[0] = zmm2[0] f/ zmm1.q
        zmm2[0] = zmm2[0] f+ zmm0.q
        zmm1 = _mm_cvtpd_ps(zmm2)
        
        if (r10 == 0 || r10[0x8c] == 0)
            r10 = nullptr
        
        uint128_t zmm0_1 = sub_141a58560(r10, zmm1)
        int64_t* rcx_7 = *(arg1[0x45] + 0x248)
        
        if (rcx_7 == 0 || rcx_7[0x8c] == 0)
            rcx_7 = nullptr
        
        return sub_141a5b2f0(rcx_7, zmm0_1) __tailcall

return result
