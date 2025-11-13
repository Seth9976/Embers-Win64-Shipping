// 函数: sub_140a37040
// 地址: 0x140a37040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
*arg1 = &data_142e520a8
__builtin_memset(&arg1[1], 0, 0x28)
arg1[6] = -1
arg1[7] = arg2
arg1[8] = 0
int64_t* var_70
sub_140a228d0(&var_70)
int64_t* rax_2 = var_70
int64_t* rcx_1 = rax_2

if (rax_2 != 0)
    rax_2[9].d += 1
    rax_2 = var_70

int64_t* var_38 = rcx_1
void** const var_48 = &data_142e521c0
int64_t (* var_68)(int64_t* arg1, int64_t arg2, int64_t* arg3) = sub_140a37d90
int64_t* rcx_2 = arg1[8]
arg1[8] = rax_2
void*** var_58 = nullptr
void*** var_40 = arg1

if (rax_2 != 0)
    rax_2[9].d += 1

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        sub_140a2f6e0(rcx_2)

(*(*arg2 + 8))(arg2, &var_68)

if (var_68 != 0)
    void** const* rcx_4 = &var_48
    
    if (var_58 != 0)
        rcx_4 = var_58
    
    (*rcx_4)[2](rcx_4)

int64_t* rcx_5 = var_70

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

__security_check_cookie(rax_1 ^ &var_98)
return arg1
