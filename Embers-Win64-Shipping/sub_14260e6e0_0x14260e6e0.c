// 函数: sub_14260e6e0
// 地址: 0x14260e6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int32_t* r13 = arg11
int64_t* rbx = arg1
int32_t* r15 = arg9
*r13 = 0
*arg7 = 0
int32_t* var_2b8 = r15
int32_t* var_2a8 = r13
char rax_4

if (arg2 != 0)
    rax_4 = sub_1426126b0(*rbx, arg2)

uint64_t result

if (arg2 == 0 || rax_4 == 0)
    result = 0x80000008
else
    void* rdi_1 = rbx[0xc]
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    memset(*(rdi_1 + 8), 0xff, sx.q(*(rdi_1 + 0x1c)) * 2)
    *(rdi_1 + 0x24) = 0
    void* rax_5 = sub_14260fcd0(rbx[0xc], arg2)
    void* var_238 = rax_5
    int32_t r8_2 = 1
    int128_t zmm10
    zmm10.d = arg4.d f* arg4.d
    int32_t result_1 = 0x40000000
    int32_t r11_1 = 0
    *(rax_5 + 0x18) = arg2
    *(rax_5 + 0x14) = 0x80000000
    int64_t rax_6 = sx.q(arg8)
    int32_t var_2c0_1 = 0
    
    if (rax_6.d s<= 0)
        result_1 = 0x40000010
    else
        *arg6 = arg2
        r11_1 = 1
        var_2c0_1 = 1
    
    int128_t zmm11 = 0x3f800000
    int64_t i = 1
    int128_t zmm12 = 0x7f7fffff
    int128_t zmm9 = zx.o(0)
    uint64_t var_288_1 = zx.q(r11_1)
    
    do
        void* rax_8 = var_238
        int32_t var_2b0_1 = r8_2 - 1
        void var_230
        
        if (r8_2 - 1 s> 0)
            __builtin_memcpy(&var_238, &var_230, sx.q(r8_2 - 1) << 3)
        int64_t r9_1 = *(rax_8 + 0x18)
        int64_t* rdi_2 = *rbx
        i -= 1
        int64_t i_1 = i
        int64_t var_2c8_1 = r9_1
        char rsi_1 = (rdi_2[0x14].d).b
        void* r14_2 =
            rdi_2[0x12] + (((1 << (*(rdi_2 + 0x9c)).b) - 1) & zx.q((r9_1 u>> rsi_1).d)) * 0xb0
        int32_t* r10_6 = ((zx.q((1 << rsi_1).d - 1) & zx.q(r9_1.d)) << 5) + *(r14_2 + 0x10)
        int32_t* var_2d8_1 = r10_6
        int32_t j = *r10_6
        float zmm1
        float zmm2
        float zmm4_1
        float zmm5_1
        
        while (j != 0xffffffff)
            int32_t rcx_7 = *(*(r14_2 + 8) + 0x20)
            int64_t* rbx_3
            
            if (j u>= rcx_7)
                rbx_3 = (sx.q(j - rcx_7) << 4) + *(r14_2 + 0x80)
            else
                rbx_3 = (zx.q(j) << 4) + *(r14_2 + 0x20)
            
            int64_t rbp_1 = *rbx_3
            j = rbx_3[1].d
            
            if (rbp_1 != 0)
                void* rax_29 = sub_14260fcd0(arg1[0xc], rbp_1)
                
                if (rax_29 == 0 || *(rax_29 + 0x14) s< 0)
                    goto label_14260ee37
                
                void* rdi_3 = *arg1
                char rsi_3 = (*(rdi_3 + 0xa0)).b
                int32_t* r13_2 = *(rdi_3 + 0x90)
                    + (((1 << (*(rdi_3 + 0x9c)).b) - 1) & zx.q((rbp_1 u>> rsi_3).d)) * 0xb0
                rdi_2 = ((zx.q((1 << rsi_3).d - 1) & zx.q(rbp_1.d)) << 5) + *(r13_2 + 0x10)
                char rcx_16 = *(rdi_2 + 0x1f)
                
                if (rcx_16 u>= 0x40)
                label_14260ee2f:
                    r13 = var_2a8
                label_14260ee37:
                    r15 = var_2b8
                label_14260ee3f:
                    r10_6 = var_2d8_1
                    r9_1 = var_2c8_1
                    i = i_1
                else
                    if (arg5[0x43].b == 0)
                        int16_t rax_36 = *(rdi_2 + 0x1c)
                        
                        if ((arg5[0x42].w & rax_36) == 0 || (*(arg5 + 0x212) & rax_36) != 0)
                            goto label_14260ebac
                        
                        uint64_t rax_38 = zx.q(rcx_16) & 0x3f
                        
                        if (zmm12.d f<= *(arg5 + (rax_38 << 2) + 8)
                                || not(zmm12.d f> *(arg5 + (rax_38 << 2) + 0x108)))
                            goto label_14260ebac
                        
                        goto label_14260ec36
                    
                    int64_t var_318
                    int32_t* var_310
                    int32_t* var_308
                    int32_t var_300
                    int32_t* var_2f8
                    int64_t var_2f0
                    int32_t* var_2e8
                    int32_t var_2e0
                    char rax_44 = (*(*arg5 + 8))(arg5, rbp_1, r13_2, rdi_2, var_318, var_310, 
                        var_308, var_300, var_2f8, var_2f0, var_2e8, var_2e0, var_2d8_1, i_1, 
                        var_2c8_1, var_2c0_1, var_2b8, var_2b0_1, var_2a8, arg1, arg3, arg10, 
                        var_288_1, arg5, rax_8, rax_6, arg6, arg7)
                    
                    if (rax_44 == 0)
                    label_14260ebac:
                        r13 = var_2a8
                        r15 = var_2b8
                        var_2e0 = arg12
                        var_2e8 = r13
                        var_2f0 = arg10
                        var_2f8 = r15
                        var_300 = zmm10.d
                        var_308 = arg3
                        var_310 = *arg1
                        var_318 = rbp_1
                        zmm9, zmm10, zmm11, zmm12 = sub_142616560(r14_2, var_2d8_1, 
                            zx.d(*(rbx_3 + 0xc)), var_2c8_1, var_318, var_310, var_308, var_300, 
                            var_2f8, var_2f0, var_2e8, var_2e0)
                        goto label_14260ee3f
                    
                label_14260ec36:
                    void* r8_7 = *(r13_2 + 8)
                    int32_t rsi_5 = *(r8_7 + 0x3c)
                    int64_t* rcx_20 = arg1[1]
                    int32_t rax_48 = ((1 << (*(*arg1 + 0xa0)).b).d - 1) & rbp_1.d
                    int32_t rdx_16 = rax_48 - rsi_5
                    
                    if (rcx_20 != 0 && rax_48 s>= rsi_5 && rdx_16 s< *(r8_7 + 0x34))
                        if (*(*(r13_2 + 0x48) + sx.q(rdx_16) * 0x28 + 0x20) == 0)
                            goto label_14260eca0
                        
                        if ((*(*rcx_20 + 8))() == 0)
                            goto label_14260ebac
                        
                        goto label_14260eca0
                    
                label_14260eca0:
                    int32_t var_258
                    var_2f8 = &var_258
                    float var_248
                    var_300.q = &var_248
                    var_308 = r13_2
                    var_310 = rdi_2
                    var_318 = rbp_1
                    
                    if (sub_1426108d0(arg1, var_2c8_1, var_2d8_1, r14_2, var_318, var_310, var_308, 
                            var_300, var_2f8) == 0)
                        goto label_14260ee2f
                    
                    zmm5_1 = var_248
                    arg4.d = var_258.d f- zmm5_1
                    int32_t var_240
                    zmm6 = var_240
                    float var_250
                    zmm2 = var_250 f- zmm6.d
                    zmm7 = *(arg3 + 8)
                    zmm8 = *arg3
                    zmm4_1 = zmm2 * zmm2 + arg4.d f* arg4.d
                    zmm1 = (zmm7.d f- zmm6.d) * zmm2 + (zmm8.d - zmm5_1) f* arg4.d
                    
                    if (not(zmm4_1 f<= zmm9.d))
                        zmm1 = zmm1 / zmm4_1
                    
                    if (zmm1 f>= zmm9.d)
                        zmm1 = _mm_min_ss(zmm1, zmm11.d)
                    else
                        zmm1 = zmm9.d
                    
                    arg4.d = arg4.d f* zmm1
                    arg4.d = arg4.d f+ zmm5_1
                    zmm2 = zmm2 * zmm1 f+ zmm6.d f- zmm7.d
                    arg4.d = arg4.d f- zmm8.d
                    arg4.d = arg4.d f* arg4.d
                    
                    if (zmm2 * zmm2 f+ arg4.d f> zmm10.d)
                        goto label_14260ee2f
                    
                    *(rax_29 + 0x14) |= 0x80000000
                    int32_t rdx_20 = *(rax_29 + 0x14)
                    *(rax_29 + 0x14) =
                        (((((rax_8 - *arg1[0xc]) s>> 5).d + 1) ^ rdx_20) & 0x3fffffff) ^ rdx_20
                    
                    if (var_288_1 s>= rax_6)
                        result_1 |= 0x10
                    else
                        var_2c0_1 += 1
                        arg6[var_288_1] = rbp_1
                        var_288_1 += 1
                    
                    i = i_1
                    r13 = var_2a8
                    r10_6 = var_2d8_1
                    r9_1 = var_2c8_1
                    
                    if (i s< 0x30)
                        var_2b0_1 += 1
                        (&var_238)[i] = rax_29
                        i += 1
                        i_1 = i
                    
                    r15 = var_2b8
            else
                uint64_t rsi_2 = zx.q(*r13)
                uint64_t rdx_5 = zx.q(*(rbx_3 + 0xc))
                
                if (rsi_2.d s>= arg12)
                    i = i_1
                else
                    rdi_2 = *(r14_2 + 0x18)
                    uint64_t r8_4 = zx.q(*(r10_6 + (rdx_5 << 1) + 4)) * 3
                    zmm5_1 = *(rdi_2 + (r8_4 << 2))
                    zmm6 = *(rdi_2 + (r8_4 << 2) + 8)
                    uint64_t rdx_7 = zx.q(*(r10_6
                        + (sx.q(modu.dp.d(0:((rdx_5 + 1).d), zx.d(*(r10_6 + 0x1e)))) << 1) + 4)) * 3
                    arg4.d = (*(rdi_2 + (rdx_7 << 2))).d f- zmm5_1
                    zmm7 = *(arg3 + 8)
                    zmm2 = *(rdi_2 + (rdx_7 << 2) + 8) f- zmm6.d
                    zmm8 = *arg3
                    zmm4_1 = zmm2 * zmm2 + arg4.d f* arg4.d
                    zmm1 = (zmm7.d f- zmm6.d) * zmm2 + (zmm8.d - zmm5_1) f* arg4.d
                    
                    if (not(zmm4_1 f<= zmm9.d))
                        zmm1 = zmm1 / zmm4_1
                    
                    if (zmm1 f>= zmm9.d)
                        zmm1 = _mm_min_ss(zmm1, zmm11.d)
                    else
                        zmm1 = zmm9.d
                    
                    i = i_1
                    arg4.d = arg4.d f* zmm1
                    arg4.d = arg4.d f+ zmm5_1
                    zmm2 = zmm2 * zmm1 f+ zmm6.d f- zmm7.d
                    arg4.d = arg4.d f- zmm8.d
                    arg4.d = arg4.d f* arg4.d
                    
                    if (not(zmm2 * zmm2 f+ arg4.d f> zmm10.d))
                        int64_t rcx_11 = sx.q((rsi_2 * 3).d * 2)
                        r15[rcx_11] = zmm5_1
                        r15[rcx_11 + 1] = *(rdi_2 + (r8_4 << 2) + 4)
                        r15[rcx_11 + 2] = *(rdi_2 + (r8_4 << 2) + 8)
                        r15[rcx_11 + 3] = *(rdi_2 + (rdx_7 << 2))
                        r15[rcx_11 + 4] = *(rdi_2 + (rdx_7 << 2) + 4)
                        r15[rcx_11 + 5] = *(rdi_2 + (rdx_7 << 2) + 8)
                        *(arg10 + (sx.q(*r13 * 2) << 3)) = r9_1
                        *(arg10 + (sx.q(*r13 * 2) << 3) + 8) = 0
                        *r13 += 1
        
        char rdx_21 = *(r10_6 + 0x1e)
        int32_t j_1 = 0
        
        if (rdx_21 != 0)
            void* rbx_7 = &r10_6[1]
            
            do
                int16_t rax_57 = *(rbx_7 + 0xc)
                char rsi_6 = rdx_21
                rdi_2.b = rax_57 == 0
                
                if (rax_57 s< 0)
                    int32_t rcx_29 = *r10_6
                    rdi_2.b = 1
                    
                    if (rcx_29 != 0xffffffff)
                        int32_t rdx_22 = *(*(r14_2 + 8) + 0x20)
                        
                        while (true)
                            void* rax_61
                            
                            if (rcx_29 u>= rdx_22)
                                rax_61 = (sx.q(rcx_29 - rdx_22) << 4) + *(r14_2 + 0x80)
                            else
                                rax_61 = (zx.q(rcx_29) << 4) + *(r14_2 + 0x20)
                            
                            rcx_29 = *(rax_61 + 8)
                            
                            if (zx.d(*(rax_61 + 0xc)) == j_1)
                                rdi_2.b = 0
                                break
                            
                            if (rcx_29 == 0xffffffff)
                                rdi_2.b = 1
                                break
                    
                    rsi_6 = *(r10_6 + 0x1e)
                
                rdx_21 = rsi_6
                
                if (rdi_2.b != 0)
                    uint64_t r9_6 = zx.q(*r13)
                    
                    if (r9_6.d s< arg12)
                        rdi_2 = *(r14_2 + 0x18)
                        uint64_t r11_2 = zx.q(*rbx_7) * 3
                        zmm5_1 = *(rdi_2 + (r11_2 << 2))
                        zmm6 = *(rdi_2 + (r11_2 << 2) + 8)
                        uint64_t r10_7 =
                            zx.q(*(r10_6 + (sx.q(mods.dp.d(sx.q(j_1 + 1), zx.d(rsi_6))) << 1) + 4))
                            * 3
                        arg4.d = (*(rdi_2 + (r10_7 << 2))).d f- zmm5_1
                        zmm7 = *(arg3 + 8)
                        zmm2 = *(rdi_2 + (r10_7 << 2) + 8) f- zmm6.d
                        zmm8 = *arg3
                        zmm4_1 = zmm2 * zmm2 + arg4.d f* arg4.d
                        zmm1 = (zmm7.d f- zmm6.d) * zmm2 + (zmm8.d - zmm5_1) f* arg4.d
                        
                        if (not(zmm4_1 f<= zmm9.d))
                            zmm1 = zmm1 / zmm4_1
                        
                        if (zmm1 f>= zmm9.d)
                            zmm1 = _mm_min_ss(zmm1, zmm11.d)
                        else
                            zmm1 = zmm9.d
                        
                        rdx_21 = rsi_6
                        arg4.d = arg4.d f* zmm1
                        arg4.d = arg4.d f+ zmm5_1
                        zmm2 = zmm2 * zmm1 f+ zmm6.d f- zmm7.d
                        arg4.d = arg4.d f- zmm8.d
                        arg4.d = arg4.d f* arg4.d
                        
                        if (zmm2 * zmm2 f+ arg4.d f> zmm10.d)
                            r10_6 = var_2d8_1
                        else
                            int64_t rcx_33 = sx.q((r9_6 * 3).d * 2)
                            r15[rcx_33] = zmm5_1
                            r15[rcx_33 + 1] = *(rdi_2 + (r11_2 << 2) + 4)
                            r15[rcx_33 + 2] = *(rdi_2 + (r11_2 << 2) + 8)
                            r15[rcx_33 + 3] = *(rdi_2 + (r10_7 << 2))
                            r15[rcx_33 + 4] = *(rdi_2 + (r10_7 << 2) + 4)
                            r10_6 = var_2d8_1
                            r15[rcx_33 + 5] = *(rdi_2 + (r10_7 << 2) + 8)
                            *(arg10 + (sx.q(*r13 * 2) << 3)) = var_2c8_1
                            *(arg10 + (sx.q(*r13 * 2) << 3) + 8) = 0
                            *r13 += 1
                            rdx_21 = *(r10_6 + 0x1e)
                
                j_1 += 1
                rbx_7 += 2
            while (j_1 s< zx.d(rdx_21))
            
            i = i_1
        
        rbx = arg1
        r8_2 = var_2b0_1
    while (i != 0)
    
    *arg7 = var_2c0_1
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_338)
return result
