// 函数: sub_140fe77a0
// 地址: 0x140fe77a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (arg2 == 0x887a0001)
    if (*arg1 != u"DXGI_ERROR_INVALID_CALL")
        sub_1405947f0(arg1, 0x18)
        int32_t rax_15 = arg1[1].d + 0x18
        arg1[1].d = rax_15
        
        if (rax_15 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_memcpy(*arg1, u"DXGI_ERROR_INVALID_CALL", 0x30)
else if (arg2 == 0x887a0005)
    if (*arg1 != u"DXGI_ERROR_DEVICE_REMOVED")
        sub_1405947f0(arg1, 0x1a)
        int32_t rax_13 = arg1[1].d + 0x1a
        arg1[1].d = rax_13
        
        if (rax_13 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_memcpy(*arg1, u"DXGI_ERROR_DEVICE_REMOVED", 0x34)
else if (arg2 == 0x887a0006)
    if (*arg1 != u"DXGI_ERROR_DEVICE_HUNG")
        sub_1405947f0(arg1, 0x17)
        int32_t rax_11 = arg1[1].d + 0x17
        arg1[1].d = rax_11
        
        if (rax_11 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        void* rcx_7 = *arg1
        __builtin_memcpy(rcx_7, u"DXGI_ERROR_DEVIC", 0x20)
        *(rcx_7 + 0x20) = 0x550048005f0045
        *(rcx_7 + 0x28) = 0x47004e
        *(rcx_7 + 0x2c) = 0
else if (arg2 == 0x887a0007)
    if (*arg1 != u"DXGI_ERROR_DEVICE_RESET")
        sub_1405947f0(arg1, 0x18)
        int32_t rax_8 = arg1[1].d + 0x18
        arg1[1].d = rax_8
        
        if (rax_8 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        __builtin_memcpy(*arg1, u"DXGI_ERROR_DEVICE_RESET", 0x30)
else if (arg2 != 0x887a0020)
    int64_t var_18
    sub_140a2e390(&var_18, u"%08X", zx.q(arg2))
    
    if (arg1 != &var_18)
        int64_t rcx_1 = *arg1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *arg1 = var_18
        int32_t var_10
        arg1[1].d = var_10
        int32_t var_c
        *(arg1 + 0xc) = var_c
        return arg1
    
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
else if (*arg1 != u"DXGI_ERROR_DRIVER_INTERNAL_ERROR")
    sub_1405947f0(arg1, 0x21)
    int32_t rax_6 = arg1[1].d + 0x21
    arg1[1].d = rax_6
    
    if (rax_6 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    __builtin_wcscpy(*arg1, u"DXGI_ERROR_DRIVER_INTERNAL_ERROR")

return arg1
