// 函数: sub_141903f80
// 地址: 0x141903f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int32_t* rbx = nullptr
int16_t* var_2a8 = nullptr
int32_t var_2a0 = 0
int16_t* rsi = nullptr

if (arg1 s> 0xfffffff4)
    if (arg1 s> 0x3b9acdeb)
    label_141904b03:
        
        if (data_143dbb3e0 != 0)
        label_141904b0b:
            
            if (data_143efb318 != 0)
                void* rcx_56 = *(data_143efbb58 + 0x58)
                void* rax_32 = *(rcx_56 + 0x1588)
                
                if (rax_32 != 0)
                    rbx = *(rax_32 + 0x18)
                
                sub_1418f8db0(*(rcx_56 + 0x1a50) + 0x468, rbx)
    else
        if (arg1 == 0x3b9acdeb)
            sub_1405947f0(&var_2a8, 0x12)
            int32_t rax_30 = var_2a0 + 0x12
            var_2a0 = rax_30
            
            if (rax_30 s> 0)
                sub_140594770(&var_2a8)
            
            rsi = var_2a8
            __builtin_memcpy(rsi, u"VK_SUBOPTIMAL_KHR", 0x24)
            goto label_141904b03
        
        if (arg1 + 0xb u> 0x10)
            goto label_141904b03
        
        switch (arg1)
            case 0
                goto label_141904b03
            case 1
                sub_1405947f0(&var_2a8, 0xd)
                int32_t rax_14 = var_2a0 + 0xd
                var_2a0 = rax_14
                
                if (rax_14 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                *rsi = (*u"VK_NOT_READY")[0].o
                *(rsi + 0x10) = 0x59004400410045
                rsi[0xc] = 0
                goto label_141904b03
            case 2
                sub_1405947f0(&var_2a8, 0xb)
                int32_t rax_15 = var_2a0 + 0xb
                var_2a0 = rax_15
                
                if (rax_15 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_wcscpy(rsi, u"VK_TIMEOUT")
                goto label_141904b03
            case 3
                sub_1405947f0(&var_2a8, 0xd)
                int32_t rax_16 = var_2a0 + 0xd
                var_2a0 = rax_16
                
                if (rax_16 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                *rsi = (*u"VK_EVENT_SET")[0].o
                *(rsi + 0x10) = 0x5400450053005f
                rsi[0xc] = 0
                goto label_141904b03
            case 4
                sub_1405947f0(&var_2a8, 0xf)
                int32_t rax_17 = var_2a0 + 0xf
                var_2a0 = rax_17
                
                if (rax_17 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                *rsi = (*u"VK_EVENT_RESET")[0].o
                *(rsi + 0x10) = 0x5300450052005f
                *(rsi + 0x18) = 0x540045
                rsi[0xe] = 0
                goto label_141904b03
            case 5
                sub_1405947f0(&var_2a8, 0xe)
                int32_t rax_18 = var_2a0 + 0xe
                var_2a0 = rax_18
                
                if (rax_18 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                *rsi = (*u"VK_INCOMPLETE")[0].o
                *(rsi + 0x10) = 0x540045004c0050
                *(rsi + 0x18) = 0x45
                goto label_141904b03
            case 0xfffffff5
                sub_1405947f0(&var_2a8, 0x1e)
                int32_t rax_29 = var_2a0 + 0x1e
                var_2a0 = rax_29
                
                if (rax_29 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_memcpy(rsi, u"VK_ERROR_FORMAT_NOT_SUPP", 0x30)
                *(rsi + 0x30) = 0x4500540052004f
                *(rsi + 0x38) = 0x44
                goto label_141904b03
            case 0xfffffff6
                sub_1405947f0(&var_2a8, 0x1a)
                int32_t rax_28 = var_2a0 + 0x1a
                var_2a0 = rax_28
                
                if (rax_28 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_memcpy(rsi, u"VK_ERROR_TOO_MANY_OBJECTS", 0x34)
                goto label_141904b03
            case 0xfffffff7
                sub_1405947f0(&var_2a8, 0x1d)
                int32_t rax_27 = var_2a0 + 0x1d
                var_2a0 = rax_27
                
                if (rax_27 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_memcpy(rsi, u"VK_ERROR_INCOMPATIBLE_DR", 0x30)
                *(rsi + 0x30) = 0x52004500560049
                rsi[0x1c] = 0
                goto label_141904b03
            case 0xfffffff8
                sub_1405947f0(&var_2a8, 0x1d)
                int32_t rax_26 = var_2a0 + 0x1d
                var_2a0 = rax_26
                
                if (rax_26 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_memcpy(rsi, u"VK_ERROR_FEATURE_NOT_PRE", 0x30)
                *(rsi + 0x30) = 0x54004e00450053
                rsi[0x1c] = 0
                goto label_141904b03
            case 0xfffffff9
                sub_1405947f0(&var_2a8, 0x1f)
                int32_t rax_25 = var_2a0 + 0x1f
                var_2a0 = rax_25
                
                if (rax_25 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_memcpy(rsi, u"VK_ERROR_EXTENSION_NOT_P", 0x30)
                *(rsi + 0x30) = 0x45005300450052
                *(rsi + 0x38) = 0x54004e
                rsi[0x1e] = 0
                goto label_141904b03
            case 0xfffffffa
                sub_1405947f0(&var_2a8, 0x1b)
                int32_t rax_24 = var_2a0 + 0x1b
                var_2a0 = rax_24
                
                if (rax_24 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_wcscpy(rsi, u"VK_ERROR_LAYER_NOT_PRESENT")
                goto label_141904b03
            case 0xfffffffb
                sub_1405947f0(&var_2a8, 0x1b)
                int32_t rax_23 = var_2a0 + 0x1b
                var_2a0 = rax_23
                
                if (rax_23 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_wcscpy(rsi, u"VK_ERROR_MEMORY_MAP_FAILED")
                goto label_141904b03
            case 0xfffffffc
                sub_1405947f0(&var_2a8, 0x15)
                int32_t rax_22 = var_2a0 + 0x15
                var_2a0 = rax_22
                
                if (rax_22 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_memcpy(rsi, u"VK_ERROR_DEVICE_", 0x20)
                *(rsi + 0x20) = 0x540053004f004c
                rsi[0x14] = 0
                data_143dbb3e0 = 1
                goto label_141904b0b
            case 0xfffffffd
                sub_1405947f0(&var_2a8, 0x1f)
                int32_t rax_21 = var_2a0 + 0x1f
                var_2a0 = rax_21
                
                if (rax_21 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_memcpy(rsi, u"VK_ERROR_INITIALIZATION_", 0x30)
                *(rsi + 0x30) = 0x4c004900410046
                *(rsi + 0x38) = 0x440045
                rsi[0x1e] = 0
                goto label_141904b03
            case 0xfffffffe
                sub_1405947f0(&var_2a8, 0x1e)
                int32_t rax_20 = var_2a0 + 0x1e
                var_2a0 = rax_20
                
                if (rax_20 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_memcpy(rsi, u"VK_ERROR_OUT_OF_DEVICE_M", 0x30)
                *(rsi + 0x30) = 0x52004f004d0045
                *(rsi + 0x38) = 0x59
                goto label_141904b03
            case 0xffffffff
                sub_1405947f0(&var_2a8, 0x1c)
                int32_t rax_19 = var_2a0 + 0x1c
                var_2a0 = rax_19
                
                if (rax_19 s> 0)
                    sub_140594770(&var_2a8)
                
                rsi = var_2a8
                __builtin_memcpy(rsi, u"VK_ERROR_OUT_OF_HOST_MEM", 0x30)
                *(rsi + 0x30) = 0x590052004f
                goto label_141904b03
    
    int16_t* const rdi = &data_142d40450
    
    if (var_2a0 != 0)
        rdi = rsi
    
    void var_178
    sub_1405eb940(&var_178, arg3)
    void var_298
    sub_1405eb940(&var_298, arg2)
    int16_t* const var_2b0 = rdi
    int32_t r9
    int32_t var_2b8 = r9
    int64_t var_70
    int64_t var_2c0 = var_70
    int32_t var_2c8 = arg1
    int64_t var_190
    sub_140af98a0("Unknown", 0x31a, u"%s failed, VkResult=%d\n at %s:%u \n with error %s", var_190)
    int64_t var_198
    
    if (var_198 != 0)
        sub_140a74f90(var_198)
    
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t result = sub_140afbb40()
    
    if (rsi != 0)
        result = sub_140a74f90(rsi)
    
    __security_check_cookie(rax_1 ^ &var_2e8)
    return result

if (arg1 == 0xfffffff4)
    sub_1405947f0(&var_2a8, 0x19)
    int32_t rax_11 = var_2a0 + 0x19
    var_2a0 = rax_11
    
    if (rax_11 s> 0)
        sub_140594770(&var_2a8)
    
    rsi = var_2a8
    __builtin_wcscpy(rsi, u"VK_ERROR_FRAGMENTED_POOL")
else
    if (arg1 == 0xc4652a47)
        sub_1405947f0(&var_2a8, 0x22)
        int32_t rax_10 = var_2a0 + 0x22
        var_2a0 = rax_10
        
        if (rax_10 s> 0)
            sub_140594770(&var_2a8)
        
        rsi = var_2a8
        __builtin_memcpy(rsi, u"VK_ERROR_INCOMPATIBLE_DISPLAY_KHR", 0x44)
    else if (arg1 == 0xc4653214)
        sub_1405947f0(&var_2a8, 0x19)
        int32_t rax_9 = var_2a0 + 0x19
        var_2a0 = rax_9
        
        if (rax_9 s> 0)
            sub_140594770(&var_2a8)
        
        rsi = var_2a8
        __builtin_wcscpy(rsi, u"VK_ERROR_OUT_OF_DATE_KHR")
    else if (arg1 == 0xc46535ff)
        sub_1405947f0(&var_2a8, 0x22)
        int32_t rax_8 = var_2a0 + 0x22
        var_2a0 = rax_8
        
        if (rax_8 s> 0)
            sub_140594770(&var_2a8)
        
        rsi = var_2a8
        __builtin_memcpy(rsi, u"VK_ERROR_NATIVE_WINDOW_IN_USE_KHR", 0x44)
    else if (arg1 == 0xc4653600)
        sub_1405947f0(&var_2a8, 0x1a)
        int32_t rax_7 = var_2a0 + 0x1a
        var_2a0 = rax_7
        
        if (rax_7 s> 0)
            sub_140594770(&var_2a8)
        
        rsi = var_2a8
        __builtin_memcpy(rsi, u"VK_ERROR_SURFACE_LOST_KHR", 0x34)
    
    if (arg1 == 0xc4650b07)
        sub_1405947f0(&var_2a8, 0x1f)
        int32_t rax_6 = var_2a0 + 0x1f
        var_2a0 = rax_6
        
        if (rax_6 s> 0)
            sub_140594770(&var_2a8)
        
        rsi = var_2a8
        __builtin_memcpy(rsi, u"VK_ERROR_VALIDATION_FAIL", 0x30)
        *(rsi + 0x30) = 0x45005f00440045
        *(rsi + 0x38) = 0x540058
        rsi[0x1e] = 0
    else if (arg1 == 0xc4628e4f)
        sub_1405947f0(&var_2a8, 0x1b)
        int32_t rax_5 = var_2a0 + 0x1b
        var_2a0 = rax_5
        
        if (rax_5 s> 0)
            sub_140594770(&var_2a8)
        
        rsi = var_2a8
        __builtin_wcscpy(rsi, u"VK_ERROR_NOT_PERMITTED_EXT")
    else if (arg1 == 0xc4641cbd)
        sub_1405947f0(&var_2a8, 0x25)
        int32_t rax_4 = var_2a0 + 0x25
        var_2a0 = rax_4
        
        if (rax_4 s> 0)
            sub_140594770(&var_2a8)
        
        rsi = var_2a8
        __builtin_memcpy(rsi, u"VK_ERROR_INVALID_EXTERNAL_HANDLE", 0x40)
        *(rsi + 0x40) = 0x520048004b005f
        rsi[0x24] = 0
    else if (arg1 == 0xc4642878)
        sub_1405947f0(&var_2a8, 0x20)
        int32_t rax_3 = var_2a0 + 0x20
        var_2a0 = rax_3
        
        if (rax_3 s> 0)
            sub_140594770(&var_2a8)
        
        rsi = var_2a8
        __builtin_memcpy(rsi, u"VK_ERROR_OUT_OF_POOL_MEMORY_KHR", 0x40)
    else if (arg1 == 0xc4650720)
        sub_1405947f0(&var_2a8, 0x1b)
        int32_t rax_2 = var_2a0 + 0x1b
        var_2a0 = rax_2
        
        if (rax_2 s> 0)
            sub_140594770(&var_2a8)
        
        rsi = var_2a8
        __builtin_wcscpy(rsi, u"VK_ERROR_INVALID_SHADER_NV")

goto label_141904b03
