// 函数: sub_142c7389c
// 地址: 0x142c7389c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t entry_rdx
sub_14284e840(*(arg2 + 0x2d0), entry_rdx | 0x3c000000)

if (*(arg4 + 0x40f) != 0)
    sub_14284e820(*(arg2 + 0x2d0), sub_142c748d0, arg4)

int512_t entry_zmm2

if (arg4[0x82].b != 0)
    char arg_80 = 8
    int64_t arg_81
    __builtin_strncpy(&arg_81, "http/1.1", 8)
    entry_zmm2 = sub_142c64850(arg3, "ALPN, offering %s\n", "http/1.1", entry_zmm2)
    sub_14284e670(*(arg2 + 0x2d0), &arg_80, 9)

uint64_t result

if (arg12 != 0 || arg11 != 0)
    int32_t rcx_4 = *(arg4 + 0x164)
    int32_t* rax_1
    
    if (rcx_4 == 2)
        rax_1 = arg7
        
        if (arg4[0x48] != -1)
            rax_1 = arg1
    
    int64_t r8_2
    
    if (rcx_4 != 2 || *(rax_1 + arg4) == rcx_4)
        r8_2 = *(arg3 + 0x4e0)
    else
        r8_2 = *(arg3 + 0x580)
    
    int32_t* rax_2
    
    if (rcx_4 == 2)
        rax_2 = arg7
        
        if (arg4[0x48] != -1)
            rax_2 = arg1
    
    char* rdx_1
    
    if (rcx_4 != 2 || *(rax_2 + arg4) == rcx_4)
        rdx_1 = *(arg3 + 0x4d8)
    else
        rdx_1 = *(arg3 + 0x578)
    
    int32_t* rax_3
    
    if (rcx_4 == 2)
        rax_3 = arg7
        
        if (arg4[0x48] != -1)
            rax_3 = arg1
    
    int64_t rax_4
    
    if (rcx_4 != 2 || *(rax_3 + arg4) == rcx_4)
        rax_4 = *(arg3 + 0x4d0)
    else
        rax_4 = *(arg3 + 0x570)
    
    int512_t entry_zmm1
    
    if (sub_142c72610(arg4, *(arg2 + 0x2d0), arg12, arg11, entry_zmm1, entry_zmm2, rax_4, rdx_1, 
            r8_2) != 0)
        goto label_142c73a15
    
    result = 0x3a
