// 函数: sub_142b97ac0
// 地址: 0x142b97ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg1
uint32_t var_38
uint32_t* var_58 = &var_38
int32_t var_34
int32_t rax = sub_142b95700(arg1, arg2, arg3, &var_34, arg5, var_58)

if (rax != 0)
    return rax

int32_t rbp_1 = var_34
uint32_t rdi_1 = var_38
char var_50_1 = 1
__builtin_strncpy(&var_58, "TSOP", 4)
int32_t* var_30
int32_t arg_8
int32_t rax_1
int512_t zmm0_1
rax_1, zmm0_1 = sub_142b952d0(arg1, arg2, rbp_1, rdi_1, arg5, var_58.d, 1, &var_30, &arg_8)
int32_t rdi_2

if (rax_1 != 0)
    char var_50_2 = 0
    __builtin_strncpy(&var_58, "tnfs", 4)
    int32_t rax_3 = sub_142b952d0(arg1, arg2, rbp_1, rdi_1, arg5, 0x73666e74, 0, &var_30, &arg_8)
    rdi_2 = rax_3
    
    if (rax_3 == 0)
        int32_t rbp_3 = arg_8
        int32_t* r15_2 = var_30
        var_50_2.q = arg6
        var_58.d = mods.dp.d(sx.q(arg4), rbp_3)
        rdi_2 = sub_142b98150(arg1, arg2, r15_2, rbp_3, arg5, 0x73666e74, var_50_2)
        
        if (r15_2 != 0)
            (*(rbx + 0x10))(rbx, r15_2)
        
        if (rdi_2 == 0)
            **arg6 = rbp_3
else
    int32_t* rbp_2 = var_30
    var_50_1.q = arg6
    var_58.d = arg4
    rdi_2 = sub_142b97c50(arg1, arg2, rbp_2, arg_8, zmm0_1, arg5, var_58.d, 1)
    
    if (rbp_2 != 0)
        (*(rbx + 0x10))(rbx, rbp_2)
    
    if (rdi_2 == 0)
        **arg6 = 1

return rdi_2
