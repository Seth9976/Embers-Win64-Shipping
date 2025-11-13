// 函数: sub_141da47d0
// 地址: 0x141da47d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_98 = nullptr
int32_t var_90 = 0

if (arg4 != &var_98 && arg4[1].d != 0)
    int64_t* rcx = *arg4
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_98)

void var_68
int64_t* rax_2 = sub_140596d10(&var_68, arg5)
int64_t* var_88 = nullptr
int32_t var_80 = 0

if (var_90 != 0)
    int64_t* rcx_2 = var_98
    
    if (rcx_2 != 0)
        int64_t r8 = *rcx_2
        (*(r8 + 0x40))(rcx_2, &var_88, r8)

void var_58
int64_t* rax_3 = sub_140596d10(&var_58, rax_2)
void*** rax_4 = sub_140a84c80(0, 0x40, 0)

if (rax_4 != 0)
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    
    if (var_80 != 0)
        int64_t* rcx_4 = var_88
        
        if (rcx_4 != 0)
            int64_t r8_1 = *rcx_4
            (*(r8_1 + 0x40))(rcx_4, &var_78, r8_1)
    
    void var_48
    sub_141da5170(rax_4, arg2, arg3, &var_78, sub_140596d10(&var_48, rax_3))

sub_140745b20(&var_88)
int64_t rcx_8 = *rax_3

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140745b20(&var_98)
int64_t rcx_10 = *rax_2

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

void var_38

if (&var_38 == arg1)
    goto label_141da4927

if (rax_4 != 0)
    (*rax_4)[8](rax_4, arg1)
label_141da4927:
    
    if (rax_4 != 0)
        (*rax_4)[7](rax_4, 0)
        int64_t rax_8 = sub_140a84c80(rax_4, 0, 0)
        
        if (rax_8 != 0)
            sub_140a74f90(rax_8)
else if (arg1[1].d != 0)
    int64_t* rcx_17 = *arg1
    
    if (rcx_17 != 0)
        (*(*rcx_17 + 0x38))(rcx_17, 0)
        int64_t rcx_18 = *arg1
        
        if (rcx_18 != 0)
            *arg1 = sub_140a84c80(rcx_18, 0, 0)
        
        arg1[1].d = 0

uint64_t result = sub_140745b20(arg4)
int64_t rcx_16 = *arg5

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
