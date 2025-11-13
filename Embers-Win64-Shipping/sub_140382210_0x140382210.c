// 函数: sub_140382210
// 地址: 0x140382210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int128_t zmm6
int128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7
uint128_t zmm8
uint128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
uint128_t zmm10
uint128_t var_78 = zmm10
uint128_t zmm11
uint128_t var_88 = zmm11
uint128_t zmm12
uint128_t var_98 = zmm12
int32_t var_228
int64_t rax_1 = __security_cookie ^ &var_228
int32_t rcx = arg5

if (rcx s> 0x4fc)
    rcx = 0x4fc

var_228 = arg3
int32_t var_208 = 0
int32_t var_200 = 0
int32_t var_224 = 0
int32_t var_220 = rcx
int32_t var_218 = 0
int32_t var_1d8 = 0
int32_t var_1e0 = 0
int32_t var_1b8 = 0
int32_t var_1d0 = 0xffffffff
int32_t var_21c = 0xffffffff
arg1[0x11cb] = 0

if (arg1[0x24] != 0)
    goto label_140382331

uint64_t rcx_1 = zx.q(arg1[0x21])
int32_t rdx_1

if (arg3 * 0x190 != rcx_1.d && arg3 * 0xc8 != rcx_1.d && arg3 * 0x64 != rcx_1.d)
    rdx_1 = arg3 * 0x32

int32_t result

if (arg3 * 0x190 == rcx_1.d || arg3 * 0xc8 == rcx_1.d || arg3 * 0x64 == rcx_1.d || rdx_1 == rcx_1.d
        || arg3 * 0x19 == rcx_1.d || rdx_1 == (rcx_1 * 3).d)
    rcx = var_220
