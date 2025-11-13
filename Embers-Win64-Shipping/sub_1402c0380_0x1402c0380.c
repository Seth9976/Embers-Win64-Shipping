// 函数: sub_1402c0380
// 地址: 0x1402c0380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0[0x4]
float zmm2[0x8]

while (true)
    zmm0[0].o = arg27
    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg15[0].q), 0)
    arg27 = zmm0[0].o
    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
    int32_t zmm7[0x8]
    zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
    
    if ((arg7 & 2) == 0)
        goto label_1402c0332
    
label_1402c03b5:
    uint32_t rax_3 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
    zmm2[0].o = arg27
    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_3, 1)
    arg27 = zmm2[0].o
    zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg23)
    
    if ((arg7 & 4) != 0)
        goto label_1402c03e4
    
label_1402c0347:
    zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, zmm7[0].o)
    
    if ((arg7 & 8) != 0)
    label_1402c0417:
        float zmm5[0x8]
        zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
        uint32_t rax_7 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
        zmm2[0].o = arg27
        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_7, 3)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
        
        if ((arg7 & 0x10) != 0)
            break
        
    label_1402c044d:
        
        if ((arg7 & 0x20) == 0)
            if ((arg7 & 0x40) != 0)
                goto label_1402c02b8
            
            goto label_1402c0461
        
        uint32_t rax_399 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_399, 5)
        
        if ((arg7 & 0x40) == 0)
        label_1402c0461:
            
            if (arg7 s< 0)
            label_1402c02d4:
                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                uint32_t rax_403 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_403, 7)
        else
        label_1402c02b8:
            zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm5[0].q), 6)
            
            if (arg7 s< 0)
                goto label_1402c02d4
        
        arg27 = zmm2[0].o
        zmm0[0].o = zmm2[0].o & data_142fc92e0
        zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg21[0].o)
        zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg20[0].o)
        zmm5[0].o ^= arg12[0].o
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg16[0].o)
        zmm0[0].o ^= arg12[0].o
        zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
        zmm7 = _mm256_and_ps(zmm0, arg17)
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm5 = _mm256_and_ps(zmm7, arg18)
        
        if (_mm256_movemask_ps(zmm5) != arg2)
            zmm0 = _mm256_xor_ps(zmm7, arg17)
        
        arg14 = _mm256_blendv_ps(arg14, arg4, zmm7)
        arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg12[0].o)
        arg4 = _mm256_insertf128_ps(zmm5, arg13[0].o, 1)
        zmm7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
        arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm7[0].o)
        arg21[0].o = zx.o(0)
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm7[0].o)
        arg13 = _mm256_insertf128_ps(zmm5, arg13[0].o, 1)
        arg17 = _mm256_and_ps(arg13, zmm0)
        zmm0 = _mm256_and_ps(arg17, arg18)
        arg2 = _mm256_movemask_ps(zmm0)
        
        if (arg2 == 0)
        label_1402c08b8:
            arg15 = arg50
            arg20[0].o = arg43
            zmm7[0].o = arg58
        label_1402c08d3:
            arg15 = _mm256_blendv_ps(arg15, arg14, arg18)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg15[0].q)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg15[0].o, 0x4e)
            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, arg30)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg22[0].o, zmm0[0].o)
            arg4 = _mm256_insertf128_ps(zmm0, arg4[0].o, 1)
            
            if ((arg1 & 1) != 0)
                zmm7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm7[0].o, zx.d(*arg4[0].q), 0)
            
            arg14[0].o = arg42
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
            
            if ((arg1 & 2) == 0)
                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg23)
                
                if ((arg1 & 4) != 0)
                    goto label_1402bf17c
                
                goto label_1402c094d
            
            uint32_t rax_304 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1))
            zmm7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm7[0].o, rax_304, 1)
            arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg23)
            
            if ((arg1 & 4) != 0)
            label_1402bf17c:
                zmm5[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                zmm7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm7[0].o, zx.d(*zmm5[0].q), 2)
                zmm5[0].o = arg28
                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, arg13[0].o)
                
                if ((arg1 & 8) == 0)
                    goto label_1402c0963
                
                goto label_1402bf1a5
            
        label_1402c094d:
            zmm5[0].o = arg28
            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, arg13[0].o)
            
            if ((arg1 & 8) == 0)
            label_1402c0963:
                zmm0 = _mm256_insertf128_ps(zmm0, arg13[0].o, 1)
                
                if ((arg1 & 0x10) != 0)
                    goto label_1402bf1d0
                
                goto label_1402c0972
            
        label_1402bf1a5:
            arg4[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
            uint32_t rax_308 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1))
            zmm7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm7[0].o, rax_308, 3)
            zmm0 = _mm256_insertf128_ps(zmm0, arg13[0].o, 1)
            
            if ((arg1 & 0x10) != 0)
            label_1402bf1d0:
                zmm7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm7[0].o, zx.d(*zmm0[0]), 4)
                
                if ((arg1 & 0x20) == 0)
                    goto label_1402c097b
                
                goto label_1402bf1e4
            
        label_1402c0972:
            
            if ((arg1 & 0x20) == 0)
            label_1402c097b:
                
                if ((arg1 & 0x40) != 0)
                    goto label_1402bf1f5
                
                goto label_1402c0984
            
        label_1402bf1e4:
            uint32_t rax_312 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
            zmm7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm7[0].o, rax_312, 5)
            
            if ((arg1 & 0x40) == 0)
            label_1402c0984:
                arg4 = __return_addr.32
                
                if (arg8.b s< 0)
                label_1402bf216:
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    uint32_t rax_316 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                    zmm7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm7[0].o, rax_316, 7)
            else
            label_1402bf1f5:
                arg4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm7[0].o, zx.d(*arg4[0].q), 6)
                arg4 = __return_addr.32
                
                if (arg8.b s< 0)
                    goto label_1402bf216
            
            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
            zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
            arg17 = _mm256_blendv_ps(arg29, zmm0, arg18)
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, arg26)
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg4[0].o)
            zmm0 = _mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1), arg18)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                arg17 = _mm256_blendv_ps(arg17, arg4, zmm0)
            
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg17[0].q)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg17[0].o, 0x4e)
            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, arg30)
            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg22[0].o, zmm2[0].o)
            arg12 = _mm256_insertf128_ps(arg12, arg4[0].o, 1)
            
            if ((arg1 & 1) != 0)
                arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg20[0].o, zx.d(*arg12[0].q), 0)
            
            arg13[0].o = arg35
            arg22[0].o = arg41
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            
            if ((arg1 & 2) != 0)
                uint32_t rax_34 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg20[0].o, rax_34, 1)
            
            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg23)
            
            if ((arg1 & 4) != 0)
                zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg20[0].o, zx.d(*zmm2[0].q), 2)
            
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, arg4[0].o)
            arg58 = zmm7[0].o
            zmm7 = arg15
            
            if ((arg1 & 8) != 0)
                arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                uint32_t rax_38 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg20[0].o, rax_38, 3)
            
            arg12 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            
            if ((arg1 & 0x10) != 0)
                arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg20[0].o, zx.d(*arg12[0].q), 4)
            
            arg16 = zmm7
            zmm0[0].o = arg58
            zmm2[0].o = zmm0[0].o & data_142fc92e0
            
            if ((arg1 & 0x20) == 0)
                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                
                if ((arg1 & 0x40) != 0)
                    goto label_1402bf24b
                
                goto label_1402c0aca
            
            uint16_t rax_318[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
            arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg20[0].o, rax_318, 5)
            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
            
            if ((arg1 & 0x40) == 0)
            label_1402c0aca:
                arg4[0].o = arg25
                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg21[0].o)
                
                if (arg8.b s< 0)
                label_1402bf272:
                    arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    uint16_t rax_322[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                    arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg20[0].o, rax_322, 7)
            else
            label_1402bf24b:
                arg4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg20[0].o, zx.d(*arg4[0].q), 6)
                arg4[0].o = arg25
                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg21[0].o)
                
                if (arg8.b s< 0)
                    goto label_1402bf272
            
            arg12 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            zmm0[0].o = arg20[0].o & data_142fc92e0
            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg21[0].o)
            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
            zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
        label_1402c0afc:
            arg35 = arg13[0].o
            arg43 = arg20[0].o
            zmm0[0].o = zx.o(0)
            zmm7[0].o = arg45
            arg21 = arg62
            
            if (*(arg6 + 0x918) != 1)
                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                arg4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4[0].o)
                arg4[0].o = data_142d3f5b0
                zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
                zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4[0].o)
                arg4[0].o = arg25
                zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                zmm2 = arg68
                arg12 = _mm256_sub_ps(zmm2, _mm256_cvtepi32_ps(arg12))
                zmm0 = _mm256_div_ps(arg12, _mm256_cvtepi32_ps(zmm0))
            
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            arg23.32 = _mm256_blendv_ps(arg12, zmm0, arg18)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            arg13 = arg61
        label_1402c0b95:
            arg15[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg22[0].o, zmm7[0].o, 0x88)
            zmm7 = _mm256_insertf128_ps(arg21, arg4[0].o, 1)
            arg19 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg34, arg49, 1)
            arg34[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            arg12[0].o = data_142d3f5b0
            arg34[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg34[0].o, arg12[0].o)
            arg12[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg12, arg34[0].o, 1), arg63)
            zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm2, data_143442540, zmm0)
            arg12[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
            arg21 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            arg20 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
            arg22[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            uint64_t r11 = zx.q(arg3.d)
            arg29 = arg17
            arg50 = arg16
            arg26.32 = arg19
            __return_addr.32 = arg20
            arg30.32 = zmm7
            float arg_480[0x8]
            float arg_4a0[0x8]
            float arg_4c0[0x8]
            
            if (arg3.d u> 6)
            label_1402c0df0:
                arg20[0].o = zx.o(0)
                arg_4c0 = arg20
                arg_4a0 = arg20
                arg_480 = arg20
                arg12[0].o = zx.o(0)
                arg19[0].o = zx.o(0)
                zmm7[0].o = arg40
            else
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg16[0].o, arg37)
                arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg22[0].o, zmm5[0].o)
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                arg18 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm2 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                
                switch (r11)
                    case 0, 1
                        zmm0[0].o = _mm256_extractf128_ps(arg19[0].o, 1)
                        arg12[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
                        arg4[0].o = arg14[0].o
                        arg14 = zmm7
                        zmm7[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                        arg13[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg18[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm5[0].o)
                        arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm5[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg18[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg21[0].o, zmm5[0].o)
                        zmm7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                        zmm7[0].o = arg40
                        arg14[0].o = arg4[0].o
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                        arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, zmm2[0].o)
                        arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg20[0].o, arg12[0].o)
                        int64_t rdi = arg12[0].q
                        int64_t r9_1 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                        double r14_1 = zmm0[0]
                        int64_t r10_1 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rsi_1 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        int64_t rcx = zmm5[0].q
                        int64_t rax_43 = arg13[0].q
                        int64_t rdx = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                        int32_t* rbx = *(arg6 + 0x900)
                        zmm0[0].o = *(rbx + rcx)
                        arg12[0].o = *(rbx + rcx + 4)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx + rsi_1), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx + rax_43), 0x20)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx + rdx), 0x30)
                        zmm2[0].o = *(rbx + rdi)
                        arg13[0].o = *(rbx + rdi + 4)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx + r9_1), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx i+ r14_1), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx + r10_1), 0x30)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(rbx + rsi_1 + 4), 0x10)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(rbx + rax_43 + 4), 0x20)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, *(rbx + rdx + 4), 0x30)
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx + r9_1 + 4), 0x10)
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx i+ r14_1 + 4), 0x20)
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx + r10_1 + 4), 0x30)
                        arg19 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        arg12 = _mm256_insertf128_ps(arg13, arg12[0].o, 1)
                        zmm0[0].o = *(rbx + rdi + 8)
                        zmm2[0].o = *(rbx + rcx + 8)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx + rsi_1 + 8), 0x10)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx + rax_43 + 8), 0x20)
                        zmm2[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx + rdx + 8), 0x30)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx + r9_1 + 8), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx i+ r14_1 + 8), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx + r10_1 + 8), 0x30)
                        arg20 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    case 2
                        zmm0[0].o = _mm256_extractf128_ps(arg19[0].o, 1)
                        arg12[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
                        arg13[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                        zmm7[0].o = _mm256_extractf128_ps(arg18[0].o, 1)
                        arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm7[0].o)
                        arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg18[0].o)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg21[0].o, zmm5[0].o)
                        zmm7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                        arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, zmm2[0].o)
                        arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg20[0].o, arg12[0].o)
                        int64_t rcx_1 = arg12[0].q
                        int64_t r15 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                        double rbx_1 = zmm0[0]
                        int64_t rdi_1 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t r10_2 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        int64_t rax_44 = zmm5[0].q
                        int64_t r14_2 = arg13[0].q
                        int64_t r9_2 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                        uint16_t* rsi_2 = *(arg6 + 0x900)
                        zmm0[0].o = zx.o(*(rsi_2 + rcx_1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_2 + r15), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_2 i+ rbx_1), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_2 + rdi_1), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_2 + rax_44), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_2 + r10_2), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_2 + r14_2), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rsi_2 + r9_2), 7)
                        arg12[0].o = zx.o(*(rsi_2 + rcx_1 + 2))
                        arg12[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rsi_2 + r15 + 2), 1)
                        arg12[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rsi_2 i+ rbx_1 + 2), 2)
                        arg12[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rsi_2 + rdi_1 + 2), 3)
                        arg12[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rsi_2 + rax_44 + 2), 4)
                        arg12[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rsi_2 + r10_2 + 2), 5)
                        arg12[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rsi_2 + r14_2 + 2), 6)
                        arg12[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rsi_2 + r9_2 + 2), 7)
                        zmm2[0].o = zx.o(*(rsi_2 + rcx_1 + 4))
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_2 + r15 + 4), 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_2 i+ rbx_1 + 4), 2)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_2 + rdi_1 + 4), 3)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_2 + rax_44 + 4), 4)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_2 + r10_2 + 4), 5)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_2 + r14_2 + 4), 6)
                        arg13[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                        zmm5[0].o = zx.o(0)
                        zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                        zmm7[0].o = data_1434424d0
                        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
                        arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm7[0].o)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg13, zmm0[0].o, 1))
                        arg13 = data_1434424e0
                        arg4 = arg15
                        arg15 = arg13
                        zmm0 = _mm256_div_ps(zmm0, arg13)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rsi_2 + r9_2 + 4), 7)
                        arg13[0].o = __vpmovzxwd_xmmdq_xmmq(arg12[0].q)
                        arg12[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg12[0].o, zx.o(0))
                        arg12[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm7[0].o)
                        arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm7[0].o)
                        arg12 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg13, arg12[0].o, 1)), arg15)
                        arg13[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                        zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                        arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm7[0].o)
                        zmm7[0].o = arg40
                        zmm2 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg13, zmm2[0].o, 1)), arg15)
                        arg15 = arg4
                        arg13 = data_143442560
                        arg19 = _mm256_mul_ps(zmm0, arg13)
                        arg12 = _mm256_mul_ps(arg12, arg13)
                        arg20 = _mm256_mul_ps(zmm2, arg13)
                    case 3
                        int32_t* rbx_2 = *(arg6 + 0x900)
                        zmm0[0].o = *(rbx_2 + arg48)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_2 + arg54), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_2 + arg9), 0x20)
                        arg12[0].o = *(rbx_2 + arg48 + 4)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_2 + arg5), 0x30)
                        arg13[0].o = *(rbx_2 + arg47)
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx_2 + arg55), 0x10)
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx_2 + arg60), 0x20)
                        zmm5[0].o = *(rbx_2 + arg47 + 4)
                        arg13[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx_2 + arg11), 0x30)
                        arg4 = arg19
                        arg19 = _mm256_insertf128_ps(arg13, zmm0[0].o, 1)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                            *(rbx_2 + arg54 + 4), 0x10)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_2 + arg9 + 4), 0x20)
                        zmm0[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_2 + arg5 + 4), 0x30)
                        arg12[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_2 + arg55 + 4), 0x10)
                        arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                            *(rbx_2 + arg60 + 4), 0x20)
                        arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                            *(rbx_2 + arg11 + 4), 0x30)
                        arg13[0].o = *(rbx_2 + arg47 + 8)
                        zmm5[0].o = *(rbx_2 + arg48 + 8)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_2 + arg54 + 8), 0x10)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_2 + arg9 + 8), 0x20)
                        zmm5[0].o =
                            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_2 + arg5 + 8), 0x30)
                        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                            *(rbx_2 + arg55 + 8), 0x10)
                        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                            *(rbx_2 + arg60 + 8), 0x20)
                        zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                        arg49.32 = zmm0
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                            *(rbx_2 + arg11 + 8), 0x30)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                        arg34 = zmm0
                        zmm0[0].o = *(rbx_2 + arg47 + 0xc)
                        arg12[0].o = *(rbx_2 + arg48 + 0xc)
                        arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                            *(rbx_2 + arg54 + 0xc), 0x10)
                        arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                            *(rbx_2 + arg9 + 0xc), 0x20)
                        arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                            *(rbx_2 + arg5 + 0xc), 0x30)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(rbx_2 + arg55 + 0xc), 0x10)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(rbx_2 + arg60 + 0xc), 0x20)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(rbx_2 + arg11 + 0xc), 0x30)
                        arg13[0].o = *(rbx_2 + arg47 + 0x10)
                        zmm5[0].o = *(rbx_2 + arg48 + 0x10)
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(rbx_2 + arg54 + 0x10), 0x10)
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(rbx_2 + arg9 + 0x10), 0x20)
                        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                            *(rbx_2 + arg5 + 0x10), 0x30)
                        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                            *(rbx_2 + arg55 + 0x10), 0x10)
                        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                            *(rbx_2 + arg60 + 0x10), 0x20)
                        arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                            *(rbx_2 + arg11 + 0x10), 0x30)
                        arg17[0].o = arg14[0].o
                        arg14 = _mm256_insertf128_ps(zmm0, arg12[0].o, 1)
                        arg16 = _mm256_insertf128_ps(arg13, zmm5[0].o, 1)
                        zmm0[0].o = *(rbx_2 + arg47 + 0x14)
                        arg13[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                        zmm5[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                        arg12 = zmm7
                        zmm7[0].o = _mm256_extractf128_ps(arg18[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm7[0].o)
                        zmm7[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm5[0].o)
                        zmm7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                        arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm7[0].o)
                        zmm7[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
                        arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg13[0].o)
                        zmm7[0].o = *(rbx_2 + arg48 + 0x14)
                        zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                            *(rbx_2 + arg54 + 0x14), 0x10)
                        zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                            *(rbx_2 + arg9 + 0x14), 0x20)
                        zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                            *(rbx_2 + arg5 + 0x14), 0x30)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(rbx_2 + arg55 + 0x14), 0x10)
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(rbx_2 + arg60 + 0x14), 0x20)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm2[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg20[0].o, zmm2[0].o)
                        int64_t rax_46 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rcx_4 = zmm2[0].q
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                            *(rbx_2 + arg11 + 0x14), 0x30)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg18[0].o)
                        zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg21[0].o, zmm2[0].o)
                        int64_t rdx_4 = arg13[0].q
                        int64_t rdi_3 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                        int64_t r10_3 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t r9_4 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                        int64_t rsi_4 = zmm2[0].q
                        zmm2[0].o = zx.o(*(rbx_2 + rcx_4))
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_2 + rax_46), 1)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_2 + rdx_4), 2)
                        zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_2 + rdi_3), 3)
                        int64_t rax_47 = zmm5[0].q
                        arg13[0].o = zx.o(*(rbx_2 + rsi_4))
                        arg13[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx_2 + r10_3), 1)
                        arg13[0].o =
                            __vpinsrd_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx_2 + rax_47), 2)
                        arg13[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg13[0].o, *(rbx_2 + r9_4), 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
                        zmm5 = __vandps_ymmqq_ymmqq_memqq(
                            _mm256_insertf128_ps(zmm2, arg13[0].o, 1), data_143442420)
                        zmm7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg12[0].o = data_143442490
                        zmm7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg12[0].o)
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                        zmm5 = __vdivps_ymmqq_ymmqq_memqq(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, zmm7[0].o, 1)), 
                            data_1434424a0)
                        arg12 = _mm256_mul_ps(arg14, zmm5)
                        zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                        arg19 = _mm256_add_ps(arg19, arg12)
                        arg12[0].o = __vpsrld_xmmdq_xmmdq_immb(arg13[0].o, 0xa)
                        zmm7[0].o = data_143442480
                        arg12[0].o &= zmm7[0].o
                        arg14[0].o = data_143442440
                        arg12[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg14[0].o)
                        zmm5[0].o &= zmm7[0].o
                        zmm7[0].o = arg40
                        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg14[0].o)
                        arg12 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm5, arg12[0].o, 1))
                        zmm5 = data_143442460
                        arg12 = _mm256_mul_ps(arg16, _mm256_div_ps(arg12, zmm5))
                        arg16 = arg50
                        arg12 = __vaddps_ymmqq_ymmqq_memqq(arg12, arg49.32)
                        zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                        arg13[0].o = __vpsrld_xmmdq_xmmdq_immb(arg13[0].o, 0x15)
                        arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                        arg14[0].o = arg17[0].o
                        arg17 = arg29
                        zmm2 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, arg13[0].o, 1)), zmm5)
                        zmm0 = _mm256_mul_ps(zmm0, zmm2)
                        arg20 = __vaddps_ymmqq_ymmqq_memqq(zmm0, arg34)
                    case 4, 5, 6
                        goto label_1402c0df0
                
                arg_480 = arg19
                arg_4a0 = arg12
                arg_4c0 = arg20
            
            zmm7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, arg14[0].o, 0x88)
            zmm2[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg22[0].o, zmm2[0].o)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            zmm0[0].o ^= zmm5[0].o
            arg4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg17[0].o)
            arg13[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            arg4[0].o ^= zmm5[0].o
            arg18 = _mm256_insertf128_ps(arg4, zmm0[0].o, 1)
            int32_t arg_340[0x4]
            
            if (_mm256_movemask_ps(arg18) != 0)
                double arg_5c0[0x4]
                float arg_5e0[0x8]
                
                if (arg3.d u> 6)
                label_1402c1670:
                    zmm0[0].o = zx.o(0)
                    arg_5c0 = _mm256_maskstore_ps(arg18, zmm0)
                    arg_5e0 = _mm256_maskstore_ps(arg18, zmm0)
                else
                    arg12[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg17[0].o, arg37)
                    zmm2[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm2[0].o, arg28)
                    arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    arg20 = _mm256_insertf128_ps(arg4, zmm2[0].o, 1)
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                    arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                    arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                    arg4 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                    
                    switch (r11)
                        case 0, 1
                            arg14 = arg26.32
                            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg19[0].o = zmm7[0].o
                            zmm7 = __return_addr.32
                            arg12[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                            arg16 = arg30.32
                            zmm2[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                            arg13[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                            zmm5[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg20[0].o)
                            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg21[0].o, arg13[0].o)
                            zmm2 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                            arg13[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg4[0].o)
                            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg12[0].o)
                            zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                            arg12[0].o = _mm_permute_ps(arg18[0].o, 0x50)
                            arg4[0].o = _mm_permute_ps(arg18[0].o, 0xfa)
                            arg4 = _mm256_insertf128_ps(arg12, arg4[0].o, 1)
                            arg12[0].o = _mm256_extractf128_ps(arg18[0].o, 1)
                            arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                            zmm0 = _mm256_blendv_ps(arg17, zmm0, arg4)
                            arg13[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                            arg12[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                            arg13 = _mm256_insertf128_ps(arg13, arg12[0].o, 1)
                            zmm2 = _mm256_blendv_ps(arg17, zmm2, arg13)
                            double r9_5 = zmm0[0]
                            int64_t r11_1 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            float* rcx_5 = *(arg6 + 0x900)
                            void* rsi_5 = rcx_5 i+ r9_5
                            void* r15_1 = rcx_5 + r11_1
                            arg16 = arg15
                            arg15[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t r14_3 = zmm2[0].q
                            void* rdx_5 = rcx_5 + r14_3
                            int64_t r10_4 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            void* rax_51 = rcx_5 + r10_4
                            zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            arg14 = _mm256_broadcast_sd(1.9762625833649862e-323)
                            zmm0 = _mm256_blendv_ps(arg17, arg14, arg13)
                            zmm2[0].o = *(zmm0[0] + rdx_5)
                            float* rbx_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            int64_t r12 = zmm5[0].q
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(rbx_3 + rax_51), 0x10)
                            zmm7 = _mm256_broadcast_sd(3.9525251667299724e-323)
                            arg13 = _mm256_blendv_ps(arg17, zmm7, arg13)
                            arg12[0].o = *(arg13[0].q + rdx_5)
                            float* rdx_6 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(rdx_6 + rax_51), 0x10)
                            void* rax_52 = rcx_5 + r12
                            int64_t rdx_7 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(zmm0[0] + rax_52), 0x20)
                            arg13[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(arg13[0].q + rax_52), 0x20)
                            void* rax_53 = rcx_5 + rdx_7
                            float* rbx_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(rbx_7 + rax_53), 0x30)
                            float* rbx_8 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(rbx_8 + rax_53), 0x30)
                            int64_t rdi_5 = arg15[0].q
                            zmm2 = _mm256_blendv_ps(arg17, arg14, arg4)
                            arg13[0].o = *(zmm2[0].q + rsi_5)
                            arg4 = _mm256_blendv_ps(arg17, zmm7, arg4)
                            zmm7[0].o = arg19[0].o
                            zmm5[0].o = *(arg4[0].q + rsi_5)
                            void* rsi_6 = rcx_5 + rdi_5
                            float* rbx_11 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                *(rbx_11 + r15_1), 0x10)
                            float* rbx_12 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rbx_12 + r15_1), 0x10)
                            int64_t rbx_13 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            arg15 = arg16
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                *(zmm2[0].q + rsi_6), 0x20)
                            arg4[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(arg4[0].q + rsi_6), 0x20)
                            void* rax_56 = rcx_5 + rbx_13
                            float* rsi_7 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                *(rsi_7 + rax_56), 0x30)
                            float* rsi_8 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                            arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rsi_8 + rax_56), 0x30)
                            arg13[0].o = *(rcx_5 i+ r9_5)
                            zmm5[0].o = *(rcx_5 + r14_3)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_5 + r10_4), 0x10)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_5 + r12), 0x20)
                            zmm5[0].o =
                                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_5 + rdx_7), 0x30)
                            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                *(rcx_5 + r11_1), 0x10)
                            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                *(rcx_5 + rdi_5), 0x20)
                            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                *(rcx_5 + rbx_13), 0x30)
                            arg_5c0 = _mm256_maskstore_ps(arg18, 
                                _mm256_insertf128_ps(arg13, zmm5[0].o, 1))
                            arg_5e0 =
                                _mm256_maskstore_ps(arg18, _mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                            zmm0 = _mm256_insertf128_ps(arg4, arg12[0].o, 1)
                        case 2
                            zmm2 = arg30.32
                            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            arg12[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                            arg12[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg20[0].o)
                            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg21[0].o, arg12[0].o)
                            arg13 = arg26.32
                            zmm2[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                            arg12[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                            zmm5 = __return_addr.32
                            zmm2[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg4[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                            arg12 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                            zmm2[0].o = _mm_permute_ps(arg18[0].o, 0x50)
                            arg4[0].o = _mm_permute_ps(arg18[0].o, 0xfa)
                            arg4 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg18[0].o, 1)
                            arg16[0].o = zmm7[0].o
                            zmm7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                            zmm5 = _mm256_blendv_ps(zmm7, arg12, arg4)
                            arg12[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                            arg13 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                            arg12 = _mm256_blendv_ps(zmm7, zmm0, arg13)
                            int64_t r9_6 = zmm5[0].q
                            uint16_t* rax_57 = *(arg6 + 0x900)
                            void* rbx_14 = rax_57 + r9_6
                            int64_t r8 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            void* r14_4 = rax_57 + r8
                            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            int64_t r10_5 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2 = _mm256_broadcast_sd(9.8813129168249309e-324)
                            arg14 = _mm256_blendv_ps(zmm7, zmm2, arg4)
                            zmm5 = _mm256_blendv_ps(zmm7, zmm2, arg13)
                            double r15_2 = zmm0[0]
                            void* rdx_8 = arg14[0].q
                            int64_t rcx_6 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            int64_t r11_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2 = _mm256_broadcast_sd(1.9762625833649862e-323)
                            arg4 = _mm256_blendv_ps(zmm7, zmm2, arg4)
                            zmm2 = _mm256_blendv_ps(zmm7, zmm2, arg13)
                            zmm7[0].o = arg16[0].o
                            arg13[0].o = zx.o(*(rdx_8 + rbx_14))
                            arg13[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(rcx_6 + r14_4), 1)
                            double rsi_9 = zmm0[0]
                            void* rdx_10 = arg4[0].q
                            uint16_t* rcx_7 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                            zmm0[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                            uint16_t* rdi_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            double rbx_15 = zmm0[0]
                            zmm0[0].o = zx.o(*(rdx_10 + rbx_14))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rcx_7 + r14_4), 1)
                            void* rcx_8 = rax_57 i+ r15_2
                            void* rdx_12 = rax_57 + r10_5
                            arg4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(rsi_9 i+ rcx_8), 2)
                            int64_t r14_5 = arg12[0].q
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rbx_15 i+ rcx_8), 2)
                            void* rcx_9 = rax_57 + r14_5
                            int64_t rbx_16 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                            arg4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, *(r11_2 + rdx_12), 3)
                            arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                            arg4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, *(zmm5[0].q + rcx_9), 4)
                            int64_t rsi_11 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_6 + rdx_12), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rcx_9), 4)
                            int64_t rcx_10 = arg12[0].q
                            void* rdx_14 = rax_57 + rbx_16
                            int64_t rdi_7 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            arg12[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, *(rdi_7 + rdx_14), 5)
                            int64_t rdi_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_8 + rdx_14), 5)
                            void* rdx_15 = rax_57 + rcx_10
                            arg4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                            arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                *(arg4[0].q + rdx_15), 6)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(zmm2[0].q + rdx_15), 6)
                            void* rdx_16 = rax_57 + rsi_11
                            int64_t rdi_11 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                            arg12[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rdi_11 + rdx_16), 7)
                            uint16_t* rdi_12 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(rdi_12 + rdx_16), 7)
                            zmm2[0].o = zx.o(*(rax_57 + r9_6))
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_57 + r8), 1)
                            arg3 = arg33
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_57 i+ r15_2), 2)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_57 + r10_5), 3)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_57 + r14_5), 4)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_57 + rbx_16), 5)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_57 + rcx_10), 6)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(rax_57 + rsi_11), 7)
                            arg4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                            zmm5[0].o = data_1434424d0
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                            arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
                            zmm2 = _mm256_insertf128_ps(arg4, zmm2[0].o, 1)
                            arg4[0].o = __vpmovzxwd_xmmdq_xmmq(arg12[0].q)
                            arg12[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg12[0].o, zx.o(0))
                            arg12[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm5[0].o)
                            arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
                            arg12 = _mm256_insertf128_ps(arg4, arg12[0].o, 1)
                            arg4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                            arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
                            zmm0 = _mm256_insertf128_ps(arg4, zmm0[0].o, 1)
                            zmm2 = _mm256_cvtepi32_ps(zmm2)
                            arg4 = data_1434424e0
                            zmm2 = _mm256_div_ps(zmm2, arg4)
                            arg13 = data_143442560
                            arg_5c0 = _mm256_maskstore_ps(arg18, _mm256_mul_ps(zmm2, arg13))
                            arg_5e0 = _mm256_maskstore_ps(arg18, 
                                _mm256_mul_ps(_mm256_div_ps(_mm256_cvtepi32_ps(arg12), arg4), 
                                    arg13))
                            zmm0 =
                                _mm256_mul_ps(_mm256_div_ps(_mm256_cvtepi32_ps(zmm0), arg4), arg13)
                        case 3
                            arg12 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg53, arg36, 1)
                            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg17[0].o)
                            zmm2[0].o ^= arg13[0].o
                            arg19 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                            zmm0 = _mm256_and_ps(arg19, arg12)
                            int64_t rax_59 = sx.q(zmm0[0].d)
                            int32_t* rcx_11 = *(arg6 + 0x900)
                            void* r8_1 = rcx_11 + rax_59
                            int32_t temp0_564 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                            arg12[0].o = *(rcx_11 + rax_59)
                            int64_t r15_3 = sx.q(temp0_564)
                            void* r10_6 = rcx_11 + r15_3
                            int64_t rsi_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            void* rdx_18 = rcx_11 + rsi_12
                            int64_t rax_60 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            void* r9_7 = rcx_11 + rax_60
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            int64_t rcx_16 = sx.q(zmm0[0].d)
                            void* r14_6 = rcx_11 + rcx_16
                            zmm2[0].o = *(rcx_11 + rcx_16)
                            int64_t rbx_17 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            void* r11_3 = rcx_11 + rbx_17
                            int64_t r12_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t rdi_14 = *(arg6 + 0x900) + r12_1
                            int32_t temp0_570 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(*(arg6 + 0x900) + rbx_17), 0x10)
                            int64_t rbx_18 = sx.q(temp0_570)
                            int64_t r13_1 = *(arg6 + 0x900) + rbx_18
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(*(arg6 + 0x900) + r12_1), 0x20)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(*(arg6 + 0x900) + rbx_18), 0x30)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(*(arg6 + 0x900) + r15_3), 0x10)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(*(arg6 + 0x900) + rsi_12), 0x20)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(*(arg6 + 0x900) + rax_60), 0x30)
                            zmm2 = __vandps_ymmqq_ymmqq_memqq(arg19, data_142fc9520)
                            uint64_t rax_61 = zx.q(zmm2[0])
                            uint64_t r15_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                            uint64_t r12_2 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                            uint64_t rsi_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                            arg13[0].o = *(rax_61 + r8_1)
                            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm5[0].o = *(zx.q(zmm2[0]) + r14_6)
                            uint64_t rax_63 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                            uint64_t rbx_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                            arg36[0] = r11_3
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rax_63 + r11_3), 0x10)
                            uint64_t rax_64 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rbx_19 + rdi_14), 0x20)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(rax_64 + r13_1), 0x30)
                            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                *(r15_4 + r10_6), 0x10)
                            arg28[0].q = rdx_18
                            arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                *(r12_2 + rdx_18), 0x20)
                            zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                            arg34 = zmm0
                            arg25[0] = r9_7
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                *(rsi_13 + r9_7), 0x30)
                            arg49.32 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg19, data_142fc9540)
                            uint64_t rax_65 = zx.q(zmm0[0].d)
                            float* r15_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            float* r12_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            float* rsi_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            arg12[0].o = *(rax_65 + r8_1)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm2[0].o = *(zx.q(zmm0[0].d) + r14_6)
                            uint64_t rax_67 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            uint64_t rbx_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(rax_67 + r11_3), 0x10)
                            uint64_t rax_68 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(rbx_20 + rdi_14), 0x20)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rax_68 + r13_1), 0x30)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(r15_5 + r10_6), 0x10)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(r12_3 + rdx_18), 0x20)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(rsi_14 + r9_7), 0x30)
                            arg40.32 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                            zmm0 = __vandps_ymmqq_ymmqq_memqq(arg19, data_1434423c0)
                            arg17[0].o = *(zx.q(zmm0[0].d) + r8_1)
                            uint64_t rax_70 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            uint64_t rax_71 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            arg54 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            arg12[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            arg53[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                            arg16 = __vandps_ymmqq_ymmqq_memqq(arg19, data_1434423e0)
                            zmm0[0].o = *(zx.q(arg16[0]) + r8_1)
                            arg_340 = zmm0[0].o
                            arg22 = arg15
                            arg15 = __vandps_ymmqq_ymmqq_memqq(arg19, data_143442400)
                            int32_t* rax_75 = zx.q(arg15[0])
                            arg14 = arg30.32
                            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            zmm2[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm2[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm5[0].o = *(rax_75 + r8_1)
                            uint64_t rsi_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                            int32_t* rdx_19 = zx.q(arg12[0])
                            uint64_t rdi_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                            zmm0[0].o = *(rdx_19 + r14_6)
                            arg45.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 1))
                            arg62[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 2))
                            arg61[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 3))
                            arg12[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                            uint64_t r8_2 = zx.q(arg12[0])
                            uint64_t r9_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                            uint64_t r10_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                            uint64_t r11_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                            float* rbx_21 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 1))
                            uint64_t r15_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 2))
                            uint64_t r14_7 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 3))
                            arg12[0].o = *(r8_2 + r14_6)
                            zmm2[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            uint64_t r8_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                            uint64_t rcx_30 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                            uint64_t rdx_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                            zmm2[0].o = *(zx.q(zmm2[0]) + r14_6)
                            uint32_t* r12_5 = *(arg6 + 0x900)
                            double rax_77 = arg36[0]
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(arg53[0].q i+ rax_77), 0x10)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(r9_8 i+ rax_77), 0x10)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(r8_3 i+ rax_77), 0x10)
                            arg3 = arg33
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rsi_15 + rdi_14), 0x20)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(r10_7 + rdi_14), 0x20)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(rcx_30 + rdi_14), 0x20)
                            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                *(rdi_15 + r13_1), 0x30)
                            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                *(r11_4 + r13_1), 0x30)
                            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                *(rdx_20 + r13_1), 0x30)
                            arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg20[0].o)
                            arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg21[0].o, arg14[0].o)
                            arg15 = arg26.32
                            arg19[0].o = zmm7[0].o
                            zmm7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            arg13 = _mm256_insertf128_ps(arg14, arg13[0].o, 1)
                            arg14[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                            arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg14[0].o)
                            arg16 = __return_addr.32
                            zmm7[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                            arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg14[0].o)
                            arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg4[0].o)
                            arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg4[0].o)
                            arg4 = _mm256_insertf128_ps(arg4, arg14[0].o, 1)
                            arg14[0].o = _mm_permute_ps(arg18[0].o, 0x50)
                            zmm7[0].o = _mm_permute_ps(arg18[0].o, 0xfa)
                            arg14 = _mm256_insertf128_ps(arg14, zmm7[0].o, 1)
                            arg15[0].o = zx.o(0)
                            arg4 = _mm256_blendv_ps(arg15, arg4, arg14)
                            arg14[0].o = _mm256_extractf128_ps(arg18[0].o, 1)
                            zmm7[0].o = _mm_permute_ps(arg14[0].o, 0x50)
                            arg14[0].o = _mm_permute_ps(arg14[0].o, 0xfa)
                            arg14 = _mm256_insertf128_ps(zmm7, arg14[0].o, 1)
                            arg13 = _mm256_blendv_ps(arg15, arg13, arg14)
                            arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg17[0].o, 
                                *(rax_70 + r10_6), 0x10)
                            zmm7[0].o = arg_340
                            zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                *(arg45.q + r10_6), 0x10)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(rbx_21 + r10_6), 0x10)
                            int64_t rax_81 = arg28[0].q
                            arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                *(rax_71 + rax_81), 0x20)
                            int64_t rcx_34 = arg25[0]
                            arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                *(arg54 + rcx_34), 0x30)
                            zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                *(arg62[0] + rax_81), 0x20)
                            arg10 = arg46
                            zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                *(arg61[0].q + rcx_34), 0x30)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(r15_6 + rax_81), 0x20)
                            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                *(r14_7 + rcx_34), 0x30)
                            int64_t rax_82 = arg4[0].q
                            int64_t rcx_35 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                            arg4[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                            int64_t rdx_24 = arg4[0].q
                            int64_t rbx_22 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                            arg4[0].o = zx.o(*(r12_5 + rax_82))
                            int64_t rax_83 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            arg4[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg4[0].o, *(r12_5 + rcx_35), 1)
                            int64_t rcx_36 = arg13[0].q
                            arg13[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            arg4[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg4[0].o, *(r12_5 + rdx_24), 2)
                            int64_t rdx_25 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                            arg4[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg4[0].o, *(r12_5 + rbx_22), 3)
                            int64_t rbx_23 = arg13[0].q
                            arg13[0].o = zx.o(*(r12_5 + rcx_36))
                            arg13[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg13[0].o, *(r12_5 + rax_83), 1)
                            arg13[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg13[0].o, *(r12_5 + rbx_23), 2)
                            arg13[0].o =
                                __vpinsrd_xmmdq_xmmdq_memd_immb(arg13[0].o, *(r12_5 + rdx_25), 3)
                            arg17 = _mm256_insertf128_ps(arg14, zmm0[0].o, 1)
                            arg16 = _mm256_insertf128_ps(zmm7, arg12[0].o, 1)
                            arg15 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                            zmm2 = _mm256_insertf128_ps(arg4, arg13[0].o, 1)
                            zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg4[0].o, 0xa)
                            zmm2 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_143442420)
                            zmm7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm0[0].o = data_143442490
                            zmm7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm0[0].o)
                            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm7[0].o, 1)
                            zmm7[0].o = __vpsrld_xmmdq_xmmdq_immb(arg13[0].o, 0xa)
                            zmm0[0].o = data_143442480
                            zmm7[0].o &= zmm0[0].o
                            arg12[0].o = data_143442440
                            arg14[0].o = arg12[0].o
                            zmm7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg12[0].o)
                            zmm5[0].o &= zmm0[0].o
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                            zmm5 = _mm256_insertf128_ps(zmm5, zmm7[0].o, 1)
                            zmm7[0].o = arg19[0].o
                            zmm2 =
                                __vdivps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), data_1434424a0)
                            zmm5 = _mm256_cvtepi32_ps(zmm5)
                            zmm0 = data_143442460
                            zmm5 = _mm256_div_ps(zmm5, zmm0)
                            zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg17, zmm2), arg34)
                            arg12 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg16, zmm5), arg49.32)
                            arg4[0].o = __vpsrld_xmmdq_xmmdq_immb(arg4[0].o, 0x15)
                            arg13[0].o = __vpsrld_xmmdq_xmmdq_immb(arg13[0].o, 0x15)
                            arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                            arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg14[0].o)
                            arg4 = _mm256_insertf128_ps(arg4, arg13[0].o, 1)
                            arg_5c0 = _mm256_maskstore_ps(arg18, zmm2)
                            zmm0 =
                                _mm256_mul_ps(arg15, _mm256_div_ps(_mm256_cvtepi32_ps(arg4), zmm0))
                            arg15 = arg22
                            arg_5e0 = _mm256_maskstore_ps(arg18, arg12)
                            zmm0 = __vaddps_ymmqq_ymmqq_memqq(zmm0, arg40.32)
                        case 4, 5, 6
                            goto label_1402c1670
                
                float arg_600[0x8] = _mm256_maskstore_ps(arg18, zmm0)
                arg4 = arg_480
                arg13 = arg_4a0
                zmm5 = arg_4c0
                zmm0 = _mm256_sub_ps(arg_5c0, arg4)
                arg12 = _mm256_sub_ps(arg_5e0, arg13)
                zmm2 = _mm256_sub_ps(arg_600, zmm5)
                arg14 = arg23.32
                zmm0 = _mm256_mul_ps(arg14, zmm0)
                arg12 = _mm256_mul_ps(arg14, arg12)
                zmm2 = _mm256_mul_ps(arg14, zmm2)
                arg_480 = _mm256_maskstore_ps(arg18, _mm256_add_ps(arg4, zmm0))
                arg_4a0 = _mm256_maskstore_ps(arg18, _mm256_add_ps(arg13, arg12))
                zmm0 = _mm256_add_ps(zmm5, zmm2)
                arg19 = arg_480
                arg12 = arg_4a0
                arg20 = _mm256_maskstore_ps(arg18, zmm0)
            
            zmm2 = _mm256_insertf128_ps(arg15, zmm7[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(arg19[0].o, 1)
            arg4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            arg13[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
            arg16[0].o = zx.o(0)
            zmm5[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg20[0].o, arg16[0].o)
            arg15[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg20[0].o, arg16[0].o)
            zmm7[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg19[0].o, arg12[0].o)
            arg12[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg19[0].o, arg12[0].o)
            arg14[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, arg20[0].o, 0x28)
            int128_t arg_740 = arg14[0].o
            zmm5[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm5[0].o)
            int128_t arg_750 = zmm5[0].o
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg12[0].o, arg20[0].o, 0xa8)
            int128_t arg_760 = zmm5[0].o
            arg12[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg15[0].o)
            int128_t arg_770 = arg12[0].o
            arg12[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg16[0].o)
            zmm5[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg16[0].o)
            arg14[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
            zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
            arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg14[0].o, arg13[0].o, 0x28)
            int128_t arg_780 = arg4[0].o
            arg12[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg12[0].o)
            int128_t arg_790 = arg12[0].o
            arg12[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg13[0].o, 0xa8)
            int128_t arg_7a0 = arg12[0].o
            zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
            int128_t arg_7b0 = zmm0[0].o
            uint64_t rax_84 = 0xff
            arg15[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            arg18[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg18[0].o, arg18[0].o)
        label_1402c2150:
            uint64_t rcx_37
            uint64_t rflags_1
            
            if (rax_84 == 0)
                rcx_37 = 0x40
            else
                rcx_37, rflags_1 = _bit_scan_forward(rax_84)
            float arg_840[0x8] = zmm2
            zmm0[0].o = (&arg_740)[rcx_37]
            *(arg10 + sx.q(arg_840[zx.q(rcx_37.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            rax_84 &= rol.q(-2, rcx_37.b)
            
            if (rax_84 != 0)
                goto label_1402c2150
            
            float* r11_6 = zx.q(arg38.d + 8)
            void* arg_1e0
            
            if (r11_6.d s>= arg56)
                uint64_t i_4 = zx.q(*(arg6 + 0x928))
                
                if (r11_6.d s< i_4.d)
                    zmm0[0].o = zx.o(r11_6.d)
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
                    arg18[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
                    zmm0[0].o = zx.o(i_4.d)
                    arg16[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg18[0].o)
                    arg12[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm2[0].o)
                    arg20 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                    arg37.32 = zmm2
                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 3)
                    arg12[0].o = __vpslld_xmmdq_xmmdq_immb(arg18[0].o, 3)
                    zmm0 = _mm256_and_ps(arg20, _mm256_insertf128_ps(zmm0, arg12[0].o, 1))
                    int64_t rax_86 = sx.q(zmm0[0].d)
                    arg27[0] = arg31 + rax_86
                    int64_t rbx_25 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    arg23[0] = arg31 + rbx_25
                    int64_t r11_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t r14_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    int64_t rdi_18 = sx.q(zmm0[0].d)
                    arg12[0].o = zx.o(*(arg31 + rax_86))
                    int32_t temp0_766 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                    zmm2[0].o = zx.o(*(arg31 + rdi_18))
                    int64_t rax_88 = sx.q(temp0_766)
                    arg12[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, *(arg31 + rbx_25), 1)
                    int32_t temp0_768 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg31 + rax_88), 1)
                    int64_t rbx_27 = sx.q(temp0_768)
                    arg12[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, *(arg31 + r11_7), 2)
                    int32_t temp0_771 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg31 + rbx_27), 2)
                    int64_t rdx_36 = sx.q(temp0_771)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg31 + rdx_36), 3)
                    arg50[0].o = zmm0[0].o
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, *(arg31 + r14_8), 3)
                    arg52 = zmm0
                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg20, data_142fc9520)
                    uint64_t r12_6 = zx.q(zmm0[0].d)
                    uint64_t r14_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    arg12[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm2[0].o = zx.o(arg59)
                    int32_t* rsi_17 = zx.q(arg12[0])
                    arg4[0].o = zx.o(*(rsi_17 + arg31 + rdi_18))
                    uint32_t* r8_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                    arg4[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(arg4[0].o, *(r8_4 + arg31 + rax_88), 1)
                    uint32_t* r9_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                    arg4[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(arg4[0].o, *(r9_10 + arg31 + rbx_27), 2)
                    uint32_t* r11_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                    arg12[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(arg4[0].o, *(r11_8 + arg31 + rdx_36), 3)
                    float* rbx_29 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    uint32_t* r10_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(r12_6 + arg27[0]))
                    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                    arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                    zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r14_9 + arg23[0]), 1)
                    zmm0[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_29 + arg31 + r11_7), 2)
                    zmm0[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_8 + arg31 + r14_8), 3)
                    zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0 = _mm256_and_ps(arg20, _mm256_insertf128_ps(zmm0, arg12[0].o, 1))
                    int64_t rcx_41 = sx.q(zmm0[0].d)
                    int64_t rdx_38 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    arg12[0].o = zx.o(*(arg44 + rcx_41))
                    int32_t temp0_796 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                    arg12[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, *(arg44 + rdx_38), 1)
                    int64_t rcx_43 = sx.q(temp0_796)
                    arg12[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, *(arg44 + rcx_43), 2)
                    zmm2[0].o = zx.o(*(r12_6 + arg44 + rcx_41))
                    int64_t rax_96 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    arg19[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, *(arg44 + rax_96), 3)
                    arg12[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg49[0] = r14_9
                    zmm0[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r14_9 + arg44 + rdx_38), 1)
                    int64_t rdx_41 = sx.q(arg12[0])
                    zmm0[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_29 + arg44 + rcx_43), 2)
                    zmm2[0].o = zx.o(*(arg44 + rdx_41))
                    int64_t rdx_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg44 + rdx_43), 1)
                    zmm0[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r10_8 + arg44 + rax_96), 3)
                    int64_t rdx_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg44 + rdx_45), 2)
                    int64_t rbx_31 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                    arg14[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg44 + rbx_31), 3)
                    arg12[0].o = zx.o(*(rsi_17 + arg44 + rdx_41))
                    arg25[0] = r8_4
                    arg12[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r8_4 + arg44 + rdx_43), 1)
                    arg28[0].q = r9_10
                    arg12[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r9_10 + arg44 + rdx_45), 2)
                    arg40[0] = r11_8
                    arg12[0].o =
                        __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, *(r11_8 + arg44 + rbx_31), 3)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg14[0].o, 0x4e)
                    zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg19[0].o, 0x4e)
                    arg15[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                    zmm2[0].o = zx.o(arg39)
                    zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                    arg4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    arg22[0].o = *(arg6 + 0x910)
                    int32_t rax_99
                    rax_99.b = arg13[0].o f>= arg22[0]
                    arg13[0].o = data_1434422d0
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                    zmm5[0].o ^= arg4[0].o
                    arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                    arg13[0].o ^= arg4[0].o
                    arg13 = _mm256_insertf128_ps(arg13, zmm5[0].o, 1)
                    zmm5[0].o = zx.o(neg.d(rax_99))
                    zmm5[0].o ^= arg4[0].o
                    zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0)
                    zmm5 = _mm256_insertf128_ps(zmm5, zmm5[0].o, 1)
                    arg13 = _mm256_and_ps(arg13, zmm5)
                    arg34 = arg13
                    arg17 = _mm256_and_ps(arg13, arg20)
                    int32_t temp0_828 = _mm256_movemask_ps(arg17)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    arg13 = _mm256_insertf128_ps(zmm0, arg12[0].o, 1)
                    arg21[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
                    arg51 = arg21
                    arg21[0].o = __vpmovsxdq_xmmdq_xmmq(arg19[0].q)
                    arg30.32 = arg21
                    arg21 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
                    
                    if (temp0_828 == 0)
                        zmm0[0].o = zx.o(0)
                        __builtin_memset(&__return_addr, 0, 0x10)
                        arg22[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg22[0].o, arg22[0].o)
                        zmm0[0].o = zx.o(0)
                        arg26.32 = zmm0
                    else
                        arg29 = arg13
                        arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg4[0].o)
                        arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
                        arg4 = _mm256_insertf128_ps(arg4, arg13[0].o, 1)
                        
                        if (arg22[0].o f>= 1f)
                            arg12[0].o = zx.o(0)
                            __builtin_memset(&__return_addr, 0, 0x10)
                            arg22 = _mm256_blendv_ps(arg12, arg4, arg17)
                            arg26.32 = arg22
                            arg13 = arg29
                        else
                            arg36 = arg14[0].o
                            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                            arg14 = arg4
                            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            arg13[0].o = 3
                            zmm5[0].o = zx.o(*(arg6 + 0x900))
                            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                            arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x44)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, arg51[0].o)
                            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                            arg53[0].o = zmm7[0].o
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm7[0].o)
                            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, arg30)
                            arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg4[0].o)
                            arg24 = arg15[0].o
                            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                            zmm0 = _mm256_insertf128_ps(arg4, zmm0[0].o, 1)
                            arg12 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                            zmm2 = data_143442a40
                            arg27.32 = _mm256_and_ps(arg12, zmm2)
                            arg4 = _mm256_and_ps(zmm0, zmm2)
                            int32_t rax_101 = *(arg6 + 0x908)
                            zmm0[0].o = _mm_permute_ps(arg22[0].o, 0)
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                            arg12 = _mm256_cvtepi32_ps(arg14)
                            zmm0 = _mm256_mul_ps(zmm0, arg12)
                            arg12[0].o = arg16[0].o
                            arg12[0] = float.s(rax_101 - 1)
                            zmm5[0].o = arg12[0].o f* arg22[0]
                            int32_t rax_103 = int.d(zmm5[0])
                            int32_t rcx_46 = 0
                            
                            if (rax_103 s>= 0)
                                rcx_46 = rax_103
                            
                            if (rax_101 - 2 s<= rcx_46)
                                rcx_46 = rax_101 - 2
                            
                            zmm0 = _mm256_cvttps_epi32(zmm0)
                            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            zmm0[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                            arg12[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                            arg26.32 = arg14
                            zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg32.o = zmm2[0].o
                            zmm0[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            arg14 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                            arg23.32 = arg4
                            arg_1e0.32 = arg14
                            arg60.32 = arg20
                            arg55.32 = arg21
                            arg48.o = arg18[0].o
                            arg47.32 = arg16
                            arg54.32 = arg19
                            arg44.o = zmm5[0].o
                            
                            if (rax_101 s< 0x100)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
                                arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg14[0].o, 0x4e)
                                arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                zmm7[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                arg15[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm0[0].o)
                                arg12 = _mm256_insertf128_ps(zmm0, arg12[0].o, 1)
                                char rsi_19 = temp0_828.b
                                
                                if ((rsi_19 & 1) != 0)
                                    zmm0[0].o = zx.o(*arg12[0].q)
                                
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x4e)
                                
                                if ((rsi_19 & 2) != 0)
                                    uint32_t rax_135 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_135, 1)
                                
                                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
                                arg4 = arg27.32
                                __return_addr.o = __vextractf128_memdq_ymmdq_immb(arg4[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm2[0].o)
                                
                                if ((rsi_19 & 4) == 0)
                                    arg13[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, __return_addr.o)
                                    
                                    if ((rsi_19 & 8) != 0)
                                        goto label_1402c56cf
                                    
                                    goto label_1402c301b
                                
                                arg4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                    zx.d(*arg4[0].q), 2)
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, __return_addr.o)
                                
                                if ((rsi_19 & 8) != 0)
                                label_1402c56cf:
                                    arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    uint32_t rax_265 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_265, 3)
                                    arg12 = _mm256_insertf128_ps(zmm2, arg13[0].o, 1)
                                    
                                    if ((rsi_19 & 0x10) == 0)
                                        goto label_1402c302b
                                    
                                    goto label_1402c56fb
                                
                            label_1402c301b:
                                arg12 = _mm256_insertf128_ps(zmm2, arg13[0].o, 1)
                                
                                if ((rsi_19 & 0x10) != 0)
                                label_1402c56fb:
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*arg12[0].q), 4)
                                    arg13 = arg23.32
                                    
                                    if ((rsi_19 & 0x20) != 0)
                                    label_1402c5716:
                                        uint32_t rax_269 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_269, 5)
                                        
                                        if ((rsi_19 & 0x40) == 0)
                                            goto label_1402c3048
                                        
                                        goto label_1402c5728
                                else
                                label_1402c302b:
                                    arg13 = arg23.32
                                    
                                    if ((rsi_19 & 0x20) != 0)
                                        goto label_1402c5716
                                
                                if ((rsi_19 & 0x40) != 0)
                                label_1402c5728:
                                    zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm2[0].q), 6)
                                    arg31.o = zmm7[0].o
                                    
                                    if (temp0_828.b s< 0)
                                    label_1402c574d:
                                        arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                        uint32_t rax_273 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_273, 7)
                                else
                                label_1402c3048:
                                    arg31.o = zmm7[0].o
                                    
                                    if (temp0_828.b s< 0)
                                        goto label_1402c574d
                                
                                zmm0[0].o &= data_142fc92e0
                                arg12[0].o = zx.o(0)
                                arg12[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = zx.o(rcx_46)
                                arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                                arg22 = _mm256_insertf128_ps(arg4, arg4[0].o, 1)
                                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg4[0].o)
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm5[0].o ^= zmm0[0].o
                                arg4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4[0].o)
                                arg4[0].o ^= zmm0[0].o
                                arg4 = _mm256_insertf128_ps(arg4, zmm5[0].o, 1)
                                arg56.32 = arg4
                                arg4 = _mm256_and_ps(arg17, arg4)
                                arg21 = arg14
                                
                                if (_mm256_movemask_ps(arg4) != 0)
                                    arg12 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                                    arg18[0].o = _mm256_extractf128_ps(arg22[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg18[0].o)
                                    zmm2[0].o ^= zmm0[0].o
                                    arg12[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg22[0].o)
                                    arg12[0].o ^= zmm0[0].o
                                    arg4 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                                    zmm5 = arg26.32
                                    arg16 = arg_1e0.32
                                    arg21 = _mm256_blendv_ps(arg16, zmm5, arg4)
                                    arg12[0].o = arg31.o
                                    arg12[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
                                    arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg12[0].o, arg32.o)
                                    arg14[0].o ^= zmm0[0].o
                                    zmm7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                                    zmm0[0].o ^= zmm7[0].o
                                    arg19 = _mm256_and_ps(arg4, 
                                        _mm256_insertf128_ps(zmm0, arg14[0].o, 1))
                                    zmm7 = _mm256_and_ps(arg17, arg19)
                                    int32_t i = _mm256_movemask_ps(zmm7)
                                    
                                    if (i != 0)
                                        arg14 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                                        arg12[0].o =
                                            __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                        zmm0 = arg16
                                        
                                        do
                                            zmm2 = arg14
                                            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                            arg14[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                            arg14[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
                                            arg16[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                            arg14[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg14[0].o)
                                            arg4[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg4[0].o)
                                            arg14 = _mm256_insertf128_ps(arg4, arg14[0].o, 1)
                                            char temp0_1157 = _mm256_movemask_ps(zmm7)
                                            
                                            if ((temp0_1157 & 1) == 0)
                                                zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(arg16[0].q)
                                                arg4[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(arg16[0].o, 0x4e)
                                                
                                                if ((temp0_1157 & 2) != 0)
                                                    goto label_1402c3177
                                                
                                                goto label_1402c3288
                                            
                                            arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg20[0].o, zx.d(*arg14[0].q), 0)
                                            zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(arg16[0].q)
                                            arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg16[0].o, 0x4e)
                                            
                                            if ((temp0_1157 & 2) != 0)
                                            label_1402c3177:
                                                uint16_t rax_140[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1))
                                                arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg20[0].o, rax_140, 1)
                                                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                                zmm7[0].o =
                                                    __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, arg27)
                                                
                                                if ((temp0_1157 & 4) == 0)
                                                    goto label_1402c329f
                                                
                                                goto label_1402c3196
                                            
                                        label_1402c3288:
                                            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                            zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, arg27)
                                            
                                            if ((temp0_1157 & 4) == 0)
                                            label_1402c329f:
                                                arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, 
                                                    __return_addr.o)
                                                
                                                if ((temp0_1157 & 8) != 0)
                                                    goto label_1402c31b7
                                                
                                                goto label_1402c32ad
                                            
                                        label_1402c3196:
                                            zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                            arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg20[0].o, zx.d(*zmm5[0].q), 2)
                                            arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, 
                                                __return_addr.o)
                                            
                                            if ((temp0_1157 & 8) != 0)
                                            label_1402c31b7:
                                                zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                                uint16_t rax_144[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                                arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg20[0].o, rax_144, 3)
                                                arg14 = _mm256_insertf128_ps(zmm7, arg4[0].o, 1)
                                                
                                                if ((temp0_1157 & 0x10) == 0)
                                                    goto label_1402c32bc
                                                
                                                goto label_1402c31e2
                                            
                                        label_1402c32ad:
                                            arg14 = _mm256_insertf128_ps(zmm7, arg4[0].o, 1)
                                            
                                            if ((temp0_1157 & 0x10) == 0)
                                            label_1402c32bc:
                                                
                                                if ((temp0_1157 & 0x20) != 0)
                                                    goto label_1402c31f6
                                                
                                                goto label_1402c32c5
                                            
                                        label_1402c31e2:
                                            arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg20[0].o, zx.d(*arg14[0].q), 4)
                                            
                                            if ((temp0_1157 & 0x20) != 0)
                                            label_1402c31f6:
                                                uint16_t rax_148[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1))
                                                arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg20[0].o, rax_148, 5)
                                                
                                                if ((temp0_1157 & 0x40) == 0)
                                                    goto label_1402c32ce
                                                
                                                goto label_1402c3207
                                            
                                        label_1402c32c5:
                                            
                                            if ((temp0_1157 & 0x40) != 0)
                                            label_1402c3207:
                                                arg4[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                                arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg20[0].o, zx.d(*arg4[0].q), 6)
                                                
                                                if (temp0_1157 s< 0)
                                                label_1402c3222:
                                                    arg4[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                                    uint16_t rax_152[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1))
                                                    arg20[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg20[0].o, rax_152, 7)
                                            else
                                            label_1402c32ce:
                                                
                                                if (temp0_1157 s< 0)
                                                    goto label_1402c3222
                                            
                                            arg4[0].o = arg20[0].o & data_142fc92e0
                                            zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(arg4[0].o, 
                                                data_142d8f750)
                                            arg4[0].o = __vpmovzxwd_xmmdq_xmmq(arg4[0].q)
                                            zmm5[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg18[0].o)
                                            arg4[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg22[0].o)
                                            arg4 = _mm256_and_ps(
                                                _mm256_insertf128_ps(arg4, zmm5[0].o, 1), arg19)
                                            zmm7[0].o = zx.o(0)
                                            zmm5 = _mm256_and_ps(arg4, arg17)
                                            
                                            if (_mm256_movemask_ps(zmm5) != i)
                                                zmm7 = _mm256_xor_ps(arg4, arg19)
                                            
                                            arg21 = _mm256_blendv_ps(arg21, zmm0, arg4)
                                            zmm0[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg12[0].o)
                                            arg4[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                                            arg14 = _mm256_insertf128_ps(arg4, zmm0[0].o, 1)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, arg32.o)
                                            zmm0[0].o ^= arg12[0].o
                                            arg4[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_memdq(arg4[0].o, arg26)
                                            arg4[0].o ^= arg12[0].o
                                            arg19 = _mm256_and_ps(
                                                _mm256_insertf128_ps(arg4, zmm0[0].o, 1), zmm7)
                                            zmm7 = _mm256_and_ps(arg19, arg17)
                                            i = _mm256_movemask_ps(zmm7)
                                            zmm0 = zmm2
                                        while (i != 0)
                                
                                arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                                arg12 = arg56.32
                                zmm0 = _mm256_andnot_ps(arg12, arg17)
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    zmm0 = _mm256_cmp_ps(arg4, arg4, 0xf)
                                    zmm2 = _mm256_xor_ps(arg12, zmm0)
                                    arg21 = _mm256_blendv_ps(arg21, arg4, zmm2)
                                    arg14[0].o =
                                        __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg14[0].o, arg31.o)
                                    arg12[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg14[0].o, arg_1e0.o)
                                    zmm5[0].o = zx.o(0)
                                    arg4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                    zmm7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm5[0].o)
                                    arg4 = _mm256_insertf128_ps(zmm7, arg4[0].o, 1)
                                    arg19 = _mm256_and_ps(arg4, zmm2)
                                    arg20 = _mm256_and_ps(arg19, arg17)
                                    int32_t i_1 = _mm256_movemask_ps(arg20)
                                    
                                    if (i_1 != 0)
                                        zmm7 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                        arg18[0].o = data_142fc92e0
                                        
                                        do
                                            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x4e)
                                            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                            zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                            arg4[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg4[0].o)
                                            arg12[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                                            arg16 = _mm256_insertf128_ps(arg12, arg4[0].o, 1)
                                            char temp0_1224 = _mm256_movemask_ps(arg20)
                                            
                                            if ((temp0_1224 & 1) == 0)
                                                arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                                arg4[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                                
                                                if ((temp0_1224 & 2) != 0)
                                                    goto label_1402c3406
                                                
                                                goto label_1402c3514
                                            
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg16[0].q), 0)
                                            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                            arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                            
                                            if ((temp0_1224 & 2) != 0)
                                            label_1402c3406:
                                                uint32_t rax_158 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_158, 1)
                                                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                                arg20[0].o =
                                                    __vpaddq_xmmdq_xmmdq_memdq(arg12[0].o, arg27)
                                                
                                                if ((temp0_1224 & 4) == 0)
                                                    goto label_1402c352b
                                                
                                                goto label_1402c3425
                                            
                                        label_1402c3514:
                                            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                            arg20[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg12[0].o, arg27)
                                            
                                            if ((temp0_1224 & 4) == 0)
                                            label_1402c352b:
                                                arg12[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, 
                                                    __return_addr.o)
                                                
                                                if ((temp0_1224 & 8) != 0)
                                                    goto label_1402c3446
                                                
                                                goto label_1402c3539
                                            
                                        label_1402c3425:
                                            arg12[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg12[0].q), 2)
                                            arg12[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, 
                                                __return_addr.o)
                                            
                                            if ((temp0_1224 & 8) != 0)
                                            label_1402c3446:
                                                arg4[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                                uint32_t rax_162 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_162, 3)
                                                arg16 = _mm256_insertf128_ps(arg20, arg12[0].o, 1)
                                                
                                                if ((temp0_1224 & 0x10) == 0)
                                                    goto label_1402c3548
                                                
                                                goto label_1402c3471
                                            
                                        label_1402c3539:
                                            arg16 = _mm256_insertf128_ps(arg20, arg12[0].o, 1)
                                            
                                            if ((temp0_1224 & 0x10) == 0)
                                            label_1402c3548:
                                                
                                                if ((temp0_1224 & 0x20) != 0)
                                                    goto label_1402c3485
                                                
                                                goto label_1402c3551
                                            
                                        label_1402c3471:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg16[0].q), 4)
                                            
                                            if ((temp0_1224 & 0x20) != 0)
                                            label_1402c3485:
                                                uint32_t rax_166 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_166, 5)
                                                
                                                if ((temp0_1224 & 0x40) == 0)
                                                    goto label_1402c355a
                                                
                                                goto label_1402c3496
                                            
                                        label_1402c3551:
                                            
                                            if ((temp0_1224 & 0x40) != 0)
                                            label_1402c3496:
                                                arg12[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*arg12[0].q), 6)
                                                
                                                if (temp0_1224 s< 0)
                                                label_1402c34b1:
                                                    arg12[0].o =
                                                        _mm256_extractf128_ps(arg16[0].o, 1)
                                                    uint32_t rax_170 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_170, 7)
                                            else
                                            label_1402c355a:
                                                
                                                if (temp0_1224 s< 0)
                                                    goto label_1402c34b1
                                            
                                            arg12[0].o = zmm2[0].o & arg18[0].o
                                            arg4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg12[0].o, 
                                                zmm5[0].o)
                                            arg12[0].o = __vpmovzxwd_xmmdq_xmmq(arg12[0].q)
                                            arg13[0].o = _mm256_extractf128_ps(arg22[0].o, 1)
                                            arg4[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg13[0].o)
                                            arg4[0].o ^= arg14[0].o
                                            arg12[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg22[0].o)
                                            arg12[0].o ^= arg14[0].o
                                            arg12 = _mm256_and_ps(
                                                _mm256_insertf128_ps(arg12, arg4[0].o, 1), arg19)
                                            arg16[0].o = zx.o(0)
                                            arg4 = _mm256_and_ps(arg12, arg17)
                                            
                                            if (_mm256_movemask_ps(arg4) != i_1)
                                                arg16 = _mm256_xor_ps(arg12, arg19)
                                            
                                            arg21 = _mm256_blendv_ps(arg21, zmm7, arg12)
                                            zmm0[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                                            arg12[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg14[0].o)
                                            zmm7 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                            arg12[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm5[0].o)
                                            zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                            arg19 = _mm256_and_ps(zmm0, arg16)
                                            arg20 = _mm256_and_ps(arg19, arg17)
                                            i_1 = _mm256_movemask_ps(arg20)
                                            arg13 = arg23.32
                                        while (i_1 != 0)
                                    
                                    arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                                
                                arg22 = _mm256_blendv_ps(arg4, arg21, arg17)
                                arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg22[0].q)
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(arg22[0].o, 0x4e)
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = _mm256_extractf128_ps(arg22[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm2[0].o)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                                arg12 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                                
                                if ((rsi_19 & 1) != 0)
                                    arg13[0].o = zx.o(*arg12[0].q)
                                
                                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                arg20 = arg60.32
                                arg21 = arg55.32
                                arg18[0].o = arg48.o
                                arg16 = arg47.32
                                arg19 = arg54.32
                                
                                if ((rsi_19 & 2) == 0)
                                    arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg27)
                                    
                                    if ((rsi_19 & 4) != 0)
                                        goto label_1402c578c
                                    
                                    goto label_1402c3681
                                
                                uint32_t rax_275 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                arg13[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_275, 1)
                                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg27)
                                
                                if ((rsi_19 & 4) != 0)
                                label_1402c578c:
                                    zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, 
                                        zx.d(*zmm5[0].q), 2)
                                    arg4[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, __return_addr.o)
                                    
                                    if ((rsi_19 & 8) == 0)
                                        goto label_1402c3690
                                    
                                    goto label_1402c57ae
                                
                            label_1402c3681:
                                arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, __return_addr.o)
                                
                                if ((rsi_19 & 8) == 0)
                                label_1402c3690:
                                    arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                                    
                                    if ((rsi_19 & 0x10) != 0)
                                        goto label_1402c57da
                                    
                                    goto label_1402c36a0
                                
                            label_1402c57ae:
                                arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                uint32_t rax_279 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                arg13[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_279, 3)
                                arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                                
                                if ((rsi_19 & 0x10) != 0)
                                label_1402c57da:
                                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, 
                                        zx.d(*arg12[0].q), 4)
                                    arg4 = arg26.32
                                    
                                    if ((rsi_19 & 0x20) == 0)
                                        goto label_1402c36b0
                                    
                                    goto label_1402c57f5
                                
                            label_1402c36a0:
                                arg4 = arg26.32
                                
                                if ((rsi_19 & 0x20) == 0)
                                label_1402c36b0:
                                    
                                    if ((rsi_19 & 0x40) != 0)
                                        goto label_1402c5807
                                    
                                    goto label_1402c36ba
                                
                            label_1402c57f5:
                                uint32_t rax_283 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                arg13[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_283, 5)
                                
                                if ((rsi_19 & 0x40) == 0)
                                label_1402c36ba:
                                    
                                    if (temp0_828.b s< 0)
                                    label_1402c5823:
                                        arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                        uint32_t rax_287 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, 
                                            rax_287, 7)
                                else
                                label_1402c5807:
                                    zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, 
                                        zx.d(*zmm2[0].q), 6)
                                    
                                    if (temp0_828.b s< 0)
                                        goto label_1402c5823
                                
                                arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                                arg12[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg22[0].o, arg12[0].o)
                                zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                arg12[0].o = zx.o(0)
                                zmm2 = _mm256_blendv_ps(arg12, zmm0, arg17)
                                zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, arg32.o)
                                arg12[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4[0].o)
                                zmm0 =
                                    _mm256_and_ps(_mm256_insertf128_ps(arg12, zmm0[0].o, 1), arg17)
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    zmm2 = _mm256_blendv_ps(zmm2, arg4, zmm0)
                                
                                arg17 = arg34
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                arg26.32 = zmm2
                                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg23)
                                arg12 = _mm256_insertf128_ps(zmm0, arg12[0].o, 1)
                                
                                if ((rsi_19 & 1) != 0)
                                    zmm0[0].o = zx.o(*arg12[0].q)
                                
                                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                arg14[0].o = arg36
                                zmm7[0].o = arg53[0].o
                                arg15[0].o = arg24
                                
                                if ((rsi_19 & 2) == 0)
                                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, arg27)
                                    
                                    if ((rsi_19 & 4) != 0)
                                        goto label_1402c5862
                                    
                                    goto label_1402c3795
                                
                                uint32_t rax_289 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_289, 1)
                                zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, arg27)
                                
                                if ((rsi_19 & 4) != 0)
                                label_1402c5862:
                                    arg4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*arg4[0].q), 2)
                                    arg4[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, __return_addr.o)
                                    
                                    if ((rsi_19 & 8) == 0)
                                        goto label_1402c37a4
                                    
                                    goto label_1402c5884
                                
                            label_1402c3795:
                                arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, __return_addr.o)
                                
                                if ((rsi_19 & 8) == 0)
                                label_1402c37a4:
                                    arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                                    
                                    if ((rsi_19 & 0x10) != 0)
                                        goto label_1402c58b0
                                    
                                    goto label_1402c37b4
                                
                            label_1402c5884:
                                arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                uint32_t rax_293 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_293, 3)
                                arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                                
                                if ((rsi_19 & 0x10) != 0)
                                label_1402c58b0:
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*arg12[0].q), 4)
                                    zmm2[0].o = arg13[0].o & data_142fc92e0
                                    
                                    if ((rsi_19 & 0x20) == 0)
                                        goto label_1402c37c6
                                    
                                    goto label_1402c58cd
                                
                            label_1402c37b4:
                                zmm2[0].o = arg13[0].o & data_142fc92e0
                                
                                if ((rsi_19 & 0x20) == 0)
                                label_1402c37c6:
                                    arg13[0].o = zx.o(0)
                                    arg4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                    
                                    if ((rsi_19 & 0x40) != 0)
                                        goto label_1402c58e8
                                    
                                    goto label_1402c37d9
                                
                            label_1402c58cd:
                                uint32_t rax_297 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_297, 5)
                                arg13[0].o = zx.o(0)
                                arg4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                
                                if ((rsi_19 & 0x40) == 0)
                                label_1402c37d9:
                                    zmm5[0].o = zx.o(0)
                                    zmm2[0].o =
                                        __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                                    
                                    if (temp0_828.b s< 0)
                                    label_1402c590c:
                                        arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                        uint32_t rax_301 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rax_301, 7)
                                else
                                label_1402c58e8:
                                    zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*zmm5[0].q), 6)
                                    zmm5[0].o = zx.o(0)
                                    zmm2[0].o =
                                        __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                                    
                                    if (temp0_828.b s< 0)
                                        goto label_1402c590c
                                
                                arg13 = arg29
                                arg12 = _mm256_insertf128_ps(arg4, zmm2[0].o, 1)
                                zmm0[0].o &= data_142fc92e0
                            else
                                zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                arg31.o = zmm0[0].o
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                                arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                arg15[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg4[0].o, arg12[0].o)
                                arg12 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                char rsi_18 = temp0_828.b
                                
                                if ((rsi_18 & 1) != 0)
                                    zmm0[0].o = zx.o(*arg12[0].q)
                                
                                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                
                                if ((rsi_18 & 2) != 0)
                                    int64_t rax_106 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_106, 1)
                                
                                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2 = arg27.32
                                __return_addr.o = __vextractf128_memdq_ymmdq_immb(zmm2[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4[0].o)
                                
                                if ((rsi_18 & 4) == 0)
                                    arg4[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, __return_addr.o)
                                    
                                    if ((rsi_18 & 8) != 0)
                                        goto label_1402c549c
                                    
                                    goto label_1402c2796
                                
                                arg4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg4[0].q, 2)
                                arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, __return_addr.o)
                                
                                if ((rsi_18 & 8) != 0)
                                label_1402c549c:
                                    arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    int64_t rax_243 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_243, 3)
                                    arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                                    
                                    if ((rsi_18 & 0x10) == 0)
                                        goto label_1402c27a6
                                    
                                    goto label_1402c54c2
                                
                            label_1402c2796:
                                arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                                
                                if ((rsi_18 & 0x10) == 0)
                                label_1402c27a6:
                                    
                                    if ((rsi_18 & 0x20) != 0)
                                        goto label_1402c54d1
                                    
                                    goto label_1402c27b0
                                
                            label_1402c54c2:
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg12[0].q, 4)
                                
                                if ((rsi_18 & 0x20) != 0)
                                label_1402c54d1:
                                    int64_t rax_245 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_245, 5)
                                    
                                    if ((rsi_18 & 0x40) == 0)
                                        goto label_1402c27ba
                                    
                                    goto label_1402c54e6
                                
                            label_1402c27b0:
                                
                                if ((rsi_18 & 0x40) != 0)
                                label_1402c54e6:
                                    zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 6)
                                    
                                    if (temp0_828.b s< 0)
                                    label_1402c54ff:
                                        arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                        int64_t rax_247 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_247, 7)
                                else
                                label_1402c27ba:
                                    
                                    if (temp0_828.b s< 0)
                                        goto label_1402c54ff
                                
                                arg12[0].o = zx.o(0)
                                arg12[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = zx.o(rcx_46)
                                arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                                arg21 = _mm256_insertf128_ps(arg4, arg4[0].o, 1)
                                arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg4[0].o)
                                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg13[0].o ^= zmm0[0].o
                                arg4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4[0].o)
                                arg4[0].o ^= zmm0[0].o
                                arg4 = _mm256_insertf128_ps(arg4, arg13[0].o, 1)
                                arg56.32 = arg4
                                arg4 = _mm256_and_ps(arg17, arg4)
                                arg22 = arg14
                                
                                if (_mm256_movemask_ps(arg4) != 0)
                                    arg12 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                                    arg14[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
                                    zmm2[0].o ^= zmm0[0].o
                                    arg12[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg21[0].o)
                                    arg12[0].o ^= zmm0[0].o
                                    arg12 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                                    zmm5 = arg26.32
                                    arg16 = arg_1e0.32
                                    arg22 = _mm256_blendv_ps(arg16, zmm5, arg12)
                                    zmm2[0].o = arg31.o
                                    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                    arg4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
                                    arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm2[0].o, arg32.o)
                                    arg13[0].o ^= zmm0[0].o
                                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
                                    zmm0[0].o ^= zmm5[0].o
                                    arg19 = _mm256_and_ps(arg12, 
                                        _mm256_insertf128_ps(zmm0, arg13[0].o, 1))
                                    arg12 = _mm256_and_ps(arg17, arg19)
                                    int32_t i_2 = _mm256_movemask_ps(arg12)
                                    
                                    if (i_2 != 0)
                                        zmm5 = _mm256_insertf128_ps(arg4, zmm2[0].o, 1)
                                        zmm7[0].o =
                                            __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                                        zmm0 = arg16
                                        
                                        do
                                            arg20 = zmm5
                                            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                            arg18[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                            arg4[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(arg20[0].o, arg20[0].o)
                                            arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                            arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg4[0].o, 0x4e)
                                            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                            arg4[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg4[0].o)
                                            arg13[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, arg23)
                                            arg16 = _mm256_insertf128_ps(arg13, arg4[0].o, 1)
                                            char temp0_944 = _mm256_movemask_ps(arg12)
                                            
                                            if ((temp0_944 & 1) == 0)
                                                arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg18[0].q)
                                                arg4[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(arg18[0].o, 0x4e)
                                                
                                                if ((temp0_944 & 2) != 0)
                                                    goto label_1402c28ce
                                                
                                                goto label_1402c29e3
                                            
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg16[0].q, 0)
                                            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg18[0].q)
                                            arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg18[0].o, 0x4e)
                                            
                                            if ((temp0_944 & 2) != 0)
                                            label_1402c28ce:
                                                int64_t rax_109 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_109, 1)
                                                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                                arg12[0].o =
                                                    __vpaddq_xmmdq_xmmdq_memdq(arg12[0].o, arg27)
                                                
                                                if ((temp0_944 & 4) == 0)
                                                    goto label_1402c29fa
                                                
                                                goto label_1402c28f0
                                            
                                        label_1402c29e3:
                                            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                            arg12[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg12[0].o, arg27)
                                            
                                            if ((temp0_944 & 4) == 0)
                                            label_1402c29fa:
                                                arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, 
                                                    __return_addr.o)
                                                
                                                if ((temp0_944 & 8) != 0)
                                                    goto label_1402c290e
                                                
                                                goto label_1402c2a08
                                            
                                        label_1402c28f0:
                                            arg13[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg13[0].q, 2)
                                            arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, 
                                                __return_addr.o)
                                            
                                            if ((temp0_944 & 8) != 0)
                                            label_1402c290e:
                                                arg13[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                                int64_t rax_111 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_111, 3)
                                                arg12 = _mm256_insertf128_ps(arg12, arg4[0].o, 1)
                                                
                                                if ((temp0_944 & 0x10) == 0)
                                                    goto label_1402c2a17
                                                
                                                goto label_1402c2933
                                            
                                        label_1402c2a08:
                                            arg12 = _mm256_insertf128_ps(arg12, arg4[0].o, 1)
                                            
                                            if ((temp0_944 & 0x10) == 0)
                                            label_1402c2a17:
                                                
                                                if ((temp0_944 & 0x20) != 0)
                                                    goto label_1402c2941
                                                
                                                goto label_1402c2a20
                                            
                                        label_1402c2933:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg12[0].q, 4)
                                            
                                            if ((temp0_944 & 0x20) != 0)
                                            label_1402c2941:
                                                int64_t rax_113 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_113, 5)
                                                
                                                if ((temp0_944 & 0x40) == 0)
                                                    goto label_1402c2a29
                                                
                                                goto label_1402c2955
                                            
                                        label_1402c2a20:
                                            
                                            if ((temp0_944 & 0x40) != 0)
                                            label_1402c2955:
                                                arg4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg4[0].q, 6)
                                                
                                                if (temp0_944 s< 0)
                                                label_1402c296d:
                                                    arg12[0].o =
                                                        _mm256_extractf128_ps(arg12[0].o, 1)
                                                    int64_t rax_115 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_115, 7)
                                            else
                                            label_1402c2a29:
                                                
                                                if (temp0_944 s< 0)
                                                    goto label_1402c296d
                                            
                                            arg12[0].o = __vpunpckhwd_xmmdq_xmmdq_memdq(zmm2[0].o, 
                                                data_142d8f750)
                                            arg4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                            arg12[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg14[0].o)
                                            arg4[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg21[0].o)
                                            arg12 = _mm256_insertf128_ps(arg4, arg12[0].o, 1)
                                            arg4 = _mm256_and_ps(arg12, arg19)
                                            arg12[0].o =
                                                __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                            arg13 = _mm256_and_ps(arg4, arg17)
                                            
                                            if (_mm256_movemask_ps(arg13) != i_2)
                                                arg12 = _mm256_xor_ps(arg4, arg19)
                                            
                                            arg22 = _mm256_blendv_ps(arg22, zmm0, arg4)
                                            zmm0[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm7[0].o)
                                            arg4[0].o =
                                                __vpsubd_xmmdq_xmmdq_xmmdq(arg20[0].o, zmm7[0].o)
                                            zmm5 = _mm256_insertf128_ps(arg4, zmm0[0].o, 1)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, arg32.o)
                                            zmm0[0].o ^= zmm7[0].o
                                            arg4[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_memdq(arg4[0].o, arg26)
                                            arg4[0].o ^= zmm7[0].o
                                            arg19 = _mm256_and_ps(
                                                _mm256_insertf128_ps(arg4, zmm0[0].o, 1), arg12)
                                            arg12 = _mm256_and_ps(arg19, arg17)
                                            i_2 = _mm256_movemask_ps(arg12)
                                            zmm0 = arg20
                                        while (i_2 != 0)
                                
                                arg19[0].o = zx.o(0)
                                arg12 = arg56.32
                                zmm0 = _mm256_andnot_ps(arg12, arg17)
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    zmm0 = _mm256_cmp_ps(arg19, arg19, 0xf)
                                    zmm2 = _mm256_xor_ps(arg12, zmm0)
                                    arg22 = _mm256_blendv_ps(arg22, arg19, zmm2)
                                    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, arg31.o)
                                    arg12[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, arg_1e0.o)
                                    arg18[0].o = zx.o(0)
                                    arg4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg18[0].o)
                                    arg13[0].o =
                                        __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg18[0].o)
                                    arg4 = _mm256_insertf128_ps(arg13, arg4[0].o, 1)
                                    zmm7 = _mm256_and_ps(arg4, zmm2)
                                    arg20 = _mm256_and_ps(zmm7, arg17)
                                    int32_t i_3 = _mm256_movemask_ps(arg20)
                                    
                                    if (i_3 != 0)
                                        arg12 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                        
                                        do
                                            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                            arg4[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                            arg13[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                            arg14[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
                                            arg13[0].o =
                                                __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
                                            arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
                                            arg13[0].o =
                                                __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg13[0].o)
                                            arg14[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg14[0].o, arg23)
                                            arg16 = _mm256_insertf128_ps(arg14, arg13[0].o, 1)
                                            char temp0_1013 = _mm256_movemask_ps(arg20)
                                            
                                            if ((temp0_1013 & 1) == 0)
                                                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                                arg4[0].o =
                                                    __vpshufd_xmmdq_xmmdq_immb(arg4[0].o, 0x4e)
                                                
                                                if ((temp0_1013 & 2) != 0)
                                                    goto label_1402c2b4d
                                                
                                                goto label_1402c2c5e
                                            
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg16[0].q, 0)
                                            arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                            arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg4[0].o, 0x4e)
                                            
                                            if ((temp0_1013 & 2) != 0)
                                            label_1402c2b4d:
                                                int64_t rax_119 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_119, 1)
                                                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                                arg20[0].o =
                                                    __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, arg27)
                                                
                                                if ((temp0_1013 & 4) == 0)
                                                    goto label_1402c2c75
                                                
                                                goto label_1402c2b6f
                                            
                                        label_1402c2c5e:
                                            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                                            arg20[0].o =
                                                __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, arg27)
                                            
                                            if ((temp0_1013 & 4) == 0)
                                            label_1402c2c75:
                                                arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, 
                                                    __return_addr.o)
                                                
                                                if ((temp0_1013 & 8) != 0)
                                                    goto label_1402c2b8d
                                                
                                                goto label_1402c2c83
                                            
                                        label_1402c2b6f:
                                            arg13[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg13[0].q, 2)
                                            arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, 
                                                __return_addr.o)
                                            
                                            if ((temp0_1013 & 8) != 0)
                                            label_1402c2b8d:
                                                arg13[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                                int64_t rax_121 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_121, 3)
                                                arg16 = _mm256_insertf128_ps(arg20, arg4[0].o, 1)
                                                
                                                if ((temp0_1013 & 0x10) == 0)
                                                    goto label_1402c2c92
                                                
                                                goto label_1402c2bb2
                                            
                                        label_1402c2c83:
                                            arg16 = _mm256_insertf128_ps(arg20, arg4[0].o, 1)
                                            
                                            if ((temp0_1013 & 0x10) == 0)
                                            label_1402c2c92:
                                                
                                                if ((temp0_1013 & 0x20) != 0)
                                                    goto label_1402c2bc0
                                                
                                                goto label_1402c2c9b
                                            
                                        label_1402c2bb2:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg16[0].q, 4)
                                            
                                            if ((temp0_1013 & 0x20) != 0)
                                            label_1402c2bc0:
                                                int64_t rax_123 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_123, 5)
                                                
                                                if ((temp0_1013 & 0x40) == 0)
                                                    goto label_1402c2ca4
                                                
                                                goto label_1402c2bd4
                                            
                                        label_1402c2c9b:
                                            
                                            if ((temp0_1013 & 0x40) != 0)
                                            label_1402c2bd4:
                                                arg4[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg4[0].q, 6)
                                                
                                                if (temp0_1013 s< 0)
                                                label_1402c2bec:
                                                    arg4[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                                    int64_t rax_125 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_125, 7)
                                            else
                                            label_1402c2ca4:
                                                
                                                if (temp0_1013 s< 0)
                                                    goto label_1402c2bec
                                            
                                            arg4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, 
                                                arg18[0].o)
                                            arg13[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                            arg14[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                                            arg4[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg14[0].o)
                                            arg4[0].o ^= zmm5[0].o
                                            arg13[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg21[0].o)
                                            arg13[0].o ^= zmm5[0].o
                                            arg4 = _mm256_insertf128_ps(arg13, arg4[0].o, 1)
                                            arg13 = _mm256_and_ps(arg4, zmm7)
                                            arg4[0].o =
                                                __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                                            arg14 = _mm256_and_ps(arg13, arg17)
                                            
                                            if (_mm256_movemask_ps(arg14) != i_3)
                                                arg4 = _mm256_xor_ps(arg13, zmm7)
                                            
                                            arg22 = _mm256_blendv_ps(arg22, arg12, arg13)
                                            zmm0[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                            arg13[0].o =
                                                __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm5[0].o)
                                            arg12 = _mm256_insertf128_ps(arg13, zmm0[0].o, 1)
                                            zmm0[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg18[0].o)
                                            arg13[0].o =
                                                __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg18[0].o)
                                            zmm0 = _mm256_insertf128_ps(arg13, zmm0[0].o, 1)
                                            zmm7 = _mm256_and_ps(zmm0, arg4)
                                            arg20 = _mm256_and_ps(zmm7, arg17)
                                            i_3 = _mm256_movemask_ps(arg20)
                                        while (i_3 != 0)
                                
                                arg13 = arg23.32
                                arg22 = _mm256_blendv_ps(arg19, arg22, arg17)
                                zmm0[0].o = _mm256_extractf128_ps(arg22[0].o, 1)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg12[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg22[0].o, arg22[0].o)
                                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                                arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                                arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg4[0].o)
                                arg12 = _mm256_insertf128_ps(arg4, arg12[0].o, 1)
                                
                                if ((rsi_18 & 1) != 0)
                                    zmm5[0].o = zx.o(*arg12[0].q)
                                
                                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                arg20 = arg60.32
                                arg21 = arg55.32
                                arg18[0].o = arg48.o
                                arg16 = arg47.32
                                arg19 = arg54.32
                                
                                if ((rsi_18 & 2) == 0)
                                    arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, arg27)
                                    
                                    if ((rsi_18 & 4) != 0)
                                        goto label_1402c5538
                                    
                                    goto label_1402c2dc9
                                
                                int64_t rax_248 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_248, 1)
                                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, arg27)
                                
                                if ((rsi_18 & 4) != 0)
                                label_1402c5538:
                                    arg4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg4[0].q, 2)
                                    arg4[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, __return_addr.o)
                                    
                                    if ((rsi_18 & 8) == 0)
                                        goto label_1402c2dd8
                                    
                                    goto label_1402c5557
                                
                            label_1402c2dc9:
                                arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, __return_addr.o)
                                
                                if ((rsi_18 & 8) == 0)
                                label_1402c2dd8:
                                    arg13 = arg23.32
                                    arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                                    
                                    if ((rsi_18 & 0x10) != 0)
                                        goto label_1402c5583
                                    
                                    goto label_1402c2dee
                                
                            label_1402c5557:
                                arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                int64_t rax_250 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_250, 3)
                                arg13 = arg23.32
                                arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                                
                                if ((rsi_18 & 0x10) != 0)
                                label_1402c5583:
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg12[0].q, 4)
                                    arg4 = arg26.32
                                    
                                    if ((rsi_18 & 0x20) == 0)
                                        goto label_1402c2dfe
                                    
                                    goto label_1402c5598
                                
                            label_1402c2dee:
                                arg4 = arg26.32
                                
                                if ((rsi_18 & 0x20) == 0)
                                label_1402c2dfe:
                                    
                                    if ((rsi_18 & 0x40) != 0)
                                        goto label_1402c55ad
                                    
                                    goto label_1402c2e08
                                
                            label_1402c5598:
                                int64_t rax_252 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_252, 5)
                                
                                if ((rsi_18 & 0x40) == 0)
                                label_1402c2e08:
                                    
                                    if (temp0_828.b s< 0)
                                    label_1402c55c6:
                                        arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                        int64_t rax_254 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_254, 7)
                                else
                                label_1402c55ad:
                                    zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm2[0].q, 6)
                                    
                                    if (temp0_828.b s< 0)
                                        goto label_1402c55c6
                                
                                arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                                arg12[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg22[0].o, arg12[0].o)
                                zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                arg12[0].o = zx.o(0)
                                arg14 = _mm256_blendv_ps(arg12, zmm0, arg17)
                                zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, arg32.o)
                                arg12[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg4[0].o)
                                zmm0 =
                                    _mm256_and_ps(_mm256_insertf128_ps(arg12, zmm0[0].o, 1), arg17)
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    arg14 = _mm256_blendv_ps(arg14, arg4, zmm0)
                                
                                arg17 = arg34
                                zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg26.32 = arg14
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                                arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                                arg12 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                
                                if ((rsi_18 & 1) != 0)
                                    zmm0[0].o = zx.o(*arg12[0].q)
                                
                                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                                arg14[0].o = arg36
                                zmm7[0].o = arg53[0].o
                                arg15[0].o = arg24
                                
                                if ((rsi_18 & 2) == 0)
                                    arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, arg27)
                                    
                                    if ((rsi_18 & 4) != 0)
                                        goto label_1402c55ff
                                    
                                    goto label_1402c2ee9
                                
                                int64_t rax_255 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_255, 1)
                                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg4[0].o, arg27)
                                
                                if ((rsi_18 & 4) != 0)
                                label_1402c55ff:
                                    arg4[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg4[0].q, 2)
                                    arg4[0].o =
                                        __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, __return_addr.o)
                                    
                                    if ((rsi_18 & 8) == 0)
                                        goto label_1402c2ef8
                                    
                                    goto label_1402c561e
                                
                            label_1402c2ee9:
                                arg4[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, __return_addr.o)
                                
                                if ((rsi_18 & 8) != 0)
                                label_1402c561e:
                                    arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    int64_t rax_257 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_257, 3)
                                    arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                                    
                                    if ((rsi_18 & 0x10) != 0)
                                    label_1402c5644:
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                            *arg12[0].q, 4)
                                        
                                        if ((rsi_18 & 0x20) == 0)
                                            goto label_1402c2f12
                                        
                                        goto label_1402c5653
                                else
                                label_1402c2ef8:
                                    arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                                    
                                    if ((rsi_18 & 0x10) != 0)
                                        goto label_1402c5644
                                
                                if ((rsi_18 & 0x20) == 0)
                                label_1402c2f12:
                                    arg4[0].o = zx.o(0)
                                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                                    
                                    if ((rsi_18 & 0x40) != 0)
                                        goto label_1402c5671
                                    
                                    goto label_1402c2f25
                                
                            label_1402c5653:
                                int64_t rax_259 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_259, 5)
                                arg4[0].o = zx.o(0)
                                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(zmm5[0].q)
                                
                                if ((rsi_18 & 0x40) == 0)
                                label_1402c2f25:
                                    arg13 = arg29
                                    arg4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg4[0].o)
                                    
                                    if (temp0_828.b s< 0)
                                    label_1402c5697:
                                        arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                        int64_t rax_261 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_261, 7)
                                else
                                label_1402c5671:
                                    arg13[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg13[0].q, 6)
                                    arg13 = arg29
                                    arg4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg4[0].o)
                                    
                                    if (temp0_828.b s< 0)
                                        goto label_1402c5697
                                
                                zmm5[0].o = zx.o(0)
                                arg12 = _mm256_insertf128_ps(zmm2, arg4[0].o, 1)
                            
                            zmm2[0].o = zx.o(0)
                            zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                            zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                            zmm0[0].o = zx.o(0)
                            arg4[0].o = zx.o(0)
                            
                            if (*(arg6 + 0x918) != 1)
                                arg4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg12[0].o)
                                arg13[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                                arg13[0].o = data_142d3f5b0
                                arg4[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg13[0].o)
                                zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                                arg13 = arg29
                                zmm2 = _mm256_insertf128_ps(arg4, zmm2[0].o, 1)
                                arg4[0].o = __vpermilps_xmmdq_memdq_immb(arg44.o, 0)
                                arg12 = _mm256_sub_ps(_mm256_insertf128_ps(arg4, arg4[0].o, 1), 
                                    _mm256_cvtepi32_ps(arg12))
                                zmm2 = _mm256_cvtepi32_ps(zmm2)
                                arg4 = _mm256_div_ps(arg12, zmm2)
                            
                            __return_addr.32 = _mm256_blendv_ps(zmm0, arg4, arg17)
                    
                    arg18 = _mm256_insertf128_ps(arg37.32, arg18[0].o, 1)
                    arg27.32 = _mm256_insertf128_ps(arg16, arg16[0].o, 1)
                    arg14 = _mm256_insertf128_ps(arg19, arg14[0].o, 1)
                    arg4 = _mm256_insertf128_ps(arg51, zmm7[0].o, 1)
                    zmm0 = arg30.32
                    zmm7 = _mm256_insertf128_ps(zmm0, arg15[0].o, 1)
                    int32_t rcx_47 = arg33.d
                    int32_t rax_177
                    rax_177.b = rcx_47 == 3
                    zmm0[0].o = zx.o(neg.d(rax_177))
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
                    arg12[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm2[0].o = data_142d3f5b0
                    arg12[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
                    arg12 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                    zmm0 = _mm256_and_ps(arg12, zmm0)
                    zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm5, data_143442540, zmm0)
                    arg12[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                    arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                    arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                    arg15 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                    arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    arg16 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                    zmm2[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                    zmm5[0].o = _mm256_extractf128_ps(arg22[0].o, 1)
                    int64_t r15_8 = zx.q(rcx_47)
                    arg23.32 = arg22
                    arg51 = zmm7
                    arg37.32 = arg4
                    arg29 = arg16
                    arg34 = arg15
                    arg_1e0.32 = arg14
                    arg30 = zmm2[0].o
                    arg32.o = zmm5[0].o
                    float arg_3c0[0x8]
                    int32_t arg_3e0[0x8]
                    float arg_400[0x8]
                    
                    if (rcx_47 u> 6)
                    label_1402c3c44:
                        zmm0[0].o = zx.o(0)
                        arg_3c0 = _mm256_maskstore_ps(arg20, zmm0)
                        arg_3e0 = _mm256_maskstore_ps(arg20, zmm0)
                    label_1402c3f25:
                        arg_400 = _mm256_maskstore_ps(arg20, zmm0)
                        arg22 = arg52
                        arg19 = arg27.32
                    else
                        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg22[0].o, arg21[0].o)
                        arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                        arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                        arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                        arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                        arg19 = _mm256_insertf128_ps(arg13, arg12[0].o, 1)
                        arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                        arg17 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                        
                        switch (r15_8)
                            case 0, 1
                                zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                arg12[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                arg13[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                arg14[0].o = _mm256_extractf128_ps(arg19[0].o, 1)
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg4[0].o, arg19[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm5[0].o)
                                arg13 = _mm256_insertf128_ps(zmm5, arg13[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg17[0].o)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg12[0].o)
                                arg16 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                zmm0[0].o = _mm_permute_ps(arg20[0].o, 0x50)
                                arg12[0].o = _mm_permute_ps(arg20[0].o, 0xfa)
                                zmm0 = _mm256_insertf128_ps(zmm0, arg12[0].o, 1)
                                arg12[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
                                arg15[0].o = zx.o(0)
                                zmm5[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                                arg12[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                                arg17 = _mm256_insertf128_ps(zmm5, arg12[0].o, 1)
                                arg12 = _mm256_blendv_ps(arg15, arg13, arg17)
                                int64_t r9_11 = arg12[0].q
                                float* rax_179 = *(arg6 + 0x900)
                                void* rdi_22 = rax_179 + r9_11
                                int64_t r11_9 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                void* rsi_20 = rax_179 + r11_9
                                arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                int64_t r14_11 = arg12[0].q
                                int64_t r15_9 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                arg4 = arg18
                                arg18 = _mm256_broadcast_sd(1.9762625833649862e-323)
                                arg12 = _mm256_blendv_ps(arg15, arg18, arg17)
                                arg13[0].o = *(arg12[0].q + rdi_22)
                                int64_t rcx_51 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                int64_t r10_10 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                    *(rcx_51 + rsi_20), 0x10)
                                float* rcx_52 = arg12[0].q
                                arg12 = _mm256_broadcast_sd(3.9525251667299724e-323)
                                zmm5 = _mm256_blendv_ps(arg15, arg12, arg17)
                                arg14[0].o = *(zmm5[0].q + rdi_22)
                                float* rdx_53 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                float* rdi_23 = zmm5[0].q
                                float* rbx_34 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm5 = _mm256_blendv_ps(arg15, arg16, zmm0)
                                arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                    *(rdx_53 + rsi_20), 0x10)
                                int64_t rdx_54 = zmm5[0].q
                                void* rsi_21 = rax_179 + r14_11
                                arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                    *(rcx_52 + rsi_21), 0x20)
                                int64_t r12_7 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                    *(rdi_23 + rsi_21), 0x20)
                                void* rsi_22 = rax_179 + rdx_54
                                void* rdi_24 = rax_179 + r15_9
                                arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                    *(r10_10 + rdi_24), 0x30)
                                void* rcx_53 = rax_179 + r12_7
                                zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                    *(rbx_34 + rdi_24), 0x30)
                                int64_t rdi_25 = zmm5[0].q
                                zmm2 = arg21
                                zmm7 = _mm256_blendv_ps(arg15, arg18, zmm0)
                                arg18 = arg4
                                int32_t* rbx_35 = zmm7[0].q
                                zmm0 = _mm256_blendv_ps(arg15, arg12, zmm0)
                                arg12[0].o = *(rbx_35 + rsi_22)
                                arg4[0].o = *(zmm0[0] + rsi_22)
                                void* rsi_23 = rax_179 + rdi_25
                                float* rbx_37 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                                arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                    *(rbx_37 + rcx_53), 0x10)
                                float* rbx_38 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(rbx_38 + rcx_53), 0x10)
                                int64_t rcx_54 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                    *(zmm5[0].q + rsi_23), 0x20)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(zmm0[0] + rsi_23), 0x20)
                                void* rsi_24 = rax_179 + rcx_54
                                int64_t rbx_41 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                    *(rbx_41 + rsi_24), 0x30)
                                float* rbx_42 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(rbx_42 + rsi_24), 0x30)
                                arg4[0].o = *(rax_179 + rdx_54)
                                zmm5[0].o = *(rax_179 + r9_11)
                                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                    *(rax_179 + r11_9), 0x10)
                                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                    *(rax_179 + r14_11), 0x20)
                                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                    *(rax_179 + r15_9), 0x30)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(rax_179 + r12_7), 0x10)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(rax_179 + rdi_25), 0x20)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(rax_179 + rcx_54), 0x30)
                                arg4 = _mm256_insertf128_ps(arg4, zmm5[0].o, 1)
                                arg_3c0 = _mm256_maskstore_ps(arg20, arg4)
                                arg12 = _mm256_insertf128_ps(arg12, arg13[0].o, 1)
                                arg_3e0 = _mm256_maskstore_ps(arg20, arg12)
                                zmm0 = _mm256_insertf128_ps(zmm0, arg14[0].o, 1)
                                goto label_1402c3f25
                            case 2
                                zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                arg12[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                arg4[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                arg13[0].o = _mm256_extractf128_ps(arg19[0].o, 1)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm2[0].o)
                                arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg4[0].o, arg19[0].o)
                                arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg4[0].o)
                                arg15 = _mm256_insertf128_ps(arg4, zmm2[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg17[0].o)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg12[0].o)
                                arg12 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                zmm0[0].o = _mm_permute_ps(arg20[0].o, 0x50)
                                zmm2[0].o = _mm_permute_ps(arg20[0].o, 0xfa)
                                arg17 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                                zmm2[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg12 = _mm256_blendv_ps(zmm0, arg12, arg17)
                                arg4[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                                arg16 = _mm256_insertf128_ps(arg4, zmm2[0].o, 1)
                                int64_t r9_12 = arg12[0].q
                                int64_t r10_11 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                uint16_t* rdi_26 = *(arg6 + 0x900)
                                void* rbx_43 = rdi_26 + r9_12
                                arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                                int64_t r11_10 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                void* rsi_25 = rdi_26 + r10_11
                                arg14 = arg18
                                arg18 = _mm256_broadcast_sd(9.8813129168249309e-324)
                                zmm2 = _mm256_blendv_ps(zmm0, arg18, arg17)
                                int64_t r14_12 = arg12[0].q
                                void* rdx_55 = zmm2[0].q
                                int64_t rax_180 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                arg12[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                uint16_t* rcx_55 = arg12[0].q
                                zmm2[0].o = zx.o(*(rdx_55 + rbx_43))
                                int64_t rdx_57 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                    *(rax_180 + rsi_25), 1)
                                zmm2 = _mm256_broadcast_sd(1.9762625833649862e-323)
                                arg4 = _mm256_blendv_ps(zmm0, zmm2, arg17)
                                uint32_t rax_182 = zx.d(*(arg4[0].q + rbx_43))
                                int64_t rbx_44 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                                arg4[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                arg13[0].o = zx.o(rax_182)
                                uint16_t* rax_183 = arg4[0].q
                                arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, 
                                    *(rbx_44 + rsi_25), 1)
                                int64_t rsi_26 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                                arg4 = _mm256_blendv_ps(zmm0, arg15, arg16)
                                void* rbx_45 = rdi_26 + r14_12
                                arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                    *(rcx_55 + rbx_45), 2)
                                void* rcx_56 = rdi_26 + r11_10
                                arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, 
                                    *(rax_183 + rbx_45), 2)
                                int64_t rax_184 = arg4[0].q
                                void* rbx_46 = rdi_26 + rax_184
                                arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                    *(rdx_57 + rcx_56), 3)
                                int64_t rdx_58 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                                zmm5 = _mm256_blendv_ps(zmm0, arg18, arg16)
                                arg18 = arg14
                                arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, 
                                    *(rsi_26 + rcx_56), 3)
                                void* rcx_57 = rdi_26 + rdx_58
                                arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                    *(zmm5[0].q + rbx_46), 4)
                                int64_t rsi_28 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                    *(rsi_28 + rcx_57), 5)
                                arg4[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                zmm0 = _mm256_blendv_ps(zmm0, zmm2, arg16)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, 
                                    *(zmm0[0] + rbx_46), 4)
                                uint16_t* rsi_30 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                int64_t rbx_47 = arg4[0].q
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                    *(rsi_30 + rcx_57), 5)
                                void* rcx_58 = rdi_26 + rbx_47
                                arg13[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                    *(arg13[0].q + rcx_58), 6)
                                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                    *(zmm0[0] + rcx_58), 6)
                                zmm5[0].o = zx.o(*(rdi_26 + r9_12))
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                    *(rdi_26 + r10_11), 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                    *(rdi_26 + r14_12), 2)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                    *(rdi_26 + r11_10), 3)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                    *(rdi_26 + rax_184), 4)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                    *(rdi_26 + rdx_58), 5)
                                int64_t rax_185 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                                arg4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                    *(rdi_26 + rbx_47), 6)
                                void* rcx_60 = rdi_26 + rax_185
                                arg4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, 
                                    *(rdi_26 + rax_185), 7)
                                int64_t rax_186 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                    *(rax_186 + rcx_60), 7)
                                int64_t rax_187 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg4[0].q)
                                arg13[0].o = zx.o(0)
                                arg4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg4[0].o, zx.o(0))
                                zmm5[0].o = data_1434424d0
                                arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm0, arg4[0].o, 1))
                                arg4 = data_1434424e0
                                zmm0 = _mm256_div_ps(zmm0, arg4)
                                arg14[0].o = __vpmovzxwd_xmmdq_xmmq(arg12[0].q)
                                arg12[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg12[0].o, zx.o(0))
                                arg12[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm5[0].o)
                                arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
                                arg12 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg14, arg12[0].o, 1)), 
                                    arg4)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                    *(rax_187 + rcx_60), 7)
                                arg14[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
                                zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                                arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
                                zmm2 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg13, zmm2[0].o, 1)), 
                                    arg4)
                                arg4 = data_143442560
                                arg_3c0 = _mm256_maskstore_ps(arg20, _mm256_mul_ps(zmm0, arg4))
                                arg_3e0 = _mm256_maskstore_ps(arg20, _mm256_mul_ps(arg12, arg4))
                                zmm0 = _mm256_mul_ps(zmm2, arg4)
                                goto label_1402c3f25
                            case 3
                                zmm0[0].o = _mm256_extractf128_ps(arg18[0].o, 1)
                                zmm2 = arg27.32
                                arg12[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                                arg12[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg18[0].o)
                                arg48.32 = arg18
                                arg18 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                zmm0 = _mm256_and_ps(arg18, arg14)
                                int32_t* rax_194 = sx.q(zmm0[0].d)
                                void* rcx_70 = *(arg6 + 0x900)
                                void* r9_14 = rcx_70 + rax_194
                                arg24.d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 1)
                                arg53[0] = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 2)
                                arg36[0].d = __vpextrd_memd_xmmdq_immb(zmm0[0].o, 3)
                                zmm5 = arg16
                                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg47.o = zmm2[0].o
                                zmm0[0].o = *(r12_6 + r9_14)
                                arg31.o = zmm0[0].o
                                zmm0 = __vandps_ymmqq_ymmqq_memqq(arg18, data_142fc9540)
                                arg12[0].o = *(zx.q(zmm0[0].d) + r9_14)
                                arg56.o = arg12[0].o
                                arg14 = arg15
                                arg15 = __vandps_ymmqq_ymmqq_memqq(arg18, data_1434423c0)
                                arg12[0].o = *(zx.q(arg15[0]) + r9_14)
                                arg59.o = arg12[0].o
                                arg22 = __vandps_ymmqq_ymmqq_memqq(arg18, data_1434423e0)
                                arg12[0].o = *(zx.q(arg22[0]) + r9_14)
                                arg65[0].o = arg12[0].o
                                arg18 = __vandps_ymmqq_ymmqq_memqq(arg18, data_143442400)
                                arg12[0].o = *(zx.q(arg18[0]) + r9_14)
                                arg64[0].o = arg12[0].o
                                int64_t rax_200 = sx.q(zmm2[0])
                                arg63[0].q = rax_200
                                void* rbx_55 = rcx_70 + rax_200
                                arg12[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                zmm2 = arg4
                                arg4[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                arg13[0].o = _mm256_extractf128_ps(arg19[0].o, 1)
                                arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg4[0].o, arg13[0].o)
                                arg13[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg4[0].o)
                                arg16 = arg21
                                arg21 = zmm5
                                arg13[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg19[0].o)
                                zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
                                arg4 = _mm256_insertf128_ps(zmm5, arg4[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm5[0].o)
                                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg17[0].o)
                                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg21[0].o, arg13[0].o)
                                arg12 = _mm256_insertf128_ps(arg13, arg12[0].o, 1)
                                arg13[0].o = _mm_permute_ps(arg20[0].o, 0x50)
                                zmm5[0].o = _mm_permute_ps(arg20[0].o, 0xfa)
                                arg13 = _mm256_insertf128_ps(arg13, zmm5[0].o, 1)
                                zmm5[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
                                arg14[0].o = zx.o(0)
                                arg19 = _mm256_blendv_ps(arg14, arg12, arg13)
                                arg12[0].o = _mm_permute_ps(zmm5[0].o, 0x50)
                                arg13[0].o = _mm_permute_ps(zmm5[0].o, 0xfa)
                                arg12 = _mm256_insertf128_ps(arg12, arg13[0].o, 1)
                                arg13[0].o = *(rsi_17 + rbx_55)
                                zmm2[0].o = arg47.o
                                int32_t temp0_1617 = __vextractps_gpr32_xmmdq_immb(zmm2[0].o, 1)
                                arg17 = _mm256_blendv_ps(arg14, arg4, arg12)
                                arg61[0] = __vextractps_memd_xmmdq_immb(zmm2[0].o, 2)
                                arg12[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg62[0].d = __vextractps_memd_xmmdq_immb(zmm2[0].o, 3)
                                arg4[0].o = *(zx.q(arg12[0]) + rbx_55)
                                zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                arg45.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                                arg35.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                                arg_340[0].q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                                zmm0[0].o = *(zx.q(zmm5[0]) + rbx_55)
                                uint64_t rsi_41 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                                uint64_t r12_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                                arg42.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                                uint64_t r10_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                                uint64_t r15_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                                arg12[0].o = _mm256_extractf128_ps(arg22[0].o, 1)
                                arg41.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                                int32_t* rax_206 = zx.q(arg12[0])
                                uint64_t rdx_62 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                                uint64_t r11_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                                zmm5[0].o = *(rax_206 + rbx_55)
                                arg43.q = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                                arg12[0].o = _mm256_extractf128_ps(arg18[0].o, 1)
                                uint64_t rcx_71 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                                uint64_t rdi_28 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                                int32_t* rax_208 = zx.q(arg12[0])
                                uint64_t r14_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                                arg12[0].o = *(rax_208 + rbx_55)
                                int64_t r9_15 = sx.q(temp0_1617)
                                int64_t rbx_57 = *(arg6 + 0x900) + r9_15
                                arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                    *(arg25[0] + rbx_57), 0x10)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(rsi_41 + rbx_57), 0x10)
                                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(r10_13 + rbx_57), 0x10)
                                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                    *(rdx_62 + rbx_57), 0x10)
                                arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                    *(rcx_71 + rbx_57), 0x10)
                                int64_t rcx_72 = sx.q(arg61[0])
                                int64_t rdx_64 = *(arg6 + 0x900) + rcx_72
                                arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                    *(arg28[0].q + rdx_64), 0x20)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(r12_8 + rdx_64), 0x20)
                                float* r12_9 = *(arg6 + 0x900)
                                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(r15_10 + rdx_64), 0x20)
                                arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                    *(r11_12 + rdx_64), 0x20)
                                arg55.32 = arg16
                                zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                    *(rdi_28 + rdx_64), 0x20)
                                int64_t rdx_65 = sx.q(arg62[0].d)
                                void* rbx_59 = r12_9 + rdx_65
                                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                    *(arg40[0] + rbx_59), 0x30)
                                arg16[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(arg42.q + rbx_59), 0x30)
                                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(arg41.q + rbx_59), 0x30)
                                arg40 = zmm0[0].o
                                arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                    *(arg43.q + rbx_59), 0x30)
                                zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                    *(r14_14 + rbx_59), 0x30)
                                uint64_t rbx_60 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 1))
                                uint64_t r14_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 2))
                                float* r10_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 3))
                                uint64_t rsi_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg22[0].o, 1))
                                uint64_t rdi_30 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg22[0].o, 2))
                                float* r11_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg22[0].o, 3))
                                zmm0[0].o = *(r12_9 + rax_194)
                                arg4[0].o = *(r12_9 + arg63[0].q)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(r12_9 + r9_15), 0x10)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(r12_9 + rcx_72), 0x20)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(r12_9 + rdx_65), 0x30)
                                int64_t rax_214 = sx.q(arg24.d)
                                void* rcx_73 = r12_9 + rax_214
                                arg12[0].o = arg31.o
                                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                    *(arg49[0] i+ rcx_73), 0x10)
                                arg12[0].o = arg56.o
                                arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                    *(arg45.q + rcx_73), 0x10)
                                arg13[0].o = arg59.o
                                arg15[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                    *(rbx_60 + rcx_73), 0x10)
                                arg13[0].o = arg65[0].o
                                arg22[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                    *(rsi_42 + rcx_73), 0x10)
                                float* rdx_68 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg18[0].o, 1))
                                arg13[0].o = arg64[0].o
                                arg21[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                    *(rdx_68 + rcx_73), 0x10)
                                uint64_t rcx_74 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg18[0].o, 2))
                                float* rdx_69 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg18[0].o, 3))
                                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(r12_9 + rax_214), 0x10)
                                int64_t rax_215 = sx.q(arg53[0])
                                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(r12_9 + rax_215), 0x20)
                                void* rax_216 = r12_9 + rax_215
                                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                    *(rbx_29 + rax_216), 0x20)
                                int64_t rsi_44 = sx.q(arg36[0].d)
                                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(r12_9 + rsi_44), 0x30)
                                arg18 = _mm256_insertf128_ps(zmm0, arg4[0].o, 1)
                                void* rsi_45 = r12_9 + rsi_44
                                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                    *(r10_8 + rsi_45), 0x30)
                                arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                    *(arg35.q + rax_216), 0x20)
                                arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                    *(arg_340[0].q + rsi_45), 0x30)
                                arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg15[0].o, 
                                    *(r14_15 + rax_216), 0x20)
                                arg15[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                    *(r10_14 + rsi_45), 0x30)
                                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg22[0].o, 
                                    *(rdi_30 + rax_216), 0x20)
                                arg22[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(r11_13 + rsi_45), 0x30)
                                arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg21[0].o, 
                                    *(rcx_74 + rax_216), 0x20)
                                arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                    *(rdx_69 + rsi_45), 0x30)
                                int64_t rax_217 = arg19[0].q
                                int64_t rcx_75 = __vpextrq_gpr64q_xmmdq_immb(arg19[0].o, 1)
                                arg4[0].o = _mm256_extractf128_ps(arg19[0].o, 1)
                                arg19 = arg27.32
                                int64_t rdx_70 = arg4[0].q
                                int64_t rbx_64 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                                arg4[0].o = zx.o(*(r12_9 + rax_217))
                                int64_t rax_218 = __vpextrq_gpr64q_xmmdq_immb(arg17[0].o, 1)
                                arg4[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(arg4[0].o, *(r12_9 + rcx_75), 1)
                                int64_t rcx_76 = arg17[0].q
                                zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                                arg4[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(arg4[0].o, *(r12_9 + rdx_70), 2)
                                int64_t rdx_71 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg4[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(arg4[0].o, *(r12_9 + rbx_64), 3)
                                double rbx_65 = zmm0[0]
                                zmm0[0].o = zx.o(*(r12_9 + rcx_76))
                                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(r12_9 + rax_218), 1)
                                zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                    *(r12_9 i+ rbx_65), 2)
                                zmm0[0].o =
                                    __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r12_9 + rdx_71), 3)
                                arg17 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                                arg16 = _mm256_insertf128_ps(arg12, arg16[0].o, 1)
                                zmm5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg15, arg40, 1)
                                arg14 = _mm256_insertf128_ps(arg22, arg14[0].o, 1)
                                arg22 = arg52
                                arg15 = _mm256_insertf128_ps(arg13, zmm7[0].o, 1)
                                zmm7 = __vandps_ymmqq_ymmqq_memqq(
                                    _mm256_insertf128_ps(arg4, zmm0[0].o, 1), data_143442420)
                                arg12[0].o = __vpsrld_xmmdq_xmmdq_immb(arg4[0].o, 0xa)
                                zmm2[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                arg13[0].o = data_143442490
                                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                                arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg13[0].o)
                                zmm7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0xa)
                                zmm2 = __vdivps_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg13, zmm2[0].o, 1)), 
                                    data_1434424a0)
                                arg13[0].o = data_143442480
                                zmm7[0].o &= arg13[0].o
                                arg12[0].o &= arg13[0].o
                                arg13[0].o = data_143442440
                                zmm7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg13[0].o)
                                arg12[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
                                arg12 =
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg12, zmm7[0].o, 1))
                                zmm7 = data_143442460
                                arg12 = _mm256_div_ps(arg12, zmm7)
                                zmm2 = _mm256_add_ps(arg18, _mm256_mul_ps(zmm5, zmm2))
                                arg18 = arg48.32
                                arg12 = _mm256_mul_ps(arg14, arg12)
                                arg4[0].o = __vpsrld_xmmdq_xmmdq_immb(arg4[0].o, 0x15)
                                zmm0[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm0[0].o, 0x15)
                                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                                arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg13[0].o)
                                zmm0 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg4, zmm0[0].o, 1)), 
                                    zmm7)
                                arg21 = arg55.32
                                arg12 = _mm256_add_ps(arg17, arg12)
                                arg_3c0 = _mm256_maskstore_ps(arg20, zmm2)
                                zmm0 = _mm256_mul_ps(arg15, zmm0)
                                arg_3e0 = _mm256_maskstore_ps(arg20, arg12)
                                zmm0 = _mm256_add_ps(arg16, zmm0)
                                arg_400 = _mm256_maskstore_ps(arg20, zmm0)
                            case 4, 5, 6
                                goto label_1402c3c44
                    
                    zmm7 = arg26.32
                    zmm0[0].o = _mm256_extractf128_ps(arg18[0].o, 1)
                    arg12[0].o = _mm256_extractf128_ps(arg19[0].o, 1)
                    arg20[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg19[0].o, arg18[0].o)
                    arg12[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg12[0].o, arg32.o)
                    arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm7[0].o, arg23)
                    arg4[0].o = zmm2[0].o & not.o(arg20[0].o)
                    arg13[0].o = arg14[0].o & not.o(zmm5[0].o)
                    arg13[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, arg4[0].o)
                    arg4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(arg4[0].o) != 0)
                        zmm0 = _mm256_insertf128_ps(zmm5, arg20[0].o, 1)
                        arg4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                        zmm2[0].o ^= arg4[0].o
                        arg4[0].o ^= arg14[0].o
                        zmm2 = _mm256_insertf128_ps(arg4, zmm2[0].o, 1)
                        arg17 = _mm256_and_ps(zmm2, zmm0)
                        double arg_540[0x4]
                        float arg_560[0x8]
                        
                        if (arg33.d u> 6)
                        label_1402c4285:
                            zmm0[0].o = zx.o(0)
                            arg_540 = _mm256_maskstore_ps(arg17, zmm0)
                            arg_560 = _mm256_maskstore_ps(arg17, zmm0)
                        else
                            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg21[0].o)
                            arg12[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg12[0].o, arg30)
                            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
                            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
                            arg4 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
                            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                            zmm2 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                            
                            switch (r15_8)
                                case 0, 1
                                    zmm7 = arg51
                                    zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    arg16 = arg29
                                    arg12[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                    arg15 = arg37.32
                                    arg13[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                    arg19 = arg34
                                    zmm5[0].o = _mm256_extractf128_ps(arg19[0].o, 1)
                                    arg14[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                    arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                                    arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                                    arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg4[0].o)
                                    arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, arg4[0].o)
                                    arg13 = _mm256_insertf128_ps(arg4, arg13[0].o, 1)
                                    arg4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                                    arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm2[0].o)
                                    arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg12[0].o)
                                    zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                    arg12[0].o = _mm_permute_ps(arg17[0].o, 0x50)
                                    zmm2[0].o = _mm_permute_ps(arg17[0].o, 0xfa)
                                    zmm2 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                                    arg12[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                                    arg18[0].o = zx.o(0)
                                    zmm0 = _mm256_blendv_ps(arg18, zmm0, zmm2)
                                    zmm5[0].o = _mm_permute_ps(arg12[0].o, 0x50)
                                    arg12[0].o = _mm_permute_ps(arg12[0].o, 0xfa)
                                    arg14 = _mm256_insertf128_ps(zmm5, arg12[0].o, 1)
                                    arg13 = _mm256_blendv_ps(arg18, arg13, arg14)
                                    double r10_12 = zmm0[0]
                                    int64_t r9_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    int32_t* rdi_27 = *(arg6 + 0x900)
                                    void* rsi_33 = rdi_27 i+ r10_12
                                    void* r8_6 = rdi_27 + r9_13
                                    arg16[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    int64_t r11_11 = arg13[0].q
                                    void* rdx_59 = rdi_27 + r11_11
                                    int64_t r14_13 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                    void* rcx_63 = rdi_27 + r14_13
                                    zmm5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                    arg15 = _mm256_broadcast_sd(1.9762625833649862e-323)
                                    zmm7 = _mm256_blendv_ps(arg18, arg15, arg14)
                                    int32_t* rbx_48 = zmm7[0].q
                                    zmm0 = _mm256_broadcast_sd(3.9525251667299724e-323)
                                    arg13 = _mm256_blendv_ps(arg18, zmm0, arg14)
                                    arg14[0].o = *(rbx_48 + rdx_59)
                                    arg12[0].o = *(arg13[0].q + rdx_59)
                                    int64_t rdx_60 = zmm5[0].q
                                    float* rbx_50 = __vpextrq_gpr64q_xmmdq_immb(zmm7[0].o, 1)
                                    arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                        *(rbx_50 + rcx_63), 0x10)
                                    float* rbx_51 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                    arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(rbx_51 + rcx_63), 0x10)
                                    void* rcx_64 = rdi_27 + rdx_60
                                    arg15 = _mm256_blendv_ps(arg18, arg15, zmm2)
                                    arg4[0].o = *(arg15[0].q + rsi_33)
                                    zmm0 = _mm256_blendv_ps(arg18, zmm0, zmm2)
                                    arg19 = arg27.32
                                    zmm2[0].o = *(zmm0[0] + rsi_33)
                                    int64_t rbx_54 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                        *(zmm5[0].q + rcx_64), 0x20)
                                    arg13[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                    arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(arg13[0].q + rcx_64), 0x20)
                                    void* rcx_65 = rdi_27 + rbx_54
                                    int64_t rsi_36 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                        *(rsi_36 + rcx_65), 0x30)
                                    int64_t rsi_37 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                    arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                        *(rsi_37 + r8_6), 0x10)
                                    float* rsi_38 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                    arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(rsi_38 + rcx_65), 0x30)
                                    float* rcx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                        *(rcx_66 + r8_6), 0x10)
                                    int64_t rcx_67 = arg16[0].q
                                    void* rsi_39 = rdi_27 + rcx_67
                                    arg13[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                    arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                        *(arg13[0].q + rsi_39), 0x20)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                        *(zmm0[0] + rsi_39), 0x20)
                                    arg14[0].o = *(rdi_27 i+ r10_12)
                                    zmm7[0].o = *(rdi_27 + r11_11)
                                    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                        *(rdi_27 + r14_13), 0x10)
                                    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                        *(rdi_27 + rdx_60), 0x20)
                                    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                        *(rdi_27 + rbx_54), 0x30)
                                    arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                        *(rdi_27 + r9_13), 0x10)
                                    arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                        *(rdi_27 + rcx_67), 0x20)
                                    int64_t rax_191 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                    arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                        *(rdi_27 + rax_191), 0x30)
                                    void* rax_192 = rdi_27 + rax_191
                                    int64_t rcx_68 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                    arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                        *(rcx_68 + rax_192), 0x30)
                                    float* rcx_69 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                        *(rcx_69 + rax_192), 0x30)
                                    arg_540 = _mm256_maskstore_ps(arg17, 
                                        _mm256_insertf128_ps(arg14, zmm7[0].o, 1))
                                    arg_560 = _mm256_maskstore_ps(arg17, 
                                        _mm256_insertf128_ps(arg4, zmm5[0].o, 1))
                                    zmm0 = _mm256_insertf128_ps(zmm0, arg12[0].o, 1)
                                case 2
                                    zmm7 = arg51
                                    zmm0[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    arg16 = arg29
                                    arg12[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                    arg15 = arg37.32
                                    arg13[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                    arg21 = arg34
                                    zmm5[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                                    arg14[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                    arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                                    arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                                    arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg4[0].o)
                                    arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg21[0].o, arg4[0].o)
                                    arg4 = _mm256_insertf128_ps(arg4, arg13[0].o, 1)
                                    arg13[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                                    arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm2[0].o)
                                    arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg12[0].o)
                                    zmm0 = _mm256_insertf128_ps(arg12, zmm0[0].o, 1)
                                    arg12[0].o = _mm_permute_ps(arg17[0].o, 0x50)
                                    zmm2[0].o = _mm_permute_ps(arg17[0].o, 0xfa)
                                    zmm5 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                                    arg15[0].o = zx.o(0)
                                    zmm0 = _mm256_blendv_ps(arg15, zmm0, zmm5)
                                    arg13[0].o = _mm_permute_ps(zmm2[0].o, 0x50)
                                    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xfa)
                                    zmm2 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                                    arg4 = _mm256_blendv_ps(arg15, arg4, zmm2)
                                    double r10_15 = zmm0[0]
                                    uint16_t* rbx_66 = *(arg6 + 0x900)
                                    void* rdi_31 = rbx_66 i+ r10_15
                                    int64_t r9_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    void* rsi_46 = rbx_66 + r9_16
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    double r8_9 = zmm0[0]
                                    int64_t r11_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    void* rcx_77 = rbx_66 i+ r8_9
                                    arg14 = _mm256_broadcast_sd(9.8813129168249309e-324)
                                    arg13 = _mm256_blendv_ps(arg15, arg14, zmm5)
                                    void* rdx_72 = rbx_66 + r11_14
                                    zmm0[0].o = zx.o(*(arg13[0].q + rdi_31))
                                    int64_t rax_221 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                        *(rax_221 + rsi_46), 1)
                                    zmm7 = _mm256_broadcast_sd(1.9762625833649862e-323)
                                    zmm5 = _mm256_blendv_ps(arg15, zmm7, zmm5)
                                    uint32_t rax_223 = zx.d(*(zmm5[0].q + rdi_31))
                                    uint16_t* rdi_32 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    arg12[0].o = zx.o(rax_223)
                                    int64_t rax_224 = arg4[0].q
                                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                        *(rdi_32 + rsi_46), 1)
                                    void* rdi_33 = rbx_66 + rax_224
                                    arg13[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                        *(arg13[0].q + rcx_77), 2)
                                    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                        *(zmm5[0].q + rcx_77), 2)
                                    int64_t rcx_78 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                                    arg14 = _mm256_blendv_ps(arg15, arg14, zmm2)
                                    uint16_t* rsi_49 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                        *(rsi_49 + rdx_72), 3)
                                    uint16_t* rsi_50 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                        *(rsi_50 + rdx_72), 3)
                                    void* rdx_73 = rbx_66 + rcx_78
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                        *(arg14[0].q + rdi_33), 4)
                                    uint16_t* rsi_52 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                        *(rsi_52 + rdx_73), 5)
                                    arg4[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                    zmm2 = _mm256_blendv_ps(arg15, zmm7, zmm2)
                                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                        *(zmm2[0].q + rdi_33), 4)
                                    uint16_t* rdi_34 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    int64_t rsi_54 = arg4[0].q
                                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                        *(rdi_34 + rdx_73), 5)
                                    void* rdx_74 = rbx_66 + rsi_54
                                    arg13[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                        *(arg13[0].q + rdx_74), 6)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                        *(zmm2[0].q + rdx_74), 6)
                                    zmm5[0].o = zx.o(*(rbx_66 i+ r10_15))
                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                        *(rbx_66 + r9_16), 1)
                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                        *(rbx_66 i+ r8_9), 2)
                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                        *(rbx_66 + r11_14), 3)
                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                        *(rbx_66 + rax_224), 4)
                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                        *(rbx_66 + rcx_78), 5)
                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                        *(rbx_66 + rsi_54), 6)
                                    int64_t rax_225 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                                    arg4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                        *(rbx_66 + rax_225), 7)
                                    void* rax_226 = rbx_66 + rax_225
                                    int64_t rcx_79 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                        *(rcx_79 + rax_226), 7)
                                    int64_t rcx_80 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg4[0].q)
                                    arg13[0].o = zx.o(0)
                                    arg4[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg4[0].o, zx.o(0))
                                    zmm5[0].o = data_1434424d0
                                    arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
                                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                                    zmm2 =
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, arg4[0].o, 1))
                                    arg4 = data_1434424e0
                                    zmm2 = _mm256_div_ps(zmm2, arg4)
                                    arg14[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                                    zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                                    arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
                                    zmm0 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg14, zmm0[0].o, 
                                            1)), 
                                        arg4)
                                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, 
                                        *(rcx_80 + rax_226), 7)
                                    arg14[0].o = __vpmovzxwd_xmmdq_xmmq(arg12[0].q)
                                    arg12[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg12[0].o, zx.o(0))
                                    arg12[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm5[0].o)
                                    arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
                                    arg12 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg13, arg12[0].o, 
                                            1)), 
                                        arg4)
                                    arg4 = data_143442560
                                    arg_540 = _mm256_maskstore_ps(arg17, _mm256_mul_ps(zmm2, arg4))
                                    arg_560 = _mm256_maskstore_ps(arg17, _mm256_mul_ps(zmm0, arg4))
                                    zmm0 = _mm256_mul_ps(arg12, arg4)
                                case 3
                                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(arg13[0].q)
                                    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                                    arg12[0].o =
                                        __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                                    arg12[0].o = __vpslld_xmmdq_xmmdq_immb(arg12[0].o, 0x1f)
                                    arg12[0].o = __vpsrad_xmmdq_xmmdq_immb(arg12[0].o, 0x1f)
                                    arg19 = _mm256_insertf128_ps(zmm0, arg12[0].o, 1)
                                    arg16 = __vandps_ymmqq_ymmqq_memqq(arg19, arg_1e0.32)
                                    int32_t temp0_1822 =
                                        __vextractps_gpr32_xmmdq_immb(arg16[0].o, 1)
                                    arg32.d = __vextractps_memd_xmmdq_immb(arg16[0].o, 2)
                                    arg23[0].d = __vextractps_memd_xmmdq_immb(arg16[0].o, 3)
                                    zmm0[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                    int64_t rdx_76 = sx.q(zmm0[0].d)
                                    float* r12_10 = *(arg6 + 0x900)
                                    void* rcx_82 = r12_10 + rdx_76
                                    arg12[0].o = *(r12_10 + rdx_76)
                                    int64_t rdi_37 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                                    int64_t rdx_78 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                                    int32_t temp0_1828 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(r12_10 + rdi_37), 0x10)
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                        *(r12_10 + rdx_78), 0x20)
                                    arg30 = zmm0[0].o
                                    arg21 = __vandps_ymmqq_ymmqq_memqq(arg19, data_142fc9520)
                                    arg49[0] = zx.q(__vextractps_gpr32_xmmdq_immb(arg21[0].o, 1))
                                    void* rdi_38 = r12_10 + rdi_37
                                    arg26[0].q = zx.q(__vextractps_gpr32_xmmdq_immb(arg21[0].o, 2))
                                    zmm0[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                                    arg12[0].o = *(zx.q(zmm0[0].d) + rcx_82)
                                    uint64_t rax_229 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                                    uint64_t r13_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                                    uint64_t r10_16 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(rax_229 + rdi_38), 0x10)
                                    arg38.o = zmm0[0].o
                                    arg48.32 = arg18
                                    zmm0 = __vandps_ymmqq_ymmqq_memqq(arg19, data_142fc9540)
                                    arg40.32 = zmm0
                                    arg12[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    arg28 = arg12[0].o
                                    zmm0[0].o = *(zx.q(arg12[0]) + rcx_82)
                                    uint64_t rax_231 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                        *(rax_231 + rdi_38), 0x10)
                                    arg25 = zmm0[0].o
                                    zmm0 = arg37.32
                                    arg12[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    arg13[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                                    arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
                                    zmm5 = arg34
                                    arg13[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                                    arg22 = __vandps_ymmqq_ymmqq_memqq(arg19, data_1434423c0)
                                    arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
                                    arg4[0].o = _mm256_extractf128_ps(arg22[0].o, 1)
                                    uint64_t rax_232 = zx.q(arg4[0])
                                    arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                                    zmm5[0].o = _mm256_extractf128_ps(arg51[0].o, 1)
                                    arg12 = _mm256_insertf128_ps(arg13, arg12[0].o, 1)
                                    arg13[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                                    arg14 = arg29
                                    zmm5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                                    arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                                    uint64_t rsi_55 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(arg4[0].o, 1))
                                    zmm5[0].o = *(rax_232 + rcx_82)
                                    arg18[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                        *(rsi_55 + rdi_38), 0x10)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg51[0].o, zmm2[0].o)
                                    zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
                                    zmm2 = _mm256_insertf128_ps(zmm2, arg13[0].o, 1)
                                    arg13[0].o = _mm_permute_ps(arg17[0].o, 0x50)
                                    arg14[0].o = _mm_permute_ps(arg17[0].o, 0xfa)
                                    arg13 = _mm256_insertf128_ps(arg13, arg14[0].o, 1)
                                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                                    zmm2 = _mm256_blendv_ps(arg14, zmm2, arg13)
                                    arg13[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                                    zmm7[0].o = _mm_permute_ps(arg13[0].o, 0x50)
                                    arg13[0].o = _mm_permute_ps(arg13[0].o, 0xfa)
                                    arg13 = _mm256_insertf128_ps(zmm7, arg13[0].o, 1)
                                    zmm7 = __vandps_ymmqq_ymmqq_memqq(arg19, data_1434423e0)
                                    arg15 = _mm256_blendv_ps(arg14, arg12, arg13)
                                    arg14[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
                                    arg13[0].o = *(zx.q(arg14[0]) + rcx_82)
                                    float* rax_234 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 1))
                                    arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                        *(rax_234 + rdi_38), 0x10)
                                    float rax_235 = arg16[0]
                                    arg16 = __vandps_ymmqq_ymmqq_memqq(arg19, data_143442400)
                                    arg19[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                                    int32_t* rsi_56 = zx.q(arg19[0])
                                    float* rbx_69 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg19[0].o, 1))
                                    arg51[0].o = *(rsi_56 + rcx_82)
                                    arg51[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg51[0].o, 
                                        *(rbx_69 + rdi_38), 0x10)
                                    arg51[0] = zx.q(__vextractps_gpr32_xmmdq_immb(arg21[0].o, 3))
                                    uint64_t rsi_57 = zx.q(arg21[0].d)
                                    void* rdx_79 = r12_10 + rdx_78
                                    zmm5[0].o = arg38.o
                                    arg21[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                        *(r13_3 + rdx_79), 0x20)
                                    arg12[0].o = arg20[0].o
                                    arg20[0].o = arg28
                                    uint64_t rdi_39 =
                                        zx.q(__vextractps_gpr32_xmmdq_immb(arg20[0].o, 2))
                                    zmm5[0].o = arg25
                                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                        *(rdi_39 + rdx_79), 0x20)
                                    arg29[0].o = zmm5[0].o
                                    uint64_t rdi_40 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(arg4[0].o, 2))
                                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg18[0].o, 
                                        *(rdi_40 + rdx_79), 0x20)
                                    arg37 = zmm5[0].o
                                    uint64_t rdi_41 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 2))
                                    arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                        *(rdi_41 + rdx_79), 0x20)
                                    arg25 = arg13[0].o
                                    float* rdi_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg19[0].o, 2))
                                    arg51[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg51[0].o, 
                                        *(rdi_42 + rdx_79), 0x20)
                                    arg_1e0.o = arg51[0].o
                                    int64_t rax_236 = sx.q(rax_235)
                                    zmm0 = arg40.32
                                    int32_t* rdx_80 = zx.q(zmm0[0].d)
                                    uint64_t rdi_43 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                                    arg34[0] = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                                    uint64_t r13_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                                    arg18[0].o = *(r12_10 + rax_236)
                                    void* rax_237 = r12_10 + rax_236
                                    uint64_t r11_15 =
                                        zx.q(__vextractps_gpr32_xmmdq_immb(arg20[0].o, 3))
                                    arg20[0].o = arg12[0].o
                                    zmm0[0].o = *(rsi_57 + rax_237)
                                    int64_t rsi_58 = sx.q(temp0_1828)
                                    arg13[0].o = arg30
                                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg13[0].o, 
                                        *(r12_10 + rsi_58), 0x30)
                                    void* rsi_59 = r12_10 + rsi_58
                                    arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg21[0].o, 
                                        *(r10_16 + rsi_59), 0x30)
                                    arg30 = arg12[0].o
                                    int32_t* r10_17 = zx.q(arg22[0])
                                    uint64_t r14_17 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(arg22[0].o, 1))
                                    uint64_t r15_11 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(arg22[0].o, 2))
                                    float* rcx_85 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg22[0].o, 3))
                                    arg22[0].o = *(rdx_80 + rax_237)
                                    int64_t rdx_81 = sx.q(temp0_1822)
                                    arg18[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg18[0].o, 
                                        *(r12_10 + rdx_81), 0x10)
                                    uint64_t r9_17 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg4[0].o, 3))
                                    arg4[0].o = *(r10_17 + rax_237)
                                    int32_t* r10_18 = zx.q(zmm7[0])
                                    float* r8_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg14[0].o, 3))
                                    arg14[0].o = *(r10_18 + rax_237)
                                    int32_t* r10_19 = zx.q(arg16[0])
                                    float* rcx_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg19[0].o, 3))
                                    arg19[0].o = *(r10_19 + rax_237)
                                    void* rax_238 = r12_10 + rdx_81
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                        *(arg49[0] i+ rax_238), 0x10)
                                    arg12[0].o = arg29[0].o
                                    arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(r11_15 + rsi_59), 0x30)
                                    arg29[0].o = arg12[0].o
                                    arg22[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg22[0].o, 
                                        *(rdi_43 + rax_238), 0x10)
                                    arg12[0].o = arg37
                                    arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(r9_17 + rsi_59), 0x30)
                                    arg37 = arg12[0].o
                                    arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                        *(r14_17 + rax_238), 0x10)
                                    arg12[0].o = arg25
                                    arg21[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(r8_11 + rsi_59), 0x30)
                                    float* rdx_83 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7[0].o, 1))
                                    arg12[0].o = arg_1e0.o
                                    arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(rcx_86 + rsi_59), 0x30)
                                    uint64_t r8_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7[0].o, 2))
                                    float* rdi_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7[0].o, 3))
                                    arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                        *(rdx_83 + rax_238), 0x10)
                                    float* rdx_84 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 1))
                                    arg19[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg19[0].o, 
                                        *(rdx_84 + rax_238), 0x10)
                                    uint64_t rax_239 =
                                        zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 2))
                                    float* rdx_85 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg16[0].o, 3))
                                    int64_t rsi_60 = sx.q(arg32.d)
                                    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg18[0].o, 
                                        *(r12_10 + rsi_60), 0x20)
                                    void* rsi_61 = r12_10 + rsi_60
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                        *(arg26[0].q + rsi_61), 0x20)
                                    int64_t rcx_88 = sx.q(arg23[0].d)
                                    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                        *(r12_10 + rcx_88), 0x30)
                                    arg16 = _mm256_insertf128_ps(zmm7, zmm5[0].o, 1)
                                    void* rcx_89 = r12_10 + rcx_88
                                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                                        *(arg51[0] i+ rcx_89), 0x30)
                                    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg22[0].o, 
                                        *(arg34[0] + rsi_61), 0x20)
                                    arg22 = arg52
                                    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, 
                                        *(r13_4 + rcx_89), 0x30)
                                    arg10 = arg46
                                    arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                        *(r15_11 + rsi_61), 0x20)
                                    arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, 
                                        *(rcx_85 + rcx_89), 0x30)
                                    arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                        *(r8_12 + rsi_61), 0x20)
                                    arg14[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg14[0].o, 
                                        *(rdi_44 + rcx_89), 0x30)
                                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg19[0].o, 
                                        *(rax_239 + rsi_61), 0x20)
                                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                                        *(rdx_85 + rcx_89), 0x30)
                                    int64_t rax_240 = zmm2[0].q
                                    int64_t rcx_90 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                                    int64_t rdx_86 = zmm2[0].q
                                    int64_t rbx_73 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm2[0].o = zx.o(*(r12_10 + rax_240))
                                    int64_t rax_241 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                        *(r12_10 + rcx_90), 1)
                                    int64_t rcx_91 = arg15[0].q
                                    arg12[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                        *(r12_10 + rdx_86), 2)
                                    int64_t rdx_87 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                                        *(r12_10 + rbx_73), 3)
                                    int64_t rbx_74 = arg12[0].q
                                    arg12[0].o = zx.o(*(r12_10 + rcx_91))
                                    arg12[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(r12_10 + rax_241), 1)
                                    arg12[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(r12_10 + rbx_74), 2)
                                    arg12[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(arg12[0].o, 
                                        *(r12_10 + rdx_87), 3)
                                    arg19 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, arg30, 1)
                                    arg18 =
                                        __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm7, arg29[0].o, 1)
                                    arg4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg4, arg37, 1)
                                    arg14 = _mm256_insertf128_ps(arg14, arg21[0].o, 1)
                                    arg15 = _mm256_insertf128_ps(zmm5, arg13[0].o, 1)
                                    zmm5 = __vandps_ymmqq_ymmqq_memqq(
                                        _mm256_insertf128_ps(zmm2, arg12[0].o, 1), data_143442420)
                                    zmm7[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0xa)
                                    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                                    arg13[0].o = data_143442490
                                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                                    arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
                                    zmm5[0].o = __vpsrld_xmmdq_xmmdq_immb(arg12[0].o, 0xa)
                                    zmm0 = __vdivps_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg13, zmm0[0].o, 
                                            1)), 
                                        data_1434424a0)
                                    arg13[0].o = data_143442480
                                    zmm5[0].o &= arg13[0].o
                                    arg13[0].o &= zmm7[0].o
                                    zmm7[0].o = data_143442440
                                    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm7[0].o)
                                    arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm7[0].o)
                                    arg13 = _mm256_cvtepi32_ps(_mm256_insertf128_ps(arg13, 
                                        zmm5[0].o, 1))
                                    zmm5 = data_143442460
                                    arg13 = _mm256_div_ps(arg13, zmm5)
                                    zmm0 = _mm256_add_ps(arg16, _mm256_mul_ps(arg4, zmm0))
                                    arg4 = _mm256_mul_ps(arg14, arg13)
                                    zmm2[0].o = __vpsrld_xmmdq_xmmdq_immb(zmm2[0].o, 0x15)
                                    arg12[0].o = __vpsrld_xmmdq_xmmdq_immb(arg12[0].o, 0x15)
                                    arg12[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm7[0].o)
                                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                    arg12 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_insertf128_ps(zmm2, arg12[0].o, 
                                            1)), 
                                        zmm5)
                                    zmm2 = _mm256_add_ps(arg19, arg4)
                                    arg19 = arg27.32
                                    arg_540 = _mm256_maskstore_ps(arg17, zmm0)
                                    zmm0 = _mm256_mul_ps(arg15, arg12)
                                    arg_560 = _mm256_maskstore_ps(arg17, zmm2)
                                    zmm0 = _mm256_add_ps(arg18, zmm0)
                                    arg18 = arg48.32
                                case 4, 5, 6
                                    goto label_1402c4285
                        
                        float arg_580[0x8] = _mm256_maskstore_ps(arg17, zmm0)
                        arg14 = __return_addr.32
                        arg4 = arg_3c0
                        arg13 = arg_3e0
                        zmm5 = arg_400
                        zmm0 = _mm256_sub_ps(arg_540, arg4)
                        arg12 = _mm256_sub_ps(arg_560, arg13)
                        zmm2 = _mm256_sub_ps(arg_580, zmm5)
                        zmm0 = _mm256_mul_ps(arg14, zmm0)
                        arg12 = _mm256_mul_ps(arg14, arg12)
                        zmm2 = _mm256_mul_ps(arg14, zmm2)
                        arg_3c0 = _mm256_maskstore_ps(arg17, _mm256_add_ps(arg4, zmm0))
                        arg_3e0 = _mm256_maskstore_ps(arg17, _mm256_add_ps(arg13, arg12))
                        zmm0 = _mm256_add_ps(zmm5, zmm2)
                        arg_400 = _mm256_maskstore_ps(arg17, zmm0)
                    
                    arg12 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg22, arg50[0].o, 1)
                    zmm2[0].o = arg_3c0[0].o
                    arg4[0].o = arg_3c0[4].o
                    arg13[0].o = arg_3e0[0].o
                    zmm5[0].o = arg_3e0[4].o
                    arg14[0].o = arg_400[0].o
                    zmm7[0].o = arg_400[4].o
                    arg15[0].o = zx.o(0)
                    arg17[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg15[0].o)
                    arg16[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg15[0].o)
                    zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                    zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                    arg13[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg14[0].o, 0x28)
                    int128_t arg_6c0 = arg13[0].o
                    zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg17[0].o)
                    int128_t arg_6d0 = zmm0[0].o
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg14[0].o, 0xa8)
                    int128_t arg_6e0 = zmm0[0].o
                    zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg16[0].o)
                    int128_t arg_6f0 = zmm0[0].o
                    zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg15[0].o)
                    zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg15[0].o)
                    arg13[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
                    arg4[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
                    zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg13[0].o, zmm7[0].o, 0x28)
                    int128_t arg_700 = zmm5[0].o
                    zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                    int128_t arg_710 = zmm0[0].o
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm7[0].o, 0xa8)
                    int128_t arg_720 = zmm0[0].o
                    zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm2[0].o)
                    int128_t arg_730 = zmm0[0].o
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg19[0].o, arg18[0].o)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg20[0].o, 1)
                    i_4 = zx.q(_mm256_movemask_ps(zmm0))
                    
                    do
                        uint64_t rcx_92
                        uint64_t rflags_2
                        
                        if (i_4 == 0)
                            rcx_92 = 0x40
                        else
                            rcx_92, rflags_2 = _bit_scan_forward(i_4)
                        float arg_820[0x8] = arg12
                        zmm0[0].o = (&arg_6c0)[rcx_92]
                        *(arg10 + sx.q(arg_820[zx.q(rcx_92.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
                        i_4 &= rol.q(-2, rcx_92.b)
                    while (i_4 != 0)
                
                arg14[0].o = *(arg6 + 0x7f0)
                zmm7[0].o = *(arg6 + 0x800)
                arg15[0].o = *(arg6 + 0x810)
                arg16[0].o = *(arg6 + 0x820)
                arg17[0].o = *(arg6 + 0x830)
                arg18[0].o = *(arg6 + 0x840)
                arg19[0].o = *(arg6 + 0x850)
                arg20[0].o = *(arg6 + 0x860)
                arg21[0].o = *(arg6 + 0x870)
                arg22[0].o = *(arg6 + 0x880)
                *(arg6 + 0x898)
                *(arg6 + 0x8a0)
                *(arg6 + 0x8a8)
                *(arg6 + 0x8b0)
                *(arg6 + 0x8b8)
                *(arg6 + 0x8c0)
                *(arg6 + 0x8c8)
                *(arg6 + 0x8d0)
                _mm256_zeroupper()
                return i_4
            
            int64_t rax_324 = sx.q((r11_6 << 3).d)
            arg22[0].o = *(arg31 + rax_324)
            zmm7[0].o = *(arg31 + rax_324 + 0x10)
            zmm2[0].o = *(arg31 + rax_324 + 0x20)
            arg12[0].o = *(arg31 + rax_324 + 0x30)
            zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg22[0].o, zmm7[0].o, 0xdd)
            arg19[0].o = arg12[0].o
            arg40 = zmm2[0].o
            arg12[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg12[0].o, 0xdd)
            arg4 = arg65
            zmm2[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
            int64_t rcx_95 = sx.q(zmm0[0].d)
            int32_t temp0_2123 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int64_t r14_19 = sx.q(*(arg44 + rcx_95))
            int64_t rbx_77 = sx.q(temp0_2123)
            int32_t temp0_2124 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int64_t r8_13 = sx.q(*(arg44 + rbx_77))
            int64_t rdi_46 = sx.q(temp0_2124)
            int32_t temp0_2125 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            uint64_t r10_20 = sx.q(*(arg44 + rdi_46))
            int64_t r15_13 = sx.q(temp0_2125)
            int64_t rax_330 = sx.q(arg12[0])
            int64_t rdx_93 = sx.q(*(arg44 + rax_330))
            zmm0[0].o = zx.o(*(arg44 + rcx_95 + 4))
            int64_t rcx_97 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg44 + rbx_77 + 4), 1)
            int64_t r12_12 = sx.q(*(arg44 + rcx_97))
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg44 + rdi_46 + 4), 2)
            int64_t rbx_79 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
            zmm2[0].o = zx.o(*(arg44 + rax_330 + 4))
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg44 + rcx_97 + 4), 1)
            int64_t rcx_98 = sx.q(*(arg44 + rbx_79))
            int64_t rax_332 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg44 + rbx_79 + 4), 2)
            arg5 = sx.q(*(arg44 + rax_332))
            arg48 = rdx_93
            arg12[0].o = zx.o(rdx_93.d)
            arg54 = r12_12
            arg12[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, r12_12.d, 1)
            arg9 = rcx_98
            arg12[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, arg9.d, 2)
            arg14[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, arg5.d, 3)
            arg12[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg44 + r15_13 + 4), 3)
            arg11 = sx.q(*(arg44 + r15_13))
            arg47 = r14_19
            zmm0[0].o = zx.o(r14_19.d)
            arg55 = r8_13
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r8_13.d, 1)
            arg60 = r10_20
            zmm0[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, r10_20.d, 2)
            arg20[0].o = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, arg11.d, 3)
            zmm2[0].o = __vpinsrd_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg44 + rax_332 + 4), 3)
            arg21[0].o = __vpmovsxdq_xmmdq_xmmq(arg14[0].q)
            arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg14[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg20[0].q)
            arg34 = zmm0
            zmm0[0].o = data_1434422d0
            arg13[0].o = zmm0[0].o
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
            zmm0 = _mm256_insertf128_ps(arg13, zmm0[0].o, 1)
            arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(arg20[0].o, 0x4e)
            zmm0 = __vorps_ymmqq_ymmqq_memqq(zmm0, arg64)
            arg17 = arg29
            arg38 = r11_6
            
            if (_mm256_movemask_ps(zmm0) != 0)
                arg50 = _mm256_blendv_ps(arg50, arg18, zmm0)
                arg17 = _mm256_blendv_ps(arg17, arg18, zmm0)
            
            zmm5 = arg37.32
            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
            arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
            arg49 = arg13[0].o
            arg13 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
            arg18 = _mm256_cmp_ps(arg18, arg18, 0xf)
            arg_1e0.32 = arg18
            arg18 = _mm256_xor_ps(zmm0, arg18)
            arg8 = _mm256_movemask_ps(arg18)
            arg36 = arg14[0].o
            arg53 = arg20
            arg28 = zmm5[0].o
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (arg8 == 0)
                arg23.32 = zmm0
                arg16 = arg50
            label_1402bfa3b:
                arg14[0].o = arg19[0].o
                zmm2[0].o = zx.o(0)
                goto label_1402c0b95
            
            arg23.32 = zmm0
            arg25 = arg4[0].o
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg15[0].o)
            arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
            arg4 = _mm256_insertf128_ps(zmm0, arg4[0].o, 1)
            zmm0[0].o = *(arg6 + 0x910)
            
            if (zmm0[0].o f>= 1f)
                arg16 = _mm256_blendv_ps(arg50, arg4, arg18)
                arg17 = _mm256_blendv_ps(arg17, arg4, arg18)
                arg4[0].o = arg25
                goto label_1402bfa3b
            
            arg61 = arg13
            arg45 = zmm7[0].o
            arg41 = arg22[0].o
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg12[0].o, arg37)
            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
            arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(arg12[0].o, 0x4e)
            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            zmm5 = arg70
            arg62 = arg21
            arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg21[0].o)
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
            arg13[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg34[0].o)
            arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg4[0].o)
            arg12[0].o = __vpmovsxdq_xmmdq_xmmq(arg12[0].q)
            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, arg25)
            arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
            arg13[0].o = __vpaddq_xmmdq_xmmdq_memdq(arg13[0].o, arg49)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
            zmm0 = _mm256_insertf128_ps(arg4, zmm0[0].o, 1)
            arg12 = _mm256_insertf128_ps(zmm2, arg12[0].o, 1)
            zmm2 = _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg4), arg69))
            arg13[0].o = zx.o(0)
            arg4[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            arg21[0].o = zx.o(0)
            zmm2[0].o = __vpmaxsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
            arg4[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
            __return_addr.32 = arg4
            arg13[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
            arg26 = arg13[0].o
            zmm2[0].o = __vpminsd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
            arg20 = _mm256_insertf128_ps(arg4, zmm2[0].o, 1)
            zmm2 = data_143442a40
            arg12 = _mm256_and_ps(arg12, zmm2)
            arg23.32 = arg12
            arg22 = _mm256_and_ps(zmm0, zmm2)
            arg_340.32 = arg20
            arg29 = arg17
            arg42 = arg19[0].o
            int32_t arg_5a0[0x4]
            int32_t arg_620[0x4]
            
            if (*(arg6 + 0x908) s>= 0x100)
                zmm0[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
                arg_5a0 = zmm0[0].o
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg20[0].o, arg20[0].o)
                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
                zmm2[0].o = _mm256_extractf128_ps(arg22[0].o, 1)
                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg22[0].o, arg4[0].o)
                arg4 = _mm256_insertf128_ps(arg4, arg13[0].o, 1)
                char rcx_99 = arg8.b
                arg12[0].o = arg67
                
                if ((rcx_99 & 1) != 0)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *arg4[0].q, 0)
                
                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                arg30 = zmm2[0].o
                
                if ((rcx_99 & 2) != 0)
                    int64_t rax_336 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_336, 1)
                
                zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0 = arg23.32
                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                
                if ((rcx_99 & 4) == 0)
                    arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                    
                    if ((rcx_99 & 8) != 0)
                        goto label_1402bfe3b
                    
                    goto label_1402bf6ce
                
                arg13[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *arg13[0].q, 2)
                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                
                if ((rcx_99 & 8) != 0)
                label_1402bfe3b:
                    arg4[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
                    int64_t rax_370 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_370, 3)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg13[0].o, 1)
                    
                    if ((rcx_99 & 0x10) == 0)
                        goto label_1402bf6dd
                    
                    goto label_1402bfe60
                
            label_1402bf6ce:
                zmm0 = _mm256_insertf128_ps(zmm0, arg13[0].o, 1)
                
                if ((rcx_99 & 0x10) == 0)
                label_1402bf6dd:
                    
                    if ((rcx_99 & 0x20) != 0)
                        goto label_1402bfe6e
                    
                    goto label_1402bf6e6
                
            label_1402bfe60:
                arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *zmm0[0], 4)
                
                if ((rcx_99 & 0x20) != 0)
                label_1402bfe6e:
                    int64_t rax_372 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_372, 5)
                    
                    if ((rcx_99 & 0x40) == 0)
                        goto label_1402bf6ef
                    
                    goto label_1402bfe82
                
            label_1402bf6e6:
                
                if ((rcx_99 & 0x40) != 0)
                label_1402bfe82:
                    arg4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *arg4[0].q, 6)
                    
                    if (arg8.b s< 0)
                    label_1402bfe9b:
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rax_374 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_374, 7)
                else
                label_1402bf6ef:
                    
                    if (arg8.b s< 0)
                        goto label_1402bfe9b
                
                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg12[0].o, zx.o(0))
                arg67 = arg12[0].o
                arg13[0].o = __vpmovzxwd_xmmdq_xmmq(arg12[0].q)
                arg14 = arg32.32
                arg4[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                zmm7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
                zmm7[0].o ^= arg15[0].o
                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
                zmm5[0].o ^= arg15[0].o
                arg19 = _mm256_insertf128_ps(zmm5, zmm7[0].o, 1)
                zmm5 = _mm256_and_ps(arg19, arg18)
                arg_620.32 = arg19
                
                if (_mm256_movemask_ps(zmm5) == 0)
                    arg16 = arg20
                else
                    zmm0 = _mm256_insertf128_ps(arg13, zmm0[0].o, 1)
                    arg13[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg4[0].o)
                    arg13[0].o ^= arg15[0].o
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg14[0].o)
                    zmm0[0].o ^= arg15[0].o
                    zmm0 = _mm256_insertf128_ps(zmm0, arg13[0].o, 1)
                    arg12 = __return_addr.32
                    arg16 = _mm256_blendv_ps(arg20, arg12, zmm0)
                    arg13[0].o = arg_5a0
                    arg13[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
                    zmm7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg20[0].o, arg15[0].o)
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg13[0].o, arg26)
                    zmm5[0].o ^= arg15[0].o
                    arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg12[0].o)
                    arg14[0].o ^= arg15[0].o
                    zmm5 = _mm256_insertf128_ps(arg14, zmm5[0].o, 1)
                    arg17 = _mm256_and_ps(zmm0, zmm5)
                    zmm0 = _mm256_and_ps(arg17, arg18)
                    int32_t i_5 = _mm256_movemask_ps(zmm0)
                    
                    if (i_5 != 0)
                        arg13 = _mm256_insertf128_ps(zmm7, arg13[0].o, 1)
                        arg19 = arg20
                        
                        do
                            arg20 = arg13
                            arg13[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                            zmm7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg20[0].o, arg20[0].o)
                            arg14[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm5[0].o, arg30)
                            arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg22[0].o, arg14[0].o)
                            arg15 = _mm256_insertf128_ps(arg14, zmm5[0].o, 1)
                            char temp0_2263 = _mm256_movemask_ps(zmm0)
                            arg12[0].o = arg51[0].o
                            
                            if ((temp0_2263 & 1) == 0)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x4e)
                                
                                if ((temp0_2263 & 2) != 0)
                                    goto label_1402bf7ee
                                
                                goto label_1402bf910
                            
                            arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *arg15[0].q, 0)
                            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                            zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x4e)
                            
                            if ((temp0_2263 & 2) != 0)
                            label_1402bf7ee:
                                int64_t rax_339 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_339, 1)
                                zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg23)
                                
                                if ((temp0_2263 & 4) == 0)
                                    goto label_1402bf925
                                
                                goto label_1402bf80e
                            
                        label_1402bf910:
                            zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg23)
                            
                            if ((temp0_2263 & 4) == 0)
                            label_1402bf925:
                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                                
                                if ((temp0_2263 & 8) != 0)
                                    goto label_1402bf82c
                                
                                goto label_1402bf933
                            
                        label_1402bf80e:
                            zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *zmm5[0].q, 2)
                            zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
                            
                            if ((temp0_2263 & 8) != 0)
                            label_1402bf82c:
                                zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                int64_t rax_341 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_341, 3)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
                                
                                if ((temp0_2263 & 0x10) == 0)
                                    goto label_1402bf943
                                
                                goto label_1402bf852
                            
                        label_1402bf933:
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
                            
                            if ((temp0_2263 & 0x10) == 0)
                            label_1402bf943:
                                
                                if ((temp0_2263 & 0x20) != 0)
                                    goto label_1402bf861
                                
                                goto label_1402bf94d
                            
                        label_1402bf852:
                            arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *zmm0[0], 4)
                            
                            if ((temp0_2263 & 0x20) != 0)
                            label_1402bf861:
                                int64_t rax_343 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_343, 5)
                                
                                if ((temp0_2263 & 0x40) == 0)
                                    goto label_1402bf957
                                
                                goto label_1402bf876
                            
                        label_1402bf94d:
                            
                            if ((temp0_2263 & 0x40) != 0)
                            label_1402bf876:
                                zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *zmm5[0].q, 6)
                                
                                if (temp0_2263 s< 0)
                                label_1402bf88f:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    int64_t rax_345 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg12[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_345, 7)
                            else
                            label_1402bf957:
                                
                                if (temp0_2263 s< 0)
                                    goto label_1402bf88f
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg12[0].o, zx.o(0))
                            arg51[0].o = arg12[0].o
                            zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(arg12[0].q)
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
                            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, arg32.o)
                            zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                            zmm7 = _mm256_and_ps(zmm0, arg17)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm5 = _mm256_and_ps(zmm7, arg18)
                            
                            if (_mm256_movemask_ps(zmm5) != i_5)
                                zmm0 = _mm256_xor_ps(zmm7, arg17)
                            
                            arg16 = _mm256_blendv_ps(arg16, arg19, zmm7)
                            arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                            arg14[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg20[0].o, arg12[0].o)
                            arg13 = _mm256_insertf128_ps(arg14, zmm5[0].o, 1)
                            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, arg26)
                            zmm5[0].o ^= arg12[0].o
                            arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg14[0].o, __return_addr.o)
                            arg14[0].o ^= arg12[0].o
                            zmm5 = _mm256_insertf128_ps(arg14, zmm5[0].o, 1)
                            arg17 = _mm256_and_ps(zmm5, zmm0)
                            zmm0 = _mm256_and_ps(arg17, arg18)
                            i_5 = _mm256_movemask_ps(zmm0)
                            arg19 = arg20
                        while (i_5 != 0)
                
                arg12 = arg_620.32
                zmm0 = _mm256_andnot_ps(arg12, arg18)
                
                if (_mm256_movemask_ps(zmm0) == 0)
                    arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    arg17 = arg29
                    arg20[0].o = arg43
                    arg14[0].o = arg42
                    arg19[0].o = zmm2[0].o
                    zmm2[0].o = arg30
                else
                    zmm0 = __vxorps_ymmqq_ymmqq_memqq(arg12, arg_1e0.32)
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    arg16 = _mm256_blendv_ps(arg16, arg12, zmm0)
                    arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    arg13[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg12[0].o, arg_5a0)
                    zmm7[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg12[0].o, arg_340)
                    arg14[0].o = zx.o(0)
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, zx.o(0))
                    arg21[0].o = zx.o(0)
                    arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zx.o(0))
                    zmm5 = _mm256_insertf128_ps(arg14, zmm5[0].o, 1)
                    arg20 = _mm256_and_ps(zmm5, zmm0)
                    zmm0 = _mm256_and_ps(arg20, arg18)
                    int32_t i_6 = _mm256_movemask_ps(zmm0)
                    
                    if (i_6 == 0)
                        arg19[0].o = zmm2[0].o
                        zmm2[0].o = arg30
                    else
                        arg17 = _mm256_insertf128_ps(zmm7, arg13[0].o, 1)
                        arg19[0].o = zmm2[0].o
                        zmm2[0].o = arg30
                        
                        do
                            arg13[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                            zmm7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                            arg14[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                            zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(zmm5[0].q)
                            zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
                            arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg22[0].o, arg14[0].o)
                            arg15 = _mm256_insertf128_ps(arg14, zmm5[0].o, 1)
                            char temp0_2446 = _mm256_movemask_ps(zmm0)
                            int64_t rax_395
                            
                            if ((temp0_2446 & 1) != 0)
                                arg14[0].o = arg52[0].o
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg15[0].q, 0)
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x4e)
                                
                                if ((temp0_2446 & 2) != 0)
                                    rax_395 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_395, 1)
                            else
                                arg14[0].o = arg52[0].o
                                zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                                zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x4e)
                                
                                if ((temp0_2446 & 2) != 0)
                                    rax_395 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_395, 1)
                            zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg23)
                            
                            if ((temp0_2446 & 4) == 0)
                                zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, zmm7[0].o)
                                
                                if ((temp0_2446 & 8) != 0)
                                    goto label_1402c000e
                                
                                goto label_1402c0141
                            
                            zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                            arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm5[0].q, 2)
                            zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, zmm7[0].o)
                            
                            if ((temp0_2446 & 8) != 0)
                            label_1402c000e:
                                zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                int64_t rax_389 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_389, 3)
                                zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
                                
                                if ((temp0_2446 & 0x10) == 0)
                                    goto label_1402c0151
                                
                                goto label_1402c0034
                            
                        label_1402c0141:
                            zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
                            
                            if ((temp0_2446 & 0x10) == 0)
                            label_1402c0151:
                                
                                if ((temp0_2446 & 0x20) != 0)
                                    goto label_1402c0043
                                
                                goto label_1402c015b
                            
                        label_1402c0034:
                            arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm0[0], 4)
                            
                            if ((temp0_2446 & 0x20) != 0)
                            label_1402c0043:
                                int64_t rax_391 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_391, 5)
                                
                                if ((temp0_2446 & 0x40) == 0)
                                    goto label_1402c0165
                                
                                goto label_1402c0058
                            
                        label_1402c015b:
                            
                            if ((temp0_2446 & 0x40) != 0)
                            label_1402c0058:
                                zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                arg14[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm5[0].q, 6)
                                
                                if (temp0_2446 s< 0)
                                label_1402c0071:
                                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                                    uint16_t* rax_393 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_393, 7)
                            else
                            label_1402c0165:
                                
                                if (temp0_2446 s< 0)
                                    goto label_1402c0071
                            
                            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg21[0].o)
                            arg52[0].o = arg14[0].o
                            zmm5[0].o = __vpmovzxwd_xmmdq_xmmq(arg14[0].q)
                            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
                            zmm0[0].o ^= arg12[0].o
                            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, arg32.o)
                            zmm5[0].o ^= arg12[0].o
                            zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                            zmm7 = _mm256_and_ps(zmm0, arg20)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm5 = _mm256_and_ps(zmm7, arg18)
                            
                            if (_mm256_movemask_ps(zmm5) != i_6)
                                zmm0 = _mm256_xor_ps(zmm7, arg20)
                            
                            arg16 = _mm256_blendv_ps(arg16, arg17, zmm7)
                            arg13[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg12[0].o)
                            arg17 = _mm256_insertf128_ps(zmm5, arg13[0].o, 1)
                            arg14[0].o = zx.o(0)
                            arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, zx.o(0))
                            arg21[0].o = zx.o(0)
                            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zx.o(0))
                            arg13 = _mm256_insertf128_ps(zmm5, arg13[0].o, 1)
                            arg20 = _mm256_and_ps(arg13, zmm0)
                            zmm0 = _mm256_and_ps(arg20, arg18)
                            i_6 = _mm256_movemask_ps(zmm0)
                        while (i_6 != 0)
                    
                    arg17 = arg29
                    arg20[0].o = arg43
                    arg14[0].o = arg42
                
                zmm5 = _mm256_blendv_ps(arg50, arg16, arg18)
                arg15[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg4[0].o, 0x4e)
                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4[0].o)
                arg13[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg22[0].o, arg13[0].o)
                arg13 = _mm256_insertf128_ps(arg13, arg4[0].o, 1)
                arg4 = zmm5
                
                if ((rcx_99 & 1) != 0)
                    zmm5[0].o = arg24
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg13[0].q, 0)
                    arg24 = zmm5[0].o
                
                zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                
                if ((rcx_99 & 2) != 0)
                    int64_t rax_12 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                    zmm5[0].o = arg24
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_12, 1)
                    arg24 = zmm5[0].o
                
                arg16 = arg4
                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, arg23)
                
                if ((rcx_99 & 4) != 0)
                    zmm5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    zmm5[0].o = arg24
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm5[0].q, 2)
                    arg24 = zmm5[0].o
                
                zmm5[0].o = arg28
                arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, arg4[0].o)
                
                if ((rcx_99 & 8) != 0)
                    arg13[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                    int64_t rax_14 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                    arg13[0].o = arg24
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_14, 3)
                    zmm0 = _mm256_insertf128_ps(zmm0, arg4[0].o, 1)
                    
                    if ((rcx_99 & 0x10) != 0)
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *zmm0[0], 4)
                else
                    arg13[0].o = arg24
                    zmm0 = _mm256_insertf128_ps(zmm0, arg4[0].o, 1)
                    
                    if ((rcx_99 & 0x10) != 0)
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *zmm0[0], 4)
                
                if ((rcx_99 & 0x20) == 0)
                    if ((rcx_99 & 0x40) != 0)
                        goto label_1402c0774
                    
                    goto label_1402c068f
                
                int64_t rax_18 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_18, 5)
                
                if ((rcx_99 & 0x40) == 0)
                label_1402c068f:
                    
                    if (arg8.b s< 0)
                    label_1402c078d:
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        int64_t rax_20 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_20, 7)
                else
                label_1402c0774:
                    arg4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *arg4[0].q, 6)
                    
                    if (arg8.b s< 0)
                        goto label_1402c078d
                
                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                arg4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg12[0].o)
                zmm0 = _mm256_insertf128_ps(arg4, zmm0[0].o, 1)
                arg17 = _mm256_blendv_ps(arg17, zmm0, arg18)
                zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, arg26)
                arg12 = __return_addr.32
                arg4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg12[0].o)
                zmm0 = _mm256_and_ps(_mm256_insertf128_ps(arg4, zmm0[0].o, 1), arg18)
                bool cond:17_1 = _mm256_movemask_ps(zmm0) == 0
                arg24 = arg13[0].o
                
                if (not(cond:17_1))
                    arg17 = _mm256_blendv_ps(arg17, arg12, zmm0)
                
                zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                arg4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                arg13[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(arg4[0].o, 0x4e)
                arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4[0].o)
                arg12[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg22[0].o, arg13[0].o)
                arg12 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                
                if ((rcx_99 & 1) != 0)
                    zmm2[0].o = arg35
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg12[0].q, 0)
                    arg35 = zmm2[0].o
                
                arg22[0].o = arg41
                zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                
                if ((rcx_99 & 2) != 0)
                    int64_t rax_21 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg13[0].o = arg35
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_21, 1)
                    arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg23)
                    
                    if ((rcx_99 & 4) != 0)
                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *zmm2[0].q, 2)
                else
                    arg13[0].o = arg35
                    arg4[0].o = __vpmovsxdq_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm2[0].o, arg23)
                    
                    if ((rcx_99 & 4) != 0)
                        zmm2[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *zmm2[0].q, 2)
                
                zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, arg4[0].o)
                
                if ((rcx_99 & 8) != 0)
                    arg12[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                    uint16_t* rax_23 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_23, 3)
                    arg4[0].o = arg25
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    
                    if ((rcx_99 & 0x10) != 0)
                    label_1402c0858:
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *zmm0[0], 4)
                        
                        if ((rcx_99 & 0x20) == 0)
                            goto label_1402c07f6
                        
                        goto label_1402c0862
                else
                    arg4[0].o = arg25
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                    
                    if ((rcx_99 & 0x10) != 0)
                        goto label_1402c0858
                
                if ((rcx_99 & 0x20) == 0)
                label_1402c07f6:
                    arg12[0].o = __vpmovzxwd_xmmdq_memq(arg24.q)
                    
                    if ((rcx_99 & 0x40) != 0)
                        goto label_1402c0879
                    
                    goto label_1402c0802
                
            label_1402c0862:
                uint16_t* rax_25 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_25, 5)
                arg12[0].o = __vpmovzxwd_xmmdq_memq(arg24.q)
                
                if ((rcx_99 & 0x40) == 0)
                label_1402c0802:
                    zmm2[0].o = arg24
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg21[0].o)
                    
                    if (arg8.b s< 0)
                    label_1402c089d:
                        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        uint16_t* rax_27 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_27, 7)
                else
                label_1402c0879:
                    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *zmm2[0].q, 6)
                    zmm2[0].o = arg24
                    zmm2[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg21[0].o)
                    
                    if (arg8.b s< 0)
                        goto label_1402c089d
                
                arg12 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg21[0].o)
                zmm2[0].o = __vpmovzxwd_xmmdq_xmmq(arg13[0].q)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                goto label_1402c0afc
            
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg20[0].q)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(arg20[0].o, 0x4e)
            zmm2[0].o = __vpmovsxdq_xmmdq_xmmq(zmm2[0].q)
            zmm7[0].o = _mm256_extractf128_ps(arg20[0].o, 1)
            arg12[0].o = _mm256_extractf128_ps(arg22[0].o, 1)
            arg30 = arg12[0].o
            zmm2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg22[0].o, zmm0[0].o)
            zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            arg1 = arg8.b
            arg12[0].o = arg66
            
            if ((arg1 & 1) != 0)
                arg12[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, zx.d(*zmm2[0].q), 0)
            
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
            arg4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm7[0].o, 0x4e)
            
            if ((arg1 & 2) != 0)
                uint32_t rax_350 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                arg12[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, rax_350, 1)
            
            arg4[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
            arg13 = arg23.32
            arg16[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
            
            if ((arg1 & 4) == 0)
                arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg4[0].o)
                
                if ((arg1 & 8) != 0)
                    goto label_1402bfed1
                
                goto label_1402bfae1
            
            arg13[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            arg12[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, zx.d(*arg13[0].q), 2)
            arg4[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg4[0].o)
            
            if ((arg1 & 8) != 0)
            label_1402bfed1:
                zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                uint32_t rax_378 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                arg12[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, rax_378, 3)
                zmm0 = _mm256_insertf128_ps(zmm0, arg4[0].o, 1)
                
                if ((arg1 & 0x10) == 0)
                    goto label_1402bfaf0
                
                goto label_1402bfefc
            
        label_1402bfae1:
            zmm0 = _mm256_insertf128_ps(zmm0, arg4[0].o, 1)
            
            if ((arg1 & 0x10) == 0)
            label_1402bfaf0:
                
                if ((arg1 & 0x20) != 0)
                    goto label_1402bff10
                
                goto label_1402bfaf9
            
        label_1402bfefc:
            arg12[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, zx.d(*zmm0[0]), 4)
            
            if ((arg1 & 0x20) != 0)
            label_1402bff10:
                uint32_t rax_382 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                arg12[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, rax_382, 5)
                
                if ((arg1 & 0x40) == 0)
                    goto label_1402bfb02
                
                goto label_1402bff21
            
        label_1402bfaf9:
            
            if ((arg1 & 0x40) != 0)
            label_1402bff21:
                zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                arg12[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, zx.d(*zmm2[0].q), 6)
                
                if (arg8.b s< 0)
                label_1402bff3d:
                    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    uint32_t rax_386 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg12[0].o, rax_386, 7)
            else
            label_1402bfb02:
                
                if (arg8.b s< 0)
                    goto label_1402bff3d
            
            arg66 = arg12[0].o
            zmm2[0].o = arg12[0].o & data_142fc92e0
            zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
            arg4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm2[0].q)
            arg12 = arg32.32
            arg20[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg20[0].o)
            arg13[0].o ^= arg15[0].o
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg12[0].o)
            zmm5[0].o ^= arg15[0].o
            zmm2 = _mm256_insertf128_ps(zmm5, arg13[0].o, 1)
            arg13 = _mm256_and_ps(zmm2, arg18)
            bool cond:12_1 = _mm256_movemask_ps(arg13) == 0
            arg_620 = zmm7[0].o
            arg_5a0.32 = zmm2
            
            if (cond:12_1)
                arg14 = arg_340.32
                zmm2[0].o = arg57
            else
                zmm0 = _mm256_insertf128_ps(arg4, zmm0[0].o, 1)
                arg4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                arg4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg20[0].o)
                arg4[0].o ^= arg15[0].o
                zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
                zmm0[0].o ^= arg15[0].o
                zmm0 = _mm256_insertf128_ps(zmm0, arg4[0].o, 1)
                arg12 = __return_addr.32
                arg19 = arg_340.32
                arg14 = _mm256_blendv_ps(arg19, arg12, zmm0)
                arg13[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg15[0].o)
                zmm7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg19[0].o, arg15[0].o)
                arg4[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg13[0].o, arg26)
                arg4[0].o ^= arg15[0].o
                zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg12[0].o)
                zmm5[0].o ^= arg15[0].o
                arg4 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm5, arg4[0].o, 1))
                zmm0 = _mm256_and_ps(arg4, arg18)
                int32_t rdx_94 = _mm256_movemask_ps(zmm0)
                
                if (rdx_94 == 0)
                    zmm2[0].o = arg57
                else
                    arg13 = _mm256_insertf128_ps(zmm7, arg13[0].o, 1)
                    zmm2[0].o = arg57
                label_1402bfcf0:
                    arg17 = arg13
                    zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg17[0].q)
                    arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(arg17[0].o, 0x4e)
                    zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
                    arg13[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                    zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, arg30)
                    zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg22[0].o, zmm5[0].o)
                    arg15 = _mm256_insertf128_ps(zmm5, zmm7[0].o, 1)
                    char temp0_2358 = _mm256_movemask_ps(zmm0)
                    
                    if ((temp0_2358 & 1) == 0)
                        zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
                        zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
                        
                        if ((temp0_2358 & 2) != 0)
                            goto label_1402bfc27
                        
                        goto label_1402bfd3f
                    
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*arg15[0].q), 0)
                    zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
                    zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
                    
                    if ((temp0_2358 & 2) != 0)
                    label_1402bfc27:
                        uint32_t rax_355 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_355, 1)
                        zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                        zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg23)
                        
                        if ((temp0_2358 & 4) == 0)
                            goto label_1402bfd54
                        
                        goto label_1402bfc44
                    
                label_1402bfd3f:
                    zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
                    zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg23)
                    
                    if ((temp0_2358 & 4) == 0)
                    label_1402bfd54:
                        zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm7[0].o)
                        
                        if ((temp0_2358 & 8) != 0)
                            goto label_1402bfc65
                        
                        goto label_1402bfd62
                    
                label_1402bfc44:
                    zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm5[0].q), 2)
                    zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm7[0].o)
                    
                    if ((temp0_2358 & 8) != 0)
                    label_1402bfc65:
                        zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        uint32_t rax_359 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_359, 3)
                        zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
                        
                        if ((temp0_2358 & 0x10) == 0)
                            goto label_1402bfd72
                        
                        goto label_1402bfc91
                    
                label_1402bfd62:
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
                    
                    if ((temp0_2358 & 0x10) == 0)
                    label_1402bfd72:
                        
                        if ((temp0_2358 & 0x20) != 0)
                            goto label_1402bfca6
                        
                        goto label_1402bfd7c
                    
                label_1402bfc91:
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm0[0]), 4)
                    
                    if ((temp0_2358 & 0x20) != 0)
                    label_1402bfca6:
                        uint32_t rax_363 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_363, 5)
                        
                        if ((temp0_2358 & 0x40) == 0)
                            goto label_1402bfd86
                        
                        goto label_1402bfcb8
                    
                label_1402bfd7c:
                    
                    if ((temp0_2358 & 0x40) != 0)
                    label_1402bfcb8:
                        zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm5[0].q), 6)
                        
                        if (temp0_2358 s< 0)
                        label_1402bfcd4:
                            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                            uint32_t rax_367 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_367, 7)
                    else
                    label_1402bfd86:
                        
                        if (temp0_2358 s< 0)
                            goto label_1402bfcd4
                    
                    zmm0[0].o = zmm2[0].o & data_142fc92e0
                    zmm5[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
                    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0])
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg20[0].o)
                    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm0[0].o, arg32.o)
                    zmm0 = _mm256_insertf128_ps(zmm0, zmm5[0].o, 1)
                    zmm7 = _mm256_and_ps(zmm0, arg4)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm5 = _mm256_and_ps(zmm7, arg18)
                    
                    if (_mm256_movemask_ps(zmm5) != rdx_94)
                        zmm0 = _mm256_xor_ps(zmm7, arg4)
                    
                    arg14 = _mm256_blendv_ps(arg14, arg19, zmm7)
                    arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    arg4[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                    zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg12[0].o)
                    arg13 = _mm256_insertf128_ps(zmm5, arg4[0].o, 1)
                    arg4[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg4[0].o, arg26)
                    arg4[0].o ^= arg12[0].o
                    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(zmm5[0].o, __return_addr.o)
                    zmm5[0].o ^= arg12[0].o
                    arg4 = _mm256_and_ps(_mm256_insertf128_ps(zmm5, arg4[0].o, 1), zmm0)
                    zmm0 = _mm256_and_ps(arg4, arg18)
                    rdx_94 = _mm256_movemask_ps(zmm0)
                    arg19 = arg17
                    
                    if (rdx_94 != 0)
                        goto label_1402bfcf0
            
            arg12 = arg_5a0.32
            zmm0 = _mm256_andnot_ps(arg12, arg18)
            bool cond:21_1 = _mm256_movemask_ps(zmm0) == 0
            arg57 = zmm2[0].o
            
            if (cond:21_1)
                arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                arg15 = arg50
                arg20[0].o = arg43
                zmm7[0].o = arg58
                arg19[0].o = arg16[0].o
                goto label_1402c08d3
            
            zmm0 = __vxorps_ymmqq_ymmqq_memqq(arg12, arg_1e0.32)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            arg14 = _mm256_blendv_ps(arg14, arg12, zmm0)
            arg12[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            arg4[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg12[0].o, arg_620)
            arg13[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg12[0].o, arg_340)
            zmm7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm7[0].o)
            arg21[0].o = zx.o(0)
            zmm7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm7[0].o)
            zmm5 = _mm256_insertf128_ps(zmm7, zmm5[0].o, 1)
            arg17 = _mm256_and_ps(zmm5, zmm0)
            zmm0 = _mm256_and_ps(arg17, arg18)
            arg2 = _mm256_movemask_ps(zmm0)
            
            if (arg2 == 0)
                arg19[0].o = arg16[0].o
                goto label_1402c08b8
            
            arg4 = _mm256_insertf128_ps(arg13, arg4[0].o, 1)
            arg19[0].o = arg16[0].o
            arg16 = arg32.32
        
        zmm5[0].o = __vpmovsxdq_xmmdq_xmmq(arg4[0].q)
        arg13[0].o = __vpshufd_xmmdq_xmmdq_immb(arg4[0].o, 0x4e)
        zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
        arg13[0].o = _mm256_extractf128_ps(arg4[0].o, 1)
        zmm7[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm7[0].o, arg30)
        zmm5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg22[0].o, zmm5[0].o)
        arg15 = _mm256_insertf128_ps(zmm5, zmm7[0].o, 1)
        arg7 = _mm256_movemask_ps(zmm0)
        
        if ((arg7 & 1) != 0)
            continue
        else
            zmm0[0].o = __vpmovsxdq_xmmdq_xmmq(arg13[0].q)
            zmm7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg13[0].o, 0x4e)
            
            if ((arg7 & 2) != 0)
                goto label_1402c03b5
            
        label_1402c0332:
            zmm7[0].o = __vpmovsxdq_xmmdq_xmmq(zmm7[0].q)
            zmm0[0].o = __vpaddq_xmmdq_xmmdq_memdq(zmm0[0].o, arg23)
            
            if ((arg7 & 4) == 0)
                goto label_1402c0347
            
        label_1402c03e4:
            zmm5[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
            zmm2[0].o = arg27
            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm5[0].q), 2)
            arg27 = zmm2[0].o
            zmm7[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg19[0].o, zmm7[0].o)
            
            if ((arg7 & 8) != 0)
                goto label_1402c0417
    
    zmm2[0].o = arg27
    zmm0 = _mm256_insertf128_ps(zmm0, zmm7[0].o, 1)
    
    if ((arg7 & 0x10) == 0)
        goto label_1402c044d
    
    break

zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm0[0]), 4)
goto label_1402c044d
