// 函数: sub_1428c6f90
// 地址: 0x1428c6f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
char* _Str1_1 = nullptr
void* const var_18 = nullptr
int32_t var_28

if (sub_1428b9ad0(&var_18, &var_28, &_Str1_1, "DH PARAMETERS", arg5, arg1, arg3, arg4) == 0)
    return 0

char* _Str1 = _Str1_1
void* const var_10 = var_18
int32_t rax_3 = strcmp(_Str1, "X9.42 DH PARAMETERS")
int32_t r8_1 = var_28
void** rdx_1 = &var_10
void* result

if (rax_3 != 0)
    result = sub_14291c4c0(arg2, rdx_1, r8_1)
else
    result = sub_14291c4e0(arg2, rdx_1, r8_1)

if (result == 0)
    int64_t* var_48
    var_48.d = 0xde
    sub_1428a5670((result + 9).d, 0x8d, (result + 0xd).d, "crypto\pem\pem_pkey.c", var_48.d)

sub_1428a6780(_Str1_1)
sub_1428a6780(var_18)
return result
