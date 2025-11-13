// 函数: sub_140d084c0
// 地址: 0x140d084c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143de5452
char var_40 = 0
char var_28 = 0
bool var_38 = rax == 0
int64_t* (* var_48)(int64_t* arg1, int64_t* arg2) = arg1
int32_t rdi = 0
int64_t var_30 = 0

if (rax == 0)
    var_48.o = var_48.o
    sub_140ce3410(&var_38, &var_48)

int64_t rax_1 = sub_140d3cb50(*(arg1 + 0x78))

if (rax_1 != 0)
    rdi = *(rax_1 + 0x290)

int64_t* rcx_2 = *(arg1 + 0x78)
int64_t* (* arg_8)(int64_t* arg1, int64_t* arg2)
var_40.q = &arg_8
var_48 = sub_140cf2f80
arg_8 = arg1
int16_t* result = sub_140be11d0(rcx_2, arg2, arg3, arg6, arg5, arg4, arg7, &var_48, 1)

if (rax_1 != 0)
    *(rax_1 + 0x290) = rdi

if (var_38 == 0)
    return result

sub_140ce30e0(&var_38)
return result
