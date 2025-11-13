// 函数: sub_1422e48c0
// 地址: 0x1422e48c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int64_t var_50 = 0
sub_1405947f0(&var_58, 7)
int32_t r14 = var_50:4.d
int32_t rsi = var_50.d + 7
var_50.d = rsi

if (rsi s> r14)
    sub_140594770(&var_58)
    r14 = var_50:4.d
    rsi = var_50.d

int64_t rbx = var_58
int32_t rcx_3 = UnDecorator::getReferenceType(rbx, u"Engine", 0xe)
int64_t var_68 = rbx
int32_t rdx_2 = sbb.d(rcx_3, rcx_3, rsi != 0) + 0x14 + rsi

if (rdx_2 s> r14)
    sub_1405947f0(&var_68, rdx_2)

sub_140a2cf70(&var_68, u"GlobalShaderCache-", 0x12)
int64_t var_38
void arg_8
int64_t* rax_3
int32_t rdx_5
rax_3, rdx_5 = sub_140b63b70(sub_141976940(&arg_8, arg2), &var_38)
int64_t rax_4
int32_t rcx_9
int32_t r8_1

if (rsi s> 1)
    int32_t rax_5 = rax_3[1].d
    int32_t rsi_1 = rax_5 - 1
    
    if (rax_5 == 0)
        rsi_1 = 0
    
    int32_t rcx_10
    
    if (rsi == 0)
        rcx_10 = rsi + 1
    
    if (rsi != 0 || rsi_1 == 0)
        rcx_10 = 0
    
    var_58 = var_68
    int32_t rdx_7 = rsi_1 + rcx_10 + rsi
    var_68 = 0
    var_50.d = rsi
    var_50:4.d = r14
    int32_t var_60
    var_60.q = 0
    
    if (rdx_7 s> r14)
        sub_1405947f0(&var_58, rdx_7)
    
    rdx_5 = sub_140a20ba0(&var_58, *rax_3, rsi_1)
    rax_4 = var_58
    rcx_9 = var_50.d
    r8_1 = var_50:4.d
    var_58 = 0
    int64_t var_50_1 = 0
else
    rax_4 = *rax_3
    *rax_3 = 0
    rcx_9 = rax_3[1].d
    r8_1 = *(rax_3 + 0xc)
    rax_3[1] = 0

int64_t var_48 = rax_4
int32_t rdx_11 = sbb.d(rdx_5, rdx_5, rcx_9 != 0) + 5 + rcx_9

if (rdx_11 s> r8_1)
    sub_1405947f0(&var_48, rdx_11)

sub_140a20ba0(&var_48, u".bin", 4)
int64_t rcx_15 = var_68
*arg1 = var_48
arg1[1].d = rcx_9
*(arg1 + 0xc) = r8_1

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = var_38

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

return arg1
