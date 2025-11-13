// 函数: sub_141053540
// 地址: 0x141053540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t r15 = *arg3
int64_t rbx = sx.q(arg3[1].d)
int64_t var_88 = r15
int32_t var_80 = rbx.d
int64_t var_160 = r15
int32_t var_158 = rbx.d
void*** rax_2 = j_sub_140a82f30(0x118)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    *rdi = &data_142d3ff08
    rdi[1].d = 0
    *(rdi + 0xc) = 0
    rdi[2].w = 0x100
    __builtin_memset(&rdi[3], 0, 0x14)
    *(rdi + 0x2c) = arg5
    __builtin_memset(&rdi[6], 0, 0x20)
    *rdi = &data_142f009a8
    __builtin_memset(&rdi[0xa], 0, 0x24)
    __builtin_memset(&rdi[0xf], 0, 0x90)
    rdi[0x22] = 0

int64_t var_78 = r15
int32_t var_70 = rbx.d
void** const var_138
memset(&var_138, 0, 0x90)
sub_140b4c2a0(&var_138)
int32_t var_a8 = 0
var_138 = &data_142ef5568
int64_t var_a0 = r15
int64_t var_90 = 0x7fffffffffffffff
int32_t var_98 = rbx.d
sub_140b55290(&var_138, 1)
var_138[0x1b](&var_138, 1)
int64_t* var_130
int32_t* rdx_1 = *var_130

if (&rdx_1[1] u> var_130[1])
    void** const* rcx_5 = &var_138
    char var_10f
    
    if ((var_10f & 0x20) != 0)
        sub_140b54070(rcx_5, &rdi[0xe], arg4)
    else
        var_138[0x2a](rcx_5, &rdi[0xe], 4)
else
    rdi[0xe].d = *rdx_1
    *var_130 += 4

sub_140fdadf0(&var_138, &rdi[0xf], arg4)
sub_140fdadf0(&var_138, &rdi[0x11], arg4)
sub_140fdadf0(&var_138, &rdi[0x13], arg4)
sub_140fdadf0(&var_138, &rdi[0x15], arg4)
sub_140fdadf0(&var_138, &rdi[0x17], arg4)
int512_t zmm1_2 = sub_140a1d9d0(&var_138, &rdi[0x1f], 
    sub_140a1d9d0(&var_138, &rdi[0x1d], sub_140a1d9d0(&var_138, &rdi[0x1b], arg4)))
int64_t r12 = sx.q(var_a8)
int32_t rcx_14 = 0

if (rbx.d u>= 4)
    rcx_14 = *(rbx + r15 - 4)

sub_14103c040(&var_160, rdi, zmm1_2)
int32_t r8 = *(rdi + 0xd4)
rdi[0x1a].d = rbx.d

if (rbx.d != 0 || r8 != 0)
    sub_1405da9e0(&rdi[0x19], rbx.d, r8)
    memcpy(rdi[0x19], r15, rbx.d)
else
    *(rdi + 0xd4) = 0

uint64_t var_148 = zx.q(rbx.d - rcx_14 - r12.d)
*(rdi + 0x60) = (r12 + rdi[0x19]).o
void* rax_10 = rdi[0xc]

if (rax_10 == 0 || rdi[0xd] u<= 0)
    rdi[0xa] = 0
    rdi[0xb] = 0
else
    *(rdi + 0x50) = *(rax_10 + 4)

void* rbx_1 = **(arg1 + 0x20)
int32_t var_174 = *(rbx_1 + 0x44)
int32_t var_50 = 0
void var_68
sub_1410657e0(arg5, &var_174, rdi, &var_68)
rdi[0x22] = sub_14104c4e0(rbx_1 + 0x1a0, &var_68)
*arg2 = rdi
rdi[1].d += 1
sub_140b4cb40(&var_138)
__security_check_cookie(rax_1 ^ &var_198)
return arg2
