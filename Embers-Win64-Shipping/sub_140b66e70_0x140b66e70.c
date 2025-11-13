// 函数: sub_140b66e70
// 地址: 0x140b66e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int16_t* var_48 = nullptr
int32_t var_40 = 0
sub_1405947f0(&var_48, 6)
int32_t r14 = var_40 + 6
var_40 = r14

if (r14 s> 0)
    sub_140594770(&var_48)
    r14 = var_40

int16_t* rsi = var_48
UnDecorator::getReferenceType(rsi, u"Win64", 0xc)
int16_t* const r12 = &data_142d40450

if (arg2[1].d != 0)
    *arg2

int16_t* const r8 = &data_142d40450

if (r14 != 0)
    r8 = rsi

sub_140a2e390(&var_48, u"Binaries/%s/%s", r8)
int64_t var_38
int64_t* rax = sub_140b13b30(&var_38)
int32_t rbp_1

if (var_40 == 0)
    rbp_1 = 0
else
    rbp_1 = var_40 - 1

int32_t r8_1

if (rax[1].d == 0)
    r8_1 = 2

if (rax[1].d != 0 || rbp_1 == 0xffffffff)
    r8_1 = 1

*arg1 = 0
*arg1 = *rax
*rax = 0
arg1[1].d = rax[1].d
*(arg1 + 0xc) = *(rax + 0xc)
rax[1] = 0
int32_t rdx_3 = arg1[1].d + r8_1 + rbp_1

if (rdx_3 s> *(arg1 + 0xc))
    sub_1405947f0(arg1, rdx_3)

sub_140a2cf70(arg1, var_48, rbp_1)
int64_t rcx_8 = var_38

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int16_t* rcx_9 = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_140b20bf0(arg1)

if (arg3 != 3)
    if (r14 != 0)
        r12 = rsi
    
    sub_140a2e390(&var_48, u"-%s-%s", r12)
    
    if (var_40 != 0)
        rdi = var_40 - 1
    
    sub_140a20ba0(arg1, var_48, rdi)
    int16_t* rcx_14 = var_48
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

sub_140a20ba0(arg1, u".exe", 4)

if (rsi != 0)
    sub_140a74f90(rsi)

return arg1
