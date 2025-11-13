// 函数: sub_140b87fc0
// 地址: 0x140b87fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = 0
int64_t var_70 = 0
int64_t rsi
rsi.b = 1
int64_t r15 = 0
int32_t rdx = 0
int32_t r8 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_78, rbx_1.d + 1)
        r8 = var_70:4.d
        rdx = var_70.d
        r15 = var_78
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_70.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_78)
        r15 = var_78
    
    UnDecorator::getReferenceType(r15, arg2, (rbx_1.d + 1) * 2)

int64_t* var_68
sub_140b75db0(arg1, &var_68, &var_78)

if (r15 != 0)
    sub_140a74f90(r15)

int64_t* rcx_5 = var_68

if (rcx_5 != 0 && rcx_5[1].d == 5)
    int64_t* rax_2 = sub_140b74a70(rcx_5)
    int64_t* i = *rax_2
    
    for (void* r15_3 = &i[sx.q(rax_2[1].d) * 2]; i != r15_3; i = &i[2])
        int64_t* rcx_6 = *i
        
        if (rcx_6 == 0 || rcx_6[1].d != 6)
            void var_40
            int64_t* rax_9 = _vfprintf_p_l(&var_40, 
                The 'Localization Targets' array has invalid contents and was not able ", 
                LocalizationDescriptor")
            int64_t rcx_13 = *arg4
            *arg4 = *rax_9
            *rax_9 = rcx_13
            int64_t rcx_14 = arg4[1]
            arg4[1] = rax_9[1]
            rax_9[1] = rcx_14
            arg4[2].d = rax_9[2].d
            int64_t* var_38
            
            if (var_38 != 0)
                var_38[1].d -= 1
                
                if (var_38[1].d == 1)
                    (**var_38)(var_38)
                    int32_t rax_16 = *(var_38 + 0xc)
                    *(var_38 + 0xc) -= 1
                    
                    if (rax_16 == 1)
                        (*(*var_38 + 8))(var_38, 1)
            
            rsi.b = 0
        else
            int64_t var_58
            __builtin_memset(&var_58, 0, 0x14)
            
            if (sub_140b82330(&var_58, *(**rcx_6)(rcx_6), arg4) == 0)
                rsi.b = 0
            else
                int64_t rbx_3 = sx.q(arg3[1].d)
                int32_t rax_6 = (rbx_3 + 1).d
                arg3[1].d = rax_6
                
                if (rax_6 s> *(arg3 + 0xc))
                    sub_1405a4df0(arg3)
                
                int64_t* rbx_4 = *arg3 + rbx_3 * 0x18
                sub_140596d10(rbx_4, &var_58)
                int32_t var_48
                rbx_4[2].d = var_48
            
            int64_t rcx_11 = var_58
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)

int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp2_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_6 = *var_60
            (*(r8_6 + 8))(var_60, 1, r8_6)

return zx.q(rsi.b)
