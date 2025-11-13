// 函数: sub_141dacf80
// 地址: 0x141dacf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x60]
int64_t r12 = arg1[0x5f]

if (rbx != 0)
    rbx[1].d += 1

int64_t var_78 = *arg2
void* rax_1 = arg2[1]
void* var_70 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141daee30(arg1, 1, 0, &var_78)
int32_t rax_3

if (arg4 != 0)
    int64_t* rcx = *arg3
    rax_3 = (*(*rcx + 0x40))(rcx)

int32_t result

if (arg4 == 0 || rax_3 != 0xc8)
    int64_t var_68 = *arg3
    void* rax_11 = arg3[1]
    void* var_60_1 = rax_11
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
    
    int64_t var_58 = r12
    int64_t* var_50_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    result = sub_141daeec0(arg1, &var_58, &var_68, 0, arg5)
    
    if (result.b == 0)
        result = (*(*arg1 + 0x198))(arg1)
        *(arg1 + 0x29c) = 1
else
    int64_t* rcx_1 = *arg3
    int64_t var_88
    (*(*rcx_1 + 0x48))(rcx_1, &var_88)
    void** const rax_5 = &data_14323a148
    int64_t r12_1 = var_88
    void** const var_48 = &data_14323a148
    int64_t var_40 = 0
    int32_t var_38_1 = 0
    uint64_t var_98 = 0
    int32_t var_80
    int32_t var_90_1 = var_80
    
    if (var_80 != 0)
        sub_1405a4c70(&var_98, var_80, 0)
        memcpy(var_98, r12_1, var_80 * 2)
        rax_5 = var_48
    else
        int32_t var_8c_1 = 0
    
    char rax_6 = rax_5[5](&var_48, &var_98)
    uint64_t rcx_5 = var_98
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    if (rax_6 == 0)
        int64_t rcx_6 = var_40
        var_48 = &data_14323a148
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = var_88
        var_48 = &data_142e1f570
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp6_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        sub_140669d70(arg2)
        return sub_140669db0(arg3)
    
    if (&arg1[0x40] != &var_40)
        int32_t r8_2 = *(arg1 + 0x20c)
        int64_t r13_1 = var_40
        arg1[0x41].d = var_38_1
        
        if (var_38_1 != 0 || r8_2 != 0)
            sub_1405a4c70(&arg1[0x40], var_38_1, r8_2)
            memcpy(arg1[0x40], r13_1, var_38_1 * 2)
        else
            *(arg1 + 0x20c) = var_38_1
    
    (*(*arg1 + 0x160))(arg1, &arg1[0x40])
    int64_t rcx_15 = var_40
    var_48 = &data_14323a148
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int64_t rcx_16 = var_88
    result = 0x42e1f570
    var_48 = &data_142e1f570
    
    if (rcx_16 != 0)
        result = sub_140a74f90(rcx_16)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rdi_1 = arg3[1]

if (rdi_1 != 0)
    result = rdi_1[1].d
    rdi_1[1].d -= 1
    
    if (result == 1)
        result = (**rdi_1)(rdi_1)
        int32_t rbx_2 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rbx_2 == 1)
            return (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))

return result
