// 函数: sub_140fe7a50
// 地址: 0x140fe7a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (arg2 s<= 0x8876086c)
    if (arg2 == 0x8876086c)
        sub_1405947f0(arg1, 0x13)
        int32_t rax_11 = arg1[1].d + 0x13
        arg1[1].d = rax_11
        
        if (rax_11 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_wcscpy(*arg1, u"D3DERR_INVALIDCALL")
        return arg1
    
    if (arg2 == 0x80004002)
        sub_1405947f0(arg1, 0xe)
        int32_t rax_9 = arg1[1].d + 0xe
        arg1[1].d = rax_9
        
        if (rax_9 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        int128_t* rcx_9 = *arg1
        *rcx_9 = (*u"E_NOINTERFACE")[0].o
        rcx_9[1].q = 0x43004100460052
        *(rcx_9 + 0x18) = 0x45
        return arg1
    
    if (arg2 == 0x80004005)
        sub_1405947f0(arg1, 7)
        int32_t rax_7 = arg1[1].d + 7
        arg1[1].d = rax_7
        
        if (rax_7 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_wcscpy(*arg1, u"E_FAIL")
        return arg1
    
    if (arg2 == 0x8007000e)
        sub_1405947f0(arg1, 0xe)
        int32_t rax_5 = arg1[1].d + 0xe
        arg1[1].d = rax_5
        
        if (rax_5 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        int128_t* rcx_5 = *arg1
        *rcx_5 = (*u"E_OUTOFMEMORY")[0].o
        rcx_5[1].q = 0x52004f004d0045
        *(rcx_5 + 0x18) = 0x59
        return arg1
    
    if (arg2 == 0x80070057)
        sub_1405947f0(arg1, 0xd)
        int32_t rax_3 = arg1[1].d + 0xd
        arg1[1].d = rax_3
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        int128_t* rcx_3 = *arg1
        *rcx_3 = (*u"E_INVALIDARG")[0].o
        rcx_3[1].q = 0x47005200410044
        *(rcx_3 + 0x18) = 0
        return arg1
    
    if (arg2 != 0x8876021c)
        goto label_140fe7d66
    
    sub_1405947f0(arg1, 0x17)
    int32_t rax_1 = arg1[1].d + 0x17
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    void* rcx_1 = *arg1
    __builtin_memcpy(rcx_1, u"D3DERR_WASSTILLD", 0x20)
    *(rcx_1 + 0x20) = 0x49005700410052
    *(rcx_1 + 0x28) = 0x47004e
    *(rcx_1 + 0x2c) = 0
    return arg1

if (arg2 == 0x887a0001)
    sub_1405947f0(arg1, 0x18)
    int32_t rax_30 = arg1[1].d + 0x18
    arg1[1].d = rax_30
    
    if (rax_30 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    __builtin_memcpy(*arg1, u"DXGI_ERROR_INVALID_CALL", 0x30)
else
    if (arg2 == 0x887a0005)
        sub_1405947f0(arg1, 0x1a)
        int32_t rax_22 = arg1[1].d + 0x1a
        arg1[1].d = rax_22
        
        if (rax_22 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_memcpy(*arg1, u"DXGI_ERROR_DEVICE_REMOVED", 0x34)
        goto label_140fe7f5a
    
    if (arg2 == 0x887c0001)
        sub_1405947f0(arg1, 0x2a)
        int32_t rax_20 = arg1[1].d + 0x2a
        arg1[1].d = rax_20
        
        if (rax_20 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_memcpy(*arg1, u"D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS", 0x54)
        return arg1
    
    if (arg2 == 0x887c0002)
        sub_1405947f0(arg1, 0x1b)
        int32_t rax_18 = arg1[1].d + 0x1b
        arg1[1].d = rax_18
        
        if (rax_18 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_wcscpy(*arg1, u"D3D11_ERROR_FILE_NOT_FOUND")
        return arg1
    
    if (arg2 == 0)
        sub_1405947f0(arg1, 5)
        int32_t rax_16 = arg1[1].d + 5
        arg1[1].d = rax_16
        
        if (rax_16 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_wcscpy(*arg1, u"S_OK")
        return arg1
    
label_140fe7d66:
    int64_t var_48
    sub_140a2e390(&var_48, u"%08X", zx.q(arg2))
    
    if (arg1 == &var_48)
        int64_t rcx_14 = var_48
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
    else
        int64_t rcx_13 = *arg1
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        *arg1 = var_48
        int64_t var_40
        arg1[1].d = var_40.d
        *(arg1 + 0xc) = var_40:4.d
    
    if (arg2 == 0x887a0005)
    label_140fe7f5a:
        
        if (arg3 != 0)
            int32_t rax_24 = (*(*arg3 + 0x138))(arg3)
            var_48 = 0
            int64_t var_40_1 = 0
            sub_1405947f0(&var_48, 2)
            int32_t r12_1 = var_40_1:4.d
            int32_t rsi_1 = var_40_1.d + 2
            var_40_1.d = rsi_1
            
            if (rsi_1 s> r12_1)
                sub_140594770(&var_48)
                r12_1 = var_40_1:4.d
                rsi_1 = var_40_1.d
            
            int64_t r14_1 = var_48
            UnDecorator::getReferenceType(r14_1, &data_142d404d4, 4)
            int64_t var_38
            int64_t* rax_25 = sub_140fe77a0(&var_38, rax_24)
            int32_t rax_26
            int64_t rsi_2
            
            if (rsi_1 s> 1)
                int32_t rax_27 = rax_25[1].d
                int32_t r15_1 = rax_27 - 1
                
                if (rax_27 == 0)
                    r15_1 = 0
                
                int32_t rax_28
                
                if (rsi_1 == 0)
                    rax_28 = rsi_1 + 1
                
                if (rsi_1 != 0 || r15_1 == 0)
                    rax_28 = 0
                
                var_48 = r14_1
                int32_t rdx_13 = rax_28 + r15_1 + rsi_1
                var_40_1.d = rsi_1
                var_40_1:4.d = r12_1
                r14_1 = 0
                
                if (rdx_13 s> r12_1)
                    sub_1405947f0(&var_48, rdx_13)
                
                sub_140a20ba0(&var_48, *rax_25, r15_1)
                rax_26 = var_40_1.d
                rsi_2 = var_48
                int64_t var_40_2 = 0
                var_48 = 0
            else
                rsi_2 = *rax_25
                *rax_25 = 0
                rax_26 = rax_25[1].d
                rax_25[1] = 0
            
            int32_t r8_2 = rax_26 - 1
            
            if (rax_26 == 0)
                r8_2 = 0
            
            sub_140a20ba0(arg1, rsi_2, r8_2)
            
            if (rsi_2 != 0)
                sub_140a74f90(rsi_2)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
            
            int64_t rcx_33 = var_38
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)

return arg1
