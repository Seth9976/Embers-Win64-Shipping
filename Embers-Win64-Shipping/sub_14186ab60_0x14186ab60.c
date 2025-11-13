// 函数: sub_14186ab60
// 地址: 0x14186ab60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void var_b8
int64_t* rax_2 = sub_14077e140(&var_b8, arg2)
int64_t var_68
sub_140b30de0(arg2, sub_14187b350(*arg1, &var_68, rax_2, arg1[1].d))
int32_t var_20 = 0
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int32_t var_60 = 0
int32_t var_5c

if (var_5c != 0)
    sub_1405a5130(&var_68, 0)

int32_t var_38 = 0xffffffff
int32_t var_34 = 0
void var_58
sub_14059a8e0(&var_58, 0)
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t rcx_7 = var_68

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if (arg2[1].d - *(arg2 + 0x34) s> 0 && *(*arg1 + 0x20) != 0)
    int64_t* rax_7 = sub_14077e140(&var_b8, arg2)
    sub_14186ad90(*arg1 + 0x20, rax_7)

arg2[9].d = 0
int64_t rcx_11 = arg2[8]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405a5130(arg2, 0)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
void* result = sub_14059a8e0(&arg2[2], 0)
int64_t rcx_14 = arg2[4]

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = *arg2

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

__security_check_cookie(rax_1 ^ &var_d8)
return result
