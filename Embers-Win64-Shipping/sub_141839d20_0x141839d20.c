// 函数: sub_141839d20
// 地址: 0x141839d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg3 + 0x130))(arg3)
int32_t rsi = rax_1[1].d
int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 7)
int32_t r15 = var_30:4.d
int32_t rdi = var_30.d + 7
var_30.d = rdi

if (rdi s> r15)
    sub_140594770(&var_38)
    r15 = var_30:4.d
    rdi = var_30.d

int64_t r12 = var_38
UnDecorator::getReferenceType(r12, u"Deltas", 0xe)
int32_t r14 = 1

if (rsi == 0)
    rsi = 1

int32_t rax_2

if (rdi != 0 || rsi == 0)
    rax_2 = 0
else
    rax_2 = 1

int64_t var_48 = r12
int32_t rdx_2 = rdi + rax_2 + rsi

if (rdx_2 s> r15)
    sub_1405947f0(&var_48, rdx_2)

int32_t rax_3 = rax_1[1].d
int32_t r8 = rax_3 - 1

if (rax_3 == 0)
    r8 = 0

sub_140a2cf70(&var_48, *rax_1, r8)
int64_t* rax_5 = (*(*arg2 + 0x130))(arg2)
int32_t rcx_7 = rax_5[1].d
int32_t rdi_1 = rcx_7 - 1

if (rcx_7 == 0)
    rdi_1 = 0

if (rdi == 0 && rdi_1 != 0xffffffff)
    r14 = 2

int32_t rdx_6 = rdi + rdi_1 + r14
int64_t var_58 = var_48
var_48 = 0
int32_t var_40
var_40.q = 0

if (rdx_6 s> r15)
    sub_1405947f0(&var_58, rdx_6)

int32_t rcx_11 = sub_140a2cf70(&var_58, *rax_5, rdi_1)
var_30.d = rdi
var_38 = var_58
int32_t rdx_9 = rdi + sbb.d(rcx_11, rcx_11, rdi != 0) + 7
var_58 = 0
var_30:4.d = r15
int32_t var_50
var_50.q = 0

if (rdx_9 s> r15)
    sub_1405947f0(&var_38, rdx_9)

sub_140a20ba0(&var_38, u".delta", 6)
int64_t rcx_16 = var_58
*arg1 = var_38
arg1[1].d = var_30.d
*(arg1 + 0xc) = var_30:4.d

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = var_48

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return arg1
