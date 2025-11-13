// 函数: sub_1427f2700
// 地址: 0x1427f2700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm11 = zx.o(0)
int32_t arg_18 = 0
int64_t var_178[0x10]
int64_t (* var_f0)[0x10] = &var_178
int64_t rax = *arg2
int128_t var_2a8
__builtin_memset(&var_2a8, 0, 0x30)
int32_t var_e8 = 0
char var_f8 = 1
int32_t var_e4 = 0x10
int64_t arg_10 = 0
sub_1427f3e80(&var_178, (*(rax + 0xc8))(arg2, zx.o(0)), &arg_10)
(*(*arg2 + 0xd0))(arg2, var_f0, zx.q(var_e8), 0)
int32_t rsi = 0
int128_t* rax_3
int128_t* r12

if (arg3 == 0)
    r12 = arg4
    rax_3 = arg4
else
    r12 = arg3
    rax_3 = arg3

int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
int128_t zmm8
int128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
int128_t zmm12
int128_t var_a8 = zmm12
int128_t zmm14
int128_t var_c8 = zmm14
int128_t zmm15
int128_t var_d8 = zmm15
int128_t zmm13 = *rax_3
int64_t* rbx
char const* const rax_6
class physx::shdfnd::Foundation* rcx_3
int32_t r9

