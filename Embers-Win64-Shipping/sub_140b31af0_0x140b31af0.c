// 函数: sub_140b31af0
// 地址: 0x140b31af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_140b3ea00()
int64_t rax_8 = arg3 + 0x18

if (((data_143de7a6c ^ *(arg3 + 0xc)) | (data_143de7a68 ^ *(arg3 + 8))
        | (data_143de7a64 ^ *(arg3 + 4)) | (data_143de7a60 ^ *arg3)) != 0)
    rax_8 = 0

bool cond:1 = *rax_8 == 0
*(arg2 + 0x18) = 0
int64_t rbx
rbx.b = cond:1
sub_140b3ea00()
char var_40 = rbx.b
void** const var_48 = &data_142e786e8
int128_t var_58 = data_143de7a60.o
sub_140b0a670(arg2 + 0x20, &var_58)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_58)
__security_check_cookie(rax_1 ^ &var_78)
return arg2
