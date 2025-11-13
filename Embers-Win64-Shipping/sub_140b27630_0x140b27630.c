// 函数: sub_140b27630
// 地址: 0x140b27630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int64_t var_50 = 0
sub_1405947f0(&var_58, 0x10)
int32_t r15 = var_50:4.d
int32_t rsi = var_50.d + 0x10
var_50.d = rsi

if (rsi s> r15)
    sub_140594770(&var_58)
    r15 = var_50:4.d
    rsi = var_50.d

int64_t r12 = var_58
sub_1405a7220(r12, 0x10, "WindowsNoEditor", 0x10, 0x3f)
int64_t* rax
int32_t r8
rax, r8 = sub_140b257f0()
var_58 = 0
int32_t rdi = rax[1].d
int64_t rbx = *rax
var_50.d = rdi
sub_1405a4c70(&var_58, sbb.d(r8, r8, rdi != 0) + 0xd + rdi, 0)
memcpy(var_58, rbx, rdi * 2)
int32_t rdx_4 = sub_140a20ba0(&var_58, u"Screenshots/", 0xc)
int32_t rcx_7 = var_50.d
int64_t rbx_1 = var_58
int32_t r8_4 = var_50:4.d
var_58 = 0
int64_t var_50_1 = 0
int64_t rax_1

if (rcx_7 s> 1)
    int32_t rsi_1
    
    if (rsi == 0)
        rsi_1 = 0
    else
        rsi_1 = rsi - 1
    
    int32_t rax_2
    
    if (rcx_7 == 0)
        rax_2 = rcx_7 + 1
    
    if (rcx_7 != 0 || rsi_1 == 0)
        rax_2 = 0
    
    int64_t var_48 = rbx_1
    int32_t rdx_6 = rax_2 + rcx_7 + rsi_1
    rbx_1 = 0
    
    if (rdx_6 s> r8_4)
        sub_1405947f0(&var_48, rdx_6)
    
    rdx_4 = sub_140a20ba0(&var_48, r12, rsi_1)
    rax_1 = var_48
    rsi = rcx_7
    r15 = r8_4
    var_48 = 0
    int32_t var_40_1
    var_40_1.q = 0
else
    rax_1 = r12
    r12 = 0

int64_t var_38 = rax_1
int32_t rdx_10 = sbb.d(rdx_4, rdx_4, rsi != 0) + 2 + rsi

if (rdx_10 s> r15)
    sub_1405947f0(&var_38, rdx_10)

sub_140a20ba0(&var_38, &data_142d5a024, 1)
*arg1 = var_38
arg1[1].d = rsi
*(arg1 + 0xc) = r15

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

if (r12 != 0)
    sub_140a74f90(r12)

return arg1
