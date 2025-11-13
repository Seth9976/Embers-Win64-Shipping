// 函数: sub_140b96520
// 地址: 0x140b96520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142e4a850
arg1[3] = 0
arg1[4].d = 0
sub_140a96170(&arg1[5])
*arg1 = &data_142e837d8
sub_140d3a3a0(&arg1[8], arg2)
arg1[9] = 0
arg1[0xa] = 0

if (sub_140ab3dc0(arg3) == 0)
    sub_14065da90(&arg1[5], arg3)
else if (data_143e1a4a0 == 0)
label_140b9668b:
    
    if (arg2 == 0)
        void var_38
        int64_t* rax_18 = _vfprintf_p_l(&var_38, u"<None>", u"MessageLog")
        int64_t rdx_13 = arg1[5]
        arg1[5] = *rax_18
        *rax_18 = rdx_13
        int64_t rdx_14 = arg1[6]
        arg1[6] = rax_18[1]
        rax_18[1] = rdx_14
        arg1[7].d = rax_18[2].d
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t rbx_3 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    (*(*var_30 + 8))(var_30, zx.q(rbx_3))
    else
        int64_t arg_8 = *(arg2 + 0x18)
        int64_t var_80
        sub_140b63b70(&arg_8, &var_80)
        void var_50
        int64_t* rax_12 = sub_140aae2f0(&var_50, &var_80)
        int64_t rdx_8 = arg1[5]
        arg1[5] = *rax_12
        *rax_12 = rdx_8
        int64_t rdx_9 = arg1[6]
        arg1[6] = rax_12[1]
        rax_12[1] = rdx_9
        arg1[7].d = rax_12[2].d
        int64_t* var_48
        
        if (var_48 != 0)
            var_48[1].d -= 1
            
            if (var_48[1].d == 1)
                (**var_48)(var_48)
                int32_t rbx_2 = *(var_48 + 0xc)
                *(var_48 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*var_48 + 8))(var_48, zx.q(rbx_2))
        
        int64_t rcx_18 = var_80
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        int64_t var_60
        sub_140597da0(&arg1[9], sub_140d21e10(arg2, &var_60, 0))
        int64_t rcx_21 = var_60
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
else
    int64_t* rcx_4 = data_143e1a498
    
    if (rcx_4 == 0)
        goto label_140b9668b
    
    if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
        goto label_140b9668b
    
    if (data_143e1a4a0 != 0)
        rdi = data_143e1a498
    
    int64_t var_98
    (*(*rdi + 0x48))(rdi, &var_98, arg2, 0)
    int64_t rcx_6 = arg1[5]
    arg1[5] = var_98
    int64_t* rdi_1 = arg1[6]
    int64_t var_90
    arg1[6] = var_90
    int32_t var_88
    arg1[7].d = var_88
    var_98 = rcx_6
    int64_t* var_90_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbx_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_1))
    
    if (arg2 != 0)
        int64_t var_70
        sub_140597da0(&arg1[9], sub_140d21e10(arg2, &var_70, 0))
        int64_t rcx_11 = var_70
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)

return arg1
