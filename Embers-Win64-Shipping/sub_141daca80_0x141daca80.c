// 函数: sub_141daca80
// 地址: 0x141daca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = *arg2
int64_t* r15 = arg3
void* rax_1 = arg2[1]
void* var_50 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, 2, 4, &var_58)
int32_t rax_3

if (arg4 != 0)
    int64_t* rcx = *r15
    rax_3 = (*(*rcx + 0x40))(rcx)

int32_t result

if (arg4 == 0 || rax_3 != 0xc8)
    int64_t var_78_1 = 0
    int64_t var_70_1 = 0
    void** const var_80 = &data_142dd6130
    var_78_1.d = 6
    var_70_1.b = 0
    
    if (arg1[0x55].d != 0)
        int64_t* rcx_34 = arg1[0x54]
        
        if (rcx_34 != 0 && (*(*rcx_34 + 0x28))(rcx_34) != 0)
            int64_t* rcx_35
            
            if (arg1[0x55].d == 0)
                rcx_35 = nullptr
            else
                rcx_35 = arg1[0x54]
            
            (*(*rcx_35 + 0x50))(rcx_35, &var_80)
    
    void var_48
    
    if (&var_48 != &arg1[0x54] && arg1[0x55].d != 0)
        int64_t* rcx_36 = arg1[0x54]
        
        if (rcx_36 != 0)
            (*(*rcx_36 + 0x38))(rcx_36, 0)
            int64_t rcx_37 = arg1[0x54]
            
            if (rcx_37 != 0)
                arg1[0x54] = sub_140a84c80(rcx_37, 0, 0)
            
            arg1[0x55].d = 0
    
    result = (*(*arg1 + 0x198))(arg1)
    *(arg1 + 0x29c) = 1
else
    int64_t* rcx_1 = *r15
    int64_t var_a8
    (*(*rcx_1 + 0x48))(rcx_1, &var_a8)
    int64_t r14_1 = var_a8
    int64_t var_100_1 = 0
    void** const rax_5 = &data_14323a1a0
    void** const var_108 = &data_14323a1a0
    int32_t var_f8_1 = 0
    int64_t var_f0 = 0
    int32_t var_e8_1 = 0
    int64_t var_d8 = 0
    int32_t var_d0_1 = 0
    uint64_t var_c8 = 0
    int32_t var_a0
    int32_t var_c0_1 = var_a0
    
    if (var_a0 != 0)
        sub_1405a4c70(&var_c8, var_a0, 0)
        memcpy(var_c8, r14_1, var_a0 * 2)
        rax_5 = var_108
    else
        int32_t var_bc_1 = 0
    
    char rax_6 = rax_5[5](&var_108, &var_c8)
    uint64_t rcx_5 = var_c8
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    if (rax_6 == 0)
        int64_t rcx_6 = var_d8
        var_108 = &data_14323a1a0
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = var_f0
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        if (var_100_1 != 0)
            sub_140a74f90(var_100_1)
        
        int64_t rcx_9 = var_a8
        var_108 = &data_142e1f570
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        sub_140669d70(arg2)
        return sub_140669db0(r15)
    
    int16_t* r15_1 = nullptr
    uint64_t var_b8 = 0
    int16_t* r13_1
    
    if (var_f8_1 != 0)
        sub_1405a4c70(&var_b8, var_f8_1, 0)
        r15_1 = var_b8
        memcpy(r15_1, var_100_1, var_f8_1 * 2)
        r13_1 = r15_1
    else
        r13_1 = nullptr
    
    int64_t var_68
    
    if (&arg1[0x51] != &var_f0)
        int32_t r8_4 = *(arg1 + 0x294)
        var_68 = var_f0
        arg1[0x52].d = var_e8_1
        
        if (var_e8_1 != 0 || r8_4 != 0)
            sub_1405a4c70(&arg1[0x51], var_e8_1, r8_4)
            memcpy(arg1[0x51], var_68, var_e8_1 * 2)
        else
            *(arg1 + 0x294) = 0
    
    int16_t* const rcx_16 = &data_142d40450
    
    if (var_f8_1 != 0)
        rcx_16 = r13_1
    
    int32_t rax_8
    rax_8.b = sub_140a54510(rcx_16, u"Live") == 0
    *(arg1 + 0x25d) = rax_8.b
    
    if (&arg1[0x4c] != &var_d8)
        int64_t r12_2 = var_d8
        int32_t r8_7 = *(arg1 + 0x26c)
        arg1[0x4d].d = var_d0_1
        
        if (var_d0_1 != 0 || r8_7 != 0)
            sub_1405a4c70(&arg1[0x4c], var_d0_1, r8_7)
            memcpy(arg1[0x4c], r12_2, var_d0_1 * 2)
        else
            *(arg1 + 0x26c) = 0
    
    int32_t var_dc
    arg1[0x4e].d = var_dc
    int32_t var_e0
    *(arg1 + 0x274) = var_e0
    
    if (var_dc == 0)
        int64_t var_90_1 = 0
        int64_t var_88_1 = 0
        void** const var_98 = &data_142dd6130
        var_90_1.d = 6
        var_88_1.b = 0
        
        if (arg1[0x55].d != 0)
            int64_t* rcx_20 = arg1[0x54]
            
            if (rcx_20 != 0 && (*(*rcx_20 + 0x28))(rcx_20) != 0)
                int64_t* rcx_21
                
                if (arg1[0x55].d == 0)
                    rcx_21 = nullptr
                else
                    rcx_21 = arg1[0x54]
                
                (*(*rcx_21 + 0x50))(rcx_21, &var_98)
        
        if (&var_68 != &arg1[0x54] && arg1[0x55].d != 0)
            int64_t* rcx_22 = arg1[0x54]
            
            if (rcx_22 != 0)
                (*(*rcx_22 + 0x38))(rcx_22, 0)
                int64_t rcx_23 = arg1[0x54]
                
                if (rcx_23 != 0)
                    arg1[0x54] = sub_140a84c80(rcx_23, 0, 0)
                
                arg1[0x55].d = 0
        
        (*(*arg1 + 0x198))(arg1)
        *(arg1 + 0x29c) = 1
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    int64_t rcx_26 = var_d8
    var_108 = &data_14323a1a0
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int64_t rcx_27 = var_f0
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    if (var_100_1 != 0)
        sub_140a74f90(var_100_1)
    
    int64_t rcx_29 = var_a8
    result = 0x42e1f570
    var_108 = &data_142e1f570
    
    if (rcx_29 != 0)
        result = sub_140a74f90(rcx_29)
    
    r15 = arg3

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = r15[1]

if (rbx_3 != 0)
    result = rbx_3[1].d
    rbx_3[1].d -= 1
    
    if (result == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rdi_6 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_6 == 1)
            return (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_6))

return result
