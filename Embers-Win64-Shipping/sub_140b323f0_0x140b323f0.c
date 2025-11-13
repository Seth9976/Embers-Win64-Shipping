// 函数: sub_140b323f0
// 地址: 0x140b323f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
sub_140b3e980()
void* rbx_1 = arg4 + 0x18

if (((*(arg4 + 0xc) ^ data_143de7cdc) | (*(rbx_1 - 0x10) ^ data_143de7cd8)
        | (*(rbx_1 - 0x14) ^ data_143de7cd4) | (*(rbx_1 - 0x18) ^ data_143de7cd0)) != 0)
    rbx_1 = nullptr

sub_140b3ea00()
void* rax_14 = &arg3[6]

if (((data_143de7a6c ^ arg3[3]) | (data_143de7a68 ^ arg3[2]) | (data_143de7a64 ^ arg3[1])
        | (*arg3 ^ data_143de7a60)) != 0)
    rax_14 = nullptr

bool rax_16

if (*rax_14 != 0 && *(rbx_1 + 8) s> 1)
    rax_16 = (**arg5)(arg5, rbx_1, zx.q(*(rbx_1 + 0x20)))
    
    if (*(rbx_1 + 0x21) != 0)
        rax_16 = rax_16 == 0

if (*rax_14 == 0 || (*(rbx_1 + 8) s> 1 && rax_16 == 0))
    rbx_1.b = 0
else
    rbx_1.b = 1

*(arg2 + 0x18) = 0
sub_140b3ea00()
char var_50 = rbx_1.b
void** const var_58 = &data_142e786e8
int128_t var_68 = data_143de7a60.o
sub_140b0a670(arg2 + 0x20, &var_68)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_68)
__security_check_cookie(rax_1 ^ &var_88)
return arg2
