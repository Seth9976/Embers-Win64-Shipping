// 函数: sub_14138da70
// 地址: 0x14138da70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char rbp = 0
int32_t var_94 = 0
char var_98
char* var_80 = &var_98
var_98 = 0
void*** (* var_88)() = j_sub_140597fc0
void*** rax_3 = sub_14081d830(0x100, sub_140a756e0(&var_88, &data_143958018) + 0x10, 1, 0)
int64_t (* var_78)(char* arg1, int64_t* arg2, int64_t* arg3)
void*** var_68
void** const var_58
void*** rbx_1

if (rax_3 == 0)
    rbx_1 = nullptr
else
    int32_t var_90_1 = arg5
    var_94.b = arg4
    int64_t var_50_1 = var_94.q
    var_58 = &data_142da2668
    var_78 = sub_141396a50
    var_68 = nullptr
    rbx_1 = sub_1412ff430(rax_3, &var_78)
    rbp = 1

int64_t rsi = sx.q(arg2[1].d)
int32_t rax_5 = (rsi + 1).d
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi << 3)) = rbx_1

if ((rbp & 1) != 0 && var_78 != 0)
    void** const* rcx_5 = &var_58
    
    if (var_68 != 0)
        rcx_5 = var_68
    
    void** const rdx_4 = *rcx_5
    rdx_4[2](rcx_5, rdx_4)

void** r9 = *rbx_1
r9[3](rbx_1, 0, arg3, r9)
*arg1 = rbx_1
arg1[1].d = 0
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
