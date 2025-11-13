// 函数: sub_140a78080
// 地址: 0x140a78080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int32_t r13 = arg3

if (*(arg1 + 0x138) == 0)
    int32_t arg_8 = 0
    struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** rax_1 =
        sub_142a57420(arg1 + 8, &arg_8)
    void*** rax_2 = j_sub_140a82f30(0x18)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rax_2 = &data_142d42ea8
        rax_2[2] = rax_1
    
    if (rax_2 != 0)
        rax_2[1].d += 1
        
        if (rax_2 != 0)
            rax_2[1].d -= 1
            
            if (rax_2[1].d == 1)
                (**rax_2)(rax_2)
                int32_t rax_5 = *(rax_2 + 0xc)
                *(rax_2 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*rax_2)[1](rax_2, 1)
    
    struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** var_68 = rax_1
    void*** rcx_3 = rax_2
    void*** var_60 = rcx_3
    
    if (rax_2 != 0)
        rax_2[1].d += 1
        rcx_3 = var_60
    
    if (arg1 + 0x138 != &var_68)
        *(arg1 + 0x138) = rax_1
        var_68 = nullptr
        sub_1405aeff0(arg1 + 0x140, &var_60)
        rcx_3 = var_60
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            void*** rbx_3 = var_60
            (**rbx_3)(rbx_3)
            int32_t rax_9 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_9 == 1)
                void*** rcx_6 = var_60
                (*rcx_6)[1](rcx_6, 1)
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t rax_13 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*rax_2)[1](rax_2, 1)
    
    r13 = arg3

int64_t* rbx_4 = *(arg1 + 0x140)
int64_t* rcx_9 = *(arg1 + 0x138)
int32_t arg_20 = 0

if (rbx_4 != 0)
    rbx_4[1].d += 1

if (r13 == 0)
    *arg2 = rcx_9
    arg2[1] = rbx_4
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    label_140a78330:
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t rdi_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_1))
    
    return arg2

int64_t* rax_16 = (*(*rcx_9 + 0x20))(rcx_9)
void*** rax_17 = j_sub_140a82f30(0x18)

if (rax_17 == 0)
    rax_17 = nullptr
else
    rax_17[1].d = 1
    *rax_17 = &data_142d42ea8
    *(rax_17 + 0xc) = 1
    rax_17[2] = rax_16

if (r13 u> 5)
    r15 = -1
else
    switch (r13)
        case 2
            r15 = 1
        case 3
            r15 = 2
        case 4
            r15 = 3
        case 5
            r15 = 0xf

(*(*rax_16 + 0xb0))(rax_16, 5, zx.q(r15), &arg_20)
*arg2 = rax_16
arg2[1] = rax_17

if (rax_17 != 0)
    rax_17[1].d += 1
    
    if (rax_17 != 0)
        rax_17[1].d -= 1
        
        if (rax_17[1].d == 1)
            (**rax_17)(rax_17)
            int32_t rax_24 = *(rax_17 + 0xc)
            *(rax_17 + 0xc) -= 1
            
            if (rax_24 == 1)
                (*rax_17)[1](rax_17, 1)

goto label_140a78330
