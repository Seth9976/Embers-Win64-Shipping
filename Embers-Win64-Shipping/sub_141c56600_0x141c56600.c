// 函数: sub_141c56600
// 地址: 0x141c56600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0 && arg2 != 0)
    void* rax_1
    int512_t zmm2_1
    rax_1, zmm2_1 = sub_141c5d7c0(arg1)
    
    if (rax_1 != 0)
        uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(rax_1 + 0xc)))
        int32_t var_28 = 0xffffffff
        int64_t var_20 = 0
        int32_t var_18 = zmm0.d
        int64_t* var_48
        int128_t zmm1 = sub_141c4c3e0(&var_48, &var_28, arg3, zmm2_1)
        sub_142376b50(var_48, 1)
        uint128_t zmm0_1 = var_48.o
        int32_t r8_1 = *(arg3 + 0xc)
        uint128_t var_38 = zmm0_1
        void* rax_2 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        int32_t rax_3 = sub_141c56440(rax_1, arg2, r8_1, &var_38, zmm1)
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                int64_t rdx_4 = *var_40
                (*rdx_4)(var_40, rdx_4)
                int32_t rdi_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_40 + 8))(var_40, zx.q(rdi_1))
        
        return zx.q(rax_3)

return 0
