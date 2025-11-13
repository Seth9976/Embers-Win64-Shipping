// 函数: sub_14061dba0
// 地址: 0x14061dba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_5c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_3 = *(arg2 + 0x20)
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int64_t rcx_1
rcx_1.b = rax_3 != 0
*(arg2 + 0x20) = rcx_1 + rax_3
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
sub_140618940(&var_e8, &var_88)
int64_t var_98
uint64_t* rax_4 = sub_14061a230(arg1, &var_98, &var_e8)

if (arg3 != rax_4)
    int64_t rcx_5 = *arg3
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *arg3 = *rax_4
    *rax_4 = 0
    arg3[1].d = rax_4[1].d
    *(arg3 + 0xc) = *(rax_4 + 0xc)
    rax_4[1] = 0

int64_t rcx_7 = var_98

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t result = sub_140619f90(&var_88, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_11 = var_88

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

__security_check_cookie(rax_1 ^ &var_108)
return result
