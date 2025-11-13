// 函数: sub_1421371f0
// 地址: 0x1421371f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x1310)
void* rdx = *result

if (rdx == 0 || (*(rdx + 0x30) & 2) != 0)
    return result

void** var_128
sub_141f79620(&var_128, rdx, 0)
char arg_8 = 0xf
int64_t* var_120
char* rdx_1 = *var_120

if (&rdx_1[1] u> var_120[1])
    var_128[0x2a](&var_128, &arg_8, 1)
else
    arg_8 = *rdx_1
    *var_120 += 1

int32_t* rdx_3 = *var_120

if (&rdx_3[1] u> var_120[1])
    int64_t* rcx_4 = &var_128
    char var_ff
    
    if ((var_ff & 0x20) != 0)
        sub_140b54070(rcx_4, arg2, arg3)
    else
        var_128[0x2a](rcx_4, arg2, 4)
else
    *arg2 = *rdx_3
    *var_120 += 4

int64_t r9_1
r9_1.b = 1
int64_t* rcx_5 = **(arg1 + 0x1310)
void arg_18
(*(*rcx_5 + 0x2c8))(rcx_5, &arg_18, &var_128, r9_1)
return sub_141f7bb50(&var_128)
