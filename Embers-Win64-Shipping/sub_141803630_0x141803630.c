// 函数: sub_141803630
// 地址: 0x141803630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
struct WINHTTP_PROXY_INFO proxyInfo
__builtin_memset(&proxyInfo, 0, 0x18)
int16_t* r15 = nullptr
int32_t arg_10 = 0
int32_t r13 = 0
WinHttpGetDefaultProxyConfiguration(&proxyInfo)
WCHAR* lpszProxy = proxyInfo.lpszProxy
int16_t* const arg_20 = &data_142d40450
int16_t* var_a8
int16_t* var_98

if (lpszProxy == 0)
label_1418038f0:
    struct WINHTTP_CURRENT_USER_IE_PROXY_CONFIG proxyConfig
    __builtin_memset(&proxyConfig, 0, 0x20)
    WinHttpGetIEProxyConfigForCurrentUser(&proxyConfig)
    WCHAR* lpszProxy_1 = proxyConfig.lpszProxy
    
    if (lpszProxy_1 != 0)
        int32_t rdx_11 = 0
        var_a8 = nullptr
        int32_t rcx_23 = 0
        int32_t var_a0_2 = 0
        int32_t var_9c_2 = 0
        
        if (*lpszProxy_1 != 0)
            int64_t rbx_7 = -1
            
            do
                rbx_7 += 1
            while (lpszProxy_1[rbx_7] != 0)
            
            if (rbx_7.d + 1 s> 0)
                sub_1405947f0(&var_a8, rbx_7.d + 1)
                rcx_23 = var_9c_2
                rdx_11 = var_a0_2
            
            int32_t rax_9 = rbx_7.d + 1 + rdx_11
            var_a0_2 = rax_9
            
            if (rax_9 s> rcx_23)
                sub_140594770(&var_a8)
            
            UnDecorator::getReferenceType(var_a8, lpszProxy_1, (rbx_7.d + 1) * 2)
        
        char rax_10 = sub_141805a20(&var_a8)
        char rax_13
        char rax_16
        
        if (rax_10 == 0)
            var_98 = nullptr
            int32_t var_90_4 = 0
            sub_1405947f0(&var_98, 7)
            int32_t rax_12 = var_90_4 + 7
            var_90_4 = rax_12
            
            if (rax_12 s> 0)
                sub_140594770(&var_98)
            
            int16_t* rbx_9 = var_98
            UnDecorator::getReferenceType(rbx_9, u"https=", 0xe)
            rax_13 = sub_14060a620(&var_a8, &var_98, nullptr, &var_a8, 1, 0)
            
            if (rbx_9 != 0)
                sub_140a74f90(rbx_9)
            
            if (rax_13 != 0)
                var_98 = nullptr
                int64_t var_90_5 = 0
                sub_1405947f0(&var_98, 2)
                int32_t rbx_10 = var_90_5.d + 2
                var_90_5.d = rbx_10
                
                if (rbx_10 s> 0)
                    sub_140594770(&var_98)
                    rbx_10 = var_90_5.d
                
                int16_t* r12_2 = var_98
                UnDecorator::getReferenceType(r12_2, &data_142e5e360, 4)
                int16_t* rdx_17 = &data_142d40450
                
                if (rbx_10 != 0)
                    rdx_17 = r12_2
                
                int32_t rax_14 = sub_140a23cf0(&var_a8, rdx_17, 1, 0, 0xffffffff)
                
                if (rax_14 s>= 0)
                    int16_t* rcx_38 = var_a8
                    int16_t* rdx_18
                    int32_t rdi_5
                    
                    if (var_a0_2 == 0)
                        rdi_5 = 0
                        rdx_18 = &data_142d40450
                    else
                        rdx_18 = rcx_38
                        arg_20 = rcx_38
                        rdi_5 = var_a0_2 - 1
                    
                    var_98 = nullptr
                    int32_t rbx_11 = 0
                    var_90_5:4.d = 0
                    
                    if (rax_14 s< rdi_5)
                        rdi_5 = rax_14
                    
                    var_90_5.d = 0
                    int16_t* rsi_2 = nullptr
                    
                    if (rdx_18 != 0 && *rdx_18 != 0 && rdi_5 s> 0)
                        if (rdi_5 + 1 s> 0)
                            sub_1405947f0(&var_98, rdi_5 + 1)
                            r14 = var_90_5:4.d
                            rbx_11 = var_90_5.d
                            rsi_2 = var_98
                        
                        rbx_11 += rdi_5 + 1
                        var_90_5.d = rbx_11
                        
                        if (rbx_11 s> r14)
                            sub_140594770(&var_98)
                            r14 = var_90_5:4.d
                            rbx_11 = var_90_5.d
                            rsi_2 = var_98
                        
                        UnDecorator::getReferenceType(rsi_2, arg_20, rdi_5 * 2)
                        rsi_2[sx.q(rbx_11) - 1] = 0
                        rcx_38 = var_a8
                    
                    if (rcx_38 != 0)
                        sub_140a74f90(rcx_38)
                    
                    var_a8 = rsi_2
                    var_a0_2 = rbx_11
                    var_9c_2 = r14
                
                if (r12_2 != 0)
                    sub_140a74f90(r12_2)
                
                rax_16 = sub_141805a20(&var_a8)
        
        if (rax_10 != 0 || (rax_13 != 0 && rax_16 != 0))
            if (r15 != 0)
                sub_140a74f90(r15)
            
            r15 = var_a8
            r13 = var_a0_2
            arg_10 = var_9c_2
        else
            int16_t* rcx_44 = var_a8
            
            if (rcx_44 != 0)
                sub_140a74f90(rcx_44)
