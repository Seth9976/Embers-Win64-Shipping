// 函数: sub_141306f90
// 地址: 0x141306f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char var_98
char* var_88 = &var_98
char rbp = 0
void*** (* var_90)() = j_sub_140597fc0
int32_t var_94 = 0
var_98 = 0
void*** rax_3 = sub_14081d830(0x100, sub_140a756e0(&var_90, &data_143958018) + 0x10, 1, 0)
int64_t (* var_78)(int64_t arg1, int64_t* arg2, int64_t* arg3)
void*** var_68
void** const var_58
void*** rbx

if (rax_3 == 0)
    rbx = nullptr
else
    var_68 = nullptr
    var_58 = &data_142d42d18
    var_78 = sub_14130ebe0
    rbx = sub_1412ff430(rax_3, &var_78)
    rbp = 1

int64_t rsi = sx.q(arg2[1].d)
int32_t rax_5 = (rsi + 1).d
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi << 3)) = rbx

if ((rbp & 1) != 0 && var_78 != 0)
    void** const* rcx_3 = &var_58
    
    if (var_68 != 0)
        rcx_3 = var_68
    
    void** const rdx_4 = *rcx_3
    rdx_4[2](rcx_3, rdx_4)

void** r9 = *rbx
r9[3](rbx, 0, arg3, r9)
*arg1 = rbx
arg1[1].d = 0
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
