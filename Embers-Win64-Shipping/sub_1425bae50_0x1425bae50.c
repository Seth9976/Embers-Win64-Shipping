// 函数: sub_1425bae50
// 地址: 0x1425bae50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 7)
int32_t r12 = var_30:4.d
int32_t rbp = var_30.d + 7
var_30.d = rbp

if (rbp s> r12)
    sub_140594770(&var_38)
    r12 = var_30:4.d
    rbp = var_30.d

int64_t r15 = var_38
UnDecorator::getReferenceType(r15, u"VoIP: ", 0xe)
int64_t var_28
int64_t* rax = sub_141f84ac0(arg1, &var_28)

if (rbp s> 1)
    int32_t rax_1 = rax[1].d
    int32_t r14_1 = rax_1 - 1
    
    if (rax_1 == 0)
        r14_1 = 0
    
    if (rbp == 0 && r14_1 != 0)
        rdi = 1
    
    var_38 = r15
    int32_t rdx_6 = r14_1 + rdi + rbp
    var_30.d = rbp
    var_30:4.d = r12
    
    if (rdx_6 s> r12)
        sub_1405947f0(&var_38, rdx_6)
    
    sub_140a20ba0(&var_38, *rax, r14_1)
    *arg2 = var_38
    arg2[1].d = var_30.d
    *(arg2 + 0xc) = var_30:4.d
else
    *arg2 = 0
    *arg2 = *rax
    *rax = 0
    arg2[1].d = rax[1].d
    *(arg2 + 0xc) = *(rax + 0xc)
    rax[1] = 0
    
    if (r15 != 0)
        sub_140a74f90(r15)

int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg2
