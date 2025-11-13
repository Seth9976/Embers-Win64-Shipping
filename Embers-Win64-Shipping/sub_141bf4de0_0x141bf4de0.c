// 函数: sub_141bf4de0
// 地址: 0x141bf4de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int32_t arg_8 = 0
uint32_t result

if (arg1[0x1bb] == 0)
label_141bf4fab:
    void var_58
    
    if (&arg1[0x1bb] != &var_58)
        arg1[0x1bb] = 0
        int64_t* rcx_13 = arg1[0x1bc]
        arg1[0x1bc] = 0
        
        if (rcx_13 != 0)
            int32_t temp1_1 = *(rcx_13 + 0xc)
            *(rcx_13 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_13 + 8))(rcx_13, 1)
    
    int64_t var_78 = *arg2
    void* rax_14 = arg2[1]
    void* var_70_1 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    void var_68
    result = sub_140f5d9a0(arg1[0x1b9], (*(*arg1 + 0x2c0))(arg1, &var_68, &var_78))
    int64_t* var_60
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            result = (**var_60)(var_60)
            int32_t temp4_1 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*var_60 + 8))(var_60, 1)
else
    void* rax_1 = arg1[0x1bc]
    
    if (rax_1 == 0 || *(rax_1 + 8) s<= 0)
        goto label_141bf4fab
    
    if (sub_141b28ce0(arg1 + 0xd74) == 0)
        goto label_141bf4fab
    
    int64_t* rax_3 = *arg2
    uint64_t r14_1 = 0
    uint64_t var_a8
    uint64_t var_88
    uint64_t* rcx_3
    int32_t rbx_1
    
    if (rax_3 == 0)
        int64_t var_80_1 = 0
        rcx_3 = &var_88
        rbx_1 = 2
    else
        int32_t rbx = rax_3[1].d
        int64_t r12_1 = *rax_3
        var_a8 = 0
        int32_t var_a0_1 = rbx
        
        if (rbx != 0)
            sub_1405a4c70(&var_a8, rbx, 0)
            r14_1 = var_a8
            memcpy(r14_1, r12_1, rbx * 2)
        else
            int32_t var_9c_1 = 0
        
        rcx_3 = &var_a8
        rbx_1 = 1
    
    *rcx_3 = 0
    int32_t var_90_1 = rcx_3[1].d
    int32_t var_8c_1 = *(rcx_3 + 0xc)
    rcx_3[1] = 0
    uint64_t var_98 = r14_1
    
    if ((rbx_1.b & 2) != 0)
        uint64_t rcx_4 = var_88
        rbx_1 &= 0xfffffffd
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    if ((rbx_1.b & 1) != 0)
        uint64_t rcx_5 = var_a8
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    int64_t* rbx_2 = arg1[0x1bc]
    
    if (rbx_2 != 0)
        int32_t rax_6 = rbx_2[1].d
        
        if (rax_6 != 0)
            rbx_2[1].d = rax_6 + 1
            rax_6.b = 1
        
        if (rax_6.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            rdi = arg1[0x1bb]
    
    void var_48
    result = sub_140f8d4f0(rdi, sub_140aae420(&var_48, &var_98))
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* var_40
    
    if (var_40 != 0)
        result = var_40[1].d
        var_40[1].d -= 1
        
        if (result == 1)
            result = (**var_40)(var_40)
            int32_t rdi_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_40 + 8))(var_40, zx.q(rdi_1))
    
    uint64_t rcx_12 = var_98
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)

int64_t* rbx_6 = arg2[1]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        result = (**rbx_6)(rbx_6)
        int32_t temp5_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_6 + 8))(rbx_6, 1)

return result