else
    int32_t rdx_1 = 0
    var_a8 = nullptr
    int32_t rcx_1 = 0
    int32_t var_a0_1 = 0
    int32_t var_9c_1 = 0
    
    if (*lpszProxy != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (lpszProxy[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_a8, rbx_1.d + 1)
            rcx_1 = var_9c_1
            rdx_1 = var_a0_1
        
        int32_t rax_1 = rbx_1.d + 1 + rdx_1
        var_a0_1 = rax_1
        
        if (rax_1 s> rcx_1)
            sub_140594770(&var_a8)
        
        UnDecorator::getReferenceType(var_a8, lpszProxy, (rbx_1.d + 1) * 2)
    
    if (sub_141805a20(&var_a8) == 0)
        var_98 = nullptr
        int32_t var_90_1 = 0
        sub_1405947f0(&var_98, 7)
        int32_t rax_3 = var_90_1 + 7
        var_90_1 = rax_3
        
        if (rax_3 s> 0)
            sub_140594770(&var_98)
        
        int16_t* rbx_3 = var_98
        UnDecorator::getReferenceType(rbx_3, u"https=", 0xe)
        char rax_4 = sub_14060a620(&var_a8, &var_98, nullptr, &var_a8, 1, 0)
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
        
        if (rax_4 != 0)
            var_98 = nullptr
            int32_t var_90_2 = 0
            sub_1405947f0(&var_98, 2)
            int32_t rbx_4 = var_90_2 + 2
            
            if (rbx_4 s> 0)
                sub_140594770(&var_98)
            
            int16_t* r13_1 = var_98
            UnDecorator::getReferenceType(r13_1, &data_142e5e360, 4)
            int16_t* const rdx_7 = &data_142d40450
            
            if (rbx_4 != 0)
                rdx_7 = r13_1
            
            int32_t rax_5 = sub_140a23cf0(&var_a8, rdx_7, 1, 0, 0xffffffff)
            
            if (rax_5 s>= 0)
                int16_t* rcx_15 = var_a8
                int32_t rbx_6
                int16_t* r12_1
                
                if (var_a0_1 == 0)
                    r12_1 = &data_142d40450
                    rbx_6 = 0
                else
                    r12_1 = rcx_15
                    rbx_6 = var_a0_1 - 1
                
                var_98 = nullptr
                int16_t* rsi_1 = nullptr
                int64_t var_90_3 = 0
                
                if (rax_5 s< rbx_6)
                    rbx_6 = rax_5
                
                int32_t rdi_1 = 0
                
                if (r12_1 != 0 && *r12_1 != 0 && rbx_6 s> 0)
                    if (rbx_6 + 1 s> 0)
                        sub_1405947f0(&var_98, rbx_6 + 1)
                        r14 = var_90_3:4.d
                        rdi_1 = var_90_3.d
                        rsi_1 = var_98
                    
                    rdi_1 = rdi_1 + 1 + rbx_6
                    var_90_3.d = rdi_1
                    
                    if (rdi_1 s> r14)
                        sub_140594770(&var_98)
                        r14 = var_90_3:4.d
                        rdi_1 = var_90_3.d
                        rsi_1 = var_98
                    
                    UnDecorator::getReferenceType(rsi_1, r12_1, rbx_6 * 2)
                    rsi_1[sx.q(rdi_1) - 1] = 0
                    rcx_15 = var_a8
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                var_a8 = rsi_1
                var_9c_1 = r14
                r14 = 0
                var_a0_1 = rdi_1
            
            if (r13_1 != 0)
                sub_140a74f90(r13_1)
            
            if (sub_141805a20(&var_a8) != 0)
                goto label_1418038bf
            
            r13 = 0
        
        int16_t* rcx_21 = var_a8
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        goto label_1418038f0
    
label_1418038bf:
    r13 = var_a0_1
    r15 = var_a8
    arg_10 = var_9c_1
    
    if (r13 s<= 1)
        goto label_1418038f0
*arg1 = r15
arg1[1].d = r13
*(arg1 + 0xc) = arg_10
arg1[2].b = 1
return arg1