if ((_fpclass(_mm_cvtps_pd(zmm13.q).q) & 0x207) == 0)
    int32_t rdi_1 = 0
    int128_t var_288
    zmm6 = var_288.d
    int128_t var_298
    zmm7 = var_298:0xc.d
    zmm8 = var_298:8.d
    zmm9 = var_298:4.d
    int128_t zmm1
    float zmm2
    int128_t zmm3
    int128_t zmm4_1
    int128_t zmm5_1
    
    if (var_e8 u<= 0)
        zmm1 = var_288:0xc.d
        zmm2 = var_288:8.d
        zmm5_1 = var_288:4.d
        zmm3 = var_298.d
        zmm4_1 = var_2a8:0xc.d
        zmm10 = var_2a8:8.d
        zmm11 = var_2a8:4.d
        zmm12 = var_2a8.d
    label_1427f3347:
        rbx.b = 1
        *arg7 = zmm12.d
        arg7[1] = zmm11.d
        arg7[2] = zmm10.d
        arg7[3] = zmm4_1.d
        arg7[4] = zmm3.d
        arg7[5] = zmm9.d
        arg7[6] = zmm8.d
        arg7[7] = zmm7.d
        arg7[8] = zmm6.d
        arg7[9] = zmm5_1.d
        arg7[0xa] = zmm2
        arg7[0xb] = zmm1.d
        arg7[0xc] = arg_18.d
    else
        zmm14 = 0x40860a92
        zmm10 = 0x3f800000
        zmm12 = 0x3eaaaaab
        int32_t var_260_1 = var_288:0xc.d.d
        float var_25c_1 = var_288:8.d.d
        float var_258_1 = var_288:4.d.d
        int32_t var_254_1 = var_298.d.d
        int32_t var_268_1 = var_2a8.d.d
        int32_t var_22c_1 = zmm6.d
        int32_t var_230_1 = zmm7.d
        int32_t var_234_1 = zmm8.d
        int32_t var_238_1 = zmm9.d
        int32_t var_250_1 = var_2a8:0xc.d.d
        float var_270_1 = var_2a8:8.d
        int32_t var_26c_1 = var_2a8:4.d.d
        
        while (true)
            rbx = zx.q(rdi_1)
            int64_t* rcx_4 = (*var_f0)[rbx]
            int128_t zmm0
            
            if ((*(*(*rcx_4 + 0x108))(rcx_4, &arg_10) & 1) != 0 || arg6 != 0)
                if (arg1 != 0)
                    if (rsi u>= arg5)
                        rcx_3 = physx::shdfnd::Foundation::getInstance()
                        r9 = 0x9d
                        rax_6 = "computeMassAndInertia: Not enough mass/density values provided for "
                        "all (simulation) shapes"
                        goto label_1427f32b5
                    
                    zmm13 = *(r12 + (zx.q(rsi) << 2))
                    
                    if ((_fpclass(_mm_cvtps_pd(zmm13.q).q) & 0x207) != 0)
                        rcx_3 = physx::shdfnd::Foundation::getInstance()
                        r9 = 0x96
                        rax_6 = "computeMassAndInertia: Provided mass or density has no valid value"
                        goto label_1427f32b5
                
                int64_t* rcx_5 = (*var_f0)[rbx]
                int32_t var_278
                int32_t var_1a8[0xc]
                
                switch ((*(*rcx_5 + 0x30))(rcx_5) + 1)
                    case 0, 2, 6, 7, 8
                        physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 
                            4, 
                            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
                        "hysXExtensions\src\ExtRigidBodyExt.cpp", 
                            0xeb, 
                            "computeMassAndInertia: Dynamic actor with illegal collision shapes")
                        rbx.b = 0
                        break
                    case 1
                        int64_t var_200 = 0
                        int64_t* rcx_8 = (*var_f0)[rbx]
                        (*(*rcx_8 + 0x50))(rcx_8, &var_200)
                        int64_t* rcx_9 = (*var_f0)[rbx]
                        (*(*rcx_9 + 0x90))(rcx_9, &var_1a8)
                        zmm0 = var_200:4.d
                        zmm1.d = zmm0.d f* zmm14.d
                        zmm1.d = zmm1.d f* zmm0.d
                        zmm1.d = zmm1.d f* zmm0.d
                        var_278 = zmm1.d
                        zmm2 = zmm1.d f* zmm0.d f* zmm0.d * 0.400000006f
                        var_2a8.d = zmm2
                        var_298.d = zmm2
                        var_288.d = zmm2
                    label_1427f2a1e:
                        var_2a8:0xc.d = 0
                        var_2a8:4.q = 0
                        var_298:0xc.d = 0
                        var_298:4.q = 0
                        var_288:4.q = 0
                        var_288:0xc.d = 0
                        zmm13 = sub_1427f45d0(&var_2a8, &var_1a8)
                    case 3
                        int64_t var_1f8 = 2
                        int32_t var_1f0_1 = 0
                        int64_t* rcx_12 = (*var_f0)[rbx]
                        (*(*rcx_12 + 0x58))(rcx_12, &var_1f8)
                        int64_t* rcx_13 = (*var_f0)[rbx]
                        (*(*rcx_13 + 0x90))(rcx_13, &var_1a8)
                        zmm6 = var_1f8:4.d
                        int128_t zmm4_3 = var_1f0_1
                        int128_t zmm5_3
                        zmm5_3.d = zmm6.d f* zmm4_3.d
                        zmm0.d = zmm4_3.d f* zmm4_3.d
                        zmm7.d = zmm6.d f* 3.14159274f
                        zmm1 = zmm0
                        zmm0.d = zmm0.d f* zmm6.d
                        zmm1.d = zmm1.d f* zmm4_3.d
                        zmm0.d = zmm0.d f* 1.33333337f
                        zmm4_3.d = zmm4_3.d f* 2f
                        zmm5_3.d = zmm5_3.d f* zmm6.d
                        zmm7.d = zmm7.d f* zmm6.d
                        zmm3.d = zmm5_3.d f* 1.5f
                        zmm2 = zmm6.d f* zmm6.d f* zmm6.d * 0.533333361f
                        zmm4_3.d = zmm4_3.d f* zmm7.d
                        zmm3.d = zmm3.d f+ zmm2
                        zmm5_3.d = zmm5_3.d f+ zmm2
                        zmm3.d = zmm3.d f+ zmm0.d
                        zmm0.d = zmm1.d f* zmm12.d
                        zmm1.d = zmm1.d f* zmm12.d
                        zmm5_3.d = zmm5_3.d f* zmm7.d
                        zmm0.d = zmm0.d f+ zmm1.d
                        var_2a8.d = zmm5_3.d
                        zmm3.d = zmm3.d f+ zmm0.d
                        zmm0.d = zmm6.d f* zmm14.d
                        zmm0.d = zmm0.d f* zmm6.d
                        zmm3.d = zmm3.d f* zmm7.d
                        zmm0.d = zmm0.d f* zmm6.d
                        var_298.d = zmm3.d
                        var_288.d = zmm3.d
                        zmm0.d = zmm0.d f+ zmm4_3.d
                        var_278 = zmm0.d
                        goto label_1427f2a1e
                    case 4
                        int64_t var_1e8 = 3
                        int64_t var_1e0_1 = 0
                        int64_t* rcx_10 = (*var_f0)[rbx]
                        (*(*rcx_10 + 0x48))(rcx_10, &var_1e8)
                        int64_t* rcx_11 = (*var_f0)[rbx]
                        (*(*rcx_11 + 0x90))(rcx_11, &var_1a8)
                        zmm1 = var_1e8:4.d
                        int128_t zmm4_2 = zmm10
                        
                        if (not(zmm1.d f== zmm11.d))
                            zmm4_2 = zmm1
                        
                        zmm6 = var_1e0_1.d
                        
                        if (not(zmm6.d f== zmm11.d))
                            zmm4_2.d = zmm4_2.d f* zmm6.d
                        
                        int128_t zmm5_2 = var_1e0_1:4.d
                        
                        if (not(zmm5_2.d f== zmm11.d))
                            zmm4_2.d = zmm4_2.d f* zmm5_2.d
                        
                        zmm4_2.d = zmm4_2.d f* 8f
                        zmm1.d = zmm1.d f* zmm1.d
                        zmm5_2.d = zmm5_2.d f* zmm5_2.d
                        zmm3.d = zmm4_2.d f* zmm12.d
                        zmm6.d = zmm6.d f* zmm6.d
                        zmm0 = zmm5_2
                        zmm5_2.d = zmm5_2.d f+ zmm1.d
                        var_278 = zmm4_2.d
                        zmm0.d = zmm0.d f+ zmm6.d
                        zmm6.d = zmm6.d f+ zmm1.d
                        zmm2 = zmm3.d f* zmm5_2.d
                        zmm1.d = zmm3.d f* zmm0.d
                        zmm3.d = zmm3.d f* zmm6.d
                        var_2a8.d = zmm1.d
                        var_298.d = zmm2
                        var_288.d = zmm3.d
                        goto label_1427f2a1e
                    case 5
                        zmm0 = data_142e6da00
                        int32_t var_1d8 = 4
                        int64_t* var_1b8_1 = nullptr
                        char var_1b0_1 = 0
                        int16_t var_1af_1 = 0
                        char var_1ad_1 = 0
                        int128_t var_1d4 = zmm0
                        int64_t var_1c4_1 = 0
                        int32_t var_1bc_1 = 0x3f800000
                        int64_t* rcx_14 = (*var_f0)[rbx]
                        (*(*rcx_14 + 0x68))(rcx_14, &var_1d8)
                        int32_t var_264
                        int32_t var_248
                        int32_t var_228
                        (*(*var_1b8_1 + 0x60))(var_1b8_1, &var_264, &var_228, &var_248)
                        zmm0 = var_1d4.d
                        zmm15 = var_1d4:8.d
                        zmm14 = var_1d4:4.d
                        int32_t var_24c_1 = zmm0.d
                        float var_244
                        int32_t var_240
                        int128_t zmm4_4
                        int128_t zmm5_4
                        int32_t var_224
                        int32_t var_220
                        int32_t var_21c
                        int32_t var_218
                        int32_t var_214
                        int32_t var_210
                        float var_20c
                        int32_t var_208
                        
                        if (zmm0.d f!= zmm10.d || zmm14.d f!= zmm10.d || zmm15.d f!= zmm10.d)
                            zmm9 = var_1c4_1.d
                            zmm8 = var_1d4:0xc.d
                            zmm11 = var_1bc_1
                            zmm10 = var_1c4_1:4.d
                            zmm6 = var_248
                            zmm1.d = zmm14.d f* zmm0.d
                            zmm12.d = zmm11.d f* zmm11.d
                            zmm1.d = zmm1.d f* zmm15.d
                            zmm12.d = zmm12.d f- 0.5f
                            zmm0.d = var_264.d f* zmm1.d
                            var_264 = zmm0.d
                            zmm7.d = var_244.d f* 2f
                            zmm5_4.d = var_240.d f* 2f
                            zmm6.d = zmm6.d f* 2f
                            zmm4_4.d = zmm7.d f* zmm9.d
                            zmm3.d = zmm5_4.d f* zmm9.d
                            zmm1.d = zmm5_4.d f* zmm10.d
                            zmm0.d = zmm6.d f* zmm8.d
                            zmm2 = zmm6.d f* zmm10.d
                            zmm4_4.d = zmm4_4.d f+ zmm0.d
                            zmm0.d = zmm7.d f* zmm10.d
                            zmm3.d = zmm3.d f- zmm0.d
                            zmm4_4.d = zmm4_4.d f+ zmm1.d
                            zmm0.d = zmm12.d f* zmm6.d
                            zmm6.d = zmm6.d f* zmm9.d
                            zmm3.d = zmm3.d f* zmm11.d
                            zmm1.d = zmm4_4.d f* zmm8.d
                            zmm3.d = zmm3.d f+ zmm0.d
                            zmm0.d = zmm5_4.d f* zmm8.d
                            zmm2 = zmm2 f- zmm0.d
                            zmm0.d = zmm12.d f* zmm7.d
                            zmm3.d = zmm3.d f+ zmm1.d
                            zmm7.d = zmm7.d f* zmm8.d
                            zmm1.d = zmm4_4.d f* zmm9.d
                            zmm4_4.d = zmm4_4.d f* zmm10.d
                            zmm7.d = zmm7.d f- zmm6.d
                            zmm7.d = zmm7.d f* zmm11.d
                            zmm2 = zmm2 f* zmm11.d f+ zmm0.d
                            zmm0.d = zmm12.d f* zmm5_4.d
                            zmm5_4.d = var_24c_1.d f* zmm3.d
                            zmm7.d = zmm7.d f+ zmm0.d
                            zmm5_4.d = zmm5_4.d f* 2f
                            zmm14.d = zmm14.d f* (zmm2 f+ zmm1.d)
                            zmm7.d = zmm7.d f+ zmm4_4.d
                            zmm3.d = zmm12.d f* zmm5_4.d
                            zmm14.d = zmm14.d f* 2f
                            zmm15.d = zmm15.d f* zmm7.d
                            zmm4_4.d = zmm14.d f* zmm9.d
                            zmm15.d = zmm15.d f* 2f
                            zmm0.d = zmm5_4.d f* zmm8.d
                            zmm1.d = zmm15.d f* zmm10.d
                            zmm4_4.d = zmm4_4.d f+ zmm0.d
                            zmm4_4.d = zmm4_4.d f+ zmm1.d
                            zmm1.d = zmm15.d f* zmm9.d
                            zmm0.d = zmm14.d f* zmm10.d
                            zmm2 = zmm12.d f* zmm14.d
                            zmm1.d = zmm1.d f- zmm0.d
                            zmm14.d = zmm14.d f* zmm8.d
                            zmm12.d = zmm12.d f* zmm15.d
                            zmm0.d = zmm4_4.d f* zmm8.d
                            zmm1.d = zmm1.d f* zmm11.d
                            zmm3.d = zmm3.d f- zmm1.d
                            zmm1.d = zmm5_4.d f* zmm10.d
                            zmm5_4.d = zmm5_4.d f* zmm9.d
                            zmm3.d = zmm3.d f+ zmm0.d
                            zmm0.d = zmm15.d f* zmm8.d
                            zmm14.d = zmm14.d f- zmm5_4.d
                            zmm1.d = zmm1.d f- zmm0.d
                            var_248 = zmm3.d
                            zmm0 = zmm4_4
                            zmm4_4.d = zmm4_4.d f* zmm10.d
                            zmm0.d = zmm0.d f* zmm9.d
                            zmm1.d = zmm1.d f* zmm11.d
                            zmm14.d = zmm14.d f* zmm11.d
                            zmm12.d = zmm12.d f- zmm14.d
                            zmm12.d = zmm12.d f+ zmm4_4.d
                            var_244 = zmm2 f- zmm1.d f+ zmm0.d
                            var_240 = zmm12.d
                            int128_t* rax_32 =
                                sub_142227f00(&var_1a8, &var_228, &var_1d4:0xc, &var_1d4)
                            zmm8 = *rax_32
                            var_228 = zmm8.d
                            zmm7 = *(rax_32 + 4)
                            var_224 = zmm7.d
                            zmm6 = *(rax_32 + 8)
                            var_220 = zmm6.d
                            zmm5_4 = *(rax_32 + 0xc)
                            var_21c = zmm5_4.d
                            zmm4_4 = rax_32[1].d
                            var_218 = zmm4_4.d
                            zmm3 = *(rax_32 + 0x14)
                            var_214 = zmm3.d
                            zmm0 = *(rax_32 + 0x18)
                            var_210 = zmm0.d
                            zmm2 = *(rax_32 + 0x1c)
                            var_20c = zmm2
                            zmm1 = rax_32[2].d
                            var_208 = zmm1.d
                        else
                            zmm1 = var_208
                            zmm2 = var_20c
                            zmm0 = var_210
                            zmm3 = var_214
                            zmm4_4 = var_218
                            zmm5_4 = var_21c
                            zmm6 = var_220
                            zmm7 = var_224
                            zmm8 = var_228
                        var_298:8.d = zmm0.d
                        var_288.d = zmm1.d
                        int64_t* rcx_17 = (*var_f0)[rbx]
                        var_288:4.d = var_248.d
                        var_288:8.d = var_244.d
                        var_2a8.d = zmm8.d
                        var_2a8:4.d = zmm7.d
                        var_2a8:8.d = zmm6.d
                        var_2a8:0xc.d = zmm5_4.d
                        var_298.d = zmm4_4.d
                        var_298:4.d = zmm3.d
                        var_298:0xc.d = zmm2
                        var_288:0xc.d = var_240.d
                        var_278 = var_264.d
                        zmm13 = sub_1427f45d0(&var_2a8, (*(*rcx_17 + 0x90))(rcx_17, &var_1a8))
                
                zmm6 = var_2a8.d
                zmm7 = var_2a8:4.d
                zmm8 = var_2a8:8.d
                zmm9 = var_2a8:0xc.d
                zmm10 = var_298.d
                zmm11 = var_298:4.d
                zmm12 = var_298:8.d
                zmm14 = var_298:0xc.d
                zmm15 = var_288.d
                zmm5_1 = var_278
                
                if (arg3 != 0)
                    zmm6.d = zmm6.d f* zmm13.d
                    zmm7.d = zmm7.d f* zmm13.d
                    zmm8.d = zmm8.d f* zmm13.d
                    zmm9.d = zmm9.d f* zmm13.d
                    zmm10.d = zmm10.d f* zmm13.d
                    zmm11.d = zmm11.d f* zmm13.d
                    zmm12.d = zmm12.d f* zmm13.d
                    zmm14.d = zmm14.d f* zmm13.d
                    zmm15.d = zmm15.d f* zmm13.d
                    zmm5_1.d = zmm5_1.d f* zmm13.d
                else if (arg1 != 0)
                    zmm0.d = zmm13.d f/ zmm5_1.d
                    zmm6.d = zmm6.d f* zmm0.d
                    zmm7.d = zmm7.d f* zmm0.d
                    zmm8.d = zmm8.d f* zmm0.d
                    zmm9.d = zmm9.d f* zmm0.d
                    zmm10.d = zmm10.d f* zmm0.d
                    zmm11.d = zmm11.d f* zmm0.d
                    zmm12.d = zmm12.d f* zmm0.d
                    zmm14.d = zmm14.d f* zmm0.d
                    zmm15.d = zmm15.d f* zmm0.d
                    zmm5_1.d = zmm5_1.d f* zmm0.d
                
                zmm3 = arg_18
                zmm4_1.d = zmm5_1.d f+ zmm3.d
                zmm2 = zmm3.d
                zmm3.d = zmm3.d f* var_25c_1
                rsi += 1
                zmm0.d = zmm5_1.d f* var_288:4.d
                zmm1.d = zmm5_1.d f* var_288:8.d
                zmm5_1.d = zmm5_1.d f* var_288:0xc.d
                zmm2 = zmm2 * var_258_1 f+ zmm0.d
                zmm3.d = zmm3.d f+ zmm1.d
                int32_t var_24c_2 = zmm4_1.d
                zmm4_1.d = arg_18.d f* var_260_1
                zmm0 = zmm4_1
                zmm4_1 = var_24c_2
                zmm1.d = 1f f/ zmm4_1.d
                zmm0.d = zmm0.d f+ zmm5_1.d
                arg_18 = zmm4_1.d
                zmm5_1.d = zmm1.d f* zmm2
                zmm2 = zmm1.d f* zmm3.d
                zmm3.d = var_268_1.d f+ zmm6.d
                zmm1.d = zmm1.d f* zmm0.d
                zmm0 = zmm4_1
                zmm6.d = var_22c_1.d f+ zmm15.d
                zmm4_1.d = var_250_1.d f+ zmm9.d
                var_258_1 = zmm5_1.d
                var_268_1 = zmm3.d
                zmm9.d = var_238_1.d f+ zmm11.d
                zmm11 = zx.o(0)
                zmm3.d = var_26c_1.d f+ zmm7.d
                var_25c_1 = zmm2
                zmm7.d = var_230_1.d f+ zmm14.d
                var_260_1 = zmm1.d
                zmm14 = 0x40860a92
                var_250_1 = zmm4_1.d
                var_26c_1 = zmm3.d
                zmm3.d = var_270_1.d f+ zmm8.d
                var_238_1 = zmm9.d
                zmm8.d = var_234_1.d f+ zmm12.d
                var_230_1 = zmm7.d
                zmm12 = 0x3eaaaaab
                var_22c_1 = zmm6.d
                var_270_1 = zmm3.d
                zmm3.d = var_254_1.d f+ zmm10.d
                var_234_1 = zmm8.d
                zmm10 = 0x3f800000
                var_254_1 = zmm3.d
            else
                zmm0 = arg_18
                zmm1 = var_260_1
                zmm2 = var_25c_1
                zmm5_1 = var_258_1
                zmm3 = var_254_1
                zmm4_1 = var_250_1
            
            rdi_1 += 1
            
            if (rdi_1 u>= var_e8)
                if (rsi == 0 || arg4 == 0)
                    zmm12 = var_268_1
                    zmm11 = var_26c_1
                    zmm10 = var_270_1
                else
                    zmm12 = var_268_1
                    zmm11 = var_26c_1
                    zmm10 = var_270_1
                    
                    if (arg1 == 0)
                        zmm13.d = zmm13.d f/ zmm0.d
                        zmm0.d = zmm0.d f* zmm13.d
                        zmm12.d = zmm12.d f* zmm13.d
                        arg_18 = zmm0.d
                        zmm11.d = zmm11.d f* zmm13.d
                        zmm10.d = zmm10.d f* zmm13.d
                        zmm4_1.d = zmm4_1.d f* zmm13.d
                        zmm3.d = zmm3.d f* zmm13.d
                        zmm9.d = zmm9.d f* zmm13.d
                        zmm8.d = zmm8.d f* zmm13.d
                        zmm7.d = zmm7.d f* zmm13.d
                        zmm6.d = zmm6.d f* zmm13.d
                
                goto label_1427f3347
else
    rcx_3 = physx::shdfnd::Foundation::getInstance()
    r9 = 0x84
    rax_6 = "computeMassAndInertia: Provided mass or density has no valid value"
label_1427f32b5:
    physx::shdfnd::Foundation::error(rcx_3, 4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
    "xtRigidBodyExt.cpp", 
        r9, rax_6)
    rbx.b = 0

if ((var_e4 & 0x7fffffff) != 0 && var_e4 s>= 0 && var_f0 != &var_178 && var_f0 != 0)
    class physx::PxAllocatorCallback* rax_41 = physx::shdfnd::getAllocator()
    int64_t r8_4 = *rax_41
    (*(r8_4 + 0x10))(rax_41, var_f0, r8_4)

return zx.q(rbx.b)
