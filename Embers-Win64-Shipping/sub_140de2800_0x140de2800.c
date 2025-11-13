// 函数: sub_140de2800
// 地址: 0x140de2800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = sub_140da4220(*arg1, arg1[1] + 0x18, *arg1[2], arg2)
uint64_t result
uint128_t zmm6
int128_t zmm7
int128_t zmm8
result, zmm6, zmm7, zmm8 = sub_140da8a70(rax_1)
uint128_t zmm14 = _mm_cvtepi32_ps(zx.o(result.w))
int32_t var_198 = zmm14.d

if (not(zmm14.d f== 0f))
    int32_t* rax_2 = arg1[3]
    int32_t r8 = 1
    int32_t rbx_1 = *arg3
    int128_t* rdi_1 = nullptr
    int32_t r12_1 = 0
    int64_t* r14_1 = nullptr
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(*arg2))
    int16_t var_178 = 0
    int32_t var_174
    __builtin_memset(&var_174, 0, 0x24)
    int32_t var_150_1 = 0x300
    char var_14c_1 = 0
    result = zx.q(*rax_2)
    uint32_t var_1a4_1 = 0
    int64_t* var_140_1 = nullptr
    int32_t var_184_1 = result.d
    int32_t var_194_1 = 0
    float var_190_1 = 0f
    int32_t var_1ac_1 = 1
    int32_t var_18c_1 = 0
    
    if (result.d != 0)
        int16_t* rdx_2 = nullptr
        uint128_t var_48_1 = zmm6
        uint32_t r13_2 = (result * 3).d * 2
        int128_t var_58_1 = zmm7
        uint128_t zmm13 = zx.o(0)
        int128_t var_68_1 = zmm8
        int32_t var_19c_1 = 0
        uint32_t var_188_1 = r13_2
        int128_t zmm15
        int128_t var_d8_1 = zmm15
        int16_t* var_138_1 = nullptr
        uint32_t var_1a8_1 = (result << 2).d
        
        do
            result = arg1[1]
            int16_t* const rcx_3
            
            if (*(result + 0x70) == 0)
                rcx_3 = &data_142d40450
            else
                rcx_3 = *(result + 0x68)
            
            wint_t _C = *(rdx_2 + rcx_3)
            
            if (_C != 0xa)
                int128_t var_130
                int512_t zmm1_1
                uint128_t zmm9
                uint128_t zmm10_1
                float zmm11_1
                uint128_t zmm12
                zmm1_1, zmm6, zmm9, zmm10_1, zmm11_1, zmm12 =
                    sub_140da3dd0(rax_1, &var_130, _C, *(result + 0x64))
                char var_104
                char rcx_5 = var_104
                int32_t rcx_19
                uint128_t zmm0_2
                
                if (rcx_5 == 0)
                    _C.b = 1
                    rcx_19 = 0
                else
                    char var_108
                    
                    if (r14_1 == 0 || zx.d(var_108) != var_1a4_1)
                        uint32_t rdi_2 = zx.d(var_108)
                        var_1a4_1 = rdi_2
                        int64_t* rbx_2 = *(*(*arg1 + 0x110) + zx.q(rdi_2) * 0x10)
                        int64_t* rax_7 = (*(*rbx_2 + 8))(rbx_2)
                        int64_t* rcx_8 = arg1[4]
                        var_140_1 = rax_7
                        char var_208
                        bool var_200
                        char var_1f8
                        char var_1f0
                        void* var_1e8
                        int64_t rax_8 = (*(*rcx_8 + 0x18))(rcx_8, zx.q(rdi_2), rax_7, 
                            *(arg1[1] + 0x20), var_208, var_200, var_1f8, var_1f0, var_1e8)
                        int64_t rdx_8 = *rbx_2
                        char rax_9 = (*(rdx_8 + 0x18))(rbx_2, rdx_8)
                        rbx_1 = data_14399f630
                        var_1e8 = arg1[7]
                        
                        if (rax_9 != 0)
                            rbx_1 = *arg3
                        
                        char* rcx_11 = arg1[6]
                        var_1f0 = 0
                        int128_t var_f8
                        __builtin_memset(&var_f8, 0, 0x20)
                        var_1f8 = *rcx_11
                        var_200 = (rax_9 == 0) + 2
                        var_208 = 2
                        int128_t* rax_12
                        rax_12, zmm1_1 = sub_140e0db30(arg1[5], arg5, &var_f8, rax_8, 2, var_200, 
                            var_1f8, 0, var_1e8)
                        rdi_1 = rax_12
                        int64_t* rcx_13 = rax_12[4].q
                        int32_t rdx_12 = rcx_13[1].d + var_1a8_1
                        
                        if (rdx_12 s> *(rcx_13 + 0xc))
                            sub_1405c5660(rcx_13, rdx_12)
                        
                        uint64_t* rcx_14 = *(rdi_1 + 0x48)
                        int32_t rdx_14 = rcx_14[1].d + r13_2
                        
                        if (rdx_14 s> *(rcx_14 + 0xc))
                            sub_1405dadb0(rcx_14, rdx_14)
                        
                        zmm0_2.d = float.s(zx.q((**rax_7)(rax_7)))
                        zmm10_1.d = zmm6.d f/ zmm0_2.d
                        var_194_1 = zmm10_1.d
                        rcx_5 = var_104
                        zmm0_2.d = float.s(zx.q((*(*rax_7 + 8))(rax_7)))
                        zmm11_1 = zmm6.d f/ zmm0_2.d
                        var_190_1 = zmm11_1
                    
                    char var_105
                    
                    if (rcx_5 == 0 || (zmm0_1.d f> 0f != 0 && var_105 == 0))
                        _C.b = 1
                        rcx_19 = 0
                    else if (iswspace(_C) != 0)
                        _C.b = 1
                        rcx_19 = 0
                    else
                        _C.b = 0
                        
                        if (var_14c_1 == 0)
                            rcx_19 = 0
                        else
                            char rax_20
                            rax_20, zmm1_1 = sub_140da7c50(rax_1, &var_178, &var_130, zmm1_1)
                            rcx_19 = sx.d(rax_20)
                
                zmm1_1.o = var_130
                zmm0_2 = _mm_cvtepi32_ps(zx.o(rcx_19))
                var_178.o = zmm1_1.o
                zmm12.d = zmm12.d f+ zmm0_2.d
                int128_t var_110
                zmm1_1.o = var_110
                int64_t var_168_1
                uint128_t var_120
                var_168_1.o = var_120
                int64_t var_158_1
                var_158_1.o = zmm1_1.o
                
                if (_C.b == 0)
                    zmm0_2.d = float.s(arg6)
                    int32_t r13_3 = *(rdi_1 + 0x64)
                    float zmm2_1 = var_120:4.d
                    zmm8.d = float.s(sx.d(var_110:2.w))
                    zmm7.d = float.s(sx.d(var_110:4.w))
                    zmm8.d = zmm8.d f+ zmm12.d
                    zmm1_1.o = zmm13
                    zmm7.d = zmm7.d f+ zmm14.d
                    zmm13 = zmm9
                    zmm14 = zmm9
                    zmm8.d = zmm8.d f+ zmm0_2.d
                    zmm0_2.d = float.s(sx.d(var_110.w))
                    zmm15.d = float.s(zx.d(var_120:8.w))
                    zmm1_1.d = zmm1_1.d f- zmm0_2.d
                    zmm15.d = zmm15.d f* zmm10_1.d
                    zmm6.d = float.s(zx.d(var_120:0xc.w))
                    zmm7.d = zmm7.d f/ zmm2_1
                    float zmm3_1 = float.s(zx.d(var_120:0xa.w)) * zmm11_1
                    float zmm5_1 = zmm6.d f* zmm10_1.d
                    zmm7.d = zmm7.d f+ zmm1_1.d
                    zmm6.d = zmm6.d f* zmm2_1
                    zmm10_1.d = float.s(zx.d(var_120:0xe.w))
                    zmm6.d = zmm6.d f+ zmm8.d
                    zmm0_2.d = zmm10_1.d f* zmm11_1
                    zmm11_1 = zmm9.d
                    zmm10_1.d = zmm10_1.d f* zmm2_1
                    int32_t var_180_1 = zmm0_2.d
                    zmm10_1.d = zmm10_1.d f+ zmm7.d
                    
                    if (arg4 != 0)
                        zmm1_1.o = 0x3f800000
                        zmm14.d = float.s(zx.q(r12_1 + 1))
                        zmm0_2.d = float.s(zx.q(var_184_1))
                        zmm1_1.d = 1f f/ zmm0_2.d
                        zmm0_2.d = float.s(zx.q(var_1ac_1))
                        zmm13.d = float.s(zx.q(r12_1))
                        zmm0_2.d = zmm0_2.d f* var_198
                        zmm13.d = zmm13.d f* zmm1_1.d
                        zmm9.d = 1f f/ zmm0_2.d
                        zmm14.d = zmm14.d f* zmm1_1.d
                        zmm11_1 = zmm9.d
                        zmm9.d = zmm9.d f* zmm10_1.d
                        zmm11_1 = zmm11_1 f* zmm7.d
                    
                    int32_t* rcx_21 = arg1[8]
                    zmm1_1.o = zmm8
                    zmm1_1.d = zmm1_1.d f+ zmm8.d
                    float var_1d4_1 = zmm3_1
                    int32_t var_1d0_1 = zmm13.d
                    zmm2_1 = zmm7.d f* rcx_21[2]
                    zmm1_1.d = zmm1_1.d f* *rcx_21
                    float zmm4_1 = zmm8.d f* rcx_21[1]
                    zmm1_1.d = zmm1_1.d f+ zmm2_1
                    float var_1cc_1 = zmm11_1
                    zmm1_1.d = zmm1_1.d f+ rcx_21[4]
                    zmm1_1.d = zmm1_1.d f+ zmm2_1
                    zmm1_1.d = zmm1_1.d f+ rcx_21[4]
                    zmm1_1.d = zmm1_1.d f+ 0.5f
                    int32_t rax_31 = int.d(zmm1_1.d)
                    zmm1_1.o = zmm7
                    zmm1_1.d = zmm1_1.d f+ zmm7.d
                    zmm1_1.d = zmm1_1.d f* rcx_21[3]
                    zmm1_1.d = zmm1_1.d f+ zmm4_1
                    int32_t var_1c0_1 = _mm_cvtepi32_ps(zx.o(rax_31 s>> 1)).d
                    zmm1_1.d = zmm1_1.d f+ rcx_21[5]
                    zmm1_1.d = zmm1_1.d f+ zmm4_1
                    zmm1_1.d = zmm1_1.d f+ rcx_21[5]
                    int64_t* rcx_22 = rdi_1[4].q
                    int64_t rsi_1 = sx.q(rcx_22[1].d)
                    zmm1_1.d = zmm1_1.d f+ 0.5f
                    int32_t rax_35 = (rsi_1 + 1).d
                    zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1.d) s>> 1))
                    rcx_22[1].d = rax_35
                    int32_t var_1bc_1 = zmm0_2.d
                    
                    if (rax_35 s> *(rcx_22 + 0xc))
                        sub_1405c4ec0(rcx_22)
                    
                    int64_t rdx_17 = rsi_1 * 5
                    zmm1_1.o = 0.o
                    int64_t rcx_23 = *rdi_1[4].q
                    float var_1cc_2 = zmm11_1
                    zmm5_1 = zmm5_1 f+ zmm15.d
                    int32_t var_1d0_2 = zmm14.d
                    *(rcx_23 + (rdx_17 << 3)) = zmm15.d.o
                    *(rcx_23 + (rdx_17 << 3) + 0x10) = zmm1_1.o
                    *(rcx_23 + (rdx_17 << 3) + 0x20) = rbx_1.q
                    zmm1_1.o = zmm6
                    *(rdi_1 + 0x64) += 1
                    zmm1_1.d = zmm1_1.d f+ zmm6.d
                    int32_t* rcx_24 = arg1[8]
                    int32_t var_1d4_2 = zmm3_1.d
                    zmm1_1.d = zmm1_1.d f* *rcx_24
                    zmm2_1 = zmm7.d f* rcx_24[2]
                    zmm7.d = zmm7.d f* rcx_24[3]
                    zmm1_1.d = zmm1_1.d f+ zmm2_1
                    zmm1_1.d = zmm1_1.d f+ rcx_24[4]
                    zmm1_1.d = zmm1_1.d f+ zmm2_1
                    zmm1_1.d = zmm1_1.d f+ rcx_24[4]
                    zmm1_1.d = zmm1_1.d f+ 0.5f
                    int32_t rax_37 = int.d(zmm1_1.d)
                    zmm1_1.o = zmm6
                    zmm1_1.d = zmm1_1.d f+ zmm6.d
                    zmm1_1.d = zmm1_1.d f* rcx_24[1]
                    zmm1_1.d = zmm1_1.d f+ zmm7.d
                    int32_t var_1c0_2 = _mm_cvtepi32_ps(zx.o(rax_37 s>> 1)).d
                    zmm1_1.d = zmm1_1.d f+ rcx_24[5]
                    zmm1_1.d = zmm1_1.d f+ zmm7.d
                    zmm1_1.d = zmm1_1.d f+ rcx_24[5]
                    int64_t* rcx_25 = rdi_1[4].q
                    int64_t rsi_2 = sx.q(rcx_25[1].d)
                    zmm1_1.d = zmm1_1.d f+ 0.5f
                    int32_t rax_41 = (rsi_2 + 1).d
                    zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1.d) s>> 1))
                    rcx_25[1].d = rax_41
                    int32_t var_1bc_2 = zmm0_2.d
                    
                    if (rax_41 s> *(rcx_25 + 0xc))
                        sub_1405c4ec0(rcx_25)
                    
                    int64_t rdx_19 = rsi_2 * 5
                    zmm1_1.o = 0x3f800000.o
                    int64_t rcx_26 = *rdi_1[4].q
                    zmm7.d = var_180_1.d f+ zmm3_1
                    *(rcx_26 + (rdx_19 << 3)) = zmm5_1.o
                    int64_t var_1c8_2
                    var_1c8_2.d = 0
                    *(rcx_26 + (rdx_19 << 3) + 0x10) = zmm1_1.o
                    var_1c8_2:4.d = 0x3f800000
                    *(rcx_26 + (rdx_19 << 3) + 0x20) = rbx_1.q
                    zmm1_1.o = zmm10_1
                    *(rdi_1 + 0x64) += 1
                    float* rcx_27 = arg1[8]
                    int32_t var_1d4_3 = zmm7.d
                    int32_t var_1d0_3 = zmm13.d
                    int32_t var_1cc_3 = zmm9.d
                    zmm2_1 = *rcx_27
                    zmm1_1.d = zmm1_1.d f* rcx_27[2]
                    zmm4_1 = zmm10_1.d * rcx_27[3]
                    zmm2_1 = (zmm2_1 + zmm2_1) f* zmm8.d
                    zmm8.d = zmm8.d f+ zmm8.d
                    zmm8.d = zmm8.d f* rcx_27[1]
                    zmm8.d = zmm8.d f+ zmm4_1
                    zmm8.d = zmm8.d f+ rcx_27[5]
                    zmm8.d = zmm8.d f+ zmm4_1
                    zmm8.d = zmm8.d f+ rcx_27[5]
                    int64_t* rcx_28 = rdi_1[4].q
                    int64_t rsi_3 = sx.q(rcx_28[1].d)
                    zmm8.d = zmm8.d f+ 0.5f
                    int32_t var_1c0_3 = _mm_cvtepi32_ps(zx.o(
                        int.d(zmm2_1 f+ zmm1_1.d + rcx_27[4] f+ zmm1_1.d + rcx_27[4] + 0.5f) s>> 1)).d
                    int32_t rax_47 = (rsi_3 + 1).d
                    zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm8.d) s>> 1))
                    rcx_28[1].d = rax_47
                    int32_t var_1bc_3 = zmm0_2.d
                    
                    if (rax_47 s> *(rcx_28 + 0xc))
                        sub_1405c4ec0(rcx_28)
                    
                    int64_t rdx_21 = rsi_3 * 5
                    zmm1_1.o = 0
                    int64_t rcx_29 = *rdi_1[4].q
                    int32_t var_1d4_4 = zmm7.d
                    int32_t var_1d0_4 = zmm14.d
                    int32_t var_1cc_4 = zmm9.d
                    *(rcx_29 + (rdx_21 << 3)) = zmm15.d.o
                    var_1c8_2.d = 0x3f800000
                    *(rcx_29 + (rdx_21 << 3) + 0x10) = 0
                    var_1c8_2:4.d = 0x3f800000
                    *(rcx_29 + (rdx_21 << 3) + 0x20) = rbx_1.q
                    zmm1_1.o = zmm6
                    *(rdi_1 + 0x64) += 1
                    zmm1_1.d = zmm1_1.d f+ zmm6.d
                    int32_t* rcx_30 = arg1[8]
                    zmm6.d = zmm6.d f+ zmm6.d
                    zmm1_1.d = zmm1_1.d f* *rcx_30
                    zmm6.d = zmm6.d f* rcx_30[1]
                    zmm2_1 = zmm10_1.d f* rcx_30[2]
                    zmm10_1.d = zmm10_1.d f* rcx_30[3]
                    zmm1_1.d = zmm1_1.d f+ zmm2_1
                    zmm6.d = zmm6.d f+ zmm10_1.d
                    zmm1_1.d = zmm1_1.d f+ rcx_30[4]
                    zmm6.d = zmm6.d f+ rcx_30[5]
                    zmm1_1.d = zmm1_1.d f+ zmm2_1
                    zmm6.d = zmm6.d f+ zmm10_1.d
                    zmm1_1.d = zmm1_1.d f+ rcx_30[4]
                    zmm6.d = zmm6.d f+ rcx_30[5]
                    int64_t* rcx_31 = rdi_1[4].q
                    zmm1_1.d = zmm1_1.d f+ 0.5f
                    int64_t rsi_4 = sx.q(rcx_31[1].d)
                    zmm6.d = zmm6.d f+ 0.5f
                    int32_t var_1c0_4 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1.d) s>> 1)).d
                    int32_t rax_53 = (rsi_4 + 1).d
                    zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm6.d) s>> 1))
                    rcx_31[1].d = rax_53
                    int32_t var_1bc_4 = zmm0_2.d
                    
                    if (rax_53 s> *(rcx_31 + 0xc))
                        sub_1405c4ec0(rcx_31)
                    
                    int64_t rdx_23 = rsi_4 * 5
                    int64_t rcx_32 = *rdi_1[4].q
                    *(rcx_32 + (rdx_23 << 3)) = zmm5_1.d.o
                    *(rcx_32 + (rdx_23 << 3) + 0x10) = 0x3f800000
                    *(rcx_32 + (rdx_23 << 3) + 0x20) = rbx_1.q
                    int64_t* rsi_5 = *(rdi_1 + 0x48)
                    *(rdi_1 + 0x64) += 1
                    int64_t r14_3 = sx.q(rsi_5[1].d)
                    int32_t rax_55 = (r14_3 + 1).d
                    rsi_5[1].d = rax_55
                    
                    if (rax_55 s> *(rsi_5 + 0xc))
                        sub_1405a4cf0(rsi_5)
                    
                    *(*rsi_5 + (r14_3 << 2)) = r13_3
                    int64_t* rsi_6 = *(rdi_1 + 0x48)
                    *(rdi_1 + 0x68) += 1
                    int64_t r14_4 = sx.q(rsi_6[1].d)
                    int32_t rax_57 = (r14_4 + 1).d
                    rsi_6[1].d = rax_57
                    
                    if (rax_57 s> *(rsi_6 + 0xc))
                        sub_1405a4cf0(rsi_6)
                    
                    *(*rsi_6 + (r14_4 << 2)) = r13_3 + 1
                    int64_t* rsi_7 = *(rdi_1 + 0x48)
                    *(rdi_1 + 0x68) += 1
                    int64_t r14_5 = sx.q(rsi_7[1].d)
                    int32_t rax_59 = (r14_5 + 1).d
                    rsi_7[1].d = rax_59
                    
                    if (rax_59 s> *(rsi_7 + 0xc))
                        sub_1405a4cf0(rsi_7)
                    
                    *(*rsi_7 + (r14_5 << 2)) = r13_3 + 2
                    int64_t* rsi_8 = *(rdi_1 + 0x48)
                    *(rdi_1 + 0x68) += 1
                    int64_t r14_6 = sx.q(rsi_8[1].d)
                    int32_t rax_61 = (r14_6 + 1).d
                    rsi_8[1].d = rax_61
                    
                    if (rax_61 s> *(rsi_8 + 0xc))
                        sub_1405a4cf0(rsi_8)
                    
                    *(*rsi_8 + (r14_6 << 2)) = r13_3 + 1
                    int64_t* rsi_9 = *(rdi_1 + 0x48)
                    *(rdi_1 + 0x68) += 1
                    int64_t r14_7 = sx.q(rsi_9[1].d)
                    int32_t rax_63 = (r14_7 + 1).d
                    rsi_9[1].d = rax_63
                    
                    if (rax_63 s> *(rsi_9 + 0xc))
                        sub_1405a4cf0(rsi_9)
                    
                    *(*rsi_9 + (r14_7 << 2)) = r13_3 + 3
                    int64_t* rsi_10 = *(rdi_1 + 0x48)
                    *(rdi_1 + 0x68) += 1
                    int64_t r14_8 = sx.q(rsi_10[1].d)
                    int32_t rax_65 = (r14_8 + 1).d
                    rsi_10[1].d = rax_65
                    
                    if (rax_65 s> *(rsi_10 + 0xc))
                        sub_1405a4cf0(rsi_10)
                    
                    zmm13 = var_19c_1
                    zmm14 = var_198
                    r12_1 = var_18c_1
                    *(*rsi_10 + (r14_8 << 2)) = r13_3 + 2
                    *(rdi_1 + 0x68) += 1
                    r13_2 = var_188_1
                
                result = zx.q(sx.d(var_110:6.w))
                r14_1 = var_140_1
                rdx_2 = var_138_1
                r8 = var_1ac_1
                zmm12.d = zmm12.d f+ _mm_cvtepi32_ps(zx.o(result.d)).d
            else
                zmm13.d = zmm13.d f+ zmm14.d
                r8 += 1
                var_1ac_1 = r8
                var_19c_1 = zmm13.d
            
            var_1a8_1 -= 4
            r12_1 += 1
            r13_2 -= 6
            var_18c_1 = r12_1
            rdx_2 = &rdx_2[1]
            var_188_1 = r13_2
            var_138_1 = rdx_2
        while (r12_1 u< var_184_1)

return result
