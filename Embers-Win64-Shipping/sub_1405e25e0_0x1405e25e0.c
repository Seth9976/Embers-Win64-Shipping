// 函数: sub_1405e25e0
// 地址: 0x1405e25e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x38)
int64_t rbx = *(arg1 + 0x30)
int32_t rbp = 0
int64_t var_28 = 0
sub_1405a4c70(&var_28, sbb.d(arg3, arg3, rdi != 0) + 5 + rdi, 0)
memcpy(var_28, rbx, rdi * 2)
sub_140a20ba0(&var_28, u" to ", 4)
int64_t rdi_1 = var_28
var_28 = 0
int32_t var_20
var_20.q = 0

if (rdi s> 1)
    int32_t rax_2 = *(arg1 + 0x48)
    int32_t rbx_1 = rax_2 - 1
    
    if (rax_2 == 0)
        rbx_1 = 0
    
    if (rdi == 0 && rbx_1 != 0)
        rbp = 1
    
    int64_t var_18 = rdi_1
    int32_t rdx_5 = rbx_1 + rbp + rdi
    int32_t var_1c
    
    if (rdx_5 s> var_1c)
        sub_1405947f0(&var_18, rdx_5)
    
    sub_140a20ba0(&var_18, *(arg1 + 0x40), rbx_1)
    *arg2 = var_18
    arg2[1].d = rdi
    *(arg2 + 0xc) = var_1c
else
    sub_140596d10(arg2, arg1 + 0x40)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

return arg2
