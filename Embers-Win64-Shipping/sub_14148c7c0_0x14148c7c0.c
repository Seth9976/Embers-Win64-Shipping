// 函数: sub_14148c7c0
// 地址: 0x14148c7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x600)
int64_t arg_8
int64_t rax_2

if (rax == 0)
    arg_8 = 0
    rax_2 = 0
else
    rax_2 = *(*(rax + 8) + 0x118)

arg_8 = rax_2
int32_t rax_3 = *(arg1 + 0x570)
void* result
int64_t var_58
int64_t var_48
void var_38

if ((rax_3.b & 0x40) == 0)
    var_48 = 0
    int64_t* rcx_17 = &var_48
    int64_t var_40_3 = 0
    int64_t* rax_6
    int32_t rdx_13
    int64_t* rsi_2
    int32_t rdi_3
    int32_t r12_1
    int64_t r14_3
    int32_t r15_3
    
    if (test_bit(rax_3, 0xb))
        sub_1405947f0(rcx_17, 0xb)
        r15_3 = var_40_3:4.d
        rdi_3 = var_40_3.d + 0xb
        var_40_3.d = rdi_3
        
        if (rdi_3 s> r15_3)
            sub_140594770(&var_48)
            r15_3 = var_40_3:4.d
            rdi_3 = var_40_3.d
        
        r14_3 = var_48
        UnDecorator::getReferenceType(r14_3, u"PreShadow ", 0x16)
        rax_6 = sub_140b63b70(&arg_8, &var_58)
        rsi_2 = rax_6
        
        if (rdi_3 s<= 1)
            goto label_14148cb4e
        
        int32_t rax_7 = rax_6[1].d
        r12_1 = rax_7 - 1
        
        if (rax_7 == 0)
            r12_1 = 0
        
        int32_t rax_8
        
        if (rdi_3 == 0)
            rax_8 = rdi_3 + 1
        
        if (rdi_3 != 0 || r12_1 == 0)
            rax_8 = 0
        
        rdx_13 = rax_8 + rdi_3
        goto label_14148cb81
    
    sub_1405947f0(rcx_17, 0xb)
    r15_3 = var_40_3:4.d
    rdi_3 = var_40_3.d + 0xb
    var_40_3.d = rdi_3
    
    if (rdi_3 s> r15_3)
        sub_140594770(&var_48)
        r15_3 = var_40_3:4.d
        rdi_3 = var_40_3.d
    
    r14_3 = var_48
    UnDecorator::getReferenceType(r14_3, u"PerObject ", 0x16)
    rax_6 = sub_140b63b70(&arg_8, &var_58)
    rsi_2 = rax_6
    int64_t rdi_4
    int32_t r12_2
    int32_t r15_4
    
    if (rdi_3 s> 1)
        int32_t rax_9 = rax_6[1].d
        r12_1 = rax_9 - 1
        
        if (rax_9 == 0)
            r12_1 = 0
        
        int32_t rax_10
        
        if (rdi_3 == 0)
            rax_10 = rdi_3 + 1
        
        if (rdi_3 != 0 || r12_1 == 0)
            rax_10 = 0
        
        rdx_13 = rdi_3 + rax_10
    label_14148cb81:
        int32_t rdx_16 = rdx_13 + r12_1
        var_48 = r14_3
        var_40_3:4.d = r15_3
        r14_3 = 0
        var_40_3.d = rdi_3
        
        if (rdx_16 s> r15_3)
            sub_1405947f0(&var_48, rdx_16)
        
        sub_140a20ba0(&var_48, *rsi_2, r12_1)
        rdi_4 = var_48
        r15_4 = var_40_3.d
        r12_2 = var_40_3:4.d
        var_48 = 0
        int64_t var_40_4 = 0
    else
    label_14148cb4e:
        rdi_4 = *rax_6
        *rax_6 = 0
        r15_4 = rax_6[1].d
        r12_2 = *(rax_6 + 0xc)
        rax_6[1] = 0
    
    result = &var_38
    
    if (arg2 != &var_38)
        int64_t rcx_26 = *arg2
        
        if (rcx_26 != 0)
            result = sub_140a74f90(rcx_26)
        
        *arg2 = rdi_4
        *(arg2 + 0xc) = r12_2
        arg2[1].d = r15_4
    else if (rdi_4 != 0)
        result = sub_140a74f90(rdi_4)
    
    if (r14_3 != 0)
        result = sub_140a74f90(r14_3)
    
    int64_t rcx_29 = var_58
    
    if (rcx_29 != 0)
        return sub_140a74f90(rcx_29)
