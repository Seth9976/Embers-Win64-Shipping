// 函数: sub_142004960
// 地址: 0x142004960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = *(arg2 + 0x18)
int64_t var_38
sub_140b63b70(&arg_10, &var_38)
void var_28
int64_t* rax_1 = sub_140aae2f0(&var_28, &var_38)
int64_t rdx_2 = *arg3
*arg3 = *rax_1
*rax_1 = rdx_2
int64_t rdx_3 = arg3[1]
arg3[1] = rax_1[1]
rax_1[1] = rdx_3
arg3[2].d = rax_1[2].d
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rdi_1))

int64_t rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return sub_14065da90(&arg3[3], arg3) __tailcall
