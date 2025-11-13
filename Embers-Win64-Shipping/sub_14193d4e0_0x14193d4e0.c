// 函数: sub_14193d4e0
// 地址: 0x14193d4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int64_t rbx = *arg1
int64_t var_38 = 0
sub_1405a4c70(&var_38, sbb.d(arg3, arg3, rdi != 0) + 2 + rdi, 0)
memcpy(var_38, rbx, rdi * 2)
int32_t rbp = 1
sub_140a20ba0(&var_38, &data_142d5a024, 1)
int64_t rdi_1 = var_38
var_38 = 0
int32_t var_30
var_30.q = 0

if (rdi s> 1)
    int32_t rax_2 = arg1[3].d
    int32_t rbx_1 = rax_2 - 1
    
    if (rax_2 == 0)
        rbx_1 = 0
    
    if (rdi != 0 || rbx_1 == 0)
        rbp = 0
    
    int64_t var_28 = rdi_1
    int32_t rdx_5 = rbx_1 + rbp + rdi
    int32_t var_2c
    
    if (rdx_5 s> var_2c)
        sub_1405947f0(&var_28, rdx_5)
    
    sub_140a20ba0(&var_28, arg1[2], rbx_1)
    *arg2 = var_28
    arg2[1].d = rdi
    *(arg2 + 0xc) = var_2c
else
    sub_140596d10(arg2, &arg1[2])
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

return arg2
