// 函数: sub_140afc990
// 地址: 0x140afc990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void var_168
sub_1405eb940(&var_168, "WindowsNoEditor")
int64_t var_178
int64_t* rax_2 = sub_140b13fb0(&var_178)
int32_t rdx = rax_2[1].d
int32_t rdx_1 = neg.d(rdx)
int64_t var_198 = *rax_2
*rax_2 = 0
int32_t rax_4 = rax_2[1].d
int32_t rax_5 = *(rax_2 + 0xc)
rax_2[1] = 0
int32_t rdx_4 = sbb.d(rdx_1, rdx_1, rdx != 0) + 8 + rax_4

if (rdx_4 s> rax_5)
    sub_1405947f0(&var_198, rdx_4)

sub_140a2cf70(&var_198, u"Config", 6)
int64_t rbx = -1
int64_t rdi = -1
int16_t* var_60

do
    rdi += 1
while (var_60[rdi] != 0)

int32_t r12 = 2
int32_t rdx_5

if (rax_4 == 0)
    rdx_5 = 2

if (rax_4 != 0 || (rdi + 1).d == 0)
    rdx_5 = 1

int64_t var_188 = var_198
int32_t rdx_7 = rdx_5 + rax_4 + rdi.d
var_198 = 0
int32_t var_190
var_190.q = 0

if (rdx_7 s> rax_5)
    sub_1405947f0(&var_188, rdx_7)

sub_140a2cf70(&var_188, var_60, rdi.d)

do
    rbx += 1
while (arg2[rbx] != 0)

if (rax_4 != 0 || (rbx + 1).d == 0)
    r12 = 1

*arg1 = var_188
int32_t rdx_10 = r12 + rax_4 + rbx.d
var_188 = 0
arg1[1].d = rax_4
*(arg1 + 0xc) = rax_5
int32_t var_180
var_180.q = 0

if (rdx_10 s> rax_5)
    sub_1405947f0(arg1, rdx_10)

sub_140a2cf70(arg1, arg2, rbx.d)
int64_t rcx_11 = var_188

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = var_198

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = var_178

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg1
