// 函数: sub_140b90370
// 地址: 0x140b90370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[1].d s<= 0)
    return &__return_addr

int32_t rdx = 0
int32_t var_60_1 = 0
int32_t r9_1 = 0
int64_t var_68 = 0
int32_t var_5c_1 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx_1.d + 1)
        r9_1 = var_5c_1
        rdx = var_60_1
    
    int32_t rax = rdx + rbx_1.d + 1
    var_60_1 = rax
    
    if (rax s> r9_1)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, arg2, (rbx_1.d + 1) * 2)

sub_1409391d0(arg1, &var_68)
int64_t rcx_4 = var_68

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* i = *arg3

for (void* rsi_1 = &i[sx.q(arg3[1].d) * 3]; i != rsi_1; i = &i[3])
    sub_140944e70(arg1)
    var_68 = 0
    var_60_1.q = 0
    sub_1405947f0(&var_68, 5)
    int32_t rax_2 = var_60_1 + 5
    var_60_1 = rax_2
    
    if (rax_2 s> var_5c_1)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, u"Name", 0xa)
    void var_38
    sub_140918d50(arg1, &var_68, sub_140596d10(&var_38, i))
    int64_t rcx_12 = var_68
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    sub_1405947f0(&var_58, 0xe)
    int32_t rax_4 = var_50_1 + 0xe
    var_50_1 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"LoadingPolicy", 0x1c)
    int64_t rax_5 = sx.q(i[2].d)
    wchar16 const* const rdi_1
    
    if (rax_5.d u> 5)
        rdi_1 = nullptr
    else
        switch (rax_5)
            case 0
                rdi_1 = u"Never"
            case 1
                rdi_1 = u"Always"
            case 2
                rdi_1 = u"Editor"
            case 3
                rdi_1 = u"Game"
            case 4
                rdi_1 = u"PropertyNames"
            case 5
                rdi_1 = u"ToolTips"
    
    int64_t var_48 = 0
    int32_t rdx_8 = 0
    int32_t var_40_1 = 0
    int32_t rcx_18 = 0
    int32_t var_3c_1 = 0
    
    if (rdi_1 != 0 && *rdi_1 != 0)
        int64_t rbx_3 = -1
        
        do
            rbx_3 += 1
        while (rdi_1[rbx_3] != 0)
        
        if (rbx_3.d + 1 s> 0)
            sub_1405947f0(&var_48, rbx_3.d + 1)
            rcx_18 = var_3c_1
            rdx_8 = var_40_1
        
        int32_t rax_6 = rbx_3.d + 1 + rdx_8
        int32_t var_40_2 = rax_6
        
        if (rax_6 s> rcx_18)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, rdi_1, (rbx_3.d + 1) * 2)
    
    sub_140918d50(arg1, &var_58, &var_48)
    int64_t rcx_23 = var_58
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    sub_1409399d0(arg1)

return sub_140938f70(arg1)
