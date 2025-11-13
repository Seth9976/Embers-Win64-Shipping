// 函数: sub_141a553f0
// 地址: 0x141a553f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t var_d8 = 0
char var_78
uint128_t* rax_3
int32_t rdi

if (*(arg1 + 0x11) == 0)
    var_78 = 0
    void var_d0
    rax_3 = &var_d0
    rdi = 2
else
    uint128_t var_70[0x4]
    rax_3 = sub_140755020(&var_70, arg3, arg4, arg5)
    rdi = 1

*(arg2 + 0x58) = 0

if (*(rax_3 + 0x58) != 0)
    sub_141a30ad0(arg2, rax_3)
    *(arg2 + 0x58) = 1

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    
    if (var_78 != 0)
        char var_78_1 = 0
        int64_t var_88
        
        if (var_88 != 0)
            sub_140a74f90(var_88)

char var_18

if ((rdi.b & 1) != 0 && var_18 != 0)
    char var_18_1 = 0
    int64_t var_28
    
    if (var_28 != 0)
        sub_140a74f90(var_28)

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
