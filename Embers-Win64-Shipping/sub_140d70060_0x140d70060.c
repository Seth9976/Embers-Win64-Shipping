// 函数: sub_140d70060
// 地址: 0x140d70060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** var_b8
memset(&var_b8, 0, 0x90)
sub_140b4c2a0(&var_b8)
var_b8 = &data_142d6b230
int64_t var_28 = 0
int64_t var_20 = arg1 + 8
int64_t var_18 = 0x7fffffffffffffff
sub_140b55290(&var_b8, 1)
var_b8[0x1b](&var_b8, 1)
int64_t* var_b0
int64_t rcx_4 = *var_b0
bool cond:1

if (rcx_4 + 4 u> var_b0[1])
    char arg_8
    int32_t rdi
    rdi.b = arg_8 != 0
    arg_8.d = rdi
    var_b8[0x2a](&var_b8, &arg_8, 4)
    cond:1 = arg_8.d != 0
else
    cond:1 = *rcx_4 != 0
    *var_b0 = rcx_4 + 4

int64_t rbx
rbx.b = cond:1
sub_140b4cb40(&var_b8)
return zx.q(rbx.b)
