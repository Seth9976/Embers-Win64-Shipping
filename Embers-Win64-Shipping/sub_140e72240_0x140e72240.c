// 函数: sub_140e72240
// 地址: 0x140e72240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0
int64_t var_28 = 0
int32_t var_20 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_140692f90(&var_58, arg4)
int64_t var_48 = 0
int32_t var_40 = 0
sub_1407473e0(&var_48, arg3)
int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_140e71fe0(arg1, &var_18, &var_48, &var_58, &var_28, &var_38, arg5)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140745b20(arg3)
return sub_140745b20(arg4) __tailcall
