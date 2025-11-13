// 函数: sub_140f2ded0
// 地址: 0x140f2ded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr

if (*(arg1 + 0x3b8) != 0)
    int64_t* rcx = *(arg1 + 0x3b0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x3b8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x3b0)
        
        *(arg1 + 0x3a8) = (*(*rcx_1 + 0x48))(rcx_1)

int32_t rdi = *(arg1 + 0x3a8)

if (*(arg1 + 0x3a0) != 0)
    int64_t* rcx_2 = *(arg1 + 0x398)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        int64_t* rcx_3
        
        if (*(arg1 + 0x3a0) == 0)
            rcx_3 = nullptr
        else
            rcx_3 = *(arg1 + 0x398)
        
        *(arg1 + 0x390) = (*(*rcx_3 + 0x48))(rcx_3)

int32_t rsi = *(arg1 + 0x390)

if (rdi == 6)
    return *(arg1 + 0x3f0)

if (rdi == 7)
    int32_t arg_8 = 0x3f800000
    
    if (*(arg1 + 0x3c4) == 0)
        return 1f
    
    if (*(arg1 + 0x3d0) != 0)
        int64_t* rcx_7 = *(arg1 + 0x3c8)
        
        if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
            if (*(arg1 + 0x3d0) != 0)
                r14 = *(arg1 + 0x3c8)
            
            (*(*r14 + 0x48))(r14)
            *(arg1 + 0x3c0) = 0x3f800000
    
    return *(arg1 + 0x3c0)

int128_t zmm6 = 0x3f800000
float arg_18
sub_140e13cf0(*(arg1 + 0x2c8), &arg_18)
float zmm1 = arg_18

if (not(zmm1 == 0f) && not(arg3 == 0f))
    if (rdi == 2)
        zmm6.d = arg2[1].d f/ arg3
        zmm6 = _mm_min_ss(zmm6.d, *arg2 / zmm1)
    else if (rdi == 3)
        zmm6.d = (*arg2).d f/ zmm1
    else if (rdi == 4)
        zmm6.d = arg2[1].d f/ arg3
    else if (rdi == 5)
        zmm6.d = arg2[1].d f/ arg3
        zmm6 = _mm_max_ss(zmm6.d, *arg2 / zmm1)
    
    if (rsi == 1)
        if (not(zmm6.d f<= 1f))
            zmm6 = 0x3f800000
    else if (rsi == 2 && not(zmm6.d f>= 1f))
        zmm6 = 0x3f800000

return zmm6.d