label_140382331:
    
    if (arg3 * 0x190 s< arg1[0x21] || rcx s<= 0)
        result = -1
    else
        void* rax_15 = sx.q(arg1[1]) + arg1
        void* rcx_3 = sx.q(*arg1) + arg1
        int32_t var_1d4_1
        
        if (arg1[0x18] != 0x803)
            var_1d4_1 = arg1[0x1a]
        else
            var_1d4_1 = 0
        
        int32_t rax_17 = arg1[0x27]
        int32_t rbx = arg6
        int32_t var_150 = 0
        
        if (rbx s>= rax_17)
            rbx = rax_17
        
        void* var_190
        sub_1403fbd70(rcx_3, 0x271f, &var_190)
        int32_t rbx_1
        
        if (arg1[0xb] s< 7 || arg1[0x21] != 0xbb80)
            rbx_1 = var_228
        else
            var_1d0 = arg1[0xc4f]
            var_21c = arg1[0xc50]
            rbx_1 = var_228
            sub_140388590(&arg1[0x401], var_190, arg7, arg8, rbx_1, arg9, arg10, arg11, 0xbb80, 
                rbx, arg12, &var_150)
        
        zmm12 = 0x3f800000
        int32_t rax_24 = 0x44f
        arg1[0x20] = 0xffffffff
        arg1[0x11c9] = 0
        
        if (var_150 != 0)
            if (arg1[0x1c] == 0xfffffc18)
                float zmm0_1[0x2] = 0x3f800000
                int32_t var_13c
                zmm0_1[0] = 1f f- var_13c
                zmm0_1[0] = zmm0_1[0] * 100f
                arg1[0x20] = int.d(floor(_mm_cvtps_pd(zmm0_1) f+ 0.5))
                rax_24 = 0x44f
            
            int32_t var_138
            
            if (var_138 s<= 0xc)
                arg1[0x11c9] = 0x44d
            else if (var_138 s> 0xe)
                if (var_138 s> 0x10)
                    int32_t rax_26
                    rax_26.b = var_138 s> 0x12
                    rax_24 = rax_26 + 0x450
                
                arg1[0x11c9] = rax_24
            else
                arg1[0x11c9] = 0x44e
        
        zmm10 = zx.o(0)
        float zmm4_1
        
        if (arg1[0x19] != 2 || arg1[0x1b] == 1)
            zmm4_1 = zmm10.d
        else
            float zmm0_3
            zmm0_3, zmm10, zmm12 = sub_140380430(arg2, rbx_1, arg1[0x21], &arg1[0x3c])
            zmm4_1 = zmm0_3
        
        int32_t r8_3 = var_220
        int32_t rax_27 = sub_140385fd0(arg1, rbx_1, r8_3)
        uint64_t r9_2 = zx.q(arg1[0x21])
        arg1[0x25] = rax_27
        uint64_t rax_30 = zx.q(divs.dp.d(sx.q(r9_2.d), rbx_1))
        uint64_t rdi_1 = zx.q(rax_30.d)
        int32_t var_1cc_1 = rax_30.d
        
        if (r8_3 s< 3 || rax_27 s< (rax_30 * 3).d << 3
                || (rdi_1.d s< 0x32 && (rdi_1.d * r8_3 s< 0x12c || rax_27 s< 0x960)))
            int32_t rax_344 = arg1[0x36]
            int32_t rcx_234 = arg1[0x32]
            
            if (rax_344 == 0)
                rax_344 = 0x44d
            
            if (rcx_234 == 0)
                rcx_234 = 0x3e8
            
            if (rdi_1.d s> 0x64)
                rcx_234 = 0x3ea
            
            int32_t rdx_140
            
            if (rdi_1.d s>= 0x32)
                if (rcx_234 == 0x3e8)
                    goto label_140384449
                
                if (rcx_234 != 0x3ea || rax_344 != 0x44e)
                label_140384458:
                    rdx_140 = rax_344
                    
                    if (rax_344 s<= 0x450)
                        rdx_140 = 0x450
                else
                    rdx_140 = 0x44d
            else
                rcx_234 = 0x3e8
            label_140384449:
                rdx_140 = 0x44f
                
                if (rax_344 s<= 0x44f)
                    goto label_140384458
            
            *arg4 = sub_140381a00(rcx_234, rdi_1.d, rdx_140, arg1[0x2a])
            result = 1
        else
            int32_t r11_1 = arg1[0x22]
            
            if (r11_1 == 0)
                int32_t temp0_3 = divs.dp.d(sx.q(rax_27 + (rdi_1 << 2).d), (rdi_1 << 3).d)
                
                if (temp0_3 s< r8_3)
                    r8_3 = temp0_3
                
                var_220 = r8_3
                arg1[0x25] = (r8_3 * rdi_1.d) << 3
            
            uint64_t rcx_10 = zx.q(arg1[0x19])
            int32_t r10_1 = arg1[0x25]
            int32_t var_1f4 = (rdi_1.d * r8_3) << 3
            int32_t rax_47 = arg1[0x1c]
            int32_t rbx_2
            
            if (rax_47 == 0xbb9)
                rbx_2 = 0x7f
            else if (rax_47 != 0xbba)
                int32_t rbx_3 = arg1[0x20]
                
                if (rbx_3 s< 0)
                    rbx_2 = 0x30
                    
                    if (arg1[0x18] == 0x800)
                        rbx_2 = 0x73
                else
                    rbx_2 = (rbx_3 * 0x147) s>> 8
                    
                    if (arg1[0x18] == 0x801)
                        int32_t rax_48 = 0x73
                        
                        if (rbx_2 s< 0x73)
                            rax_48 = rbx_2
                        
                        rbx_2 = rax_48
            else
                rbx_2 = 0
            
            int32_t rax_49 = arg1[0x1b]
            
            if (rax_49 == 0xfffffc18)
                if (rcx_10.d != 2)
                    arg1[0x2a] = rcx_10.d
                else
                    int32_t rcx_11 = 0x7918
                    
                    if (arg1[0x2a] == 2)
                        rcx_11 = 0x7148
                    
                    int32_t rax_50
                    rax_50.b =
                        r10_1 - ((zx.q((rcx_10 * 5).d) << 3) + 0x14).d * (rdi_1.d - 0x32) s> rcx_11
                    arg1[0x2a] = rax_50 + 1
            else if (rcx_10.d != 2)
                arg1[0x2a] = rcx_10.d
            else
                arg1[0x2a] = rax_49
            
            uint64_t r8_4 = zx.q(arg1[0x2a])
            int32_t rdx_11 = arg1[0x18]
            int32_t rcx_13 = r10_1 - ((zx.q((r8_4 * 5).d) << 3) + 0x14).d * (rdi_1.d - 0x32)
            
            if (rdx_11 != 0x803)
                int32_t rax_55 = arg1[0x1f]
                
                if (rax_55 != 0xfffffc18)
                    arg1[0x32] = rax_55
                else
                    float zmm3 = zmm12.d - zmm4_1
                    int32_t rax_56 = int.d(zmm3 * 16000f + zmm4_1 * 16000f)
                    int32_t rcx_19 = (((int.d(zmm3 * 64000f + zmm4_1 * 36000f) - rax_56) * rbx_2
                        * rbx_2) s>> 0xe) + rax_56
                    
                    if (rdx_11 == 0x800)
                        rcx_19 += 0x1f40
                    
                    int32_t rax_57 = arg1[0x33]
                    
                    if (rax_57 == 0x3ea)
                        rcx_19 -= 0xfa0
                    else if (rax_57 s> 0)
                        rcx_19 += 0xfa0
                    
                    rax_55 = 0x3e8
                    int32_t rdx_12 = 0x3e8
                    
                    if (rcx_13 s>= rcx_19)
                        rdx_12 = 0x3ea
                    
                    bool cond:10_1 = arg1[0xc] == 0
                    arg1[0x32] = rdx_12
                    
                    if (not(cond:10_1))
                        rax_55 = 0x3e8
                        
                        if (arg1[0xa] s> (0x80 - rbx_2) s>> 4)
                            rdx_12 = 0x3e8
                        
                        arg1[0x32] = rdx_12
                    
                    if (arg1[0xd] != 0 && rbx_2 s> 0x64)
                        arg1[0x32] = rax_55
            else
                arg1[0x32] = 0x3ea
            
            int32_t rcx_20 = var_228
            
            if (arg1[0x32] != 0x3ea && rcx_20 s< r9_2.d s/ 0x64)
                arg1[0x32] = 0x3ea
            
            if (arg1[0x29] != 0)
                arg1[0x32] = 0x3ea
            
            int32_t rax_62 = 0x1f40
            
            if (var_1cc_1 s> 0x32)
                rax_62 = 0x2ee0
            
            if (var_220 s< divs.dp.d(sx.q(rax_62 * rcx_20), (r9_2 << 3).d))
                arg1[0x32] = 0x3ea
            
            if (r8_4.d != 1 || arg1[0x34] != 2 || arg1[0x10] != 0 || arg1[0x32] == 0x3ea
                    || arg1[0x33] == 0x3ea)
                arg1[0x10] = 0
            else
                arg1[0x10] = 1
                arg1[0x2a] = 2
            
            int32_t rdi_3 = arg1[0x33]
            int32_t rax_69
            int32_t rcx_23
            
            if (rdi_3 s<= 0)
                rcx_23 = var_228
                rax_69 = var_224
            else
                int32_t rax_66 = arg1[0x32]
                
                if (rax_66 == 0x3ea)
                    if (rdi_3 != 0x3ea)
                        goto label_14038283d
                    
                    rcx_23 = var_228
                    rax_69 = var_224
                else if (rdi_3 == 0x3ea || (rax_66 == 0x3ea && rdi_3 != 0x3ea))
                label_14038283d:
                    var_224 = 1
                    int32_t rcx_22
                    rcx_22.b = rax_66 != 0x3ea
                    var_1d8 = rcx_22
                    rcx_23 = var_228
                    
                    if (rcx_22 != 0)
                        rax_69 = 1
                    else if (rcx_23 s< r9_2.d s/ 0x64)
                        rax_69 = 0
                        var_224 = 0
                    else
                        arg1[0x32] = rdi_3
                        var_1e0 = 1
                        rax_69 = 1
                else
                    rcx_23 = var_228
                    rax_69 = var_224
            
            int32_t var_1f0_1 = 0x101
            
            if (arg1[0x37] != 0)
                var_224 = 1
                var_1d8 = 1
                arg1[0x37] = 0
                var_200 = 1
            label_1403828ae:
                int32_t rdx_23 = r9_2.d s/ 0xc8
                int32_t temp0_5 = divs.dp.d(sx.q(rdx_23 * var_220), rcx_23 + rdx_23)
                int32_t rcx_25 = temp0_5
                
                if (temp0_5 s> var_1f0_1)
                    rcx_25 = var_1f0_1
                
                var_218 = rcx_25
                
                if (r11_1 != 0)
                    int32_t rdx_28 = r10_1 s/ 0x640
                    
                    if (rcx_25 s>= rdx_28)
                        rcx_25 = rdx_28
                    
                    var_218 = rcx_25
            else if (rax_69 != 0)
                goto label_1403828ae
            
            if (arg1[0x32] != 0x3ea && rdi_3 == 0x3ea)
                void var_128
                sub_1403def20(rax_15, arg1[0x11cc], &var_128)
                var_200 = 1
            
            int32_t r11_2 = arg1[0x32]
            
            if (r11_2 == 0x3ea || arg1[0x38] != 0 || arg1[0x14] != 0)
                int32_t rdi_4 = 0x451
                int32_t r9_3 = rcx_13
                
                if (r11_2 != 0x3ea)
                    int32_t temp34_1
                    int32_t temp35_1
                    temp34_1:temp35_1 = muls.dp.d(0x51eb851f, (arg1[0xb] + 0x2d) * rcx_13)
                    int32_t r9_5 = temp34_1 s>> 4
                    r9_3 = r9_5 + (r9_5 u>> 0x1f)
                    
                    if (arg1[0x22] == 0)
                        r9_3 -= 0x3e8
                
                void* const rdx_31
                void* const r8_6
                
                if (arg1[0x19] != 2 || arg1[0x1b] == 1)
                    rdx_31 = &data_1435fd780
                    r8_6 = &data_1435fd7a0
                else
                    rdx_31 = &data_1435fd7c0
                    r8_6 = &data_1435fd7e0
                
                int32_t r10_2 = arg1[0x38]
                int32_t var_c8_1 = (((*rdx_31 - *r8_6) * rbx_2 * rbx_2) s>> 0xe) + *r8_6
                int32_t var_c4_1 =
                    (((*(rdx_31 + 4) - *(r8_6 + 4)) * rbx_2 * rbx_2) s>> 0xe) + *(r8_6 + 4)
                int32_t var_c0_1 =
                    (((*(rdx_31 + 8) - *(r8_6 + 8)) * rbx_2 * rbx_2) s>> 0xe) + *(r8_6 + 8)
                int32_t var_bc_1 =
                    (((*(rdx_31 + 0xc) - *(r8_6 + 0xc)) * rbx_2 * rbx_2) s>> 0xe) + *(r8_6 + 0xc)
                int32_t var_b8_1 =
                    (((*(rdx_31 + 0x10) - *(r8_6 + 0x10)) * rbx_2 * rbx_2) s>> 0xe) + *(r8_6 + 0x10)
                int32_t var_b4_1 =
                    (((*(rdx_31 + 0x14) - *(r8_6 + 0x14)) * rbx_2 * rbx_2) s>> 0xe) + *(r8_6 + 0x14)
                int32_t var_b0_1 =
                    (((*(rdx_31 + 0x18) - *(r8_6 + 0x18)) * rbx_2 * rbx_2) s>> 0xe) + *(r8_6 + 0x18)
                int64_t i = 0x451
                int32_t var_ac =
                    (((*(rdx_31 + 0x1c) - *(r8_6 + 0x1c)) * rbx_2 * rbx_2) s>> 0xe) + *(r8_6 + 0x1c)
                int32_t* rcx_78 = &var_ac
                
                do
                    int32_t rax_81 = rcx_78[-1]
                    int32_t rdx_32 = *rcx_78
                    
                    if (r10_2 == 0)
                        if (arg1[0x36] s< rdi_4)
                            rax_81 += rdx_32
                        else
                            rax_81 -= rdx_32
                    
                    if (r9_3 s>= rax_81)
                        break
                    
                    i -= 1
                    rdi_4 -= 1
                    rcx_78 -= 8
                while (i s> 0x44d)
                
                arg1[0x36] = rdi_4
                
                if (r10_2 == 0 && r11_2 != 0x3ea && arg1[0x15] == r10_2)
                    if (rdi_4 s> 0x44f)
                        rdi_4 = 0x44f
                    
                    arg1[0x36] = rdi_4
            
            int32_t rax_82 = arg1[0x1e]
            
            if (arg1[0x36] s> rax_82)
                arg1[0x36] = rax_82
            
            int32_t rdx_33 = arg1[0x1d]
            
            if (rdx_33 != 0xfffffc18)
                arg1[0x36] = rdx_33
            
            if (r11_2 != 0x3ea && var_1f4 s< 0x3a98)
                int32_t rax_83 = arg1[0x36]
                int32_t rcx_79 = 0x44f
                
                if (rax_83 s< 0x44f)
                    rcx_79 = rax_83
                
                arg1[0x36] = rcx_79
            
            int32_t rax_84 = arg1[0x21]
            
            if (rax_84 s<= 0x5dc0 && arg1[0x36] s> 0x450)
                arg1[0x36] = 0x450
            
            if (rax_84 s<= 0x3e80 && arg1[0x36] s> 0x44f)
                arg1[0x36] = 0x44f
            
            if (rax_84 s<= 0x2ee0 && arg1[0x36] s> 0x44e)
                arg1[0x36] = 0x44e
            
            int32_t rcx_80 = 0x44d
            
            if (rax_84 s<= 0x1f40 && arg1[0x36] s> 0x44d)
                arg1[0x36] = 0x44d
            
            int32_t rdi_5 = arg1[0x11c9]
            
            if (rdi_5 != 0 && rdx_33 == 0xfffffc18)
                int32_t rdx_34 = arg1[0x2a]
                
                if (rcx_13 s> rdx_34 * 0x4650 || r11_2 != 0x3ea)
                    if (rcx_13 s<= rdx_34 * 0x5dc0 && r11_2 == 0x3ea)
                        rcx_80 = 0x44e
                    else if (rcx_13 s> rdx_34 * 0x7530)
                        int32_t rcx_81
                        rcx_81.b = rcx_13 s> rdx_34 * 0xabe0
                        rcx_80 = rcx_81 + 0x450
                    else
                        rcx_80 = 0x44f
                
                int32_t rax_91 = arg1[0x36]
                
                if (rdi_5 s> rcx_80)
                    rcx_80 = rdi_5
                
                arg1[0x11c9] = rcx_80
                
                if (rax_91 s< rcx_80)
                    rcx_80 = rax_91
                
                arg1[0x36] = rcx_80
            
            sub_1403fbd70(rcx_3, 0xfc4, zx.q(rbx))
            int32_t rcx_83 = arg1[0x32]
            
            if (rcx_83 == 0x3ea && arg1[0x36] == 0x44e)
                arg1[0x36] = 0x44f
            
            if (arg1[0x29] != 0)
                arg1[0x36] = 0x44d
            
            uint64_t rdi_6 = zx.q(arg1[0x21])
            int32_t r8_8 = var_228
            void var_288
            
            if (r8_8 s<= rdi_6.d s/ 0x32 || (rcx_83 != 0x3ea && arg1[0x36] s<= 0x44f))
                uint32_t rbx_7 = arg1[0x36]
                uint32_t var_21c_1 = rbx_7
                
                if (rcx_83 == 0x3e8 && rbx_7 s> 0x44f)
                    arg1[0x32] = 0x3e9
                
                if (arg1[0x32] == 0x3e9 && rbx_7 s<= 0x44f)
                    arg1[0x32] = 0x3e8
                
                int32_t rax_139 = divs.dp.d(sx.q(r8_8 * arg1[0x25]), (rdi_6 << 3).d)
                int32_t rcx_103 = var_220 - var_218
                
                if (rcx_103 s< rax_139)
                    rax_139 = rcx_103
                
                var_218 = rax_139 - 1
                void var_188
                sub_1403fe470(&var_188, &arg4[1], var_220 - 1)
                int32_t r8_16 = arg1[0x19]
                int64_t rcx_106 = sx.q((var_228 + var_1d4_1) * r8_16) << 2
                int64_t rax_146 = rcx_106 + 0xf
                
                if (rax_146 u<= rcx_106)
                    rax_146 = 0xffffffffffffff0
                
                int64_t rax_147 = rax_146 & 0xfffffffffffffff0
                __chkstk(rax_147)
                int64_t r10_3 = sx.q(var_1d4_1)
                void* rsp_3 = &var_288 - rax_147
                int32_t i_1 = 0
                int64_t rdx_55 = 0
                void* r9_10 = rsp_3 + 0x60
                
                if (r8_16 * r10_3.d s> 0)
                    do
                        i_1 += 1
                        int64_t rcx_110 = (sx.q(arg1[0x28]) - r10_3) * sx.q(arg1[0x19]) + rdx_55
                        rdx_55 += 1
                        *(r9_10 + (rdx_55 << 2) - 4) = arg1[rcx_110 + 0x41]
                    while (i_1 s< r10_3.d * arg1[0x19])
                    
                    rbx_7 = var_21c_1
                
                int32_t rdx_57
                
                if (arg1[0x32] != 0x3ea)
                    rdx_57 = *(rax_15 + 8)
                else
                    rdx_57 = sub_1403df070(0x3c) << 8
                
                int32_t rcx_111 = arg1[0x2c]
                int32_t rdx_58 = rdx_57 - rcx_111
                int32_t rcx_113 =
                    rcx_111 + ((zx.d(rdx_58.w) * 0x3d7) s>> 0x10) + (rdx_58 s>> 0x10) * 0x3d7
                arg1[0x2c] = rcx_113
                int32_t rax_157 = sub_1403df0e0(rcx_113 s>> 8)
                int32_t rdi_10
                int512_t zmm2_1
                int512_t zmm3_1
                
                if (arg1[0x18] != 0x800)
                    int32_t rcx_117 = arg1[0x19]
                    rdi_10 = var_228
                    *(rsp_3 + 0x30) = arg1[0x21]
                    *(rsp_3 + 0x28) = rcx_117
                    *(rsp_3 + 0x20) = rdi_10
                    zmm2_1, zmm3_1 = sub_140380790(arg2, 3, 
                        r9_10 + (sx.q(rcx_117 * var_1d4_1) << 2), &arg1[0x2e])
                else
                    int32_t rdx_61 = arg1[0x19]
                    *(rsp_3 + 0x30) = arg1[0x21]
                    int32_t rax_162 = var_228
                    *(rsp_3 + 0x28) = rdx_61
                    *(rsp_3 + 0x20) = rax_162
                    zmm2_1, zmm3_1, zmm10 = sub_140381a90(arg2, zx.q(rax_157), 
                        r9_10 + (sx.q(rdx_61 * var_1d4_1) << 2), &arg1[0x2e])
                    rdi_10 = var_228
                
                int32_t rdx_65 = arg1[0x32]
                zmm6 = 0x3f000000
                zmm11 = zmm12
                uint128_t zmm1_1
                
                if (rdx_65 == 0x3ea)
                label_140383983:
                    int32_t* r8_30 = 0x15
                    
                    if (rbx_7 == 0x44d)
                        r8_30 = 0xd
                    else if (rbx_7 s> 0x44d)
                        if (rbx_7 s<= 0x44f)
                            r8_30 = 0x11
                        else if (rbx_7 == 0x450)
                            r8_30 = 0x13
                    
                    sub_1403fbd70(rcx_3, 0x271c, r8_30)
                    sub_1403fbd70(rcx_3, 0x2718, zx.q(arg1[0x2a]))
                    sub_1403fbd70(rcx_3, 0xfa2, 0xffffffff)
                    int64_t r8_32 = 0
                    int32_t var_170
                    int32_t var_168
                    int32_t rbx_11
                    uint64_t rdi_30
                    
                    if (arg1[0x32] == 0x3e8)
                        rdi_30 = 0
                        rbx_11 = var_228
                    else
                        zmm7 = 0x40000000
                        sub_1403fbd70(rcx_3, 0xfa6, nullptr)
                        
                        if (arg1[0x12] != 0)
                            zmm7 = zmm10
                        
                        sub_1403fbd70(rcx_3, 0x2712, zx.q(int.d(zmm7.d)))
                        
                        if (arg1[0x32] == 0x3e9)
                            uint64_t rflags_1
                            int32_t temp0_19
                            temp0_19, rflags_1 = __bsr_gprv_memv(var_168)
                            int32_t rdi_28 = (var_170 - temp0_19 + 6) s>> 3
                            
                            if (var_224 != 0)
                                rdi_28 += 3
                            
                            rbx_11 = var_228
                            
                            if (arg1[0x22] == 0)
                                int32_t rax_254 = var_218
                                
                                if (rdi_28 s> rax_254)
                                    rax_254 = rdi_28
                                
                                r8_32 = 0
                                rdi_30 = zx.q(rax_254)
                            else
                                rdi_30 = zx.q(rdi_28
                                    - divs.dp.d(sx.q(arg1[9] * rbx_11), arg1[0x21] << 3) + var_218)
                                r8_32 = 0
                        else if (arg1[0x22] == 0)
                            rdi_30 = zx.q(var_218)
                            r8_32 = 0
                            rbx_11 = var_228
                        else
                            rbx_11 = var_228
                            int32_t rdi_31 = 0
                            
                            if (arg1[0x24] == 0x1392)
                                int32_t r8_34 = arg1[0x21]
                                
                                if (rbx_11 != r8_34 s/ 0x32)
                                    rdi_31 = (divs.dp.d(sx.q(r8_34), rbx_11) - 0x32)
                                        * (arg1[0x2a] * 0x3c + 0x28)
                                    
                                    if (var_150 != 0)
                                        int32_t var_14c
                                        zmm1_1.d = var_14c.d f* zmm6.d
                                        zmm1_1.d = zmm1_1.d f+ zmm12.d
                                        zmm1_1.d = zmm1_1.d f* _mm_cvtepi32_ps(zx.o(rdi_31)).d
                                        rdi_31 = int.d(zmm1_1.d)
                            
                            sub_1403fbd70(rcx_3, 0xfa6, 1)
                            sub_1403fbd70(rcx_3, 0xfb4, zx.q(arg1[0x23]))
                            sub_1403fbd70(rcx_3, 0xfa2, zx.q(arg1[0x25] + rdi_31))
                            rdi_30 = zx.q(rcx_103 - 1)
                            r8_32 = 0
                    
                    int32_t temp80_1
                    int32_t temp81_1
                    temp80_1:temp81_1 = muls.dp.d(0x51eb851f, arg1[0x21] * arg1[0x19])
                    int32_t rdx_107 = temp80_1 s>> 7
                    int32_t rdx_108 = rdx_107 + (rdx_107 u>> 0x1f)
                    int64_t rax_262 = sx.q(rdx_108) << 2
                    int64_t rcx_165 = rax_262 + 0xf
                    
                    if (rcx_165 u<= rax_262)
                        rcx_165 = 0xffffffffffffff0
                    
                    int64_t rcx_166 = rcx_165 & 0xfffffffffffffff0
                    __chkstk(rcx_166)
                    void* rsp_4 = rsp_3 - rcx_166
                    int32_t rcx_167 = arg1[0x32]
                    
                    if (rcx_167 != 0x3e8)
                        int32_t rax_264 = arg1[0x33]
                        
                        if (rcx_167 != rax_264 && rax_264 s> 0)
                            int32_t i_2 = 0
                            
                            if (rdx_108 s> 0)
                                int32_t rdx_113
                                
                                do
                                    i_2 += 1
                                    int32_t temp104_1
                                    int32_t temp105_1
                                    temp104_1:temp105_1 = muls.dp.d(0xae147ae1, arg1[0x21])
                                    int32_t rdx_110 = temp104_1 s>> 7
                                    int64_t rcx_172 = (sx.q(rdx_110 + (rdx_110 u>> 0x1f))
                                        + sx.q(arg1[0x28]) - r10_3) * sx.q(arg1[0x19]) + r8_32
                                    r8_32 += 1
                                    *(rsp_4 + 0x60 + (r8_32 << 2) - 4) = arg1[rcx_172 + 0x41]
                                    int32_t temp106_1
                                    int32_t temp107_1
                                    temp106_1:temp107_1 =
                                        muls.dp.d(0x51eb851f, arg1[0x21] * arg1[0x19])
                                    rdx_113 = temp106_1 s>> 7
                                while (i_2 s< rdx_113 + (rdx_113 u>> 0x1f))
                                rbx_11 = var_228
                    
                    int64_t r10_9 = sx.q(rbx_11)
                    int32_t i_3 = 0
                    int64_t r8_38 = 0
                    
                    if ((arg1[0x28] - rbx_11 - var_1d4_1) * arg1[0x19] s> 0)
                        void* rcx_175 = &arg1[0x41]
                        
                        do
                            i_3 += 1
                            rcx_175 += 4
                            int64_t rax_278 = sx.q(arg1[0x19]) * r10_9 + r8_38
                            r8_38 += 1
                            *(rcx_175 - 4) = arg1[rax_278 + 0x41]
                        while (i_3 s< (arg1[0x28] - rbx_11 - var_1d4_1) * arg1[0x19])
                    
                    int64_t i_10 = sx.q(i_3)
                    
                    if (i_3 s< arg1[0x28] * arg1[0x19])
                        void* r9_20 = &arg1[0x41 + i_10]
                        
                        do
                            i_3 += 1
                            r9_20 += 4
                            int64_t rcx_180 =
                                (r10_3 - sx.q(arg1[0x28]) + r10_9) * sx.q(arg1[0x19]) + i_10
                            i_10 += 1
                            *(r9_20 - 4) = *(r9_10 + (rcx_180 << 2))
                        while (i_3 s< arg1[0x28] * arg1[0x19])
                        
                        rbx_11 = var_228
                    
                    zmm2_1.o = arg1[0x2d]
                    
                    if (zmm12.d f> zmm2_1.d || not(zmm12.d f<= zmm11.d))
                        void* rcx_181 = var_190
                        zmm3_1.o = zmm11
                        *(rsp_4 + 0x40) = arg1[0x21]
                        *(rsp_4 + 0x38) = *(rcx_181 + 0x48)
                        *(rsp_4 + 0x30) = arg1[0x19]
                        int32_t rax_294 = *(rcx_181 + 4)
                        *(rsp_4 + 0x28) = rbx_11
                        *(rsp_4 + 0x20) = rax_294
                        GetSymbolNames(r9_10, r9_10, zmm2_1, zmm3_1)
                    
                    bool cond:27_1 = arg1[0x32] != 0x3e9
                    arg1[0x2d] = zmm11.d
                    
                    if (cond:27_1 || arg1[0x2a] == 1)
                        int32_t rcx_184 = rcx_13 - 0x7530
                        int32_t rax_295 = rcx_184
                        
                        if (rcx_13 - 0x7530 s< 0)
                            rax_295 = 0
                        
                        int32_t rcx_185
                        
                        if (rax_295 * 2 s<= 0x4000)
                            if (rcx_184 s< 0)
                                rcx_184 = 0
                            
                            rcx_185 = rcx_184 * 2
                        else
                            rcx_185 = 0x4000
                        
                        arg1[0x16] = rcx_185
                    
                    if (*(arg1 + 0xe8) == 0 && arg1[0x19] == 2)
                        int16_t rax_297 = arg1[0x2b].w
                        
                        if (rax_297 s< 0x4000 || arg1[0x16] s< 0x4000)
                            void* rcx_186 = var_190
                            zmm3_1.o = zx.o(arg1[0x16])
                            zmm3_1.o = _mm_cvtepi32_ps(zmm3_1.o)
                            zmm3_1.d = zmm3_1.d f* 6.10351562e-05f
                            zmm2_1.o = zx.o(sx.d(rax_297))
                            *(rsp_4 + 0x40) = arg1[0x21]
                            *(rsp_4 + 0x38) = *(rcx_186 + 0x48)
                            int32_t rax_301 = *(rcx_186 + 4)
                            *(rsp_4 + 0x30) = 2
                            zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
                            zmm2_1.d = zmm2_1.d f* 6.10351562e-05f
                            *(rsp_4 + 0x28) = rbx_11
                            *(rsp_4 + 0x20) = rax_301
                            sub_140385370(r9_10, r9_10, zmm2_1, zmm3_1)
                            arg1[0x2b].w = arg1[0x16].w
                    
                    int32_t r8_39 = arg1[0x32]
                    int64_t rax_303
                    uint64_t rbx_14
                    int32_t temp0_25
                    
                    if (r8_39 != 0x3ea)
                        rbx_14 = zx.q(var_220)
                        uint64_t rflags_2
                        temp0_25, rflags_2 = _bit_scan_reverse(var_168)
                        rax_303.b = r8_39 == 0x3e9
                    
                    int32_t var_1f8_2
                    int32_t rbx_17
                    
                    if (r8_39 == 0x3ea || ((rax_303 * 5).d << 2) - temp0_25 + 0x10 + var_170
                            s> ((rbx_14 << 3) + -fffffffffffffff8).d)
                        var_224 = 0
                    label_140383fc4:
                        rbx_17 = 0
                        arg1[0x37] = 0
                        var_1f8_2 = 0
                    else
                        if (r8_39 == 0x3e9)
                            if (var_224 == 0)
                                uint64_t rflags_3
                                int32_t temp0_26
                                temp0_26, rflags_3 = _bit_scan_reverse(var_168)
                                
                                if (var_170 - temp0_26 + 0x24 s> (rdi_30 << 3).d)
                                    goto label_140383fc4
                            
                            sub_1403fe0d0(&var_188, var_224, 0xc)
                        
                        if (var_224 == 0)
                            goto label_140383fc4
                        
                        sub_1403fe0d0(&var_188, var_1d8, 1)
                        int32_t r9_22 = arg1[0x32]
                        int32_t r8_40 = rbx_14.d
                        int32_t r8_41
                        
                        if (r9_22 != 0x3e9)
                            uint64_t rflags_4
                            int32_t temp0_27
                            temp0_27, rflags_4 = __bsr_gprv_memv(var_168)
                            r8_41 = r8_40 - ((var_170 - temp0_27 + 6) s>> 3)
                        else
                            r8_41 = r8_40 - rdi_30.d
                        
                        int32_t temp131_1
                        int32_t temp132_1
                        temp131_1:temp132_1 = muls.dp.d(0x51eb851f, arg1[0x25])
                        int32_t rbx_16 = temp131_1 s>> 9
                        rbx_17 = rbx_16 + (rbx_16 u>> 0x1f)
                        
                        if (r8_41 - 1 s< rbx_17)
                            rbx_17 = r8_41 - 1
                        
                        if (rbx_17 s< 2)
                            rbx_17 = 2
                        
                        if (rbx_17 s> var_1f0_1)
                            rbx_17 = var_1f0_1
                        
                        var_1f8_2 = rbx_17
                        
                        if (r9_22 == 0x3e9)
                            sub_1403fe640(&var_188, rbx_17 - 2, 0x100)
                    
                    int32_t rax_310 = arg1[0x32]
                    int32_t rcx_201 = 0
                    
                    if (rax_310 != 0x3ea)
                        rcx_201 = 0x11
                    
                    void* rcx_202 = &var_188
                    int32_t var_1f0_3
                    
                    if (rax_310 != 0x3e8)
                        if (var_220 - rbx_17 - 1 s< rdi_30.d)
                            rdi_30 = zx.q(var_220 - rbx_17 - 1)
                        
                        var_1f0_3 = rdi_30.d
                        sub_1403fe600(rcx_202, rdi_30.d)
                    else
                        uint64_t rflags_5
                        int32_t temp0_28
                        temp0_28, rflags_5 = __bsr_gprv_memv(var_168)
                        rdi_30 = zx.q((var_170 - temp0_28 + 6) s>> 3)
                        var_208 = rdi_30.d
                        sub_1403fe190(rcx_202)
                        var_1f0_3 = rdi_30.d
                    
                    void* rbx_18
                    
                    if (var_224 != 0 || arg1[0x32] != 0x3e8)
                        sub_1403fbd70(rcx_3, 0x2726, &var_150)
                        
                        if (var_224 == 0 || var_1d8 == 0)
                            goto label_1403840ae
                        
                        sub_1403fbd70(rcx_3, 0x271a, nullptr)
                        sub_1403fbd70(rcx_3, 0xfa6, nullptr)
                        int32_t temp133_1
                        int32_t temp134_1
                        temp133_1:temp134_1 = muls.dp.d(0x51eb851f, arg1[0x21])
                        int32_t rdx_127 = temp133_1 s>> 6
                        *(rsp_4 + 0x28) = 0
                        *(rsp_4 + 0x20) = rbx_17
                        rbx_18 = r9_10
                        
                        if (sub_1403f7cd0(rcx_3, rbx_18, zx.q((rdx_127 u>> 0x1f) + rdx_127), 
                                &arg4[1 + sx.q(rdi_30.d)]) s>= 0)
                            sub_1403fbd70(rcx_3, 0xfbc, sub_1403fbd70(rcx_3, 0xfbf, &var_1b8))
                            goto label_1403840bf
                        
                        result = -3
                    else
                    label_1403840ae:
                        rbx_18 = r9_10
                    label_1403840bf:
                        int32_t* r8_50 = sub_1403fbd70(rcx_3, 0x271a, zx.q(rcx_201))
                        int32_t rcx_210 = arg1[0x32]
                        int32_t* r8_55
                        
                        if (rcx_210 == 0x3e8)
                        label_14038418d:
                            r8_55 = zx.q(var_168)
                        label_140384194:
                            int32_t r11_5 = var_224
                            int32_t rdi_41
                            
                            if (r11_5 == 0 || var_1d8 != 0)
                                rdi_41 = var_1f8_2
                            label_1403842a3:
                                int32_t r9_30 = var_228
                                int32_t rcx_228 = 0
                                int32_t i_4 = divs.dp.d(sx.q(arg1[0x21]), r9_30)
                                int32_t rdx_138 = arg1[0x32]
                                
                                while (i_4 s< 0x190)
                                    i_4 *= 2
                                    rcx_228 += 1
                                
                                uint32_t rax_334
                                
                                if (rdx_138 == 0x3e8)
                                    rcx_228.b -= 2
                                    rax_334.b = var_21c_1.b + 3
                                    rcx_228.b <<= 3
                                    rax_334.b <<= 5
                                    rcx_228.b |= rax_334.b
                                else if (rdx_138 != 0x3ea)
                                    rax_334.b = var_21c_1.b | 6
                                    rcx_228.b -= 2
                                    rax_334.b *= 2
                                    rcx_228.b |= rax_334.b
                                    rcx_228.b <<= 3
                                else
                                    rax_334 = var_21c_1 - 0x44e
                                    
                                    if (var_21c_1 - 0x44e s< 0)
                                        rax_334 = 0
                                    
                                    rax_334.b |= 0xfc
                                    rax_334.b <<= 2
                                    rcx_228.b |= rax_334.b
                                    rcx_228.b <<= 3
                                
                                rax_334.b = arg1[0x2a] == 2
                                rax_334.b <<= 2
                                rax_334.b |= rcx_228.b
                                *arg4 = rax_334.b
                                arg1[0x11cb] = r8_55.d ^ var_1b8
                                
                                if (var_1e0 == 0)
                                    arg1[0x33] = arg1[0x32]
                                else
                                    arg1[0x33] = 0x3ea
                                
                                uint64_t rbx_23 = zx.q(var_220)
                                arg1[0x34] = arg1[0x2a]
                                uint64_t rflags_7
                                int32_t temp0_31
                                temp0_31, rflags_7 = _bit_scan_reverse(r8_55.d)
                                arg1[0x35] = r9_30
                                arg1[0x38] = 0
                                int64_t rcx_232
                                
                                if (var_170 - temp0_31 - 1
                                        s<= ((rbx_23 << 3) + -fffffffffffffff8).d)
                                    if (arg1[0x32] != 0x3e8 || r11_5 != 0)
                                        rcx_232 = zx.q(var_208)
                                    else
                                        rcx_232 = sx.q(var_208)
                                        int64_t rax_341 = rcx_232
                                        
                                        if (rcx_232 s> 2)
                                            while (arg4[rax_341] == 0)
                                                rax_341 -= 1
                                                rcx_232 = zx.q(rcx_232.d - 1)
                                                
                                                if (rax_341 s<= 2)
                                                    break
                                    
                                    goto label_1403843df
                                
                                if (rbx_23.d s>= 2)
                                    arg4[1] = 0
                                    rcx_232 = 1
                                    arg1[0x11cb] = 0
                                label_1403843df:
                                    result = rdi_41 + 1 + rcx_232.d
                                    
                                    if (arg1[0x22] == 0)
                                        if (opus_packet_pad(arg4, result, rbx_23.d) != 0)
                                            result = -3
                                        else
                                            result = rbx_23.d
                                else
                                    result = -2
                            else
                                int32_t rdi_37 = arg1[0x21]
                                int32_t rbx_21 = rdi_37 s/ 0xc8
                                int32_t rdi_40 = rdi_37 s/ 0x190
                                sub_1403fbd70(rcx_3, 0xfbc, r8_55)
                                sub_1403fbd70(rcx_3, 0x271a, nullptr)
                                sub_1403fbd70(rcx_3, 0x2712, nullptr)
                                void* rdx_135 =
                                    r9_10 + (sx.q((var_228 - rdi_40 - rbx_21) * arg1[0x19]) << 2)
                                *(rsp_4 + 0x28) = 0
                                *(rsp_4 + 0x20) = 2
                                sub_1403f7cd0(rcx_3, rdx_135, zx.q(rdi_40), &var_218)
                                rdi_41 = var_1f8_2
                                void* rdx_136 = r9_10 + (sx.q((var_228 - rbx_21) * arg1[0x19]) << 2)
                                *(rsp_4 + 0x28) = 0
                                *(rsp_4 + 0x20) = rdi_41
                                
                                if (sub_1403f7cd0(rcx_3, rdx_136, zx.q(rbx_21), 
                                        &arg4[1 + sx.q(var_1f0_3)]) s>= 0)
                                    sub_1403fbd70(rcx_3, 0xfbf, &var_1b8)
                                    r8_55 = zx.q(var_168)
                                    r11_5 = var_224
                                    goto label_1403842a3
                                
                                result = -3
                        else
                            int32_t rax_316 = arg1[0x33]
                            
                            if (rcx_210 != rax_316 && rax_316 s> 0)
                                sub_1403fbd70(rcx_3, 0xfbc, r8_50)
                                int32_t temp136_1
                                int32_t temp137_1
                                temp136_1:temp137_1 = muls.dp.d(0x51eb851f, arg1[0x21])
                                int32_t rdx_130 = temp136_1 s>> 7
                                *(rsp_4 + 0x28) = 0
                                *(rsp_4 + 0x20) = 2
                                sub_1403f7cd0(rcx_3, rsp_4 + 0x60, 
                                    zx.q((rdx_130 u>> 0x1f) + rdx_130), &var_218)
                                sub_1403fbd70(rcx_3, 0x2712, nullptr)
                            
                            r8_55 = zx.q(var_168)
                            uint64_t rflags_6
                            int32_t temp0_29
                            temp0_29, rflags_6 = _bit_scan_reverse(r8_55.d)
                            
                            if (var_170 - temp0_29 - 1 s> (rdi_30 << 3).d)
                                goto label_140384194
                            
                            uint64_t r8_54 = zx.q(var_228)
                            *(rsp_4 + 0x28) = &var_188
                            *(rsp_4 + 0x20) = rdi_30.d
                            int32_t rax_319 = sub_1403f7cd0(rcx_3, rbx_18, r8_54, 0)
                            var_208 = rax_319
                            
                            if (rax_319 s>= 0)
                                goto label_14038418d
                            
                            result = -3
                else
                    int32_t r9_12 = arg1[0x19]
                    int64_t rcx_120 = sx.q(rdi_10 * r9_12) * 2
                    int64_t rax_169 = rcx_120 + 0xf
                    
                    if (rax_169 u<= rcx_120)
                        rax_169 = 0xffffffffffffff0
                    
                    int64_t rax_170 = rax_169 & 0xfffffffffffffff0
                    __chkstk(rax_170)
                    int32_t r10_4 = var_218
                    int32_t r11_3 = var_228
                    rsp_3 -= rax_170
                    uint64_t r8_22 = zx.q((r10_4 * var_1cc_1) << 3)
                    uint128_t zmm0_4
                    
                    if (rdx_65 != 0x3e9)
                        arg1[9] = r8_22.d
                    else
                        int32_t r9_13 = arg1[0x2a]
                        int32_t rdi_11
                        rdi_11.b = arg1[0x21] == r11_3 * 0x64
                        int32_t rdi_14 = (rdi_11 + 5) * r9_13 * 0x3e8
                        arg1[9] = rdi_14
                        int32_t rdx_66
                        
                        if (rbx_7 != 0x450)
                            int32_t temp68_1
                            int32_t temp69_1
                            temp68_1:temp69_1 = muls.dp.d(0x66666667, (r8_22.d - rdi_14) * 3)
                            rdx_66 = temp68_1 s>> 1
                        else
                            int32_t temp70_1
                            int32_t temp71_1
                            temp70_1:temp71_1 = muls.dp.d(0x55555556, (r8_22.d - rdi_14) * 2)
                            rdx_66 = temp70_1
                        
                        arg1[9] = rdx_66 + (rdx_66 u>> 0x1f) + rdi_14
                        int32_t rdx_72 = (r8_22 << 2).d s/ 5
                        
                        if (arg1[9] s> rdx_72)
                            arg1[9] = rdx_72
                        
                        if (*(arg1 + 0xe8) != 0)
                            r9_12 = arg1[0x19]
                        else
                            int32_t rax_182 = 0xe10
                            
                            if (rbx_7 == 0x450)
                                rax_182 = 0xbb8
                            
                            r9_12 = arg1[0x19]
                            zmm11 = _mm_cvtepi32_ps(zx.o(r8_22.d - arg1[9]))
                            zmm0_4.d = _mm_cvtepi32_ps(zx.o(rax_182 * r9_13)).d f+ zmm11.d
                            zmm11.d = zmm11.d f/ zmm0_4.d
                            
                            if (not(0.857142866f f<= zmm11.d))
                                zmm11.d = zmm11.d f+ 0.142857149f
                    
                    if (*(arg1 + 0xe8) != 0 && arg1[0x22] != 0 && arg1[0x29] == 0)
                        int32_t rax_184 = 0x11
                        zmm3_1.o = zmm10
                        var_1d0.w = 0x3e80
                        int32_t rcx_126 = arg1[0x36]
                        int32_t var_208_1 = 0x11
                        
                        if (rcx_126 == 0x44d)
                            rax_184 = 0xd
                            var_1d0 = 0x1f40
                            var_208_1 = rax_184
                        else if (rcx_126 == 0x44e)
                            rax_184 = 0xf
                            var_1d0.w = 0x2ee0
                            var_208_1 = rax_184
                        
                        int64_t r8_24 = sx.q(rax_184)
                        
                        if (r9_12 s> 0)
                            void* rbx_9 = *(arg1 + 0xe8)
                            uint64_t i_9 = zx.q(arg1[0x19])
                            zmm2_1.o = 0xc0000000
                            int128_t* r9_14 = rbx_9 + 4
                            uint64_t i_11 = i_9
                            int64_t r10_5 = 0
                            uint64_t i_5
                            
                            do
                                int64_t rdi_15 = 0
                                
                                if (r8_24 s>= 4)
                                    void* rax_185 = r9_14 + 4
                                    int128_t* rdx_73 = r9_14
                                    int64_t j_3 = ((r8_24 - 4) u>> 2) + 1
                                    rdi_15 = j_3 << 2
                                    int64_t j
                                    
                                    do
                                        zmm0_4 = *(rax_185 - 8)
                                        
                                        if (0.5f f<= zmm0_4.d)
                                            zmm0_4.d = 0x3f000000.d f* 0.5f
                                        else if (not(zmm0_4.d f> -2f))
                                            zmm0_4 = 0xc0000000
                                        else if (0.5f f<= zmm0_4.d)
                                            zmm0_4.d = 0x3f000000.d f* 0.5f
                                        else if (not(zmm0_4.d f<= zmm10.d))
                                            zmm0_4.d = zmm0_4.d f* 0.5f
                                        
                                        zmm1_1 = *rdx_73
                                        zmm3_1.d = zmm3_1.d f+ zmm0_4.d
                                        
                                        if (0.5f f<= zmm1_1.d)
                                            zmm1_1.d = 0x3f000000.d f* 0.5f
                                        else if (zmm1_1.d f<= -2f)
                                            zmm1_1 = 0xc0000000
                                        else if (not(zmm1_1.d f<= zmm10.d))
                                            zmm1_1.d = zmm1_1.d f* 0.5f
                                        
                                        zmm0_4 = *rax_185
                                        zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                                        
                                        if (0.5f f<= zmm0_4.d)
                                            zmm0_4.d = 0x3f000000.d f* 0.5f
                                        else if (zmm0_4.d f<= -2f)
                                            zmm0_4 = 0xc0000000
                                        else if (not(zmm0_4.d f<= zmm10.d))
                                            zmm0_4.d = zmm0_4.d f* 0.5f
                                        
                                        zmm3_1.d = zmm3_1.d f+ zmm0_4.d
                                        zmm0_4 = *(rax_185 + 4)
                                        
                                        if (0.5f f<= zmm0_4.d)
                                            zmm0_4.d = 0x3f000000.d f* 0.5f
                                        else if (not(zmm0_4.d f> -2f))
                                            zmm0_4 = 0xc0000000
                                        else if (0.5f f<= zmm0_4.d)
                                            zmm0_4.d = 0x3f000000.d f* 0.5f
                                        else if (not(zmm0_4.d f<= zmm10.d))
                                            zmm0_4.d = zmm0_4.d f* 0.5f
                                        
                                        rdx_73 = &rdx_73[1]
                                        rax_185 += 0x10
                                        zmm3_1.d = zmm3_1.d f+ zmm0_4.d
                                        j = j_3
                                        j_3 -= 1
                                    while (j != 1)
                                    i_9 = i_11
                                
                                if (rdi_15 s< r8_24)
                                    void* rcx_129 = rbx_9 + ((r10_5 + rdi_15) << 2)
                                    int64_t j_2 = r8_24 - rdi_15
                                    int64_t j_1
                                    
                                    do
                                        zmm0_4 = *rcx_129
                                        
                                        if (0.5f f<= zmm0_4.d)
                                            zmm0_4.d = 0x3f000000.d f* 0.5f
                                        else if (zmm0_4.d f<= -2f)
                                            zmm0_4 = 0xc0000000
                                        else if (not(zmm0_4.d f<= zmm10.d))
                                            zmm0_4.d = zmm0_4.d f* 0.5f
                                        
                                        rcx_129 += 4
                                        zmm3_1.d = zmm3_1.d f+ zmm0_4.d
                                        j_1 = j_2
                                        j_2 -= 1
                                    while (j_1 != 1)
                                
                                r9_14 += 0x54
                                r10_5 += 0x15
                                i_5 = i_9
                                i_9 -= 1
                                i_11 = i_9
                            while (i_5 != 1)
                            rbx_7 = var_21c_1
                            r11_3 = var_228
                            rax_184 = var_208_1
                            r9_12 = arg1[0x19]
                            r10_4 = var_218
                        
                        int32_t r8_25 = arg1[9]
                        zmm3_1.d = zmm3_1.d f/ _mm_cvtepi32_ps(zx.o(rax_184)).d
                        zmm1_1 = _mm_cvtepi32_ps(zx.o(r9_12))
                        int32_t rdx_75 = neg.d(r8_25) * 2 s/ 3
                        int32_t rax_191 = arg1[0x36]
                        zmm3_1.d = zmm3_1.d f* zmm1_1.d
                        zmm3_1.d = zmm3_1.d f+ 0.200000003f
                        zmm3_1.d = zmm3_1.d f* _mm_cvtepi32_ps(zx.o(sx.d(var_1d0.w))).d
                        uint64_t rdi_16 = zx.q(int.d(zmm3_1.d))
                        
                        if (rdi_16.d s<= rdx_75)
                            rdi_16 = zx.q(rdx_75)
                        
                        if (rax_191 - 0x450 u<= 1)
                            arg1[9] = (rdi_16 * 3).d s/ 5 + r8_25
                        else
                            arg1[9] = r8_25 + rdi_16.d
                        
                        var_218 = r10_4 + divs.dp.d(sx.q(r11_3 * rdi_16.d), arg1[0x21] << 3)
                    
                    uint64_t r8_26 = zx.q(arg1[0x21])
                    void* r10_7 = &arg1[2]
                    *r10_7 = r9_12
                    arg1[8] = divs.dp.d(sx.q(r11_3 * 0x3e8), r8_26.d)
                    arg1[3] = arg1[0x2a]
                    
                    if (rbx_7 == 0x44d)
                        arg1[7] = 0x1f40
                    else if (rbx_7 != 0x44e)
                        arg1[7] = 0x3e80
                    else
                        arg1[7] = 0x2ee0
                    
                    int32_t rcx_136 = arg1[0x32]
                    int32_t rax_205 = 0x1f40
                    arg1[5] = 0x3e80
                    
                    if (rcx_136 == 0x3e9)
                        rax_205 = 0x3e80
                    
                    arg1[6] = rax_205
                    
                    if (rcx_136 == 0x3e8)
                        int32_t rdx_84
                        
                        if (var_1cc_1 s<= 0x32)
                            rdx_84 = var_1f4
                        else
                            rcx_136 = arg1[0x32]
                            rdx_84 = var_1f4 * 2 s/ 3
                        
                        if (rdx_84 s< 0x32c8)
                            int32_t rax_209 = arg1[7]
                            arg1[5] = 0x2ee0
                            
                            if (rax_209 s> 0x2ee0)
                                rax_209 = 0x2ee0
                            
                            arg1[7] = rax_209
                        
                        if (rdx_84 s< 0x2580)
                            int32_t rax_210 = arg1[7]
                            arg1[5] = 0x1f40
                            
                            if (rax_210 s> 0x1f40)
                                rax_210 = 0x1f40
                            
                            arg1[7] = rax_210
                    
                    int32_t rdi_17
                    rdi_17.b = arg1[0x22] == 0
                    uint64_t rax_212 = zx.q(rcx_103 - 1)
                    arg1[0xe] = rdi_17
                    
                    if (rax_212.d s> 0x4fb)
                        rax_212 = 0x4fb
                    
                    int32_t var_198 = rax_212.d
                    uint64_t rax_213 = zx.q((rax_212 << 3).d)
                    arg1[0xf] = rax_213.d
                    
                    if (rcx_136 == 0x3e9)
                        arg1[0xf] = (rax_213 * 9).d s/ 0xa
                    
                    if (rdi_17 != 0)
                        int32_t rdi_18 = arg1[9]
                        arg1[0xf] = divs.dp.d(sx.q(rdi_18 * r11_3), (r8_26 << 3).d) << 3
                        int32_t rax_221 = rdi_18 - 0x7d0
                        
                        if (rax_221 s< 1)
                            rax_221 = 1
                        
                        arg1[9] = rax_221
                    
                    zmm9 = 0x47000000
                    zmm8 = 0xc7000000
                    zmm7 = 0x46fffe00
                    
                    if (var_200 != 0)
                        *(rsp_3 + 0x40) = r8_26.d
                        var_1f4 = 0
                        zmm3_1.o = zmm12
                        zmm2_1.o = zmm10
                        void* rdx_91 = var_190
                        int32_t rdi_21 = r8_26.d s/ 0x190
                        int64_t rbx_10 = sx.q((arg1[0x28] - arg1[0x1a] - rdi_21) * r9_12)
                        *(rsp_3 + 0x38) = *(rdx_91 + 0x48)
                        int32_t rax_229 = *(rdx_91 + 4)
                        *(rsp_3 + 0x30) = r9_12
                        void* rcx_141 = &arg1[0x41 + rbx_10]
                        *(rsp_3 + 0x28) = rdi_21
                        *(rsp_3 + 0x20) = rax_229
                        GetSymbolNames(rcx_141, rcx_141, zmm2_1, zmm3_1)
                        
                        if (rbx_10 s> 0)
                            __builtin_memset(&arg1[0x41], 0, rbx_10 << 2)
                        
                        int32_t i_6 = 0
                        
                        if (arg1[0x28] * arg1[0x19] s> 0)
                            void* rdx_93 = rsp_3 + 0x60
                            void* rcx_143 = &arg1[0x41]
                            
                            do
                                float zmm0_5 = *rcx_143 * 32768f
                                
                                if (not(zmm0_5 > -32768f))
                                    zmm0_5 = -32768f
                                else if (not(32767f > zmm0_5))
                                    zmm0_5 = 32767f
                                
                                i_6 += 1
                                rcx_143 += 4
                                rdx_93 += 2
                                *(rdx_93 - 2) = (int.d(zmm0_5)).w
                            while (i_6 s< arg1[0x28] * arg1[0x19])
                        
                        uint64_t r9_15 = zx.q(arg1[0x28])
                        *(rsp_3 + 0x30) = 1
                        *(rsp_3 + 0x28) = &var_1f4
                        *(rsp_3 + 0x20) = 0
                        zmm7, zmm8, zmm9 = sub_1403ddee0(rax_15, &arg1[2], rsp_3 + 0x60, r9_15)
                        rbx_7 = var_21c_1
                        r11_3 = var_228
                        r10_7 = &arg1[2]
                    
                    int32_t i_7 = 0
                    int64_t rcx_145 = 0
                    
                    if (r11_3 * arg1[0x19] s> 0)
                        do
                            zmm0_4.d =
                                (*(r9_10 + ((sx.q(arg1[0x19]) * r10_3 + rcx_145) << 2))).d f* zmm9.d
                            
                            if (not(zmm0_4.d f> zmm8.d))
                                zmm0_4 = zmm8
                            else if (not(zmm7.d f> zmm0_4.d))
                                zmm0_4 = zmm7
                            
                            i_7 += 1
                            rcx_145 += 1
                            *(rsp_3 + 0x60 + (rcx_145 << 1) - 2) = (int.d(zmm0_4.d.d)).w
                        while (i_7 s< r11_3 * arg1[0x19])
                    
                    *(rsp_3 + 0x30) = 0
                    *(rsp_3 + 0x28) = &var_198
                    *(rsp_3 + 0x20) = &var_188
                    int32_t rax_243
                    rax_243, zmm2_1, zmm3_1, zmm6, zmm10, zmm11, zmm12 =
                        sub_1403ddee0(rax_15, r10_7, rsp_3 + 0x60, zx.q(r11_3))
                    var_208 = rax_243
                    
                    if (rax_243 != 0)
                        result = -3
                    else
                        if (var_198 != rax_243)
                            if (arg1[0x32] == 0x3e8)
                                int32_t rax_247 = arg1[0x13]
                                
                                if (rax_247 == 0x1f40)
                                    rbx_7 = 0x44d
                                    var_21c_1 = rbx_7
                                else if (rax_247 != 0x2ee0)
                                    if (rax_247 == 0x3e80)
                                        rbx_7 = 0x44f
                                    
                                    var_21c_1 = rbx_7
                                else
                                    rbx_7 = 0x44e
                                    var_21c_1 = rbx_7
                            
                            int32_t rax_248 = arg1[0x17]
                            arg1[0x11] = rax_248
                            
                            if (rax_248 != 0)
                                var_224 = 1
                                arg1[0x37] = 1
                                var_1d8 = 0
                            
                            goto label_140383983
                        
                        int32_t temp125_1
                        int32_t temp126_1
                        temp125_1:temp126_1 = sx.q(arg1[0x21])
                        arg1[0x11cb] = 0
                        int32_t rcx_147 = 0
                        int32_t i_8 = divs.dp.d(temp125_1:temp126_1, var_228)
                        int32_t rdx_97 = arg1[0x32]
                        
                        while (i_8 s< 0x190)
                            i_8 *= 2
                            rcx_147 += 1
                        
                        if (rdx_97 == 0x3e8)
                            rbx_7.b += 3
                            rcx_147.b -= 2
                            rbx_7.b <<= 5
                            rcx_147.b <<= 3
                            rbx_7.b |= rcx_147.b
                        else if (rdx_97 != 0x3ea)
                            rbx_7.b |= 6
                            rcx_147.b -= 2
                            rbx_7.b *= 2
                            rbx_7.b |= rcx_147.b
                            rbx_7.b <<= 3
                        else
                            int32_t rax_246 = rbx_7 - 0x44e
                            
                            if (rax_246 s< 0)
                                rax_246 = 0
                            
                            rax_246.b |= 0xfc
                            rax_246.b <<= 2
                            rax_246.b |= rcx_147.b
                            rax_246.b <<= 3
                            rbx_7 = zx.d(rax_246.b)
                        
                        result = 1
                        rcx_147.b = arg1[0x2a] == 2
                        rcx_147.b <<= 2
                        rcx_147.b |= rbx_7.b
                        *arg4 = rcx_147.b
            else
                if (var_1d0 != 0xffffffff)
                    arg1[0xc4f] = var_1d0
                    arg1[0xc50] = var_21c
                
                int32_t rbx_5
                rbx_5.b = r8_8 s> rdi_6.d s/ 0x19
                int32_t rax_101 = divs.dp.d(sx.q(arg5 - 3), rbx_5 + 2)
                
                if (rax_101 s> 0x4fc)
                    rax_101 = 0x4fc
                
                int64_t rcx_84 = sx.q(rax_101 * (rbx_5 + 2))
                int64_t rax_103 = rcx_84 + 0xf
                
                if (rax_103 u<= rcx_84)
                    rax_103 = 0xffffffffffffff0
                
                int64_t rax_104 = rax_103 & 0xfffffffffffffff0
                __chkstk(rax_104)
                void* rsp_1 = &var_288 - rax_104
                *(rsp_1 - 0x190)
                opus_repacketizer_init(rsp_1 - 0x190)
                int32_t rax_107 = arg1[0x1f]
                int32_t rcx_86 = arg1[0x10]
                int32_t rax_108 = arg1[0x1d]
                var_1f4 = arg1[0x1b]
                arg1[0x1f] = arg1[0x32]
                arg1[0x1d] = arg1[0x36]
                int32_t rax_112 = arg1[0x2a]
                arg1[0x1b] = rax_112
                
                if (rcx_86 == 0)
                    arg1[0x34] = rax_112
                else
                    arg1[0x1b] = 1
                
                int64_t rax_113 = sx.q(var_1e0)
                int64_t var_210_2 = rax_113
                int32_t rdi_7 = 0
                
                if (rbx_5 + 2 s<= 0)
                label_140382e96:
                    int32_t r8_13 = arg1[0x22]
                    int32_t rcx_94
                    
                    if (r8_13 == 0)
                        int32_t temp0_8 =
                            divs.dp.d(sx.q(arg1[0x25] * 3), divs.dp.d(0:0x4b0, rbx_5 + 2))
                        rcx_94 = arg5
                        
                        if (temp0_8 s< rcx_94)
                            rcx_94 = temp0_8
                    else
                        rcx_94 = arg5
                    
                    int32_t rax_135
                    rax_135.b = r8_13 == 0
                    *(rsp_1 - 0x1c0) = rax_135
                    *(rsp_1 - 0x1c8) = 0
                    *(rsp_1 - 0x1d0) = rcx_94
                    result = sub_140388080(rsp_1 - 0x190, 0, zx.q(rbx_5 + 2), arg4)
                    
                    if (result s< 0)
                        result = -3
                    else
                        arg1[0x1f] = rax_107
                        arg1[0x1d] = rax_108
                        arg1[0x1b] = var_1f4
                        arg1[0x10] = rcx_86
                else
                    int32_t rcx_87 = 0
                    int32_t var_1e0_1 = 0
                    
                    while (true)
                        arg1[0x10] = 0
                        
                        if (rax_113 != 0 && rdi_7 == rbx_5 + 1)
                            arg1[0x1f] = 0x3ea
                        
                        int32_t rcx_88 = arg1[0x21]
                        char* var_1e8_1 = sx.q(rcx_87) + rsp_1 + 0x60
                        int32_t temp66_1
                        int32_t temp67_1
                        temp66_1:temp67_1 = muls.dp.d(0x51eb851f, rcx_88 * arg1[0x19])
                        int32_t rdx_46 = temp66_1 s>> 4
                        *(rsp_1 - 0x198) = arg12
                        *(rsp_1 - 0x1a0) = arg11
                        *(rsp_1 - 0x1a8) = arg10
                        *(rsp_1 - 0x1b0) = arg9
                        *(rsp_1 - 0x1b8) = 0
                        *(rsp_1 - 0x1c0) = 0
                        *(rsp_1 - 0x1c8) = rbx
                        *(rsp_1 - 0x1d0) = rax_101
                        int32_t rax_128 = sub_140382210(arg1, 
                            arg2 + (sx.q(((rdx_46 u>> 0x1f) + rdx_46) * rdi_7) << 2), 
                            zx.q(rcx_88 s/ 0x32))
                        
                        if (rax_128 s< 0)
                            break
                        
                        if (opus_repacketizer_cat(rsp_1 - 0x190, var_1e8_1, rax_128) s< 0)
                            break
                        
                        rax_113 = var_210_2
                        rdi_7 += 1
                        rcx_87 = var_1e0_1 + rax_101
                        var_1e0_1 = rcx_87
                        
                        if (rdi_7 s>= rbx_5 + 2)
                            goto label_140382e96
                    
                    result = -3
else
    result = -1

__security_check_cookie(rax_1 ^ &var_228)
return result
