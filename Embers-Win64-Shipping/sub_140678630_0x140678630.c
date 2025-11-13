// 函数: sub_140678630
// 地址: 0x140678630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) s> 1)
    *arg2 = 8
    int64_t rax
    rax.b = 0
    return rax

int64_t* rcx = *(arg1 + 0x20)
uint32_t rax_2
uint64_t var_48

if (rcx != 0)
    rax_2 = (*(*rcx + 0x30))(rcx)
    wchar16 const* const rdx_6
    uint32_t r8_7
    
    if (rax_2.b != 0)
        if (*(arg1 + 0x69) != 0)
            goto label_140678831
        
        *arg2 = 8
        var_48 = 0
        int32_t var_40_3 = 0
        sub_1405947f0(&var_48, 0x16)
        int32_t rax_4 = var_40_3 + 0x16
        var_40_3 = rax_4
        
        if (rax_4 s> 0)
            sub_140594770(&var_48)
        
        r8_7 = 0x2c
        rdx_6 = u"Improperly formatted."
        goto label_140678a29
    
    if (*(arg1 + 0x69) != 0)
    label_140678831:
        
        if (rax_2.b == 0)
            *arg2 = 8
            var_48 = 0
            int32_t var_40_4 = 0
            sub_1405947f0(&var_48, 0x23)
            int32_t rax_5 = var_40_4 + 0x23
            var_40_4 = rax_5
            
            if (rax_5 s> 0)
                sub_140594770(&var_48)
            
            r8_7 = 0x46
            rdx_6 = u"Unexpected additional input found."
            goto label_140678a29
        
        rax_2.b = 0
    else if (rax_2.b == 0)
        *(arg1 + 0x30) = 0
        
        if (*(arg1 + 0x34) != 0)
            arg3 = sub_1405947f0(arg1 + 0x28, 0)
        
        uint32_t rsi_3
        
        do
            char rax_6
            
            if (*(arg1 + 0x10) s<= 0)
            label_140678920:
                rax_6, arg3 = sub_140678c00(arg1, arg1 + 0x18, arg3)
            label_140678925:
                rsi_3 = zx.d(rax_6)
                
                if (rax_6 == 0)
                    break
            else
                int32_t r8_5 = *(*(arg1 + 8) + (sx.q(*(arg1 + 0x10)) << 2) - 4)
                
                if (r8_5 != 5)
                    if (r8_5 != 6)
                        goto label_140678920
                    
                    rax_6, arg3 = sub_140678a70(arg1, arg1 + 0x18, arg3)
                    goto label_140678925
                
                rsi_3 = *(arg1 + 0x18)
                *(arg1 + 0x18) = 0
                char rax_7
                rax_7, arg3 = sub_14066fdb0(arg1, arg1 + 0x18, arg3)
                
                if (rax_7 == 0)
                    rsi_3.b = 0
                    break
                
                int32_t rax_8 = *(arg1 + 0x18)
                
                if (rax_8 == 5)
                    rsi_3.b = 1
                else if (rsi_3 == 4)
                    rsi_3.b = 1
                else
                    if (rax_8 != 1)
                        var_48 = 0
                        int32_t var_40_5 = 0
                        sub_1405947f0(&var_48, 0x25)
                        int32_t rax_10 = var_40_5 + 0x25
                        var_40_5 = rax_10
                        
                        if (rax_10 s> 0)
                            sub_140594770(&var_48)
                        
                        UnDecorator::getReferenceType(var_48, 
                            Comma token expected, but not found.", 0x4a)
                        sub_14067a5a0(arg1, &var_48)
                        uint64_t rcx_27 = var_48
                        
                        if (rcx_27 != 0)
                            sub_140a74f90(rcx_27)
                        
                        rsi_3.b = 0
                        break
                    
                    *(arg1 + 0x18) = 0
                    char rax_9
                    rax_9, arg3 = sub_14066fdb0(arg1, arg1 + 0x18, arg3)
                    
                    if (rax_9 == 0)
                        rsi_3.b = 0
                        break
                    
                    rsi_3.b = 1
        while (*(arg1 + 0x18) == 0)
        
        *arg2 = *(&data_14396a100 + (sx.q(*(arg1 + 0x18)) << 2))
        int32_t rcx_28 = *(arg1 + 0x10)
        rax_2.b = rcx_28 == 0
        *(arg1 + 0x69) = rax_2.b
        
        if (rsi_3.b != 0 && *arg2 != 8)
            if (rcx_28 == 0)
                int64_t* rcx_29 = *(arg1 + 0x20)
                
                if ((*(*rcx_29 + 0x30))(rcx_29) == 0)
                    sub_140671a60(arg1)
            
            return zx.d(rsi_3.b)
        
        *arg2 = 8
        
        if (*(arg1 + 0x40) s> 1)
            rax_2.b = 1
        else
            var_48 = 0
            int32_t var_40_6 = 0
            sub_1405947f0(&var_48, 0x17)
            int32_t rax_14 = var_40_6 + 0x17
            var_40_6 = rax_14
            
            if (rax_14 s> 0)
                sub_140594770(&var_48)
            
            r8_7 = 0x2e
            rdx_6 = u"Unknown Error Occurred"
        label_140678a29:
            UnDecorator::getReferenceType(var_48, rdx_6, r8_7)
            sub_14067a5a0(arg1, &var_48)
            uint64_t rcx_12 = var_48
            
            if (rcx_12 == 0)
                rax_2.b = 1
            else
                sub_140a74f90(rcx_12)
                rax_2.b = 1
    else
        rax_2.b = 0
else
    *arg2 = 8
    var_48 = 0
    int64_t var_40_1 = 0
    sub_1405947f0(&var_48, (rcx + 0xc).d)
    int32_t rsi_1 = var_40_1.d + 0xc
    var_40_1.d = rsi_1
    
    if (rsi_1 s> 0)
        sub_140594770(&var_48)
        rsi_1 = var_40_1.d
    
    uint64_t r15_1 = var_48
    UnDecorator::getReferenceType(r15_1, u"Null Stream", 0x18)
    *(arg1 + 0x64)
    uint64_t var_38
    sub_140a2e390(&var_38, u" Line: %u Ch: %u", zx.q(*(arg1 + 0x60)))
    int32_t var_30
    int32_t r14_1 = var_30
    uint64_t rsi_2
    int32_t r12_1
    
    if (rsi_1 s> 1)
        int32_t r14_2
        
        if (r14_1 == 0)
            r14_2 = 0
        else
            r14_2 = r14_1 - 1
        
        int32_t rax_1
        
        if (rsi_1 == 0)
            rax_1 = rsi_1 + 1
        
        if (rsi_1 != 0 || r14_2 == 0)
            rax_1 = 0
        
        var_48 = 0
        int32_t rcx_5 = rax_1 + r14_2
        var_40_1.d = rsi_1
        
        if (rsi_1 != 0 || rcx_5 != 0)
            sub_1405a4c70(&var_48, rsi_1 + rcx_5, 0)
            memcpy(var_48, r15_1, rsi_1 * 2)
        else
            var_40_1:4.d = 0
        
        sub_140a20ba0(&var_48, var_38, r14_2)
        rsi_2 = var_48
        r14_1 = var_40_1.d
        r12_1 = var_40_1:4.d
        var_48 = 0
        int64_t var_40_2 = 0
    else
        rsi_2 = var_38
        int32_t var_2c
        r12_1 = var_2c
        var_38 = 0
        var_30.q = 0
    
    void var_28
    
    if (arg1 + 0x38 != &var_28)
        int64_t rcx_9 = *(arg1 + 0x38)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        *(arg1 + 0x38) = rsi_2
        *(arg1 + 0x40) = r14_1
        *(arg1 + 0x44) = r12_1
    else if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    uint64_t rcx_11 = var_38
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    if (r15_1 == 0)
        rax_2.b = 1
    else
        sub_140a74f90(r15_1)
        rax_2.b = 1
return rax_2
