// 函数: sub_140f8ec10
// 地址: 0x140f8ec10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
sub_140f756b0(arg1, &var_58, arg3)
float var_54
float var_50
int32_t result

if (var_50 <= 0f || var_54 <= 0f)
    if (*(arg1 + 0x310) != 0)
        int64_t* rcx_9 = *(arg1 + 0x308)
        
        if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
            int64_t* rsi_2
            
            if (*(arg1 + 0x310) == 0)
                rsi_2 = nullptr
            else
                rsi_2 = *(arg1 + 0x308)
            
            *(arg1 + 0x300) = (*(*rsi_2 + 0x48))(rsi_2)
    
    result = *(arg1 + 0x300)
    *(arg1 + 0x344) = result
else
    if (*(arg1 + 0x340) != 1)
        *(arg2 + 4)
    else
        *arg2
    
    int64_t* rsi_1 = nullptr
    
    if (*(arg1 + 0x338) != 0)
        int64_t* rcx = *(arg1 + 0x330)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x338) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x330)
            
            *(arg1 + 0x328) = (*(*rcx_1 + 0x48))(rcx_1)
    
    char rbx_1 = *(arg1 + 0x328)
    int128_t zmm0_1
    int512_t zmm6_1
    float zmm7_1
    float zmm8_1
    zmm0_1, zmm6_1, zmm7_1, zmm8_1 = sub_140f75da0(arg1, arg2, rbx_1, var_54)
    zmm6_1.o = zmm0_1
    int128_t zmm9
    zmm9.d = var_50.d f+ sub_140f75e60(arg1, &var_58, arg2, rbx_1, zmm0_1.d)
    
    if (*(arg1 + 0x310) != 0)
        int64_t* rcx_4 = *(arg1 + 0x308)
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            if (*(arg1 + 0x310) != 0)
                rsi_1 = *(arg1 + 0x308)
            
            *(arg1 + 0x300) = (*(*rsi_1 + 0x48))(rsi_1)
    
    int32_t rdx_3 = *(arg1 + 0x300)
    
    if (zmm9.d f<= zmm8_1 || rdx_3 s<= 0)
        result = 1
    else
        zmm7_1 = zmm7_1 f/ zmm9.d
        uint128_t zmm0_2
        zmm0_2.d = -0.5f - (zmm7_1 + zmm7_1)
        int32_t rcx_8 = not.d(int.d(zmm0_2.d) s>> 1)
        int32_t rax_9
        
        if (rcx_8 s>= 1)
            rax_9 = rdx_3
            
            if (rcx_8 s< rdx_3)
                rax_9 = rcx_8
        else
            rax_9 = 1
        
        uint128_t zmm1_1
        zmm1_1.d = _mm_cvtepi32_ps(zx.o(rdx_3)).d f/ _mm_cvtepi32_ps(zx.o(rax_9)).d
        zmm1_1.d = zmm1_1.d f+ zmm1_1.d
        result = neg.d(int.d(-0.5f f- zmm1_1.d) s>> 1)
    
    *(arg1 + 0x344) = result

return result
