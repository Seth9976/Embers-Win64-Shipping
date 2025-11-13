// 函数: sub_142221db0
// 地址: 0x142221db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xb8) = arg2
int64_t rax = sub_142218330(arg1)
int64_t rdx = *(arg1 + 0xf8)
int64_t arg_8 = rax
int64_t var_58
__builtin_memset(&var_58, 0, 0x20)
int64_t* var_48
sub_142216cb0(arg1, rdx, &var_58, &var_48)
void* rcx_1 = *(arg1 + 0xa0)
int64_t* var_20 = &arg_8
void* var_28 = arg1
int64_t* var_18 = &var_58

if (rcx_1 == 0)
    rcx_1 = arg1

int64_t** var_10 = &var_48
void** var_30 = &var_28
int64_t (* var_38)(int64_t* arg1) = j_sub_1422102e0
sub_14226a4e0(rcx_1 + 0xf0, &var_38)
int64_t rcx_3 = var_58

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = var_48

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return sub_1422273b0(arg1) __tailcall
