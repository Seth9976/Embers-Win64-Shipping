// 函数: sub_1420c5600
// 地址: 0x1420c5600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141e5f980()

if (rax == 0)
    goto label_1420c56b7

void var_98
sub_141e4faa0(&var_98)
int64_t r9_1 = *rax
char var_60

if ((*(r9_1 + 0x2f0))(rax, *arg2, &var_98, r9_1) == 0 || var_60 == 0)
    sub_141e50e60(&var_98)
label_1420c56b7:
    *(arg1 + 0x20) = 0
    *arg1 = 0xffffffff
    arg1[1] = 0
    __builtin_memset(&arg1[4], 0, 0x14)
    int64_t arg_18 = 0
    
    if (arg1[9] s<= 0xffffffff)
        sub_1405947f0(&arg1[6], 0)
    
    int16_t* rax_4 = *(arg1 + 0x18)
    
    if (rax_4 != 0)
        *rax_4 = 0
    
    *(arg1 + 4) = 0
    *arg1 = 0xffffffff
    *(arg1 + 0x10) = 0
    int32_t rax_5 = arg1[9]
    arg_18 = 0
    arg1[8] = 0
    
    if (rax_5 s< 0 && rax_5 != 0)
        sub_1405947f0(&arg1[6], 0)
    
    int16_t* rax_6 = *(arg1 + 0x18)
    
    if (rax_6 != 0)
        *rax_6 = 0
    
    arg1[2] = 0
else
    void var_b8
    int64_t* rax_3 = (*(*rax + 0x2b0))(rax, &var_b8, arg2)
    *arg1 = 0xffffffff
    *(arg1 + 4) = 0
    *(arg1 + 0x10) = *rax_3
    sub_140596d10(&arg1[6], &rax_3[1])
    int64_t var_b0
    
    if (var_b0 != 0)
        sub_140a74f90(var_b0)
    
    sub_141e50e60(&var_98)

return arg1
