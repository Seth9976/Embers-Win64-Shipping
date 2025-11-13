// 函数: sub_142888320
// 地址: 0x142888320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1c0)
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* var_150 = arg2
int32_t var_180 = 0
int32_t* rcx = nullptr
int32_t* var_178 = nullptr
int32_t* var_1a8 = nullptr
int64_t result

if ((arg1[0x1b8].b & 3) == 0)
label_142888ab2:
    result = 1
else
    uint128_t zmm0 = *arg2
    int64_t rdx = _mm_bsrli_si128(zmm0, 8).q
    uint128_t var_168_1
    uint64_t rsi_3
    void* r8_1
    
    if (rdx u>= 2)
        char* rax_2 = zmm0.q
        var_168_1:8.q = rdx - 2
        r8_1 = &rax_2[2]
        rsi_3 = zx.q(*rax_2) << 8 | zx.q(rax_2[1])
        var_168_1.q = r8_1
    
    char const* const var_1d8_2
    int32_t var_1d0_3
    
    if (rdx u< 2 || rdx - 2 u< rsi_3)
        var_1d0_3 = 0x427
        var_1d8_2 = "ssl\statem\extensions_srvr.c"
    label_142888b6a:
        sub_142856580(arg1, 0x32, 0x1f9, 0x6e, var_1d8_2, var_1d0_3)
        result = 0
    else
        void* var_198_1 = r8_1
        var_168_1:8.q = rdx - 2 - rsi_3
        var_168_1.q = r8_1 + rsi_3
        int32_t r14_1 = 0
        uint64_t var_190_1 = rsi_3
        int32_t var_184_1 = 0
        *arg2 = var_168_1
        arg1[0x19c] = 0
        
        if (rsi_3 == 0)
        label_142888ab2_1:
            result = 1
        else
            while (true)
                var_198_1.o = var_198_1.o
                
                if (rsi_3 u>= 2)
                    uint64_t rdi_2 = zx.q(*(r8_1 + 1)) | zx.q(*r8_1) << 8
                    int64_t var_190_2 = var_190_1 - 2
                    
                    if (var_190_1 - 2 u>= rdi_2)
                        int64_t rdx_5 = var_190_1 - 2 - rdi_2
                        void* r8_2 = r8_1 + 2 + rdi_2
                        void* var_198_2
                        var_198_2.o = r8_2.o
                        
                        if (rdx_5 u>= 4)
                            rsi_3 = rdx_5 - 4
                            var_190_1 = rsi_3
                            uint32_t r13_7 = ((zx.d(*r8_2) << 8 | zx.d(*(r8_2 + 1))) << 8
                                | zx.d(*(r8_2 + 2))) << 8 | zx.d(*(r8_2 + 3))
                            var_168_1.q = r8_2 + 4
                            int64_t rax_10 = *(arg1 + 0x588)
                            var_198_1 = r8_2 + 4
                            int64_t var_1d8
                            int32_t var_1d0
                            
                            if (rax_10 != 0)
                                if (rax_10(arg1, r8_1 + 2, rdi_2, &var_1a8, var_1d8, var_1d0) == 0)
                                    sub_142856580(arg1, 0x50, 0x1f9, 0x6e, 
                                        "ssl\statem\extensions_srvr.c", 0x43d)
                                    result = 0
                                    goto label_142888ac1
                                
                                rcx = var_1a8
                            
                            int32_t var_1d0_2
                            int32_t* rcx_33
                            int32_t rdx_23
                            int32_t* r8_11
                            int32_t r9_3
                            int32_t* r12_2
                            
                            if (rcx != 0)
                            label_142888792:
                                int128_t* rax_25
                                rax_25, arg4 = sub_1428587a0(rcx, 0)
                                
                                if (rax_25 != 0)
                                    sub_1428574d0(var_1a8)
                                    uint32_t count = (*(arg1 + 0x4e0)).d
                                    var_1a8 = rax_25
                                    memcpy(&rax_25[0xc], &arg1[0x13a], count)
                                    var_180 = 1
                                    *(var_1a8 + 0xb8) = *(arg1 + 0x4e0)
                                    
                                    if (r14_1 == 0)
                                        arg1[0x1bb] = 1
                                    
                                    r8_11 = var_1a8
                                    arg1[0x19c] = 1
                                label_14288880f:
                                    int32_t* rax_28 = sub_14285b4c0((*(*(r8_11 + 0x128) + 0x40)).b)
                                    r12_2 = rax_28
                                    var_178 = rax_28
                                    int64_t rax_29 =
                                        sub_14285b4c0((*(*(*(arg1 + 0xa8) + 0x238) + 0x40)).b)
                                    rcx = var_1a8
                                    
                                    if (r12_2 != rax_29)
                                        sub_1428574d0(rcx)
                                        rcx = nullptr
                                        arg1[0x1bb] = 0
                                        var_1a8 = nullptr
                                        arg1[0x19c] = 0
                                    label_1428886f3:
                                        r14_1 += 1
                                        var_184_1 = r14_1
                                        
                                        if (rsi_3 != 0)
                                            r8_1 = var_168_1.q
                                            continue
                                        
                                        goto label_14288892b
                                    
                                label_14288892b:
                                    
                                    if (rcx == 0)
                                        goto label_142888ab2_1
                                    
                                    int64_t rdi_5 = *var_150 - *(*(arg1 + 0x88) + 8)
                                    int32_t rax_31 = sub_1428916c0(r12_2)
                                    uint128_t zmm0_1 = *var_150
                                    var_198_1.o = zmm0_1
                                    int64_t r8_12 = _mm_bsrli_si128(zmm0_1, 8).q
                                    uint64_t rcx_29
                                    void* rdx_25
                                    
                                    if (r8_12 u>= 2)
                                        int64_t var_190_4 = r8_12 - 2
                                        rdx_25 = var_198_1 + 2
                                        rcx_29 = zx.q(*var_198_1) << 8 | zx.q(*(var_198_1 + 1))
                                        void* var_198_3 = rdx_25
                                    
                                    if (r8_12 u< 2 || r8_12 - 2 u< rcx_29)
                                        var_1d0_2 = 0x4e5
                                    label_142888af3:
                                        r9_3 = 0x6e
                                        rdx_23 = 0x32
                                        goto label_142888afd
                                    
                                    int64_t var_190_5 = r8_12 - 2 - rcx_29
                                    int32_t r8_15 = 0
                                    uint64_t var_190_6 = rcx_29
                                    *var_150 = (rcx_29 + rdx_25).o
                                    zmm0_1 = rdx_25.o
                                    uint64_t rdx_26
                                    
                                    while (true)
                                        void* var_198_5
                                        var_198_5.o = zmm0_1
                                        
                                        if (rcx_29 != 0)
                                            rdx_26 = zx.q(*rdx_25)
                                            void* var_198_6 = rdx_25 + 1
                                            int64_t var_190_7 = var_190_6 - 1
                                            
                                            if (var_190_6 - 1 u>= rdx_26)
                                                r8_15 += 1
                                                var_190_6 = var_190_6 - 1 - rdx_26
                                                zmm0_1 = (rdx_25 + 1 + rdx_26).o
                                                var_198_5.o = zmm0_1
                                                
                                                if (r8_15 u> r14_1)
                                                    break
                                                
                                                rcx_29 = var_190_6
                                                rdx_25 = var_198_5
                                                continue
                                        
                                        var_1d0_2 = 0x4ec
                                        goto label_142888af3
                                    
                                    rcx_33 = arg1
                                    
                                    if (rdx_26 != sx.q(rax_31))
                                        rdx_23 = 0x32
                                        var_1d0_2 = 0x4f3
                                        r9_3 = 0x6e
                                        goto label_142888b0b
                                    
                                    var_1d0.q = 0
                                    
                                    if (sub_142875de0(rcx_33, r12_2, *(*(arg1 + 0x88) + 8), rdi_5, 
                                            arg4, arg3, rdx_25 + 1, var_1d0, var_1a8, 0, var_180) != 1)
                                        goto label_142888b15
                                    
                                    var_1a8[0x66] = r14_1
                                    sub_1428574d0(*(arg1 + 0x508))
                                    *(arg1 + 0x508) = var_1a8
                                    goto label_142888ab2_1
                                
                                var_1d0_3 = 0x47c
                            else if (*(arg1 + 0x580) == rcx || rdi_2 u> 0x80)
                            label_14288861b:
                                int32_t rax_17 = arg1[0x171]
                                int64_t* rax_20
                                
                                if (test_bit(rax_17, 0xe)
                                        || (arg1[0x5b8] u> 0 && not(test_bit(rax_17, 0x18))))
                                    arg1[0x19c] = 1
                                    
                                    if (rdi_2 == 0)
                                    label_142888919:
                                        var_1d0_3 = 0x4a0
                                        var_1d8_2 = "ssl\statem\extensions_srvr.c"
                                        goto label_142888b6a
                                    
                                    if (rdi_2 != 0x20)
                                        goto label_1428886ef
                                    
                                    rax_20 = sub_142857ad0(arg1, r8_1 + 2, rdi_2)
                                    
                                    if (rax_20 == 0)
                                    label_142888786:
                                        rcx = var_1a8
                                    label_1428886ef:
                                        r12_2 = var_178
                                        goto label_1428886f3
                                    
                                    var_1a8 = rax_20
                                label_1428886c9:
                                    int32_t rax_21
                                    
                                    if (arg1[0x5b8] u> 0 && (arg1[0x171] & 0x1000000) == 0)
                                        rax_21 = sub_1428574b0(*(arg1 + 0x738), rax_20)
                                    
                                    if (arg1[0x5b8] u> 0 && (arg1[0x171] & 0x1000000) == 0
                                            && rax_21 == 0)
                                        sub_1428574d0(var_1a8)
                                        rcx = nullptr
                                        var_1a8 = nullptr
                                        goto label_1428886ef
                                    
                                    int32_t rax_22 = _time64(nullptr)
                                    r8_11 = var_1a8
                                    int32_t rcx_15 = rax_22 - r8_11[0x47]
                                    int32_t r13_8 = r13_7 - r8_11[0x65]
                                    int32_t r9_2 = rcx_15 * 0x3e8
                                    
                                    if (r14_1 == 0 && r8_11[0x46] s>= rcx_15
                                            && r9_2 u/ 0x3e8 == rcx_15 && r13_8 u<= r9_2 + 0x3e8
                                            && r13_8 + 0x2710 u>= r9_2 + 0x3e8)
                                        arg1[0x1bb] = 1
                                    
                                    goto label_14288880f
                                
                                var_1d0.q = &var_1a8
                                var_1d8 = 0
                                int32_t rax_18
                                rax_18, arg4, arg3 =
                                    sub_142866cd0(arg1, r8_1 + 2, rdi_2, 0, var_1d8, var_1d0)
                                
                                if (rax_18 == 3)
                                    goto label_142888919
                                
                                if (rax_18 u> 1)
                                    if (((rax_18 - 2) & 0xfffffffd) == 0)
                                        goto label_142888786
                                    
                                    rax_20 = var_1a8
                                    goto label_1428886c9
                                
                                var_1d0_3 = 0x4a7
                            else
                                sub_1428a6780(rcx)
                                char* rax_12 = sub_1428a6c10(r8_1 + 2, rdi_2, 
                                    "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 0x1c4)
                                
                                if (rax_12 == 0)
                                    sub_142856580(arg1, 0x50, 0x1f9, 0x44, 
                                        "ssl\statem\extensions_srvr.c", 0x44b)
                                    result = 0
                                    goto label_142888ac1
                                
                                void var_148
                                uint64_t rsi_5 = zx.q((*(arg1 + 0x580))(arg1, rax_12, &var_148, 
                                    0x100, var_1d8, var_1d0))
                                sub_1428a6780(rax_12)
                                
                                if (rsi_5.d u> 0x100)
                                    var_1d0_3 = 0x453
                                else
                                    if (rsi_5.d == 0)
                                    label_142888604:
                                        rcx = var_1a8
                                        r14_1 = var_184_1
                                        
                                        if (rcx != 0)
                                            goto label_142888792
                                        
                                        goto label_14288861b
                                    
                                    int16_t var_188 = 0x113
                                    int64_t rax_14 = sub_142858c60(arg1, &var_188)
                                    
                                    if (rax_14 != 0)
                                        int32_t* rax_15 = sub_1428577b0()
                                        var_1a8 = rax_15
                                        int32_t rax_16
                                        
                                        if (rax_15 != 0)
                                            rax_16 = sub_14284e860(rax_15, &var_148, zx.q(rsi_5.d))
                                        
                                        if (rax_15 != 0 && rax_16 != 0)
                                            sub_1428578e0(var_1a8, rax_14)
                                            sub_1428578f0(var_1a8, 0x304)
                                            sub_1428b8960(&var_148, zx.q(rsi_5.d))
                                            goto label_142888604
                                        
                                        sub_1428b8960(&var_148, rsi_5)
                                        rdx_23 = 0x50
                                        var_1d0_2 = 0x46e
                                        r9_3 = 0x44
                                    label_142888afd:
                                        rcx_33 = arg1
                                    label_142888b0b:
                                        sub_142856580(rcx_33, rdx_23, 0x1f9, r9_3, 
                                            "ssl\statem\extensions_srvr.c", var_1d0_2)
                                    label_142888b15:
                                        sub_1428574d0(var_1a8)
                                        result = 0
                                        goto label_142888ac1
                                    
                                    sub_1428b8960(&var_148, rsi_5)
                                    var_1d0_3 = 0x461
                            break
                
                sub_142856580(arg1, 0x32, 0x1f9, 0x6e, "ssl\statem\extensions_srvr.c", 0x434)
                result = 0
                goto label_142888ac1
            
            sub_142856580(arg1, 0x50, 0x1f9, 0x44, "ssl\statem\extensions_srvr.c", var_1d0_3)
            result = 0

label_142888ac1:
__security_check_cookie(rax_1 ^ &var_1f8)
return result
