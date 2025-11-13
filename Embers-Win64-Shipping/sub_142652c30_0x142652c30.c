// 函数: sub_142652c30
// 地址: 0x142652c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = data_143f714b0
sub_140b34200("PathfindingSync", r13)

if (sub_140d3e110(arg3 + 0x40) == 0)
    sub_140d3a3a0(arg3 + 0x40, sub_142657070(arg1, 0))

*arg2 = 0
arg2[1] = 0
arg2[2].d = 1

if (sub_140d3e110(arg3 + 0x40) != 0)
    int64_t rax_3 = sub_140d3c6e0(arg3 + 0x40)
    int64_t* rcx_12
    
    if (arg4 != 0)
        void var_40
        int64_t* rax_13 = (*(rax_3 + 0x2c0))(&var_40, arg3 + 0x58, arg3)
        int64_t r12_2 = *rax_13
        int64_t* rcx_14 = rax_13[1]
        rax_13[1] = 0
        *rax_13 = 0
        int32_t rax_14 = rax_13[2].d
        int64_t var_70 = r12_2
        int64_t* var_68 = rcx_14
        int64_t* var_38
        
        if (var_38 != 0)
            var_38[1].d -= 1
            
            if (var_38[1].d == 1)
                (**var_38)(var_38)
                int32_t rax_17 = *(var_38 + 0xc)
                *(var_38 + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*(*var_38 + 8))(var_38, 1)
        
        if (arg2 != &var_70)
            *arg2 = r12_2
            var_70 = 0
            sub_1405aeff0(&arg2[1], &var_68)
        
        int64_t* rcx_18 = var_68
        arg2[2].d = rax_14
        
        if (rcx_18 != 0)
            rcx_18[1].d -= 1
            
            if (rcx_18[1].d == 1)
                int64_t* rbx_4 = var_68
                (**rbx_4)(rbx_4)
                int32_t rdi_2 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    rcx_12 = var_68
                    (*(*rcx_12 + 8))(rcx_12, 1)
    else
        void var_58
        int64_t* rax_4 = (*(rax_3 + 0x2b8))(&var_58, arg3 + 0x58, arg3)
        int64_t r12_1 = *rax_4
        int64_t* rcx_6 = rax_4[1]
        rax_4[1] = 0
        *rax_4 = 0
        int32_t rax_5 = rax_4[2].d
        int64_t var_88 = r12_1
        int64_t* var_80 = rcx_6
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t rax_8 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*(*var_50 + 8))(var_50, 1)
        
        if (arg2 != &var_88)
            *arg2 = r12_1
            var_88 = 0
            sub_1405aeff0(&arg2[1], &var_80)
        
        int64_t* rcx_10 = var_80
        arg2[2].d = rax_5
        
        if (rcx_10 != 0)
            rcx_10[1].d -= 1
            
            if (rcx_10[1].d == 1)
                int64_t* rbx_2 = var_80
                (**rbx_2)(rbx_2)
                int32_t rdi_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    rcx_12 = var_80
                    (*(*rcx_12 + 8))(rcx_12, 1)

sub_140b38680("PathfindingSync", r13)
sub_142645530(arg3)
return arg2
