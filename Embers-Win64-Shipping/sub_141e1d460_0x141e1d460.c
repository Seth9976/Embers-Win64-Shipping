// 函数: sub_141e1d460
// 地址: 0x141e1d460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)
void* r14 = *arg2
void* var_88 = r14
int32_t rdx = 0
int32_t r8 = 0
int64_t var_80
__builtin_memset(&var_80, 0, 0x24)
int64_t var_58
__builtin_memset(&var_58, 0, 0x3b)
char* var_68
int64_t var_38

if (rcx == 0)
    void* var_70_1 = r14 + 0x4a0
    int32_t rbx_1 = *(r14 + 0x4a8)
    
    if (rbx_1 s>= 1)
        sub_141acba60(&var_80, rbx_1)
        int32_t var_74
        r8 = var_74
        int32_t var_78
        rdx = var_78
    
    int32_t rax_1 = rbx_1 + rdx
    
    if (rax_1 s> r8)
        sub_141acb8e0(&var_80, rdx)
    
    sub_141e0ba30(&var_80)
    int32_t var_5c
    int32_t rcx_4 = var_5c
    int32_t rbx_2 = 0
    int32_t rdi_1 = rax_1
    int32_t var_60_1 = 0
    
    if (rcx_4 != rdi_1)
        sub_1405c5510(&var_68, rdi_1)
        rcx_4 = var_5c
        rbx_2 = var_60_1
        rdi_1 = rax_1
    
    int32_t rax_2 = rbx_2 + rdi_1
    var_60_1 = rax_2
    
    if (rax_2 s> rcx_4)
        sub_1405daba0(&var_68)
    
    memset(&var_68[sx.q(rbx_2)], 0, sx.q(rdi_1))
    *var_68 = 1
    sub_141abd4c0(&var_38, r14 + 0x4a0)
else
    (*(*rcx + 0x20))(rcx, &var_88, 0)

sub_141a99650(&var_80, &arg2[1])

if (&arg2[4] != &var_38)
    arg2[4] = var_38
    __builtin_memset(&arg2[5], 0, 0x13)
    int64_t var_30_1 = 0
    var_38 = 0

char result_1
char result = result_1
int64_t var_48

if (var_48 != 0)
    result = sub_140a74f90(var_48)

int64_t rcx_13 = var_58

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

char* rcx_14 = var_68

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
