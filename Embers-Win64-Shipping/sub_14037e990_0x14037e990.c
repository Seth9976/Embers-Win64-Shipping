// 函数: sub_14037e990
// 地址: 0x14037e990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t result_15
int64_t rax_1 = __security_cookie ^ &result_15
int32_t var_d0 = arg3
int32_t* rdi = arg4
int32_t r9 = arg1[3]
void* rax_3 = sx.q(arg1[1]) + arg1
char* r11 = arg2
char* var_88 = arg2
void* rax_5 = sx.q(*arg1) + arg1
uint32_t result_3 = 0
int32_t var_cc = 0
int32_t var_c8 = 0
int32_t var_a0 = 0
int32_t var_9c = 0
int32_t var_80 = 0
uint32_t result_1 = arg5
int32_t result_19 = r9 s/ 0x32
int32_t result_16 = result_19
int32_t result_13 = result_19 s>> 1
int32_t result_20 = result_13 s>> 1
result_15 = result_20
int32_t rax_9 = result_20 s>> 1
uint32_t result

if (result_1 s>= rax_9)
    uint32_t result_5 = r9 s/ 0x19 * 3
    
    if (result_1 s>= result_5)
        result_1 = result_5
    
    arg5 = result_1
    
    if (arg3 s<= 1)
        uint32_t result_6 = arg1[0xf]
        r11 = nullptr
        var_88 = nullptr
        
        if (result_1 s>= result_6)
            result_1 = result_6
            arg5 = result_6
        
        goto label_14037eb61
    
    int32_t var_d4_1
    uint32_t result_4
    uint32_t result_2
    int32_t result_14
    int32_t r9_1
    
    if (r11 == 0)
    label_14037eb61:
        r9_1 = arg1[0xe]
        result_2 = result_1
        result_4 = result_1
        var_d4_1 = r9_1
        
        if (r9_1 != 0)
            if (result_1 s<= result_19)
                if (result_1 s>= result_19)
                    goto label_14037eabf
                
                if (result_1 s> result_13)
                    result_2 = result_13
                    result_4 = result_13
                    goto label_14037eabf
                
                if (r9_1 == 0x3e8 || result_1 s<= result_15)
                    goto label_14037eabf
                
                result_14 = result_15
                
                if (result_1 s< result_13)
                    result_2 = result_14
                
                result_4 = result_2
                goto label_14037eac3
            
            while (true)
                int32_t result_8 = result_19
                
                if (result_2 s< result_19)
                    result_8 = result_2
                
                result = sub_14037e990(arg1, 0, 0, rdi, result_8, r11.d)
                
                if (result s< 0)
                    break
                
                result_19 = result_16
                result_2 -= result
                r11 = nullptr
                rdi = &rdi[sx.q(arg1[2] * result)]
                
                if (result_2 s<= 0)
                    result = arg5
                    break
        else
            int32_t i = r11.d
            
            if (arg1[2] * result_1 s> 0)
                do
                    *rdi = r11.d
                    i += 1
                    rdi = &rdi[1]
                while (i s< arg1[2] * result_1)
            
            result = result_1
    else
        result_2 = arg1[0xf]
        result_4 = result_2
        var_d4_1 = arg1[0xd]
        void var_50
        sub_1403f7420(&var_50, r11, var_d0)
        r9_1 = var_d4_1
    label_14037eabf:
        result_14 = result_15
    label_14037eac3:
        int32_t rax_24 = 0
        int32_t var_78_1 = 0
        int32_t rdx_5
        
        if (var_88 == 0)
            rdx_5 = 0
        else
            int32_t rcx_1 = arg1[0xe]
            
            if (rcx_1 s<= 0)
                rdx_5 = 0
            else if (r9_1 == 0x3ea)
                if (rcx_1 != r9_1 && arg1[0x10] == 0)
                    goto label_14037ec3f
                
                rdx_5 = 0
            else if (rcx_1 != 0x3ea)
                rdx_5 = 0
            else
            label_14037ec3f:
                rdx_5 = 1
                var_cc = 1
                
                if (r9_1 != 0x3ea)
                    var_78_1 = arg1[2] * result_14
                    rdx_5 = 1
                else
                    rax_24 = arg1[2] * result_14
        
        int64_t rax_14 = sx.q(rax_24) << 2
        int64_t rcx_2 = rax_14 + 0xf
        
        if (rcx_2 u<= rax_14)
            rcx_2 = 0xffffffffffffff0
        
        int64_t rcx_3 = rcx_2 & 0xfffffffffffffff0
        __chkstk(rcx_3)
        void var_118
        void* rsp_1 = &var_118 - rcx_3
        void* var_68_1 = rsp_1 + 0x40
        void* var_60
        
        if (rdx_5 == 0 || r9_1 != 0x3ea)
            var_68_1 = var_60
        else
            int32_t result_7 = result_2
            
            if (result_14 s< result_2)
                result_7 = result_14
            
            *(rsp_1 + 0x28) = 0
            *(rsp_1 + 0x20) = result_7
            sub_14037e990(nop)
        
        if (result_2 s<= arg5)
            int32_t r8_3 = var_d4_1
            int32_t rax_26
            
            if (r8_3 == 0x3ea)
                rax_26 = 0
            else
                int32_t result_9 = result_2
                
                if (result_13 s> result_2)
                    result_9 = result_13
                
                rax_26 = result_9 * arg1[2]
            
            int64_t rax_28 = sx.q(rax_26) * 2
            int64_t rcx_8 = rax_28 + 0xf
            
            if (rcx_8 u<= rax_28)
                rcx_8 = 0xffffffffffffff0
            
            int64_t rcx_9 = rcx_8 & 0xfffffffffffffff0
            __chkstk(rcx_9)
            void* rsp_2 = rsp_1 - rcx_9
            void* rcx_10 = rsp_2 + 0x40
            var_60 = rcx_10
            int32_t var_b0
            int512_t zmm1
            
            if (r8_3 != 0x3ea)
                void* var_a8_1 = rcx_10
                
                if (arg1[0xe] == 0x3ea)
                    sub_1403dde80(rax_3)
                    rcx_10 = var_a8_1
                    r8_3 = var_d4_1
                
                int32_t rax_33 = divs.dp.d(sx.q(result_2 * 0x3e8), arg1[3])
                
                if (rax_33 s< 0xa)
                    rax_33 = 0xa
                
                arg1[8] = rax_33
                int32_t rdx_10
                
                if (var_88 == 0)
                    rdx_10 = 1
                else
                    arg1[5] = arg1[0xb]
                    
                    if (r8_3 != 0x3e8)
                        arg1[7] = 0x3e80
                        rdx_10 = arg6 * 2
                    else
                        int32_t rax_35 = arg1[0xc]
                        
                        if (rax_35 == 0x44d)
                            arg1[7] = 0x1f40
                            rdx_10 = arg6 * 2
                        else if (rax_35 != 0x44e)
                            arg1[7] = 0x3e80
                            rdx_10 = arg6 * 2
                        else
                            arg1[7] = 0x2ee0
                            rdx_10 = arg6 * 2
                
                var_b0 = rdx_10
                int32_t rax_36 = 0
                int32_t var_b8_1 = 0
                
                while (true)
                    uint32_t result_17
                    *(rsp_2 + 0x30) = &result_17
                    *(rsp_2 + 0x28) = rcx_10
                    int64_t r9_4
                    r9_4.b = rax_36 == 0
                    *(rsp_2 + 0x20) = &var_50
                    int32_t rax_37
                    rax_37, zmm1 = sub_1403dd460(rax_3, &arg1[4], zx.q(rdx_10), r9_4)
                    uint32_t result_12
                    void* r8_8
                    
                    if (rax_37 == 0)
                        r8_8 = var_a8_1
                        result_12 = result_17
                    else
                        if (var_b0 == 0)
                            result = -3
                            goto label_14037f578
                        
                        r8_8 = var_a8_1
                        result_12 = result_2
                        int32_t i_1 = 0
                        int32_t rax_39 = arg1[2] * result_2
                        result_17 = result_12
                        
                        if (rax_39 s> 0)
                            void* rcx_13 = r8_8
                            
                            do
                                *rcx_13 = 0
                                i_1 += 1
                                rcx_13 += 2
                            while (i_1 s< arg1[2] * result_2)
                            
                            result_12 = result_17
                    
                    void* r8_9 = r8_8 + (sx.q(arg1[2] * result_12) << 1)
                    rax_36 = var_b8_1 + result_12
                    var_a8_1 = r8_9
                    var_b8_1 = rax_36
                    
                    if (rax_36 s>= result_2)
                        r8_3 = var_d4_1
                        break
                    
                    rdx_10 = var_b0
                    rcx_10 = r8_9
            
            int32_t var_b8_2 = 0
            int32_t var_30
            
            if (arg6 != 0)
            label_14037ef69:
                
                if (var_d4_1 != 0x3ea)
                    var_b8_2 = 0x11
            else if (r8_3 != 0x3ea)
                if (var_88 == 0)
                    goto label_14037ef69
                
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = __bsr_gprv_memv(var_30)
                int64_t rax_46
                rax_46.b = arg1[0xd] == 0x3e9
                int32_t var_38
                
                if (((rax_46 * 5).d << 2) - temp0_2 + var_38 + 0x10 s> var_d0 << 3)
                    goto label_14037ef69
                
                if (r8_3 != 0x3e9)
                    var_c8 = 1
                label_14037eee9:
                    var_9c = sub_1403f72f0(&var_50, 1)
                    int32_t rdx_13
                    int32_t r8_10
                    int32_t r9_5
                    
                    if (var_d4_1 != 0x3e9)
                        r8_10 = var_30
                        rdx_13 = var_38
                        uint64_t rflags_2
                        int32_t temp0_3
                        temp0_3, rflags_2 = _bit_scan_reverse(r8_10)
                        r9_5 = var_d0 - ((rdx_13 - temp0_3 + 6) s>> 3)
                    else
                        r8_10 = var_30
                        rdx_13 = var_38
                        r9_5 = sub_1403f7510(&var_50, 0x100) + 2
                    
                    uint64_t rflags_3
                    int32_t temp0_4
                    temp0_4, rflags_3 = _bit_scan_reverse(r8_10)
                    var_a0 = r9_5
                    uint64_t rcx_26 = zx.q(var_d0 - r9_5)
                    var_d0 = rcx_26.d
                    
                    if ((rcx_26 << 3).d s< rdx_13 - temp0_4 - 1)
                        var_d0 = 0
                        r9_5 = 0
                        var_a0 = 0
                        var_c8 = 0
                    
                    int32_t var_48
                    int32_t var_48_1 = var_48 - r9_5
                    goto label_14037ef69
                
                int32_t rax_51 = sub_1403f72f0(&var_50, 0xc)
                var_c8 = rax_51
                
                if (rax_51 != 0)
                    goto label_14037eee9
                
                var_b8_2 = 0x11
            
            int32_t rax_57 = arg1[0xc]
            int32_t* r8_11 = 0x15
            
            if (rax_57 == 0x44d)
                r8_11 = 0xd
            else if (rax_57 s> 0x44d)
                if (rax_57 s<= 0x44f)
                    r8_11 = 0x11
                else if (rax_57 == 0x450)
                    r8_11 = 0x13
            
            sub_1403f6e90(rax_5, 0x271c, r8_11)
            sub_1403f6e90(rax_5, 0x2718, zx.q(arg1[0xb]))
            int32_t rdx_16 = var_c8
            int32_t rax_58
            int32_t r8_13
            
            if (rdx_16 == 0)
                rax_58 = var_78_1
                r8_13 = var_cc
            else
                rax_58 = 0
                r8_13 = 0
                var_cc = 0
            
            int64_t rax_60 = sx.q(rax_58) << 2
            int64_t rcx_29 = rax_60 + 0xf
            
            if (rcx_29 u<= rax_60)
                rcx_29 = 0xffffffffffffff0
            
            int64_t rcx_30 = rcx_29 & 0xfffffffffffffff0
            __chkstk(rcx_30)
            void* rsp_3 = rsp_2 - rcx_30
            
            if (r8_13 != 0 && var_d4_1 != 0x3ea)
                uint32_t result_10 = result_2
                
                if (result_15 s< result_2)
                    result_10 = result_15
                
                *(rsp_3 + 0x28) = 0
                *(rsp_3 + 0x20) = result_10
                var_68_1 = rsp_3 + 0x40
                sub_14037e990(nop)
                rdx_16 = var_c8
            
            int32_t rax_63
            
            if (rdx_16 == 0)
                rax_63 = 0
            else
                rax_63 = arg1[2] * result_15
            
            int64_t rax_65 = sx.q(rax_63) << 2
            int64_t rcx_32 = rax_65 + 0xf
            
            if (rcx_32 u<= rax_65)
                rcx_32 = 0xffffffffffffff0
            
            int64_t rcx_33 = rcx_32 & 0xfffffffffffffff0
            __chkstk(rcx_33)
            void* rsp_4 = rsp_3 - rcx_33
            
            if (rdx_16 != 0 && var_9c != 0)
                sub_1403f6e90(rax_5, 0x271a, nullptr)
                *(rsp_4 + 0x28) = 0
                *(rsp_4 + 0x20) = result_15
                sub_1403f5520(rax_5, &var_88[sx.q(var_d0)], zx.q(var_a0), rsp_4 + 0x40)
                sub_1403f6e90(rax_5, 0xfbf, &var_80)
            
            int32_t* r8_18 = sub_1403f6e90(rax_5, 0x271a, zx.q(var_b8_2))
            
            if (var_d4_1 == 0x3e8)
                var_b0.w = 0xffff
                int32_t i_2 = 0
                
                if (arg1[2] * result_2 s> 0)
                    int32_t* rcx_41 = rdi
                    
                    do
                        *rcx_41 = 0
                        i_2 += 1
                        rcx_41 = &rcx_41[1]
                    while (i_2 s< arg1[2] * result_2)
                
                if (arg1[0xe] == 0x3e9 && (var_c8 == 0 || var_9c == 0 || arg1[0x10] == 0))
                    sub_1403f6e90(rax_5, 0x271a, nullptr)
                    *(rsp_4 + 0x28) = 0
                    *(rsp_4 + 0x20) = rax_9
                    sub_1403f5520(rax_5, &var_b0, 2, rdi)
                
                goto label_14037f1f6
            
            int32_t rcx_38 = arg1[0xe]
            uint32_t result_11 = result_2
            
            if (result_16 s< result_2)
                result_11 = result_16
            
            if (var_d4_1 != rcx_38 && rcx_38 s> 0 && arg1[0x10] == 0)
                sub_1403f6e90(rax_5, 0xfbc, r8_18)
            
            char* rdx_21 = var_88
            
            if (arg6 != 0)
                rdx_21 = nullptr
            
            *(rsp_4 + 0x28) = &var_50
            *(rsp_4 + 0x20) = result_11
            uint32_t result_18
            result_18, zmm1 = sub_1403f5520(rax_5, rdx_21, zx.q(var_d0), rdi)
            result_3 = result_18
            
            if (var_d4_1 != 0x3ea)
            label_14037f1f6:
                int32_t i_3 = 0
                
                if (arg1[2] * result_2 s> 0)
                    zmm1.o = 0x38000000
                    void* r8_22 = var_60
                    int32_t* rcx_44 = rdi
                    
                    do
                        int32_t rax_76 = sx.d(*r8_22)
                        i_3 += 1
                        r8_22 += 2
                        rcx_44 = &rcx_44[1]
                        uint128_t zmm0_2
                        zmm0_2.d = _mm_cvtepi32_ps(zx.o(rax_76)).d f* 3.05175781e-05f
                        zmm0_2.d = zmm0_2.d f+ rcx_44[-1]
                        rcx_44[-1] = zmm0_2.d
                    while (i_3 s< arg1[2] * result_2)
            
            int32_t* r8_24 = sub_1403f6e90(rax_5, 0x271f, &var_60)
            int64_t r9_11 = *(var_60 + 0x48)
            var_78_1.q = r9_11
            
            if (var_c8 != 0)
                void* rcx_50
                void* rdx_25
                void* r8_28
                uint64_t r9_14
                
                if (var_9c != 0)
                    int64_t r11_1 = sx.q(rax_9)
                    int64_t var_88_1 = r11_1
                    int32_t i_4 = 0
                    int32_t i_7 = 0
                    int64_t r8_29 = 0
                    
                    if (arg1[2] s> 0)
                        do
                            int64_t j = 0
                            
                            if (r11_1 s>= 4)
                                int64_t r10_4 = 2
                                
                                do
                                    int64_t rcx_52 = sx.q(arg1[2]) * j
                                    j += 4
                                    int64_t rcx_53 = rcx_52 + r8_29
                                    rdi[rcx_53] = *(rsp_4 + 0x40 + (rcx_53 << 2))
                                    int64_t rcx_56 = (r10_4 - 1) * sx.q(arg1[2]) + r8_29
                                    rdi[rcx_56] = *(rsp_4 + 0x40 + (rcx_56 << 2))
                                    int64_t rcx_59 = sx.q(arg1[2]) * r10_4 + r8_29
                                    rdi[rcx_59] = *(rsp_4 + 0x40 + (rcx_59 << 2))
                                    int64_t rcx_60 = r10_4 + 1
                                    r10_4 += 4
                                    int64_t rcx_62 = rcx_60 * sx.q(arg1[2]) + r8_29
                                    rdi[rcx_62] = *(rsp_4 + 0x40 + (rcx_62 << 2))
                                while (j s< r11_1 - 3)
                                
                                r11_1 = var_88_1
                                i_4 = i_7
                            
                            while (j s< r11_1)
                                int64_t rcx_64 = sx.q(arg1[2]) * j
                                j += 1
                                int64_t rcx_65 = rcx_64 + r8_29
                                rdi[rcx_65] = *(rsp_4 + 0x40 + (rcx_65 << 2))
                            
                            i_4 += 1
                            r8_29 += 1
                            i_7 = i_4
                        while (i_4 s< arg1[2])
                        
                        result_2 = result_4
                        r9_11 = var_78_1.q
                    
                    int32_t r8_30 = arg1[2]
                    int64_t rcx_66 = sx.q(r8_30 * rax_9)
                    rdx_25 = &rdi[rcx_66]
                    rcx_50 = rsp_4 + 0x40 + (rcx_66 << 2)
                    *(rsp_4 + 0x30) = arg1[3]
                    *(rsp_4 + 0x28) = r9_11
                    r9_14 = zx.q(rax_9)
                    *(rsp_4 + 0x20) = r8_30
                    r8_28 = rdx_25
                else
                    sub_1403f6e90(rax_5, 0xfbc, r8_24)
                    sub_1403f6e90(rax_5, 0x271a, nullptr)
                    *(rsp_4 + 0x28) = 0
                    *(rsp_4 + 0x20) = result_15
                    sub_1403f5520(rax_5, &var_88[sx.q(var_d0)], zx.q(var_a0), rsp_4 + 0x40)
                    sub_1403f6e90(rax_5, 0xfbf, &var_80)
                    int32_t r8_27 = arg1[2]
                    rcx_50 = &rdi[sx.q((result_2 - rax_9) * r8_27)]
                    rdx_25 = rsp_4 + 0x40 + (sx.q(r8_27 * rax_9) << 2)
                    r9_14 = zx.q(rax_9)
                    *(rsp_4 + 0x30) = arg1[3]
                    *(rsp_4 + 0x28) = var_78_1.q
                    *(rsp_4 + 0x20) = r8_27
                    r8_28 = rcx_50
                
                sub_14037ffd0(rcx_50, rdx_25, r8_28, r9_14)
                r9_11 = var_78_1.q
            
            if (var_cc != 0)
                void* rcx_69
                void* rdx_26
                void* r8_34
                uint64_t r9_16
                
                if (result_2 s< result_15)
                    rcx_69 = var_68_1
                    r8_34 = rdi
                    *(rsp_4 + 0x30) = arg1[3]
                    int32_t rax_112 = arg1[2]
                    *(rsp_4 + 0x28) = r9_11
                    r9_16 = zx.q(rax_9)
                    rdx_26 = rdi
                    *(rsp_4 + 0x20) = rax_112
                else
                    int32_t i_5 = 0
                    
                    if (arg1[2] * rax_9 s> 0)
                        int32_t* rcx_67 = rdi
                        
                        do
                            int32_t rax_105 = *(var_68_1 - rdi + rcx_67)
                            i_5 += 1
                            rcx_67 = &rcx_67[1]
                            rcx_67[-1] = rax_105
                        while (i_5 s< arg1[2] * rax_9)
                    
                    int32_t r8_33 = arg1[2]
                    int64_t rcx_68 = sx.q(r8_33 * rax_9)
                    rdx_26 = &rdi[rcx_68]
                    *(rsp_4 + 0x30) = arg1[3]
                    *(rsp_4 + 0x28) = r9_11
                    *(rsp_4 + 0x20) = r8_33
                    rcx_69 = var_68_1 + (rcx_68 << 2)
                    r9_16 = zx.q(rax_9)
                    r8_34 = rdx_26
                
                sub_14037ffd0(rcx_69, rdx_26, r8_34, r9_16)
            
            int32_t rax_113 = arg1[0xa]
            
            if (rax_113 != 0)
                uint128_t zmm0_3
                zmm0_3.d = _mm_cvtepi32_ps(zx.o(rax_113)).d f* 0.000648814079f
                zmm0_3.q = _mm_cvtps_pd(zmm0_3.q).q f* 0.69314718055994529
                zmm1.o = zx.o(0)
                int32_t i_6 = 0
                zmm1.d = fconvert.s(exp(zmm0_3.q))
                
                if (arg1[2] * result_2 s> 0)
                    do
                        i_6 += 1
                        rdi = &rdi[1]
                        double zmm0_4
                        zmm0_4.d = zmm1.q.d f* rdi[-1]
                        rdi[-1] = zmm0_4.d
                    while (i_6 s< arg1[2] * result_2)
            
            if (var_d0 s> 1)
                arg1[0x14] = var_30 ^ var_80
            else
                arg1[0x14] = 0
            
            arg1[0xe] = var_d4_1
            int32_t rax_121
            
            if (var_c8 != 0)
                rax_121 = 1
            
            if (var_c8 == 0 || var_9c != 0)
                rax_121 = 0
            
            arg1[0x10] = rax_121
            
            if (result_3 s< 0)
                result_2 = result_3
            
            result = result_2
        else
            result = -1
else
    result = -2

label_14037f578:
__security_check_cookie(rax_1 ^ &result_15)
return result
