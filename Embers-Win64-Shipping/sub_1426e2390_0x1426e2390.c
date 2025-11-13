// 函数: sub_1426e2390
// 地址: 0x1426e2390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
arg2[1] = 0
char rbp = 0
int64_t* r14 = *(arg1 + 0x10)
int32_t arg_8 = 0
void* r15 = r14[0x23]

if (r15 != 0)
label_1426e23e9:
    int32_t rdx_1 = *(arg1 + 0x90)
    int64_t var_38
    int32_t var_30
    int64_t var_28
    
    if ((rdx_1.b & 2) == 0)
        int64_t* rax_4 = sub_1426b3810(arg1, &var_28)
        int32_t rcx_8 = rax_4[1].d
        int32_t r8_4 = rcx_8 - 1
        
        if (rcx_8 == 0)
            r8_4 = 0
        
        sub_140a20ba0(arg2, *rax_4, r8_4)
        int64_t rcx_10 = var_28
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int32_t rdx_5 = arg2[1].d
        int32_t rax_5
        rax_5.b = rdx_5 s<= 0
        int32_t rbp_1 = rdx_5 - 1
        
        if (rdx_5 s<= 0)
            rbp_1 = 0
        
        int32_t rax_7 = rax_5 + 1 + rdx_5
        arg2[1].d = rax_7
        
        if (rax_7 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        int64_t rcx_12 = sx.q(rbp_1)
        *(*arg2 + (rcx_12 << 1)) = 0xa
        *(*arg2 + (rcx_12 << 1) + 2) = 0
    else
        int16_t* const r8_1
        
        if ((rdx_1.b & 0xc) == 0)
            r8_1 = u"No tick"
        else
            int64_t* rax_2 = sub_1426b3810(arg1, &var_28)
            
            if (rax_2[1].d == 0)
                rdx_1 = *(arg1 + 0x90)
                r8_1 = &data_142d40450
                rbp = 1
            else
                r8_1 = *rax_2
                rbp = 1
                rdx_1 = *(arg1 + 0x90)
        
        wchar16 const* const rcx_2 = u"No Search Start"
        
        if ((rdx_1 & 0x300) != 0)
            rcx_2 = u"Search Start"
        
        wchar16 const* const var_40_1 = rcx_2
        wchar16 const* const rax_3 = u"No Deactivation"
        
        if ((rdx_1.b & 0xc0) != 0)
            rax_3 = u"Deactivation"
        
        wchar16 const* const var_48_1 = rax_3
        sub_140a2e390(&var_38, u"%s, %s, %s, %s\n", r8_1)
        int32_t r8_3
        
        if (var_30 == 0)
            r8_3 = 0
        else
            r8_3 = var_30 - 1
        
        sub_140a20ba0(arg2, var_38, r8_3)
        int64_t rcx_5 = var_38
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        if ((rbp & 1) != 0)
            int64_t rcx_6 = var_28
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
    
    if ((*(arg1 + 0x90) & 1) != 0)
        sub_1426ab930(&var_38, arg1, sub_142732d30(), r15 + 0x80)
        
        if (var_30 != 0 && var_30 != 1)
            sub_140a20ba0(arg2, &data_142d576a0, 1)
            
            if (var_30 != 0)
                rdi = var_30 - 1
            
            sub_140a20ba0(arg2, var_38, rdi)
        
        int64_t rcx_16 = var_38
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
else
    (*(*r14 + 0x390))(r14)
    r15 = r14[0x23]
    
    if (r15 != 0)
        goto label_1426e23e9

return arg2
