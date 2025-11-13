// 函数: sub_1427af8a0
// 地址: 0x1427af8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_38
char arg_8
int64_t result
uint32_t zmm6[0x4]
int128_t zmm7
result, zmm6, zmm7 = sub_1427b2310(arg1 + 0x54, arg1 + 0x60, arg2, &arg2[3], &arg_8, &var_38)

if (arg_8 != 0)
    *(arg1 + 0x90) = var_38
    int32_t var_30
    *(arg1 + 0x98) = var_30
    uint128_t zmm1_1
    zmm1_1.d = (*(arg1 + 0x94)).d f- *(arg1 + 0x58)
    uint64_t zmm5_1
    zmm5_1.d = (*(arg1 + 0x90)).d f- *(arg1 + 0x54)
    float zmm4_1 = *(arg1 + 0x98) f- *(arg1 + 0x5c)
    uint32_t var_18_1[0x4] = zmm6
    uint64_t zmm3_1 = zmm1_1.q
    zmm1_1.d = zmm1_1.d f* *(arg1 + 0x70)
    zmm3_1.d = zmm3_1.d f* *(arg1 + 0x7c)
    uint64_t zmm0_1
    zmm0_1.d = zmm5_1.d f* *(arg1 + 0x78)
    zmm5_1.d = zmm5_1.d f* *(arg1 + 0x6c)
    zmm3_1.d = zmm3_1.d f+ zmm0_1.d
    zmm1_1.d = zmm1_1.d f+ zmm5_1.d
    zmm3_1.d = zmm3_1.d f+ zmm4_1 f* *(arg1 + 0x80)
    zmm1_1.d = zmm1_1.d f+ zmm4_1 f* *(arg1 + 0x74)
    uint32_t zmm0_2[0x4] = atan2f(zmm3_1.d, zmm1_1.d)
    bool cond:0_1 = *(arg1 + 0xb4) == 0
    zmm6 = zmm0_2
    *(arg1 + 0xa0) = zmm6[0]
    zmm6[0] = zmm6[0] f- *(arg1 + 0x9c)
    
    if (not(cond:0_1))
        zmm0_2 = zx.o(0)
        zmm0_2[0].q = fconvert.d(zmm6[0])
        
        if (_finite(zmm0_2[0].q) != 0)
            int128_t var_28_1 = zmm7
            zmm7 = zx.o(0)
            zmm6[0] f- 0f
            
            if (not(zmm6[0] f<= 0f))
                zmm7 = 0x3f490fd0
            else if (not(zmm6[0] f>= 0f))
                zmm7 = 0xbf490fd0
            
            uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm6, data_142d3f770)
            temp0_1[0] = temp0_1[0] f* 1.27324057f
            int32_t rbx_1 = int.d(temp0_1[0])
            int32_t temp0_2
            int32_t temp1_1
            temp0_2:temp1_1 = sx.q(rbx_1)
            int32_t rax_6 = rbx_1 + 1
            
            if (fmodf(temp0_1[0], 0x3f490fd0.d)
                    f<= _mm_cvtepi32_ps(zx.o((temp1_1 - temp0_2) s>> 1)).d)
                rax_6 = rbx_1
            
            zmm6 = _mm_cvtepi32_ps(zx.o(rax_6))
            zmm6[0] = zmm6[0] f* zmm7.d
        else
            zmm6 = zx.o(0)
    
    bool cond:1_1 = *(arg1 + 0x20) == 0
    zmm6[0] = zmm6[0] f+ *(arg1 + 0xb0)
    int64_t* rcx_1
    
    if (cond:1_1)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x28)
    
    result = (*(*rcx_1 + 0x20))(rcx_1, zmm6)

return result
