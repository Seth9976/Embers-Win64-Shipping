// 函数: sub_140e82350
// 地址: 0x140e82350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) s> 1)
    *arg2 = 8
    int64_t rax
    rax.b = 0
    return rax

int64_t* rcx = *(arg1 + 0x20)
uint64_t rsi
uint64_t arg_8 = rsi
uint64_t var_28
wchar16 const* const rdx_2
uint32_t r8_2

if (rcx == 0)
    *arg2 = 8
    var_28 = 0
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, (rcx + 0xc).d)
    int32_t rax_1 = var_20_1 + 0xc
    var_20_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_28)
    
    r8_2 = 0x18
    rdx_2 = u"Null Stream"
    goto label_140e8268a

uint32_t rax_3 = (*(*rcx + 0x30))(rcx)

if (rax_3.b != 0)
    if (*(arg1 + 0x69) != 0)
        goto label_140e8242d
    
    *arg2 = 8
    var_28 = 0
    int32_t var_20_2 = 0
    sub_1405947f0(&var_28, 0x16)
    int32_t rax_4 = var_20_2 + 0x16
    var_20_2 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_28)
    
    r8_2 = 0x2c
    rdx_2 = u"Improperly formatted."
    goto label_140e8268a

if (*(arg1 + 0x69) != 0)
label_140e8242d:
    
    if (rax_3.b == 0)
        *arg2 = 8
        var_28 = 0
        int32_t var_20_3 = 0
        sub_1405947f0(&var_28, 0x23)
        int32_t rax_5 = var_20_3 + 0x23
        var_20_3 = rax_5
        
        if (rax_5 s> 0)
            sub_140594770(&var_28)
        
        r8_2 = 0x46
        rdx_2 = u"Unexpected additional input found."
        goto label_140e8268a
    
    rax_3.b = 0
else if (rax_3.b == 0)
    *(arg1 + 0x30) = 0
    
    if (*(arg1 + 0x34) != 0)
        arg3 = sub_1405947f0(arg1 + 0x28, 0)
    
    while (true)
        int32_t rcx_9 = 0
        
        if (*(arg1 + 0x10) s> 0)
            rcx_9 = *(*(arg1 + 8) + (sx.q(*(arg1 + 0x10)) << 2) - 4)
        
        wchar16 const* const rdx_7
        uint32_t r8_1
        
        if (rcx_9 == 5)
            rsi = zx.q(*(arg1 + 0x18))
            *(arg1 + 0x18) = 0
            char rax_12
            rax_12, arg3 = sub_140e72a60(arg1, arg1 + 0x18, arg3)
            
            if (rax_12 != 0)
                int32_t rax_13 = *(arg1 + 0x18)
                
                if (rax_13 == 5 || rsi.d == 4)
                label_140e82585:
                    rsi.b = 1
                label_140e82588:
                    
                    if (*(arg1 + 0x18) != 0)
                        break
                    
                    continue
                else if (rax_13 != 1)
                    var_28 = 0
                    int32_t var_20_5 = 0
                    sub_1405947f0(&var_28, 0x25)
                    int32_t rax_15 = var_20_5 + 0x25
                    var_20_5 = rax_15
                    
                    if (rax_15 s> 0)
                        sub_140594770(&var_28)
                    
                    r8_1 = 0x4a
                    rdx_7 = u"Comma token expected, but not found."
                label_140e825d1:
                    UnDecorator::getReferenceType(var_28, rdx_7, r8_1)
                    sub_140e88b20(arg1, &var_28)
                    uint64_t rcx_21 = var_28
                    
                    if (rcx_21 != 0)
                        sub_140a74f90(rcx_21)
                else
                    *(arg1 + 0x18) = 0
                    char rax_14
                    rax_14, arg3 = sub_140e72a60(arg1, arg1 + 0x18, arg3)
                    
                    if (rax_14 != 0)
                        goto label_140e82585
        else
            if (rcx_9 == 6)
                char rax_11
                rax_11, arg3 = sub_140e826c0(arg1, arg1 + 0x18, arg3)
                rsi = zx.q(rax_11)
                
                if (rax_11 == 0)
                    break
                
                goto label_140e82588
            
            sub_140e78e90(arg1)
            *(arg1 + 0x18) = 0
            char rax_7
            rax_7, arg3 = sub_140e72a60(arg1, arg1 + 0x18, arg3)
            
            if (rax_7 != 0)
                if (((*(arg1 + 0x18) - 2) & 0xfffffffd) == 0)
                    goto label_140e82585
                
                var_28 = 0
                int32_t var_20_4 = 0
                sub_1405947f0(&var_28, 0x3a)
                int32_t rax_10 = var_20_4 + 0x3a
                var_20_4 = rax_10
                
                if (rax_10 s> 0)
                    sub_140594770(&var_28)
                
                r8_1 = 0x74
                rdx_7 = u"Open Curly or Square Brace token expected, but not found."
                goto label_140e825d1
        rsi.b = 0
        break
    
    *arg2 = *(&data_1439b38a8 + (sx.q(*(arg1 + 0x18)) << 2))
    int32_t rcx_22 = *(arg1 + 0x10)
    rax_3.b = rcx_22 == 0
    *(arg1 + 0x69) = rax_3.b
    
    if (rsi.b != 0 && *arg2 != 8)
        if (rcx_22 == 0)
            int64_t* rcx_23 = *(arg1 + 0x20)
            
            if ((*(*rcx_23 + 0x30))(rcx_23) == 0)
                sub_140e78e90(arg1)
        
        return zx.d(rsi.b)
    
    *arg2 = 8
    
    if (*(arg1 + 0x40) s> 1)
        rax_3.b = 1
    else
        var_28 = 0
        int32_t var_20_6 = 0
        sub_1405947f0(&var_28, 0x17)
        int32_t rax_19 = var_20_6 + 0x17
        var_20_6 = rax_19
        
        if (rax_19 s> 0)
            sub_140594770(&var_28)
        
        r8_2 = 0x2e
        rdx_2 = u"Unknown Error Occurred"
    label_140e8268a:
        UnDecorator::getReferenceType(var_28, rdx_2, r8_2)
        sub_140e88b20(arg1, &var_28)
        uint64_t rcx_29 = var_28
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        rax_3.b = 1
else
    rax_3.b = 0

return rax_3
