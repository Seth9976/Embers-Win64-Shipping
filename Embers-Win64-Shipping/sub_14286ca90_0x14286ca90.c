// 函数: sub_14286ca90
// 地址: 0x14286ca90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
int64_t rsi = 0
int32_t arg_8 = 0
arg1[0x20] = 0
int32_t* rax = sub_142898ba0()
int32_t* r13 = rax
int32_t* rdi_1

if (rax != 0)
    int32_t* rcx_1 = *(arg1 + 8)
    void* var_58
    
    if ((*(*(rcx_1 + 0xc0) + 0x60) & 8) != 0)
    label_14286cb4f:
        uint128_t zmm0_1 = *arg2
        int64_t rdx_3 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rdx_3 u< 3)
            sub_142856580(arg1, 0x32, 0x17c, 0x9f, "ssl\statem\statem_srvr.c", 0xdff)
            rdi_1 = r13
        else
            char* rcx_3 = zmm0_1.q
            uint128_t var_68_1
            var_68_1:8.q = rdx_3 - 3
            void* r15_1 = &rcx_3[3]
            var_68_1.q = r15_1
            uint64_t rdi_6 = (zx.q(*rcx_3) << 8 | zx.q(rcx_3[1])) << 8 | zx.q(rcx_3[2])
            
            if (rdx_3 - 3 u< rdi_6)
                sub_142856580(arg1, 0x32, 0x17c, 0x9f, "ssl\statem\statem_srvr.c", 0xdff)
                rdi_1 = r13
            else
                var_68_1.q = rdi_6 + r15_1
                var_68_1:8.q = rdx_3 - 3 - rdi_6
                *arg2 = var_68_1
                
                if (*(arg2 + 8) != 0)
                    sub_142856580(arg1, 0x32, 0x17c, 0x9f, "ssl\statem\statem_srvr.c", 0xdff)
                    rdi_1 = r13
                else
                    int64_t r12_1 = 0
                    int32_t var_80_4
                    int32_t rdx_11
                    int32_t r9_4
                    
                    if (rdi_6 == 0)
                    label_14286cd94:
                        
                        if (sub_142898c70(r13) s> 0)
                            int32_t rax_30 = sub_1428548e0(arg1, r13)
                            
                            if (rax_30 s> 0)
                                if (rax_30 s> 1)
                                    var_80_4 = 0xe59
                                    r9_4 = rax_30
                                    rdx_11 = 0x28
                                    goto label_14286ceeb
                                
                                int64_t rax_33 = sub_1428a38c0(sub_142898ea0(r13, 0))
                                
                                if (rax_33 == 0)
                                    var_80_4 = 0xe60
                                    rdx_11 = (rax_33 + 0x28).d
                                    r9_4 = 0xf7
                                    goto label_14286ceeb
                                
                            label_14286cf43:
                                
                                if (arg1[0x1d6] == 4)
                                    int128_t* rax_29 = sub_1428587a0(*(arg1 + 0x508), 0)
                                    
                                    if (rax_29 == 0)
                                        var_80_4 = 0xe71
                                        rdx_11 = (&rax_29[5]).d
                                        r9_4 = (rax_29 + 0x41).d
                                        goto label_14286ceeb
                                    
                                    sub_1428574d0(*(arg1 + 0x508))
                                    *(arg1 + 0x508) = rax_29
                                
                                sub_1428a2c50(*(*(arg1 + 0x508) + 0xf8))
                                *(*(arg1 + 0x508) + 0xf8) = sub_142898e20(r13)
                                *(*(arg1 + 0x508) + 0x110) = arg1[0x16a]
                                sub_142898cb0(*(*(arg1 + 0x508) + 0x108), sub_1428a2c50)
                                *(*(arg1 + 0x508) + 0x108) = r13
                                int32_t* rcx_35 = *(arg1 + 8)
                                
                                if ((*(*(rcx_35 + 0xc0) + 0x60) & 8) != 0)
                                label_14286d0a1:
                                    int32_t* rcx_37 = *(arg1 + 8)
                                    rdi_1 = nullptr
                                    
                                    if ((*(*(rcx_37 + 0xc0) + 0x60) & 8) != 0)
                                        arg_8 = 3
                                        rsi = 0
                                    else
                                        int32_t rax_42 = *rcx_37
                                        
                                        if (rax_42 s< 0x304 || rax_42 == 0x10000)
                                            arg_8 = 3
                                            rsi = 0
                                        else
                                            rsi = 0
                                            
                                            if (sub_142851d80(arg1, &arg1[0x124], 0x40, 
                                                    &arg1[0x134]) != 0)
                                                *(arg1 + 0x1720) = 0
                                                arg_8 = 3
                                                rsi = 0
                                else
                                    int32_t rax_39 = *rcx_35
                                    
                                    if (rax_39 s< 0x304 || rax_39 == 0x10000)
                                        goto label_14286d0a1
                                    
                                    rsi = 0
                                    
                                    if (sub_1428821e0(arg1, 1) != 0)
                                        goto label_14286d0a1
                                    
                                    rdi_1 = rax
                            else
                                rdx_11 = sub_14285f830(arg1[0x16a])
                                var_80_4 = 0xe54
                                r9_4 = 0x86
                            label_14286ceeb:
                                sub_142856580(arg1, rdx_11, 0x17c, r9_4, 
                                    "ssl\statem\statem_srvr.c", var_80_4)
                                rsi = 0
                                rdi_1 = rax
                        else
                            if (*arg1 == 0x300)
                                var_80_4 = 0xe3e
                                rdx_11 = 0x28
                                r9_4 = 0xb0
                                goto label_14286ceeb
                            
                            if (((arg1[0x156]).b & 3) == 3)
                                rdx_11 = 0x74
                                var_80_4 = 0xe46
                                r9_4 = 0xc7
                                goto label_14286ceeb
                            
                            if (*(*(arg1 + 0xa8) + 0xe0) == 0)
                                goto label_14286cf43
                            
                            rsi = 0
                            
                            if (sub_1428821e0(arg1, 0) != 0)
                                goto label_14286cf43
                            
                            rdi_1 = rax
                    else
                        while (true)
                            if (rdi_6 u>= 3)
                                void* rcx_4 = r15_1 + 3
                                var_68_1.q = rcx_4
                                uint64_t r8_5 = zx.q((zx.d(*r15_1) << 8 | zx.d(*(r15_1 + 1))) << 8)
                                    | zx.q(*(r15_1 + 2))
                                uint64_t r13_1 = zx.q(r8_5.d)
                                int64_t var_50_1 = rdi_6 - 3
                                
                                if (rdi_6 - 3 u>= r13_1)
                                    r15_1 = rcx_4 + r8_5
                                    void* var_78 = rcx_4
                                    rdi_6 = rdi_6 - 3 - r13_1
                                    var_58 = r15_1
                                    int64_t rax_10 = sub_1428a2d00(nullptr, &var_78, r8_5.d)
                                    rsi = rax_10
                                    int32_t var_80_5
                                    int32_t r9_5
                                    
                                    if (rax_10 == 0)
                                        var_80_5 = 0xe10
                                        char const* const var_88_4 = "ssl\statem\statem_srvr.c"
                                        r9_5 = 0xd
                                    else if (var_78 != var_68_1.q + r13_1)
                                        var_80_5 = 0xe16
                                        char const* const var_88_3 = "ssl\statem\statem_srvr.c"
                                        r9_5 = 0x87
                                    else
                                        int32_t* rcx_5 = *(arg1 + 8)
                                        
                                        if ((*(*(rcx_5 + 0xc0) + 0x60) & 8) != 0)
                                        label_14286cd6e:
                                            r13 = rax
                                            
                                            if (sub_142898d50(r13, rsi) == 0)
                                                sub_142856580(arg1, 0x50, 0x17c, 0x41, 
                                                    "ssl\statem\statem_srvr.c", 0xe33)
                                                rdi_1 = r13
                                                goto label_14286ce49
                                            
                                            r12_1 += 1
                                            
                                            if (rdi_6 == 0)
                                                goto label_14286cd94
                                            
                                            continue
                                        else
                                            int32_t rax_14 = *rcx_5
                                            
                                            if (rax_14 s< 0x304 || rax_14 == 0x10000)
                                                goto label_14286cd6e
                                            
                                            uint128_t zmm0_2 = var_58.o
                                            void* arg_20 = nullptr
                                            uint64_t rcx_8
                                            
                                            if (rdi_6 u>= 2)
                                                rcx_8 = zx.q(*r15_1) << 8 | zx.q(*(r15_1 + 1))
                                                var_68_1.q = r15_1 + 2
                                                var_68_1:8.q = zmm0_2:8.q - 2
                                            
                                            if (rdi_6 u>= 2 && zmm0_2:8.q - 2 u>= rcx_8)
                                                void* var_48 = r15_1 + 2
                                                int64_t rdi_10 = zmm0_2:8.q - 2 - rcx_8
                                                var_68_1.q = rcx_8 + r15_1 + 2
                                                uint64_t var_40_1 = rcx_8
                                                var_68_1:8.q = rdi_10
                                                int32_t rax_17
                                                rax_17.b = r12_1 == 0
                                                var_58.o = var_68_1
                                                int32_t rax_18 = sub_142875450(arg1, &var_48, 
                                                    0x1000, &arg_20, nullptr, rax_17)
                                                int32_t rax_20
                                                
                                                if (rax_18 != 0)
                                                    int32_t rax_19
                                                    rax_19.b = rdi_10 == 0
                                                    rax_20 = sub_142875b50(arg1, 0x1000, arg_20, 
                                                        rsi, r12_1, rax_19)
                                                
                                                if (rax_18 == 0 || rax_20 == 0)
                                                    sub_1428a6780(arg_20)
                                                    break
                                                
                                                sub_1428a6780(arg_20)
                                                r15_1 = var_58
                                                goto label_14286cd6e
                                            
                                            var_80_5 = 0xe21
                                            char const* const var_88_2 = "ssl\statem\statem_srvr.c"
                                            r9_5 = 0x10f
                                    
                                    sub_142856580(arg1, 0x32, 0x17c, r9_5, 
                                        "ssl\statem\statem_srvr.c", var_80_5)
                                    break
                            
                            rdx_11 = 0x32
                            var_80_4 = 0xe08
                            r9_4 = 0x87
                            goto label_14286ceeb
                        
                        rdi_1 = rax
    else
        int32_t rax_2 = *rcx_1
        
        if (rax_2 s< 0x304 || rax_2 == 0x10000)
            goto label_14286cb4f
        
        if (sub_142867330(arg2, &var_58) != 0)
            int64_t rdx_2 = *(arg1 + 0x760)
            int64_t var_50
            
            if (rdx_2 != 0)
                int64_t r8_8 = *(arg1 + 0x768)
                
                if (var_50 == r8_8 && sub_1428bc500(var_58, rdx_2, r8_8) == 0)
                    goto label_14286cb4f
            else if (var_50 == 0)
                goto label_14286cb4f
        
        sub_142856580(arg1, 0x32, 0x17c, 0x11a, "ssl\statem\statem_srvr.c", 0xdf8)
        rdi_1 = r13
else
    sub_142856580(arg1, 0x50, 0x17c, 0x41, "ssl\statem\statem_srvr.c", 0xdef)
    rdi_1 = r13

label_14286ce49:
sub_1428a2c50(rsi)
sub_142898cb0(rdi_1, sub_1428a2c50)
return zx.q(arg_8)
