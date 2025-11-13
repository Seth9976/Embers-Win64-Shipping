// 函数: sub_140a8d5f0
// 地址: 0x140a8d5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_1c0 = arg1
void* r15 = arg1 + (sx.q(arg2) << 1)
void var_1a8
sub_140a60300(&var_1a8, arg3, 0)
void var_148
sub_140a60300(&var_148, arg3, 1)
void var_e8
sub_140a60300(&var_e8, arg3, 2)
void var_88
sub_140a60300(&var_88, arg3, 3)
char rdi = 0
char var_1c8 = 0
bool cond:0 = *arg4 != 0
char rax_1 = 7
int64_t var_1b0 = 0
char arg_20 = 0

if (cond:0)
    rax_1 = 0xf

char arg_10 = rax_1
char rax_2 =
    sub_140a8d860(&var_1c0, r15, arg3, &var_1a8, &arg_10, nullptr, &var_1c8, &var_1b0, &arg_20)
void* rdx_5 = var_1c0
char r10 = 0
char r9_1 = 0
arg_10 = 0
char arg_8 = 0
int64_t rcx_5 = 0
int64_t var_1b8 = 0
char rbx_1 = rax_2

if (rax_2 != 0 && rdx_5 u> arg1 && *(rdx_5 - 2) == *(arg3 + 0x72))
    char var_1c7 = 2
    char rax_4 = sub_140a8d860(&var_1c0, r15, arg3, &var_1a8, &var_1c7, &data_142e61240, &arg_10, 
        &var_1b8, &arg_8)
    rdx_5 = var_1c0
    rbx_1 &= rax_4
    r10 = arg_10
    rcx_5 = var_1b8
    r9_1 = arg_8

double zmm2 = 1.8446744073709552e+19
char r8_5 = r9_1 + arg_20

if (r9_1 != neg.b(arg_20))
    rdi = rbx_1

int128_t zmm0
zmm0.q = float.d(rcx_5)

if (rcx_5 s< 0)
    zmm0.q = zmm0.q f+ zmm2

int64_t rcx_7 = *(&data_142e624a0 + (zx.q(r9_1) << 3))
int64_t zmm1 = float.d(rcx_7)

if (rcx_7 s< 0)
    zmm1 = zmm1 f+ zmm2

int64_t rax_7 = var_1b0
zmm0.q = zmm0.q f/ zmm1
zmm1 = float.d(rax_7)

if (rax_7 s< 0)
    zmm1 = zmm1 f+ zmm2

zmm0.q = zmm0.q f+ zmm1

if (var_1c8 != 0 || r10 != 0)
    zmm0 ^= data_142d8e3c0

*arg5 = zmm0.q

if (r8_5 != 0 && arg6 != 0)
    *arg6 = ((rdx_5 - arg1) s>> 1).d

sub_140a62f70(&var_88)
sub_140a62f70(&var_e8)
sub_140a62f70(&var_148)
sub_140a62f70(&var_1a8)
return zx.q(rdi)
