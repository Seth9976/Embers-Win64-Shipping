// 函数: sub_141a27ea0
// 地址: 0x141a27ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char var_48
char var_48_1 = var_48 & 0xfc
int64_t* rax_2 = sub_140a82f30(0x60, 8)
int64_t* var_88 = rax_2
int64_t* r15 = &var_88
char rax_3 = var_48_1 | 1

if ((rax_3 & 2) == 0)
    r15 = rax_2

void* rcx_1 = &r15[3]
*r15 = &data_14302ec00
r15[1] = 0
r15[2] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_4 = *(rcx_1 + 0x10)

if (rax_4 != 0)
    rcx_1 = rax_4

*rcx_1 = 0
*(rcx_1 + 8) = 0
r15[7].d = 0xffffffff
*(r15 + 0x3c) = 0
r15[9] = 0
r15[0xa].d = 0
sub_140780e10(&r15[1], arg2 + 8)

if (*(arg2 + 0x48) == 0)
    memmove(&r15[8], arg2 + 0x40, 4)

int64_t rcx_4 = r15[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

r15[9] = *(arg2 + 0x48)
*(arg2 + 0x48) = 0
r15[0xa].d = *(arg2 + 0x50)
*(arg2 + 0x50) = 0
r15[0xb].b = *(arg2 + 0x58)
char rax_8 = arg1[8].b

if ((rax_8 & 1) != 0)
    int64_t* rcx_5 = arg1
    
    if ((rax_8 & 2) == 0)
        rcx_5 = *arg1
    
    arg1[8].b = rax_8 & 0xfe
    (**rcx_5)(rcx_5, 0)
    
    if ((arg1[8].b & 2) == 0)
        sub_140a74f90(*arg1)

if ((rax_3 & 1) != 0)
    char rdx_2 = rax_3 & 0xfe
    char rax_10 = rdx_2 ^ arg1[8].b
    *arg1 = var_88.o
    arg1[8].b = ((rax_10 & 2) ^ arg1[8].b) | 1
    int128_t var_78
    *(arg1 + 0x10) = var_78
    int128_t var_68
    *(arg1 + 0x20) = var_68
    int128_t var_58
    *(arg1 + 0x30) = var_58
    
    if ((rdx_2 & 1) != 0)
        int64_t* rcx_7 = &var_88
        
        if ((rdx_2 & 2) == 0)
            rcx_7 = var_88
        
        int64_t r8_1 = *rcx_7
        (*r8_1)(rcx_7, 0, r8_1)
        
        if ((rdx_2 & 2) == 0)
            sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_a8)
return arg1
