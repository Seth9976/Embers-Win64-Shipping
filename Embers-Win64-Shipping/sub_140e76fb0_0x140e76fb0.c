// 函数: sub_140e76fb0
// 地址: 0x140e76fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
sub_140da2300(&var_28, arg1 + 0x68, arg2)
void* rcx_1 = var_28

if (rcx_1 != 0)
    sub_140e239f0(rcx_1, 
        _mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(arg3)), _mm_cvtepi32_ps(zx.o(arg4)).q)[0].q)
    int64_t* rcx_2 = *(arg1 - 0xf8)
    (*(*rcx_2 + 0x28))(rcx_2, &var_28, zx.q(arg3), zx.q(arg4))
    uint128_t var_18
    uint128_t zmm0_2
    
    if (arg5 == 0)
        void* rcx_4
        
        if (sub_140de7d60(var_28) == 0)
            rcx_4 = var_28
        else
            rcx_4 = var_28
            
            if ((*(rcx_4 + 0x779) & 1) == 0)
                if (sub_140e1acc0(rcx_4) == 0)
                    rcx_4 = var_28
                else
                    rcx_4 = var_28
                    
                    if (*(rcx_4 + 0xa60) != 0)
                        zmm0_2 = var_28.o
                        var_18 = zmm0_2
                        void* rax_3 = _mm_bsrli_si128(zmm0_2, 8).q
                        
                        if (rax_3 != 0)
                            *(rax_3 + 8) += 1
                        
                        sub_140e7a240(arg1 - 0x118, &var_18)
                        rcx_4 = var_28
        
        if (sub_140e1acc0(rcx_4) != 0 && sub_140de7d60(var_28) != 0 && sub_140e1a3a0(var_28) != 0)
            int64_t* rcx_8 = *(arg1 - 0xf8)
            (*(*rcx_8 + 0xa8))(rcx_8)
    
    zmm0_2 = var_28.o
    var_18 = zmm0_2
    void* rax_8 = _mm_bsrli_si128(zmm0_2, 8).q
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    sub_140efea80(sub_140eff820(), &var_18)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

int64_t* result
result.b = 1
return result
