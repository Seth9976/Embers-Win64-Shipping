// 函数: sub_141fe2930
// 地址: 0x141fe2930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t arg_8 = 0
int64_t var_78
sub_140b291e0(arg1 + 0x60, &var_78, 0)
int64_t rbp = 0x40
int64_t rbx_1

if ((*(arg1 + 0x28) & 2) == 0)
    rbx_1 = 0x30
else
    int32_t rax_1 = data_143f3d748
    
    if (rax_1 != 0)
        rbx = rax_1 - 1
    
    sub_140a20ba0(&var_78, data_143f3d740, rbx)
    rbx_1 = 0x40

sub_140a96170(arg2)
void var_68
sub_140a97b20(&var_68, &var_78)
void var_58
sub_140a97b20(&var_58, &data_143f3d720)

if (sub_140aac5d0(&var_58, &var_68, arg2, arg1 + rbx_1) == 0)
    void var_48
    int64_t* rcx_6 = &var_48
    int32_t r8_4 = *(arg1 + 0x28) & 2
    int64_t arg_20 = arg3
    int32_t rsi_1 = sbb.d(arg3.d, arg3.d, r8_4 != 0) + 2
    
    if (r8_4 == 0)
        rbp = 0x30
    
    void var_30
    
    if (r8_4 != 0)
        rcx_6 = &var_30
    int64_t* rax_4 = sub_140a9fca0(rcx_6, arg1 + rbp)
    int64_t rdx_5 = *arg2
    *arg2 = *rax_4
    *rax_4 = rdx_5
    int64_t rdx_6 = arg2[1]
    arg2[1] = rax_4[1]
    rax_4[1] = rdx_6
    arg2[2].d = rax_4[2].d
    
    if ((rsi_1.b & 2) != 0)
        rsi_1 &= 0xfffffffd
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t rax_8 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*(*var_40 + 8))(var_40, 1)
    
    int64_t* var_28
    
    if ((rsi_1.b & 1) != 0 && var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            (**var_28)(var_28)
            int32_t rdi_1 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_28 + 8))(var_28, zx.q(rdi_1))

int64_t rcx_13 = var_78

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return arg2
