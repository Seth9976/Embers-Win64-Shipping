// 函数: sub_140b31300
// 地址: 0x140b31300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_140b3ea00()
int32_t rsi_4 = (data_143de7a6c ^ arg4[3]) | (data_143de7a68 ^ arg4[2]) | (data_143de7a64 ^ arg4[1])
    | (*arg4 ^ data_143de7a60)
sub_140b3ea00()
void* rax_14 = &arg3[6]

if (((data_143de7a6c ^ arg3[3]) | (data_143de7a68 ^ arg3[2]) | (data_143de7a64 ^ arg3[1])
        | (*arg3 ^ data_143de7a60)) != 0)
    rax_14 = nullptr

void* rax_15

if (*rax_14 != 0)
    rax_15 = &arg4[6]
    
    if (rsi_4 != 0)
        rax_15 = nullptr

int32_t* rbx

if (*rax_14 == 0 || *rax_15 == 0)
    rbx.b = 0
else
    rbx.b = 1

*(arg2 + 0x18) = 0
sub_140b3ea00()
char var_40 = rbx.b
void** const var_48 = &data_142e786e8
int128_t var_58 = data_143de7a60.o
sub_140b0a670(arg2 + 0x20, &var_58)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_58)
__security_check_cookie(rax_1 ^ &var_78)
return arg2
