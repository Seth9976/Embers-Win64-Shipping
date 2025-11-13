// 函数: sub_1410615f0
// 地址: 0x1410615f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (arg2 s<= 0x887a0001)
    switch (arg2)
        case 0x80004002
            sub_1405947f0(arg1, 0xe)
            int32_t rax_5 = arg1[1].d + 0xe
            arg1[1].d = rax_5
            
            if (rax_5 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            int128_t* rcx_5 = *arg1
            *rcx_5 = (*u"E_NOINTERFACE")[0].o
            rcx_5[1].q = 0x43004100460052
            *(rcx_5 + 0x18) = 0x45
            return arg1
        case 0x80004005
            sub_1405947f0(arg1, 7)
            int32_t rax_3 = arg1[1].d + 7
            arg1[1].d = rax_3
            
            if (rax_3 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            __builtin_wcscpy(*arg1, u"E_FAIL")
            return arg1
        case 0x8007000e
            sub_1405947f0(arg1, 0xe)
            int32_t rax_1 = arg1[1].d + 0xe
            arg1[1].d = rax_1
            
            if (rax_1 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            int128_t* rcx_1 = *arg1
            *rcx_1 = (*u"E_OUTOFMEMORY")[0].o
            rcx_1[1].q = 0x52004f004d0045
            *(rcx_1 + 0x18) = 0x59
            return arg1
        case 0x80070057
            sub_1405947f0(arg1, 0xd)
            int32_t rax_7 = arg1[1].d + 0xd
            arg1[1].d = rax_7
            
            if (rax_7 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            int128_t* rcx_7 = *arg1
            *rcx_7 = (*u"E_INVALIDARG")[0].o
            rcx_7[1].q = 0x47005200410044
            *(rcx_7 + 0x18) = 0
            return arg1
        case 0x8876021c
            sub_1405947f0(arg1, 0x17)
            int32_t rax_11 = arg1[1].d + 0x17
            arg1[1].d = rax_11
            
            if (rax_11 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            void* rcx_11 = *arg1
            __builtin_memcpy(rcx_11, u"D3DERR_WASSTILLD", 0x20)
            *(rcx_11 + 0x20) = 0x49005700410052
            *(rcx_11 + 0x28) = 0x47004e
            *(rcx_11 + 0x2c) = 0
            return arg1
        case 0x8876086c
            sub_1405947f0(arg1, 0x13)
            int32_t rax_9 = arg1[1].d + 0x13
            arg1[1].d = rax_9
            
            if (rax_9 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            __builtin_wcscpy(*arg1, u"D3DERR_INVALIDCALL")
            return arg1
        case 0x887a0001
            sub_1405947f0(arg1, 0x18)
            int32_t rax_13 = arg1[1].d + 0x18
            arg1[1].d = rax_13
            
            if (rax_13 s> *(arg1 + 0xc))
                sub_140594770(arg1)
            
            __builtin_memcpy(*arg1, u"DXGI_ERROR_INVALID_CALL", 0x30)
            return arg1
    
    goto label_141062157

if (arg2 s> 0x887c0001)
    if (arg2 != 0x887c0002)
        if (arg2 != 0)
            goto label_141062157
        
        sub_1405947f0(arg1, 5)
        int32_t rax_50 = arg1[1].d + 5
        arg1[1].d = rax_50
        
        if (rax_50 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_wcscpy(*arg1, u"S_OK")
        return arg1
    
    sub_1405947f0(arg1, 0x1b)
    int32_t rax_52 = arg1[1].d + 0x1b
    arg1[1].d = rax_52
    
    if (rax_52 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    __builtin_wcscpy(*arg1, u"D3D11_ERROR_FILE_NOT_FOUND")
else
    if (arg2 == 0x887c0001)
        sub_1405947f0(arg1, 0x2a)
        int32_t rax_38 = arg1[1].d + 0x2a
        arg1[1].d = rax_38
        
        if (rax_38 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_memcpy(*arg1, u"D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS", 0x54)
        return arg1
    
    int64_t var_48
    int32_t var_40
    int32_t var_3c
    
    if (arg2 + 0x7785fffd u> 0x33)
    label_141062157:
        sub_140a2e390(&var_48, u"%08X", zx.q(arg2))
        
        if (arg1 == &var_48)
            int64_t rcx_68 = var_48
            
            if (rcx_68 != 0)
                sub_140a74f90(rcx_68)
        else
            int64_t rcx_67 = *arg1
            
            if (rcx_67 != 0)
                sub_140a74f90(rcx_67)
            
            *arg1 = var_48
            arg1[1].d = var_40
            *(arg1 + 0xc) = var_3c
    else
        switch (arg2)
            case 0x887a0003
                sub_1405947f0(arg1, 0x15)
                int32_t rax_22 = arg1[1].d + 0x15
                arg1[1].d = rax_22
                
                if (rax_22 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                void* rcx_26 = *arg1
                __builtin_memcpy(rcx_26, u"DXGI_ERROR_MORE_", 0x20)
                *(rcx_26 + 0x20) = 0x41005400410044
                *(rcx_26 + 0x28) = 0
            case 0x887a0004
                sub_1405947f0(arg1, 0x17)
                int32_t rax_20 = arg1[1].d + 0x17
                arg1[1].d = rax_20
                
                if (rax_20 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                void* rcx_20 = *arg1
                __builtin_memcpy(rcx_20, u"DXGI_ERROR_UNSUP", 0x20)
                *(rcx_20 + 0x20) = 0x540052004f0050
                *(rcx_20 + 0x28) = 0x440045
                *(rcx_20 + 0x2c) = 0
            case 0x887a0005
                sub_1405947f0(arg1, 0x1a)
                int32_t rax_19 = arg1[1].d + 0x1a
                arg1[1].d = rax_19
                
                if (rax_19 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                __builtin_memcpy(*arg1, u"DXGI_ERROR_DEVICE_REMOVED", 0x34)
                goto label_141062195
            case 0x887a0006, 0x887a0007, 0x887a0008, 0x887a0009, 0x887a000a, 0x887a000c, 
                    0x887a000d, 0x887a000e, 0x887a000f, 0x887a0010, 0x887a0011, 0x887a0012, 
                    0x887a0013, 0x887a0014, 0x887a0015, 0x887a0016, 0x887a0017, 0x887a0018, 
                    0x887a0019, 0x887a001a, 0x887a001b, 0x887a001c, 0x887a001d, 0x887a001e, 
                    0x887a001f, 0x887a0020, 0x887a0021, 0x887a0023, 0x887a0029, 0x887a002a, 
                    0x887a002c, 0x887a002d, 0x887a002f, 0x887a0030, 0x887a0035
                goto label_141062157
            case 0x887a000b
                sub_1405947f0(arg1, 0x25)
                int32_t rax_34 = arg1[1].d + 0x25
                arg1[1].d = rax_34
                
                if (rax_34 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                void* rcx_54 = *arg1
                __builtin_memcpy(rcx_54, u"DXGI_ERROR_FRAME_STATISTICS_DISJ", 0x40)
                *(rcx_54 + 0x40) = 0x54004e0049004f
                *(rcx_54 + 0x48) = 0
            case 0x887a0022
                sub_1405947f0(arg1, 0x23)
                int32_t rax_30 = arg1[1].d + 0x23
                arg1[1].d = rax_30
                
                if (rax_30 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                __builtin_wcscpy(*arg1, u"DXGI_ERROR_NOT_CURRENTLY_AVAILABLE")
            case 0x887a0024
                sub_1405947f0(arg1, 0x1e)
                int32_t rax_36 = arg1[1].d + 0x1e
                arg1[1].d = rax_36
                
                if (rax_36 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                void* rcx_60 = *arg1
                __builtin_memcpy(rcx_60, u"DXGI_ERROR_REMOTE_OUTOFM", 0x30)
                *(rcx_60 + 0x30) = 0x52004f004d0045
                *(rcx_60 + 0x38) = 0x59
            case 0x887a0025
                sub_1405947f0(arg1, 0x23)
                int32_t rax_23 = arg1[1].d + 0x23
                arg1[1].d = rax_23
                
                if (rax_23 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                __builtin_wcscpy(*arg1, u"DXGI_ERROR_MODE_CHANGE_IN_PROGRESS")
            case 0x887a0026
                sub_1405947f0(arg1, 0x17)
                int32_t rax_37 = arg1[1].d + 0x17
                arg1[1].d = rax_37
                
                if (rax_37 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                void* rcx_63 = *arg1
                __builtin_memcpy(rcx_63, u"DXGI_ERROR_ACCES", 0x20)
                *(rcx_63 + 0x20) = 0x4f004c005f0053
                *(rcx_63 + 0x28) = 0x540053
                *(rcx_63 + 0x2c) = 0
            case 0x887a0027
                sub_1405947f0(arg1, 0x18)
                int32_t rax_32 = arg1[1].d + 0x18
                arg1[1].d = rax_32
                
                if (rax_32 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                __builtin_memcpy(*arg1, u"DXGI_ERROR_WAIT_TIMEOUT", 0x30)
            case 0x887a0028
                sub_1405947f0(arg1, 0x20)
                int32_t rax_25 = arg1[1].d + 0x20
                arg1[1].d = rax_25
                
                if (rax_25 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                __builtin_memcpy(*arg1, u"DXGI_ERROR_SESSION_DISCONNECTED", 0x40)
            case 0x887a002b
                sub_1405947f0(arg1, 0x19)
                int32_t rax_27 = arg1[1].d + 0x19
                arg1[1].d = rax_27
                
                if (rax_27 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                __builtin_wcscpy(*arg1, u"DXGI_ERROR_ACCESS_DENIED")
            case 0x887a002e
                sub_1405947f0(arg1, 0x17)
                int32_t rax_21 = arg1[1].d + 0x17
                arg1[1].d = rax_21
                
                if (rax_21 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                void* rcx_23 = *arg1
                __builtin_memcpy(rcx_23, u"DXGI_ERROR_NOT_C", 0x20)
                *(rcx_23 + 0x20) = 0x45005200520055
                *(rcx_23 + 0x28) = 0x54004e
                *(rcx_23 + 0x2c) = 0
            case 0x887a0031
                sub_1405947f0(arg1, 0x29)
                int32_t rax_35 = arg1[1].d + 0x29
                arg1[1].d = rax_35
                
                if (rax_35 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                __builtin_wcscpy(*arg1, u"DXGI_ERROR_DYNAMIC_CODE_POLICY_VIOLATION")
            case 0x887a0032
                sub_1405947f0(arg1, 0x1d)
                int32_t rax_28 = arg1[1].d + 0x1d
                arg1[1].d = rax_28
                
                if (rax_28 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                void* rcx_40 = *arg1
                __builtin_memcpy(rcx_40, u"DXGI_ERROR_NON_COMPOSITE", 0x30)
                *(rcx_40 + 0x30) = 0x490055005f0044
                *(rcx_40 + 0x38) = 0
            case 0x887a0033
                sub_1405947f0(arg1, 0x19)
                int32_t rax_31 = arg1[1].d + 0x19
                arg1[1].d = rax_31
                
                if (rax_31 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                __builtin_wcscpy(*arg1, u"DXGI_ERROR_CACHE_CORRUPT")
            case 0x887a0034
                sub_1405947f0(arg1, 0x16)
                int32_t rax_29 = arg1[1].d + 0x16
                arg1[1].d = rax_29
                
                if (rax_29 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                void* rcx_43 = *arg1
                __builtin_memcpy(rcx_43, u"DXGI_ERROR_CACHE", 0x20)
                *(rcx_43 + 0x20) = 0x4c00550046005f
                *(rcx_43 + 0x28) = 0x4c
            case 0x887a0036
                sub_1405947f0(arg1, 0x1a)
                int32_t rax_24 = arg1[1].d + 0x1a
                arg1[1].d = rax_24
                
                if (rax_24 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                __builtin_memcpy(*arg1, u"DXGI_ERROR_ALREADY_EXISTS", 0x34)
    
label_141062195:
    
    if (arg2 == 0x887a0005 && arg3 != 0)
        int32_t rax_44 = (*(*arg3 + 0x128))(arg3)
        var_48 = 0
        var_40.q = 0
        sub_1405947f0(&var_48, 0xf)
        int32_t r12_1 = var_3c
        int32_t rsi_1 = var_40 + 0xf
        
        if (rsi_1 s> r12_1)
            sub_140594770(&var_48)
            r12_1 = var_3c
        
        int64_t r14_1 = var_48
        UnDecorator::getReferenceType(r14_1, u" with Reason: ", 0x1e)
        int64_t var_38
        int64_t* rax_45 = sub_140fe77a0(&var_38, rax_44)
        int32_t rax_46
        int64_t rsi_2
        
        if (rsi_1 s> 1)
            int32_t rax_47 = rax_45[1].d
            int32_t r15_1 = rax_47 - 1
            
            if (rax_47 == 0)
                r15_1 = 0
            
            int32_t rax_48
            
            if (rsi_1 == 0)
                rax_48 = rsi_1 + 1
            
            if (rsi_1 != 0 || r15_1 == 0)
                rax_48 = 0
            
            var_48 = r14_1
            int32_t rdx_28 = rsi_1 + rax_48 + r15_1
            int32_t var_3c_1 = r12_1
            r14_1 = 0
            
            if (rdx_28 s> r12_1)
                sub_1405947f0(&var_48, rdx_28)
            
            sub_140a20ba0(&var_48, *rax_45, r15_1)
            rax_46 = rsi_1
            rsi_2 = var_48
            int32_t var_40_2
            var_40_2.q = 0
            var_48 = 0
        else
            rsi_2 = *rax_45
            *rax_45 = 0
            rax_46 = rax_45[1].d
            rax_45[1] = 0
        
        int32_t r8_2 = rax_46 - 1
        
        if (rax_46 == 0)
            r8_2 = 0
        
        sub_140a20ba0(arg1, rsi_2, r8_2)
        
        if (rsi_2 != 0)
            sub_140a74f90(rsi_2)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        int64_t rcx_79 = var_38
        
        if (rcx_79 != 0)
            sub_140a74f90(rcx_79)

return arg1
