// 函数: sub_142a6e840
// 地址: 0x142a6e840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
uint64_t rbx
uint64_t arg_20 = rbx
int64_t* rdi = nullptr
int32_t arg_8 = 0

if (arg1 == arg2)
    uint64_t result
    result.b = 1
    return result

int32_t rax = *(arg1 + 0x10)
int64_t* arg_10
int64_t* rsi_1

if (rax s<= 0)
    int64_t* rax_1 = j_sub_142a7dd00(0xa8)
    arg_10 = rax_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        rsi_1 = sub_142a6e400(rax_1, *(arg1 + 8), &arg_8)
    
    rax = arg_8
    
    if (rsi_1 == 0)
        if (rax s<= 0)
            rax = 7
            arg_8 = 7
        
        rsi_1 = nullptr
    else if (rax s> 0)
        (**rsi_1)(rsi_1, 1)
        rax = arg_8
        rsi_1 = nullptr
else
    arg_8 = rax
    rsi_1 = nullptr

arg_10 = rsi_1
int64_t* arg_18

if (rax s<= 0)
    rax = *(arg2 + 0x10)
    
    if (rax s<= 0)
        int64_t* rax_4 = j_sub_142a7dd00(0xa8)
        arg_18 = rax_4
        struct icu_64::StringEnumeration::icu_64::PluralKeywordEnumeration::VTable** rcx_3
        
        if (rax_4 == 0)
            rcx_3 = nullptr
        else
            rcx_3 = sub_142a6e400(rax_4, *(arg2 + 8), &arg_8)
        
        rax = arg_8
        
        if (rcx_3 != 0)
            if (rax s<= 0)
                rdi = rcx_3
            else
                (*rcx_3)->__offset(0x0).q(rcx_3, 1)
                rax = arg_8
        else if (rax s<= 0)
            rax = 7
            arg_8 = 7
    else
        arg_8 = rax

arg_18 = rdi

if (rax s> 0)
label_142a6e9fe:
    rbx.b = 0
else
    rbx = zx.q((*(*rsi_1 + 0x18))(rsi_1, &arg_8))
    int64_t r8_3 = *rdi
    
    if (rbx.d != (*(r8_3 + 0x18))(rdi, &arg_8, r8_3))
    label_142a6e9fe_1:
        rbx.b = 0
    else
        (*(*rsi_1 + 0x38))(rsi_1, &arg_8)
        
        for (void* i = (*(*rsi_1 + 0x30))(rsi_1, &arg_8); i != 0; 
                i = (*(*rsi_1 + 0x30))(rsi_1, &arg_8))
            if (sub_142a70b60(arg2, i) == 0)
                goto label_142a6e9fe_2
        
        (*(*rdi + 0x38))(rdi, &arg_8)
        
        for (void* i_1 = (*(*rdi + 0x30))(rdi, &arg_8); i_1 != 0; 
                i_1 = (*(*rdi + 0x30))(rdi, &arg_8))
            if (sub_142a70b60(arg1, i_1) == 0)
                goto label_142a6e9fe_2
        
        if (arg_8 s> 0)
        label_142a6e9fe_2:
            rbx.b = 0
        else
            rbx.b = 1

if (rdi != 0)
    int64_t r8_4 = *rdi
    (*r8_4)(rdi, 1, r8_4)

if (rsi_1 != 0)
    int64_t r8_5 = *rsi_1
    (*r8_5)(rsi_1, 1, r8_5)

return zx.q(rbx.b)
