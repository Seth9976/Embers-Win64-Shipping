// 函数: sub_140947d60
// 地址: 0x140947d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x1310)
void* rdx = *result

if (rdx == 0 || (*(rdx + 0x30) & 2) != 0)
    return result

void** var_128
sub_141f79620(&var_128, rdx, 0)
char arg_8 = 6
int64_t* var_120
char* rdx_1 = *var_120

if (&rdx_1[1] u> var_120[1])
    var_128[0x2a](&var_128, &arg_8, 1)
else
    arg_8 = *rdx_1
    *var_120 += 1

sub_140a1d9d0(&var_128, arg2, arg3)
int64_t r9_1
r9_1.b = 1
int64_t* rcx_4 = **(arg1 + 0x1310)
void arg_18
(*(*rcx_4 + 0x2c8))(rcx_4, &arg_18, &var_128, r9_1)
return sub_141f7bb50(&var_128)
