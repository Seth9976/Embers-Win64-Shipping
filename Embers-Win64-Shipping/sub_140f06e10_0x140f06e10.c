// 函数: sub_140f06e10
// 地址: 0x140f06e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*arg2)
int64_t r15 = sx.q(arg2[1])
int32_t arg_20 = r15.d

if (result.d s< 0 || result.d s>= arg1[4].d)
    result.b = 0
    return result

int64_t rbx
int64_t arg_8 = rbx
int64_t* r12_1 = result * 0x70 + arg1[3]
int64_t* rdi = *r12_1

if (arg3 != 0)
    int32_t rsi_1 = rdi[1].d
    
    if (rsi_1 != 0)
        rdi[1].d = rsi_1 + 1
        
        if (rsi_1 + 1 s> *(rdi + 0xc))
            sub_140594770(rdi)
        
        rbx = r15 * 2
        int64_t rdx_3 = *rdi + rbx
        memmove(rdx_3 + 2, rdx_3, (rsi_1 - r15.d) * 2)
        *(rbx + *rdi) = arg3
    else
        rdi[1].d = 2
        
        if (*(rdi + 0xc) s< 2)
            sub_140594770(rdi)
        
        **rdi = arg3
        *(*rdi + 2) = 0

r12_1[0xd].b |= 7
rbx.b = 0
int32_t i = 0

if (r12_1[6].d s> 0)
    result = &r12_1[5]
    int64_t r14_1 = 0
    
    do
        int64_t* rsi_4 = *result + r14_1
        int64_t* rcx_3 = *rsi_4
        int64_t var_b8
        (*(*rcx_3 + 8))(rcx_3, &var_b8)
        int64_t rax_3 = var_b8
        char arg_10
        
        if (r15.d s< rax_3.d || r15.d s>= var_b8:4.d)
            if (i == r12_1[6].d - 1)
                if (rbx.b != 0)
                    goto label_140f071c1
                
                goto label_140f06f39
            
            if (rbx.b != 0)
            label_140f071c1:
                int32_t rcx_26 = (rax_3 + 1).d
                arg_10.q = rax_3
                
                if (rcx_26 s<= 0)
                    rcx_26 = 0
                
                int32_t rax_31 = arg4 + 1
                arg_10.d = rcx_26
                int64_t* rcx_27 = *rsi_4
                
                if (rax_31 s<= 0)
                    rax_31 = 0
                
                arg4 = rax_31
                (*(*rcx_27 + 0x10))(rcx_27, &arg_10)
        else
        label_140f06f39:
            int64_t* rbx_1 = rsi_4[1]
            int64_t* rcx_6 = *rsi_4
            arg_10 = 1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            char r15_1 = (*(*rcx_6 + 0x88))(rcx_6) & 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    int64_t rdx_5 = *rbx_1
                    (*rdx_5)(rbx_1, rdx_5)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (r15_1 == 0)
                r15 = zx.q(arg_20)
                int64_t r10_1 = *(*arg1 + 0x30)
                int32_t rax_12 = var_b8.d
                int64_t* rbx_4
                int64_t var_b0
                
                if (r15.d != rax_12)
                    int32_t rax_24 = var_b8:4.d
                    int32_t var_68 = rax_24
                    int32_t var_64_1 = rax_24 + 1
                    int64_t var_50
                    r10_1(arg1, &var_50, r12_1, &var_68)
                    var_b0 = var_50
                    int64_t* var_48
                    
                    if (var_48 != 0)
                        var_48[1].d += 1
                    
                    i += 1
                    int64_t var_a0_1
                    __builtin_memset(&var_a0_1, 0, 0x20)
                    r14_1 += 0x30
                    sub_140f068f0(&r12_1[5], &var_b0, i)
                    int64_t var_90_1
                    
                    if (var_90_1 != 0)
                        sub_140a74f90(var_90_1)
                    
                    int64_t rcx_23 = var_a0_1
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                    
                    if (var_48 != 0)
                        var_48[1].d -= 1
                        
                        if (var_48[1].d == 1)
                            (**var_48)(var_48)
                            int32_t temp4_1 = *(var_48 + 0xc)
                            *(var_48 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*var_48 + 8))(var_48, 1)
                    
                    rbx_4 = var_48
                else
                    int32_t var_78 = rax_12
                    int32_t var_74_1 = rax_12 + 1
                    int64_t var_60
                    r10_1(arg1, &var_60, r12_1, &var_78)
                    int64_t* rcx_12 = *rsi_4
                    int32_t var_70 = var_b8.d + 1
                    int32_t var_6c_1 = var_b8:4.d + 1
                    (*(*rcx_12 + 0x10))(rcx_12, &var_70)
                    var_b0 = var_60
                    int64_t* var_58
                    
                    if (var_58 != 0)
                        var_58[1].d += 1
                    
                    int64_t var_a0
                    __builtin_memset(&var_a0, 0, 0x20)
                    sub_140f068f0(&r12_1[5], &var_b0, i)
                    i += 1
                    r14_1 += 0x30
                    int64_t var_90
                    
                    if (var_90 != 0)
                        sub_140a74f90(var_90)
                    
                    int64_t rcx_15 = var_a0
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                    
                    if (var_58 != 0)
                        var_58[1].d -= 1
                        
                        if (var_58[1].d == 1)
                            (**var_58)(var_58)
                            int32_t temp5_1 = *(var_58 + 0xc)
                            *(var_58 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*var_58 + 8))(var_58, 1)
                    
                    rbx_4 = var_58
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t temp7_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
            else
                int64_t* rcx_9 = *rsi_4
                int32_t var_80 = var_b8.d
                int32_t var_7c_1 = var_b8:4.d + 1
                (*(*rcx_9 + 0x10))(rcx_9, &var_80)
                r15 = zx.q(arg_20)
            
            rbx = zx.q(arg_10)
        i += 1
        result = &r12_1[5]
        r14_1 += 0x30
    while (i s< r12_1[6].d)

arg1[0x11].b |= 1
result.b = 1
return result
