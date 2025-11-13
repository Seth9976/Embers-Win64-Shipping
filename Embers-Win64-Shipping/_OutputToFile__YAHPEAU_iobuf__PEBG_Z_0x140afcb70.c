// 函数: ?OutputToFile@@YAHPEAU_iobuf@@PEBG@Z
// 地址: 0x140afcb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void var_158
sub_1405eb940(&var_158, "WindowsNoEditor")
int64_t var_168
int64_t* rax_2 = sub_140b17c60(&var_168)
int64_t rbx = -1
int64_t rdi = -1
int16_t* var_50

do
    rdi += 1
while (var_50[rdi] != 0)

int32_t r15 = 2
int32_t rdx

if (rax_2[1].d == 0)
    rdx = 2

if (rax_2[1].d != 0 || (rdi + 1).d == 0)
    rdx = 1

int64_t var_178 = *rax_2
*rax_2 = 0
int32_t rax_5 = rax_2[1].d
int32_t rax_6 = *(rax_2 + 0xc)
rax_2[1] = 0
int32_t rdx_2 = rdx + rax_5 + rdi.d

if (rdx_2 s> rax_6)
    sub_1405947f0(&var_178, rdx_2)

sub_140a2cf70(&var_178, var_50, rdi.d)

do
    rbx += 1
while (arg2[rbx] != 0)

if (rax_5 != 0 || (rbx + 1).d == 0)
    r15 = 1

*arg1 = var_178
int32_t rdx_5 = r15 + rax_5 + rbx.d
var_178 = 0
arg1[1].d = rax_5
*(arg1 + 0xc) = rax_6
int32_t var_170
var_170.q = 0

if (rdx_5 s> rax_6)
    sub_1405947f0(arg1, rdx_5)

sub_140a2cf70(arg1, arg2, rbx.d)
int64_t rcx_8 = var_178

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_168

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_198)
return arg1
