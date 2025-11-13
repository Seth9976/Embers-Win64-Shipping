// 函数: sub_1421b3a00
// 地址: 0x1421b3a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_1421b3590(arg1, arg2) != 0)
    void* rbp_1 = *(arg1 + 0x28)
    
    if (rbp_1 != 0 && (*(rbp_1 + 0x2c) & 1) != 0)
        *(arg2 + 8) = 2
        int64_t* rsi = *(arg1 + 0x1a0)
        char rax_2
        
        if (rsi != 0)
            rax_2 = (*(*rsi + 0x2d8))(rsi, 3)
        
        if (rsi == 0 || rax_2 == 0)
            rsi = sub_14210f630(0)
        
        *(arg2 + 0x60) = rsi
        *(arg1 + 0x1a0) = rsi
        void* rax_4 = *(rbp_1 + 0x30)
        float temp0[0x4] = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
        int32_t var_10 = 0x3f800000
        *(arg2 + 0xe0) = *(rax_4 + 0xaa) & 1
        *(arg2 + 0xd0) = zx.d(*(*(rbp_1 + 0x30) + 0xa9))
        *(arg2 + 0xd4) = *(arg1 + 0x38)
        *(arg2 + 0xd8) = *(*(rbp_1 + 0x30) + 0xb0)
        *(arg2 + 0xdc) = *(*(rbp_1 + 0x30) + 0xb4)
        *(arg2 + 0xe4) = *(arg1 + 0x1dc)
        *(arg2 + 0xe8) = *(arg1 + 0x1e0)
        *(arg2 + 0xed) = *(arg1 + 0x1d8)
        char rcx_5 = *(*(arg1 + 0x1d0) + 0x45)
        *(arg2 + 0x38) = temp0.q
        *(arg2 + 0xec) = rcx_5
        *(arg2 + 0x40) = 0x3f800000
        void* rdx = *(arg1 + 0x18)
        
        if (rdx != 0 && (*(*(*(arg1 + 0x28) + 0x30) + 0x59) & 1) == 0
                && (*(arg1 + 0xe0) & 0x80) == 0)
            float zmm2_1[0x4] = *(rdx + 0x1e0)
            float var_10_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
            *(arg2 + 0x38) = (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
            *(arg2 + 0x40) = var_10_1
        
        if (*(*(arg1 + 0x1d0) + 0x90) == 0 && (*(arg1 + 0xe0) & 0x200) != 0)
            *(arg2 + 0xb3) = *(arg1 + 0xe4)
            
            if (*(arg1 + 0xe4) != 0)
                *(arg2 + 0xb1) = 1
                uint32_t rcx_7 = zx.d(*(arg1 + 0xe4))
                int32_t var_10_2
                float zmm0[0x4]
                
                if (rcx_7 == 1)
                    zmm0 = 0x3f800000
                label_1421b3c4e:
                    var_10_2 = 0
                    zmm0 = _mm_unpacklo_ps(zmm0, zx.o(0)[0].q)
                else if (rcx_7 == 2)
                    var_10_2 = 0
                    zmm0 = _mm_unpacklo_ps(zx.o(0), 0x3f800000)
                else
                    if (rcx_7 == 4)
                        zmm0 = 0xbf800000
                        goto label_1421b3c4e
                    
                    if (rcx_7 == 5)
                        var_10_2 = 0
                        zmm0 = _mm_unpacklo_ps(zx.o(0), 0xbf800000[0].q)
                    else
                        float zmm1_1[0x4] = zx.o(0)
                        
                        if (rcx_7 == 6)
                            int32_t var_10_3 = 0xbf800000
                            *(arg2 + 0xf0) = (_mm_unpacklo_ps(zmm1_1, zx.o(0)[0].q)).q
                            *(arg2 + 0xf8) = 0xbf800000
                            int64_t rax_15
                            rax_15.b = 1
                            return 0xbf800001
                        
                        var_10_2 = 0x3f800000
                        zmm0 = _mm_unpacklo_ps(zx.o(0), zmm1_1[0].q)
                
                *(arg2 + 0xf0) = zmm0.q
                *(arg2 + 0xf8) = var_10_2
        
        uint64_t result
        result.b = 1
        return result

return 0