else
label_142c73a15:
    int32_t* rax_6
    
    if (*(arg4 + 0x164) == 2)
        rax_6 = arg7
        
        if (arg4[0x48] != -1)
            rax_6 = arg1
    
    char* rax_7
    
    if (*(arg4 + 0x164) != 2 || *(rax_6 + arg4) == 2)
        rax_7 = arg4[0x73]
    else
        rax_7 = arg4[0x7c]
    
    char const* const rbx = "ALL:!EXPORT:!EXPORT40:!EXPORT56:!aNULL:!LOW:!RC4:@STRENGTH"
    
    if (rax_7 != 0)
        rbx = rax_7
    
    int32_t rax_8
    int512_t zmm1
    int512_t zmm2
    rax_8, zmm1, zmm2 = sub_14284e750(*(arg2 + 0x2d0), rbx)
    
    if (rax_8 != 0)
        int512_t zmm2_1 = sub_142c64850(arg3, "Cipher selection: %s\n", rbx, zmm2)
        
        if (arg6 != 0 || arg8 != 0)
            int32_t rax_9
            int64_t r8_6
            rax_9, r8_6 = sub_14284e250(*(arg2 + 0x2d0), arg6, arg8)
            char* rdx_5
            
            if (rax_9 != 0)
                rdx_5 = "successfully set certificate verify locations:\n"
            label_142c73af0:
                int512_t zmm2_2 = sub_142c64850(arg3, rdx_5, r8_6, zmm2_1)
                char* r8_8 = "none"
                
                if (arg6 != 0)
                    r8_8 = arg6
                
                zmm2_1 = sub_142c64850(arg3, "  CAfile: %s\n  CApath: %s\n", r8_8, zmm2_2)
                goto label_142c73b1c
            
            if (arg9 == rax_9)
                rdx_5 = "error setting certificate verify locations, continuing anyway:\n"
                goto label_142c73af0
            
            char const* const r8_7 = "none"
            
            if (arg6 != 0)
                r8_7 = arg6
            
            sub_142c64760(arg3, 
                "error setting certificate verify locations:\n  CAfile: %s\n  CApath: %s", r8_7, 
                zmm2_1)
            result = 0x4d
        else
        label_142c73b1c:
            
            if (arg5 == 0)
                goto label_142c73bad
            
            void* rax_11 = sub_14289d8f0(sub_1427ec4a0(*(arg2 + 0x2d0)), &data_143b85300)
            int32_t rax_12
            int64_t r8_9
            
            if (rax_11 != 0)
                rax_12, r8_9, zmm2_1 = sub_1428aaf80(rax_11, arg5, 1, zmm1)
            
            if (rax_11 == 0 || rax_12 == 0)
                sub_142c64760(arg3, "error loading CRL file: %s", arg5, zmm2_1)
                result = 0x52
            else
                int512_t zmm2_3 = sub_142c64850(arg3, "successfully load CRL file:\n", r8_9, zmm2_1)
                sub_14289dcc0(sub_1427ec4a0(*(arg2 + 0x2d0)), 0xc)
                zmm2_1 = sub_142c64850(arg3, "  CRLfile: %s\n", arg5, zmm2_3)
            label_142c73bad:
                int32_t rdx_7
                rdx_7.b = arg9 != 0
                sub_14284e850(*(arg2 + 0x2d0), rdx_7, 0)
                int64_t rax_14 = *(arg3 + 0x4a8)
                int32_t result_1
                int64_t r8_12
                
                if (rax_14 != 0)
                    result_1, r8_12 = rax_14(arg3, *(arg2 + 0x2d0), *(arg3 + 0x4b0))
                
                if (rax_14 == 0 || result_1 == 0)
                    void* rcx_22 = *(arg2 + 0x2d8)
                    
                    if (rcx_22 != 0)
                        sub_14284f4d0(rcx_22)
                    
                    void* rax_15
                    int64_t r8_14
                    rax_15, r8_14 = sub_14284fdd0(*(arg2 + 0x2d0))
                    *(arg2 + 0x2d8) = rax_15
                    
                    if (rax_15 != 0)
                        int32_t* rax_16
                        
                        if (*(arg4 + 0x164) == 2)
                            rax_16 = arg7
                            
                            if (arg4[0x48] != -1)
                                rax_16 = 0x33c
                        
                        char rax_17
                        
                        if (*(arg4 + 0x164) != 2 || *(rax_16 + arg4) == 2)
                            rax_17 = *(arg4 + 0x36a)
                        else
                            rax_17 = *(arg4 + 0x3b2)
                        
                        if (rax_17 != 0)
                            sub_14284eae0(rax_15, 0x41, 1, nullptr)
                        
                        sub_1428507d0(*(arg2 + 0x2d8))
                        char* arg_50
                        char* rbx_2 = arg_50
                        *(arg2 + 0x2e0) = 0
                        void arg_70
                        int32_t rax_18 = sub_142c70d80(2, rbx_2, &arg_70)
                        
                        if (rax_18 == 0)
                            int32_t rax_19 = sub_142c70d80(rax_18 + 0x17, rbx_2, &arg_70)
                            
                            if (rax_19 == 0)
                                int32_t rax_20
                                int64_t r8_17
                                rax_20, r8_17 =
                                    sub_14284eae0(*(arg2 + 0x2d8), zx.q(rax_19 + 0x37), 0, rbx_2)
                                
                                if (rax_20 == 0)
                                    zmm2_1 = sub_142c64850(arg3, 
                                        "WARNING: failed to configure server name indication (SNI) TLS "
                                    "extension\n", 
                                        r8_17, zmm2_1)
                        
                        if (*(arg4 + 0x164) == 2 && arg4[0x48] != -1)
                            arg7 = 0x33c
                        
                        char rax_21
                        
                        if (*(arg4 + 0x164) != 2 || *(arg7 + arg4) == 2)
                            rax_21 = *(arg3 + 0x488)
                        else
                            rax_21 = *(arg3 + 0x528)
                        
                        if (rax_21 == 0)
                            goto label_142c73dca
                        
                        arg_50 = nullptr
                        sub_142c5ba10(arg4)
                        
                        if (sub_142c5b510(arg4, &arg_50, nullptr, arg10) != 0)
                            goto label_142c73dc5
                        
                        int32_t rax_23
                        int64_t r8_18
                        rax_23, r8_18 = sub_142857990(*(arg2 + 0x2d8), arg_50)
                        char arg_100[0x100]
                        
                        if (rax_23 != 0)
                            sub_142c64850(arg3, "SSL re-using session ID\n", r8_18, zmm2_1)
                        label_142c73dc5:
                            sub_142c5ba40(arg4)
                        label_142c73dca:
                            
                            if (*(arg2 + 0x310) == 0)
                                if (sub_1428508c0(*(arg2 + 0x2d8), arg13) != 0)
                                    *(arg2 + 0x2c8) = 1
                                    result = 0
                                else
                                    sub_142c64760(arg3, "SSL: SSL_set_fd failed: %s", &arg_100, 
                                        sub_1428a4aa0(sub_1428a4e50(), &arg_100, 0x100))
                                    result = 0x23
                            else
                                int64_t* rax_25 = sub_14289a500(&data_1436bb2a0)
                                sub_142899cf0(rax_25, 0x6d, 0, *(arg2 + 0x328))
                                sub_1428505e0(*(arg2 + 0x2d8), rax_25, rax_25)
                                *(arg2 + 0x2c8) = 1
                                result = 0
                        else
                            sub_142c5ba40(arg4)
                            sub_142c64760(arg3, "SSL: SSL_set_session failed: %s", &arg_100, 
                                sub_1428a4aa0(sub_1428a4e50(), &arg_100, 0x100))
                            result = 0x23
                    else
                        sub_142c64760(arg3, "SSL: couldn't create a context (handle)!", r8_14, 
                            zmm2_1)
                        result = 0x1b
                else
                    sub_142c64760(arg3, "error signaled by ssl ctx callback", r8_12, zmm2_1)
                    result = zx.q(result_1)
    else
        sub_142c64760(arg3, "failed setting cipher list: %s", rbx, zmm2)
        result = 0x3b

__security_check_cookie(arg14 ^ &__return_addr)
return result