else
    int32_t rdx = *(arg1 + 0x534)
    var_58 = 0
    int64_t var_50_1 = 0
    
    if (rdx s< 0)
        int32_t rax_5 = *(arg1 + 0x40)
        int64_t* rcx_10 = &var_58
        wchar16 const* const rdx_7
        int32_t rsi_1
        uint32_t r8_2
        int32_t r14_2
        
        if (rax_5 == 0)
            sub_1405947f0(rcx_10, rax_5 + 0x1d)
            r14_2 = var_50_1:4.d
            rsi_1 = var_50_1.d + 0x1d
            var_50_1.d = rsi_1
            
            if (rsi_1 s> r14_2)
                sub_140594770(&var_58)
                r14_2 = var_50_1:4.d
                rsi_1 = var_50_1.d
            
            r8_2 = 0x3a
            rdx_7 = u"WholeScene MovablePrimitives"
        else if (rax_5 != 1)
            sub_1405947f0(rcx_10, 0xb)
            r14_2 = var_50_1:4.d
            rsi_1 = var_50_1.d + 0xb
            var_50_1.d = rsi_1
            
            if (rsi_1 s> r14_2)
                sub_140594770(&var_58)
                r14_2 = var_50_1:4.d
                rsi_1 = var_50_1.d
            
            r8_2 = 0x16
            rdx_7 = u"WholeScene"
        else
            sub_1405947f0(rcx_10, rax_5 + 0x1b)
            r14_2 = var_50_1:4.d
            rsi_1 = var_50_1.d + 0x1c
            var_50_1.d = rsi_1
            
            if (rsi_1 s> r14_2)
                sub_140594770(&var_58)
                r14_2 = var_50_1:4.d
                rsi_1 = var_50_1.d
            
            r8_2 = 0x38
            rdx_7 = u"WholeScene StaticPrimitives"
        
        int64_t rdi_2 = var_58
        UnDecorator::getReferenceType(rdi_2, rdx_7, r8_2)
        result = &var_58
        
        if (arg2 != &var_58)
            int64_t rcx_14 = *arg2
            
            if (rcx_14 != 0)
                result = sub_140a74f90(rcx_14)
            
            *arg2 = rdi_2
            arg2[1].d = rsi_1
            *(arg2 + 0xc) = r14_2
        else if (rdi_2 != 0)
            return sub_140a74f90(rdi_2)
    else
        sub_140a20c40(&var_58, rdx)
        var_48 = 0
        int64_t var_40_1 = 0
        sub_1405947f0(&var_48, 0x11)
        int32_t r15_1 = var_40_1:4.d
        int32_t rdi = var_40_1.d + 0x11
        var_40_1.d = rdi
        
        if (rdi s> r15_1)
            sub_140594770(&var_48)
            r15_1 = var_40_1:4.d
            rdi = var_40_1.d
        
        int64_t rsi = var_48
        UnDecorator::getReferenceType(rsi, u"WholeScene split", 0x22)
        int32_t r14 = var_50_1.d
        int64_t rdi_1
        int32_t r15_2
        
        if (rdi s> 1)
            int32_t r14_1
            
            if (r14 == 0)
                r14_1 = 0
            else
                r14_1 = r14 - 1
            
            int32_t rax_4
            
            if (rdi == 0)
                rax_4 = rdi + 1
            
            if (rdi != 0 || r14_1 == 0)
                rax_4 = 0
            
            var_48 = rsi
            int32_t rdx_3 = rdi + rax_4 + r14_1
            var_40_1.d = rdi
            var_40_1:4.d = r15_1
            rsi = 0
            
            if (rdx_3 s> r15_1)
                sub_1405947f0(&var_48, rdx_3)
            
            sub_140a20ba0(&var_48, var_58, r14_1)
            rdi_1 = var_48
            r14 = var_40_1.d
            r15_2 = var_40_1:4.d
            var_48 = 0
            int64_t var_40_2 = 0
        else
            rdi_1 = var_58
            r15_2 = var_50_1:4.d
            var_58 = 0
            int64_t var_50_2 = 0
        
        result = &var_38
        
        if (arg2 != &var_38)
            int64_t rcx_6 = *arg2
            
            if (rcx_6 != 0)
                result = sub_140a74f90(rcx_6)
            
            *arg2 = rdi_1
            arg2[1].d = r14
            *(arg2 + 0xc) = r15_2
        else if (rdi_1 != 0)
            result = sub_140a74f90(rdi_1)
        
        if (rsi != 0)
            result = sub_140a74f90(rsi)
        
        int64_t rcx_9 = var_58
        
        if (rcx_9 != 0)
            return sub_140a74f90(rcx_9)
return result
