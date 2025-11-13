// 函数: sub_140dc1750
// 地址: 0x140dc1750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int32_t* var_20 = __security_cookie ^ &var_c8

if (*(arg1 + 0x250) != 0)
    int64_t* rcx = *(arg1 + 0x248)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x250) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x248)
        
        int32_t var_28
        (*(*rcx_1 + 0x48))(rcx_1, &var_28)
        
        if (&var_28 != arg1 + 0x238)
            if (*(arg1 + 0x23c) != 0)
                *(arg1 + 0x23c) = 0
            
            char var_24
            
            if (var_24 != 0)
                *(arg1 + 0x238) = var_28
                *(arg1 + 0x23c) = 1

char var_a8
char var_68
int32_t* rax_1
int128_t* rcx_2
int128_t* rdx_1
int32_t rbx_1
int128_t* r8
int32_t* r9
int32_t r10

if (*(arg1 + 0x23c) == 0)
    var_a8 = 0
    int32_t var_70 = 1
    int128_t var_a0
    r8 = &var_a0
    rbx_1 = 0
    int128_t var_90
    rcx_2 = &var_90
    __builtin_memset(&var_a0, 0, 0x30)
    rax_1.b = 0
    int128_t var_80
    rdx_1 = &var_80
    r9 = &var_70
    r10 = 2
else
    int128_t var_60
    r8 = &var_60
    int32_t var_30 = *(arg1 + 0x238)
    int128_t var_50
    rcx_2 = &var_50
    rax_1.b = 1
    var_68 = 1
    __builtin_memset(&var_60, 0, 0x30)
    int128_t var_40
    rdx_1 = &var_40
    rbx_1 = 1
    r9 = &var_30
    r10 = 0

*arg2 = rax_1.b
int64_t rax_4 = *(r8 + 8)
*(r8 + 8) = 0
*r8 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = rax_4
*(arg2 + 0x18) = *rcx_2
int64_t rax_6 = *(rcx_2 + 8)
*(rcx_2 + 8) = 0
*(arg2 + 0x20) = rax_6
*rcx_2 = 0
*(arg2 + 0x28) = *rdx_1
int64_t rax_8 = *(rdx_1 + 8)
*(rdx_1 + 8) = 0
*rdx_1 = 0
int32_t rcx_3 = *r9
*(arg2 + 0x30) = rax_8
*(arg2 + 0x38) = rcx_3

if (r10 != 0)
    sub_140ddf250(&var_a8)

if (rbx_1 != 0)
    sub_140ddf250(&var_68)

__security_check_cookie(var_20 ^ &var_c8)
return arg2
