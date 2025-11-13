// 函数: sub_140f87bb0
// 地址: 0x140f87bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
uint64_t rbp
rbp.b = 0
int32_t arg_8 = 0
char rax_1 = (*(*rcx + 8))(rcx)
void* rcx_1 = arg1[9]
char var_88 = rax_1
char var_87 = 1
int64_t var_80 = 0
int32_t var_78 = 0
sub_140f15b10(rcx_1, &var_88)
sub_140745b20(&var_80)

if (arg2 == 0)
label_140f87d0b:
    int64_t* rcx_12 = arg1[3]
    
    if ((*(*rcx_12 + 0x30))(rcx_12) != 0 || rax_1 != arg1[0xaf].b)
        int64_t* var_68
        int64_t* rdx_6
        
        if (arg2 == 0)
            int64_t* rcx_13 = arg1[3]
            int64_t r8_1 = arg1[9]
            int64_t var_98 = 0
            int64_t var_90_1 = 0
            (*(*rcx_13 + 0x10))(rcx_13, &var_98, r8_1)
            void var_58
            sub_140aae2f0(&var_58, &var_98)
            int64_t rcx_15 = var_98
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            rdx_6 = &var_58
            rbp = 2
        else
            int64_t var_70 = *arg2
            int64_t* rax_17 = arg2[1]
            var_68 = rax_17
            
            if (rax_17 != 0)
                rax_17[1].d += 1
            
            rdx_6 = &var_70
            int32_t var_60_1 = arg2[2].d
            rbp = 1
        
        sub_140f74d00(arg1, rdx_6)
        
        if ((rbp.b & 2) != 0)
            rbp = zx.q(rbp.d) & 0xfffffffd
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t rax_23 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (rax_23 == 1)
                        (*(*var_50 + 8))(var_50, 1)
        
        if ((rbp.b & 1) != 0 && var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t rsi_1 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    (*(*var_68 + 8))(var_68, zx.q(rsi_1))
        
        rbp.b = 1
else
    if (arg3 != 0)
    label_140f87c69:
        rbp = zx.q(sub_140f8b290(arg1, arg2, 1))
    else
        if (sub_140ab26b0(&arg1[0xac], arg2) != 0)
            goto label_140f87d0b
        
        if (sub_140ab3cc0(&arg1[0xac], arg2) == 0)
            goto label_140f87c69
    
    void var_40
    int64_t* rax_5 = sub_140a97f80(&var_40, arg2)
    
    if (&arg1[0xac] != rax_5)
        arg1[0xac] = *rax_5
        *rax_5 = 0
        sub_1405aeff0(&arg1[0xad], &rax_5[1])
    
    arg1[0xae].w = rax_5[2].w
    *(arg1 + 0x572) = *(rax_5 + 0x12)
    *(arg1 + 0x574) = *(rax_5 + 0x14)
    int64_t* var_38
    
    if (var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t rax_11 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*(*var_38 + 8))(var_38, 1)
    
    if (rbp.b == 0)
        goto label_140f87d0b

arg1[0xaf].b = rax_1

if (rbp.b != 0)
    int64_t* rcx_21 = arg1[9]
    (*(*rcx_21 + 8))(rcx_21)

return zx.q(rbp.b)
