// 函数: sub_1417edd20
// 地址: 0x1417edd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int16_t* arg_10 = arg2
uint32_t rdi = 0
int64_t* r12 = arg3
int32_t arg_20 = 0
int16_t* rbx = nullptr
int32_t var_64 = 0
arg3.b = 1
int16_t* var_70 = nullptr
uint32_t rsi = 0
int32_t r14 = 0
int16_t* r15 = nullptr
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_10, u"vr.SetTrackingOrigin")
int16_t* var_60
uint32_t var_58

if (rax != 0)
    sub_140a2e390(&var_60, u"vr.TrackingOrigin %s", arg_10)
    rbx = var_60
    int32_t var_54
    r14 = var_54
    r15 = rbx
    rsi = var_58
    var_70 = rbx
    var_64 = r14

r8.b = 1
char rax_1
int64_t r8_2
rax_1, r8_2 = sub_140b0f6c0(&arg_10, u"vr.MirrorMode")
int16_t* const r13 = &data_142d40450

if (rax_1 == 0)
    r8_2.b = 1
    char rax_2
    int64_t r8_4
    rax_2, r8_4 = sub_140b0f6c0(&arg_10, u"HMDPOS")
    
    if (rax_2 == 0)
        r8_4.b = 1
        char rax_8
        int64_t r8_7
        rax_8, r8_7 = sub_140b0f6c0(&arg_10, &data_142d408a8)
        int16_t** rcx_23 = &arg_10
        r8_7.b = 1
        uint32_t var_68
        
        if (rax_8 == 0)
            char rax_13
            int64_t r8_10
            rax_13, r8_10 = sub_140b0f6c0(rcx_23, u"STEREO")
            int16_t** rcx_31 = &arg_10
            r8_10.b = 1
            
            if (rax_13 == 0)
                if (sub_140b0f6c0(rcx_31, u"HMDVERSION") != 0 && r15 != u"vr.HMDVersion")
                    var_68 = 0
                    
                    if (r14 != 0xe)
                        sub_1405947f0(&var_70, 0xe)
                        r14 = var_64
                        rdi = var_68
                        rbx = var_70
                    
                    rsi = rdi + 0xe
                    
                    if (rsi s> r14)
                        sub_140594770(&var_70)
                        rbx = var_70
                    
                    *rbx = (*u"vr.HMDVersion")[0].o
                    *(rbx + 0x10) = 0x6f006900730072
                    *(rbx + 0x18) = 0x6e
            else
                var_60 = nullptr
                var_58.q = 0
                char rax_14
                int64_t r8_11
                rax_14, r8_11 = sub_140b0f6c0(rcx_31, &data_142fdd24c)
                char rax_15
                int64_t r8_12
                
                if (rax_14 == 0)
                    r8_11.b = 1
                    rax_15, r8_12 = sub_140b0f6c0(&arg_10, u"ENABLE")
                
                if (rax_14 == 0 && rax_15 == 0)
                    r8_12.b = 1
                    char rax_16
                    int64_t r8_13
                    rax_16, r8_13 = sub_140b0f6c0(&arg_10, &data_142fdd290)
                    char rax_17
                    
                    if (rax_16 == 0)
                        r8_13.b = 1
                        rax_17 = sub_140b0f6c0(&arg_10, u"DISABLE")
                    
                    if (rax_16 == 0 && rax_17 == 0)
                        if (sub_140b2acc0(arg_10, u"W2M=", &var_60, 1) != 0)
                            int16_t* r8_15 = &data_142d40450
                            
                            if (var_58 != 0)
                                r8_15 = var_60
                            
                            sub_140a2e390(&var_70, u"vr.WorldToMetersScale %s", r8_15)
                            
                            if (rbx != 0)
                                sub_140a74f90(rbx)
                            
                            rbx = var_70
                            rsi = var_68
                    else if (r15 != u"vr.bEnableStereo False")
                        var_68 = 0
                        
                        if (r14 != 0x17)
                            sub_1405947f0(&var_70, 0x17)
                            r14 = var_64
                            rdi = var_68
                            rbx = var_70
                        
                        rsi = rdi + 0x17
                        
                        if (rsi s> r14)
                            sub_140594770(&var_70)
                            rbx = var_70
                        
                        __builtin_memcpy(rbx, u"vr.bEnableStereo", 0x20)
                        *(rbx + 0x20) = 0x6c006100460020
                        *(rbx + 0x28) = 0x650073
                        rbx[0x16] = 0
                else if (r15 != u"vr.bEnableStereo True")
                    var_68 = 0
                    
                    if (r14 != 0x16)
                        sub_1405947f0(&var_70, 0x16)
                        r14 = var_64
                        rdi = var_68
                        rbx = var_70
                    
                    rsi = rdi + 0x16
                    
                    if (rsi s> r14)
                        sub_140594770(&var_70)
                        rbx = var_70
                    
                    __builtin_memcpy(rbx, u"vr.bEnableStereo", 0x20)
                    *(rbx + 0x20) = 0x75007200540020
                    *(rbx + 0x28) = 0x65
                
                int16_t* rcx_42 = var_60
                
                if (rcx_42 != 0)
                    sub_140a74f90(rcx_42)
        else
            char rax_9
            int64_t r8_8
            rax_9, r8_8 = sub_140b0f6c0(rcx_23, &data_142fdd24c)
            char rax_10
            
            if (rax_9 == 0)
                r8_8.b = 1
                rax_10, r8_8 = sub_140b0f6c0(&arg_10, u"ENABLE")
            
            if ((rax_9 != 0 || rax_10 != 0) && r15 != u"vr.bEnableHMD True")
                uint32_t rdx_6 = 0
                var_68 = 0
                
                if (r14 != 0x13)
                    sub_1405947f0(&var_70, 0x13)
                    rdx_6 = var_68
                    r14 = var_64
                    rbx = var_70
                
                rsi = rdx_6 + 0x13
                
                if (rsi s> r14)
                    sub_140594770(&var_70)
                    r14 = var_64
                    rbx = var_70
                
                __builtin_wcscpy(rbx, u"vr.bEnableHMD True")
            
            r8_8.b = 1
            char rax_11
            int64_t r8_9
            rax_11, r8_9 = sub_140b0f6c0(&arg_10, &data_142fdd290)
            char rax_12
            
            if (rax_11 == 0)
                r8_9.b = 1
                rax_12 = sub_140b0f6c0(&arg_10, u"DISABLE")
            
            if ((rax_11 != 0 || rax_12 != 0) && rbx != u"vr.bEnableHMD False")
                var_68 = 0
                
                if (r14 != 0x14)
                    sub_1405947f0(&var_70, 0x14)
                    r14 = var_64
                    rdi = var_68
                    rbx = var_70
                
                rsi = rdi + 0x14
                
                if (rsi s> r14)
                    sub_140594770(&var_70)
                    rbx = var_70
                
                __builtin_memcpy(rbx, u"vr.bEnableHMD Fa", 0x20)
                *(rbx + 0x20) = 0x650073006c
    else
        sub_140b294d0(&var_60, &arg_10, 0)
        var_70 = nullptr
        uint32_t var_68_1 = 0
        sub_1405947f0(&var_70, 4)
        uint32_t r14_1 = var_68_1 + 4
        var_68_1 = r14_1
        
        if (r14_1 s> var_64)
            sub_140594770(&var_70)
            r14_1 = var_68_1
        
        int16_t* r12_1 = var_70
        UnDecorator::getReferenceType(r12_1, &data_142fdd238, 8)
        int16_t* const rdx_2 = &data_142d40450
        int16_t* const rcx_10 = &data_142d40450
        char r15_1 = 1
        
        if (r14_1 != 0)
            rdx_2 = r12_1
        
        if (var_58 != 0)
            rcx_10 = var_60
        
        int16_t* r14_2
        
        if (sub_140a54510(rcx_10, rdx_2) == 0)
            r14_2 = var_70
            rdi.b = 1
        else
            var_70 = nullptr
            var_68_1 = 0
            sub_1405947f0(&var_70, 6)
            rdi = var_68_1 + 6
            var_68_1 = rdi
            
            if (rdi s> var_64)
                sub_140594770(&var_70)
                rdi = var_68_1
            
            r14_2 = var_70
            UnDecorator::getReferenceType(r14_2, u"FLOOR", 0xc)
            int16_t* rdx_4 = &data_142d40450
            int16_t* rcx_14 = &data_142d40450
            r15_1 = 3
            
            if (rdi != 0)
                rdx_4 = r14_2
            
            if (var_58 != 0)
                rcx_14 = var_60
            
            if (sub_140a54510(rcx_14, rdx_4) == 0)
                rdi.b = 1
            else
                rdi.b = 0
        
        if ((r15_1 & 2) != 0 && r14_2 != 0)
            sub_140a74f90(r14_2)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        if (rdi.b != 0)
            int16_t* r8_5 = &data_142d40450
            
            if (var_58 != 0)
                r8_5 = var_60
            
            sub_140a2e390(&var_70, u"vr.TrackingOrigin %s", r8_5)
            
            if (rbx != 0)
                sub_140a74f90(rbx)
            
            rbx = var_70
            rsi = var_68_1
        
        int16_t* rcx_19 = var_60
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        r12 = arg_18
else
    sub_140a2e390(&var_60, u"vr.SpectatorScreenMode %s", arg_10)
    
    if (r15 != 0)
        sub_140a74f90(r15)
    
    rbx = var_60
    rsi = var_58

if (rsi s<= 1)
    rdi.b = 0
else
    int16_t* const rax_5 = &data_142d40450
    
    if (rsi != 0)
        rax_5 = rbx
    
    sub_140b1f850(r12, 3, u"%s is deprecated. Use %s instead", arg2)
    int64_t* rcx_21 = data_143db18d0
    
    if (rcx_21 == 0)
        sub_140a53c40()
        rcx_21 = data_143db18d0
    
    if (rsi != 0)
        r13 = rbx
    
    rdi = zx.d((*(*rcx_21 + 0xd0))(rcx_21, r13, r12, arg1, rax_5))

if (rbx != 0)
    sub_140a74f90(rbx)

return zx.q(rdi.b)
