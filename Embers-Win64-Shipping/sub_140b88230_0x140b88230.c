// 函数: sub_140b88230
// 地址: 0x140b88230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = 0
int64_t var_100 = 0
int64_t rdi
rdi.b = 1
int64_t r15 = 0
int32_t rdx = 0
int32_t r8 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_108, rbx_1.d + 1)
        r8 = var_100:4.d
        rdx = var_100.d
        r15 = var_108
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_100.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_108)
        r15 = var_108
    
    UnDecorator::getReferenceType(r15, arg2, (rbx_1.d + 1) * 2)

int64_t* var_58
sub_140b75db0(arg1, &var_58, &var_108)

if (r15 != 0)
    sub_140a74f90(r15)

int64_t* rcx_5 = var_58

if (rcx_5 != 0 && rcx_5[1].d == 5)
    int64_t* rax_2 = sub_140b74a70(rcx_5)
    int32_t i = 0
    
    if (rax_2[1].d s> 0)
        int64_t* r15_1 = nullptr
        
        do
            int64_t* rcx_6 = *(r15_1 + *rax_2)
            
            if (rcx_6 == 0 || rcx_6[1].d != 6)
                void var_48
                int64_t* rax_9 = _vfprintf_p_l(&var_48, 
                    The 'Modules' array has invalid contents and was not able to be loaded.", 
                    ModuleDescriptor")
                int64_t rcx_15 = *arg4
                *arg4 = *rax_9
                *rax_9 = rcx_15
                int64_t rcx_16 = arg4[1]
                arg4[1] = rax_9[1]
                rax_9[1] = rcx_16
                arg4[2].d = rax_9[2].d
                int64_t* var_40
                
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        (**var_40)(var_40)
                        int32_t rax_16 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (rax_16 == 1)
                            (*(*var_40 + 8))(var_40, 1)
                
                rdi.b = 0
            else
                int32_t var_f0_1 = 0
                int32_t var_ec_1 = 6
                int64_t var_e8
                __builtin_memset(&var_e8, 0, 0x90)
                int64_t var_f8 = 0
                
                if (sub_140b82a40(&var_f8, *(**rcx_6)(rcx_6), arg4) == 0)
                    rdi.b = 0
                    sub_140b78820(&var_f8)
                else
                    int64_t rbx_3 = sx.q(arg3[1].d)
                    int32_t rax_7 = (rbx_3 + 1).d
                    arg3[1].d = rax_7
                    
                    if (rax_7 s> *(arg3 + 0xc))
                        sub_140775640(arg3)
                    
                    sub_140b77330(rbx_3 * 0xa0 + *arg3, &var_f8)
                    sub_140b78820(&var_f8)
            
            i += 1
            r15_1 = &r15_1[2]
        while (i s< rax_2[1].d)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp2_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_6 = *var_50
            (*(r8_6 + 8))(var_50, 1, r8_6)

return zx.q(rdi.b)
