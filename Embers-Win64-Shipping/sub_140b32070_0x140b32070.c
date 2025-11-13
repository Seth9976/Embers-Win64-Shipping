// 函数: sub_140b32070
// 地址: 0x140b32070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
sub_140b3e980()
void* r15 = &arg4[6]
int64_t* rbx_1 = nullptr

if (((arg4[3] ^ data_143de7cdc) | (arg4[2] ^ data_143de7cd8) | (arg4[1] ^ data_143de7cd4)
        | (*arg4 ^ data_143de7cd0)) != 0)
    r15 = nullptr

sub_140b3e980()
void* r8 = arg3 + 0x18
void* rdi_1 = *arg1
uint64_t r14
r14.b = 0

if (((*(arg3 + 0xc) ^ data_143de7cdc) | (*(arg3 + 8) ^ data_143de7cd8)
        | (*(arg3 + 4) ^ data_143de7cd4) | (data_143de7cd0 ^ *arg3)) != 0)
    r8 = nullptr

int32_t var_98
sub_140926e00(rdi_1 + 0xc0, &var_98, r8)
int64_t rax_14 = sx.q(var_98)
void* const rcx_6

if (rax_14.d == 0xffffffff)
    rcx_6 = nullptr
else
    rcx_6 = *(rdi_1 + 0xc0) + rax_14 * 0x28

int64_t* rax_16 = rcx_6 + 0x10

if (rcx_6 == 0)
    rax_16 = nullptr

if (rax_16 != 0)
    if (rax_16[1].d != 0)
        rbx_1 = *rax_16
    
    r14 = zx.q((*(*rbx_1 + 0x48))(rbx_1, r15))

*(arg2 + 0x18) = 0
sub_140b3ea00()
char var_70 = r14.b
void** const var_78 = &data_142e786e8
int128_t var_88 = data_143de7a60.o
sub_140b0a670(arg2 + 0x20, &var_88)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_88)
__security_check_cookie(rax_1 ^ &var_b8)
return arg2
