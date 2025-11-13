// 函数: sub_14063b7f0
// 地址: 0x14063b7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* r14 = arg3
int64_t* rbx = *arg1
int64_t* r15 = arg2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rdx = 0
arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_14061cd70(arg1, 0)
    rdx = 0

uint64_t result = zx.q(r15[1].d)
int32_t rcx_2 = (result - 1).d

if (result.d == 0)
    rcx_2 = 0

int64_t rcx_58

if (rcx_2 s> 0)
    result = zx.q(r14[1].d)
    int32_t rcx_3 = (result - 1).d
    
    if (result.d == 0)
        rcx_3 = 0
    
    if (rcx_3 s> 0)
        int32_t r11_1 = -1
        int32_t arg_8 = 0
        int32_t var_c4_1 = 0xffffffff
        int32_t r14_1 = 0
        int32_t r9 = 0
        int32_t var_c8_1 = 0
        uint64_t r13_1 = 0
        uint64_t var_98 = 0
        int32_t rbx_1 = 0
        int32_t var_8c_1 = 0
        uint64_t r12_1 = 0
        uint64_t var_c0 = 0
        int32_t rdi = 0
        int32_t var_b4_1 = 0
        int32_t r10_1 = 0
        int64_t var_a8 = -1
        int64_t r8 = 0
        int64_t var_d8 = 0
        
        while (true)
            int32_t rax = r15[1].d
            int64_t var_b0_1 = r8
            int32_t rcx_4 = rax - 1
            
            if (rax == 0)
                rcx_4 = 0
            
            int64_t var_88
            int32_t var_7c
            int64_t var_68
            int64_t var_58
            
            if (r14_1 s>= rcx_4)
                int32_t var_cc
                
                if (arg5 != 1)
                    int64_t rbx_6
                    int32_t r15_5
                    
                    if (rbx_1 s> 1)
                        int32_t rdi_7
                        
                        if (rdi == 0)
                            rdi_7 = 0
                        else
                            rdi_7 = rdi - 1
                        
                        int32_t rax_27
                        
                        if (rbx_1 == 0)
                            rax_27 = rbx_1 + 1
                        
                        if (rbx_1 != 0 || rdi_7 == 0)
                            rax_27 = 0
                        
                        var_d8 = 0
                        int32_t rcx_48 = rdi_7 + rax_27
                        
                        if (rbx_1 != 0 || rcx_48 != 0)
                            sub_1405a4c70(&var_d8, rbx_1 + rcx_48, 0)
                            memcpy(var_d8, r13_1, rbx_1 * 2)
                        else
                            var_cc = 0
                        
                        sub_140a20ba0(&var_d8, r12_1, rdi_7)
                        rbx_6 = var_d8
                        rdi = rbx_1
                        r15_5 = var_cc
                        var_d8 = 0
                        int32_t var_d0_2
                        var_d0_2.q = 0
                    else
                        var_88 = 0
                        
                        if (rdi != 0)
                            sub_1405a4c70(&var_88, rdi, 0)
                            rbx_6 = var_88
                            memcpy(rbx_6, r12_1, rdi * 2)
                            r15_5 = var_7c
                        else
                            r15_5 = 0
                            rbx_6 = 0
                    
                    int64_t r14_5 = sx.q(arg1[1].d)
                    int32_t rax_28 = (r14_5 + 1).d
                    arg1[1].d = rax_28
                    
                    if (rax_28 s> *(arg1 + 0xc))
                        sub_1405a4f90(arg1)
                    
                    result = (r14_5 << 4) + *arg1
                    *result = rbx_6
                    *(result + 0xc) = r15_5
                    r15 = arg2
                    *(result + 8) = rdi
                else
                    if (rbx_1 s> 1)
                        int32_t rdi_5
                        
                        if (rdi == 0)
                            rdi_5 = 0
                        else
                            rdi_5 = rdi - 1
                        
                        int32_t rax_19
                        
                        if (rbx_1 == 0)
                            rax_19 = rbx_1 + 1
                        
                        if (rbx_1 != 0 || rdi_5 == 0)
                            rax_19 = 0
                        
                        var_d8 = 0
                        int32_t rcx_32 = rax_19 + rdi_5
                        
                        if (rbx_1 != 0 || rcx_32 != 0)
                            sub_1405a4c70(&var_d8, rbx_1 + rcx_32, 0)
                            memcpy(var_d8, r13_1, rbx_1 * 2)
                        else
                            var_cc = 0
                        
                        sub_140a20ba0(&var_d8, r12_1, rdi_5)
                        var_a8 = var_d8
                        int32_t var_a0_2 = rbx_1
                        int32_t var_9c_2 = var_cc
                        int32_t var_d0_1
                        var_d0_1.q = 0
                        var_d8 = 0
                    else
                        int32_t var_a0_1 = rdi
                        var_a8 = 0
                        
                        if (rdi != 0)
                            sub_1405a4c70(&var_a8, rdi, 0)
                            memcpy(var_a8, r12_1, rdi * 2)
                        else
                            int32_t var_9c_1 = 0
                    
                    int64_t* rax_24 = sub_140a35c80(sub_140a35fd0(&var_a8, &var_68), &var_58)
                    int64_t rdi_6 = sx.q(arg1[1].d)
                    int32_t rcx_38 = (rdi_6 + 1).d
                    arg1[1].d = rcx_38
                    
                    if (rcx_38 s> *(arg1 + 0xc))
                        sub_1405a4f90(arg1)
                    
                    int64_t* rcx_42 = (rdi_6 << 4) + *arg1
                    *rcx_42 = 0
                    *rcx_42 = *rax_24
                    *rax_24 = 0
                    rcx_42[1].d = rax_24[1].d
                    result = zx.q(*(rax_24 + 0xc))
                    *(rcx_42 + 0xc) = result.d
                    rax_24[1] = 0
                    int64_t rcx_43 = var_58
                    
                    if (rcx_43 != 0)
                        result = sub_140a74f90(rcx_43)
                    
                    int64_t rcx_44 = var_68
                    
                    if (rcx_44 != 0)
                        result = sub_140a74f90(rcx_44)
                    
                    int64_t rcx_45 = var_a8
                    
                    if (rcx_45 != 0)
                        result = sub_140a74f90(rcx_45)
                int32_t var_90_3 = 0
                
                if (var_8c_1 != 0)
                    result = sub_1405947f0(&var_98, 0)
                    r13_1 = var_98
                
                int32_t var_b8_4 = 0
                
                if (var_b4_1 != 0)
                    result = sub_1405947f0(&var_c0, 0)
                    r12_1 = var_c0
                
                if (r12_1 != 0)
                    result = sub_140a74f90(r12_1)
                
                if (r13_1 != 0)
                    result = sub_140a74f90(r13_1)
                
                r14 = arg3
                break
            
            int64_t rcx_5 = *r15
            int16_t r15_1 = *(rcx_5 + (r8 << 1))
            
            if (r15_1 != *(*arg3 + (rdx << 1)))
                if (r11_1 s>= 0)
                    r8 = var_a8
                    var_b0_1 = r8
                    r14_1 = r11_1
                    var_c4_1 = 0xffffffff
                    rdi = 0
                    var_a8 = -1
                    arg_8 = r11_1
                    int32_t var_b8_3 = 0
                    
                    if (r10_1 != 0)
                        sub_1405947f0(&var_c0, 0)
                        rdi = var_b8_3
                        r12_1 = var_c0
                        r8 = var_b0_1
                        rcx_5 = *arg2
                    
                    var_c8_1 = 0
                    var_d8 = 0
                
                int16_t r15_4 = *(rcx_5 + (r8 << 1))
                
                if (r15_4 != 0)
                    int32_t r14_4 = rbx_1 - 1
                    
                    if (rbx_1 s<= 0)
                        r14_4 = 0
                    
                    int32_t rbx_3
                    rbx_3.b = rbx_1 s<= 0
                    rbx_1 += rbx_3 + 1
                    
                    if (rbx_1 s> var_8c_1)
                        sub_140594770(&var_98)
                        r8 = var_b0_1
                        r13_1 = var_98
                    
                    int64_t rax_18 = sx.q(r14_4)
                    *(r13_1 + (rax_18 << 1)) = r15_4
                    *(r13_1 + (rax_18 << 1) + 2) = 0
                    r14_1 = arg_8
            else
                int64_t rax_3 = r8
                
                if (rdx != 0)
                    rax_3 = var_a8
                
                var_a8 = rax_3
                int32_t rax_4 = r14_1
                
                if (rdx != 0)
                    rax_4 = r11_1
                
                var_c4_1 = rax_4
                
                if (r15_1 != 0)
                    int32_t r14_2 = rdi - 1
                    
                    if (rdi s<= 0)
                        r14_2 = 0
                    
                    int32_t rdi_1
                    rdi_1.b = rdi s<= 0
                    rdi += rdi_1 + 1
                    
                    if (rdi s> r10_1)
                        sub_140594770(&var_c0)
                        r8 = var_b0_1
                        r9 = var_c8_1
                        r12_1 = var_c0
                    
                    rdx = var_d8
                    int64_t rax_5 = sx.q(r14_2)
                    r14_1 = arg_8
                    *(r12_1 + (rax_5 << 1)) = r15_1
                    *(r12_1 + (rax_5 << 1) + 2) = 0
                
                int64_t* r15_2 = arg3
                int32_t rax_6 = r15_2[1].d
                int32_t rcx_7 = rax_6 - 2
                
                if (rax_6 == 0)
                    rcx_7 = -1
                
                if (r9 != rcx_7)
                    var_c8_1 = r9 + 1
                    var_d8 = rdx + 1
                else
                    uint64_t r14_3 = 0
                    var_c4_1 = 0xffffffff
                    var_c8_1 = 0
                    var_d8 = 0
                    var_a8 = -1
                    
                    if (arg5 != 1)
                        uint64_t var_78 = 0
                        int32_t r15_3
                        
                        if (rbx_1 != 0)
                            sub_1405a4c70(&var_78, rbx_1, 0)
                            r14_3 = var_78
                            memcpy(r14_3, r13_1, rbx_1 * 2)
                            int32_t var_6c
                            r15_3 = var_6c
                        else
                            r15_3 = 0
                        
                        int64_t rdi_4 = sx.q(arg1[1].d)
                        int32_t rax_12 = (rdi_4 + 1).d
                        arg1[1].d = rax_12
                        
                        if (rax_12 s> *(arg1 + 0xc))
                            sub_1405a4f90(arg1)
                        
                        int64_t* rax_15 = (rdi_4 << 4) + *arg1
                        *rax_15 = r14_3
                        *(rax_15 + 0xc) = r15_3
                        r15_2 = arg3
                        var_78 = 0
                        int32_t var_70_1
                        var_70_1.q = 0
                        rax_15[1].d = rbx_1
                    else
                        var_88 = 0
                        int32_t var_80_1 = rbx_1
                        
                        if (rbx_1 != 0)
                            sub_1405a4c70(&var_88, rbx_1, 0)
                            memcpy(var_88, r13_1, rbx_1 * 2)
                        else
                            var_7c = 0
                        
                        int64_t* rax_8 = sub_140a35c80(sub_140a35fd0(&var_88, &var_58), &var_68)
                        int64_t rdi_3 = sx.q(arg1[1].d)
                        int32_t rcx_12 = (rdi_3 + 1).d
                        arg1[1].d = rcx_12
                        
                        if (rcx_12 s> *(arg1 + 0xc))
                            sub_1405a4f90(arg1)
                        
                        int64_t* rcx_16 = (rdi_3 << 4) + *arg1
                        *rcx_16 = 0
                        *rcx_16 = *rax_8
                        *rax_8 = 0
                        rcx_16[1].d = rax_8[1].d
                        *(rcx_16 + 0xc) = *(rax_8 + 0xc)
                        rax_8[1] = 0
                        int64_t rcx_17 = var_68
                        
                        if (rcx_17 != 0)
                            sub_140a74f90(rcx_17)
                        
                        int64_t rcx_18 = var_58
                        
                        if (rcx_18 != 0)
                            sub_140a74f90(rcx_18)
                        
                        int64_t rcx_19 = var_88
                        
                        if (rcx_19 != 0)
                            sub_140a74f90(rcx_19)
                    
                    if (arg4 s> 0 && arg1[1].d s>= arg4)
                        if (r12_1 != 0)
                            sub_140a74f90(r12_1)
                        
                        if (r13_1 != 0)
                            sub_140a74f90(r13_1)
                        
                        result = arg2
                        int64_t rcx_29 = *result
                        
                        if (rcx_29 != 0)
                            result = sub_140a74f90(rcx_29)
                        
                        rcx_58 = *r15_2
                        goto label_14063bf23
                    
                    rdi = 0
                    int32_t var_b8_2 = 0
                    
                    if (var_b4_1 != 0)
                        sub_1405947f0(&var_c0, 0)
                        rdi = var_b8_2
                        r12_1 = var_c0
                    
                    rbx_1 = 0
                    int32_t var_90_1 = 0
                    
                    if (var_8c_1 != 0)
                        sub_1405947f0(&var_98, 0)
                        rbx_1 = var_90_1
                        r13_1 = var_98
                    
                    r8 = var_b0_1
                    r14_1 = arg_8
            
            rdx = var_d8
            r14_1 += 1
            r9 = var_c8_1
            r8 += 1
            r10_1 = var_b4_1
            r11_1 = var_c4_1
            r15 = arg2
            arg_8 = r14_1

int64_t rcx_57 = *r15

if (rcx_57 != 0)
    result = sub_140a74f90(rcx_57)

rcx_58 = *r14
label_14063bf23:

if (rcx_58 == 0)
    return result

return sub_140a74f90(rcx_58)
