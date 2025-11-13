// 函数: sub_140b32310
// 地址: 0x140b32310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
sub_140b3e980()
void* rbx_1 = arg3 + 0x18
bool cond:0 = ((*(arg3 + 0xc) ^ data_143de7cdc) | (*(rbx_1 - 0x10) ^ data_143de7cd8)
    | (*(rbx_1 - 0x14) ^ data_143de7cd4) | (data_143de7cd0 ^ *(rbx_1 - 0x18))) != 0

if (cond:0)
    rbx_1 = nullptr

bool rax_8

if (*(rbx_1 + 8) s> 1)
    rax_8 = (**arg4)(arg4, rbx_1, zx.q(*(rbx_1 + 0x20)))
    
    if (*(rbx_1 + 0x21) != 0)
        rax_8 = rax_8 == 0
else
    rax_8 = true

*(arg2 + 0x18) = 0
rbx_1.b = rax_8 == 0
sub_140b3ea00()
char var_50 = rbx_1.b
void** const var_58 = &data_142e786e8
int128_t var_68 = data_143de7a60.o
sub_140b0a670(arg2 + 0x20, &var_68)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_68)
__security_check_cookie(rax_1 ^ &var_88)
return arg2
