// 函数: sub_140b17340
// 地址: 0x140b17340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = sub_140a4d590()
int64_t var_78 = 0
int64_t r15 = 0
int64_t var_70 = 0
int32_t rdi = 0
int32_t r14 = 0
int32_t rax_1

if (rax != 0 && *rax != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (*(rax + (rbx_1 << 1)) != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_78, rbx_1.d + 1)
        r14 = var_70:4.d
        rdi = var_70.d
        r15 = var_78
    
    rdi += rbx_1.d + 1
    var_70.d = rdi
    
    if (rdi s> r14)
        sub_140594770(&var_78)
        r14 = var_70:4.d
        rdi = var_70.d
        r15 = var_78
    
    UnDecorator::getReferenceType(r15, rax, (rbx_1.d + 1) * 2)
    rax_1 = 0

if (rax == 0 || *rax == 0 || rdi == 0)
    rax_1 = 1

var_78 = r15
int32_t rdx_5 = rax_1 + 8 + rdi
var_70.d = rdi
var_70:4.d = r14

if (rdx_5 s> r14)
    sub_1405947f0(&var_78, rdx_5)

int32_t rdx_6 = sub_140a20ba0(&var_78, u"Content/", 8)
int32_t rcx_5 = var_70.d
int32_t r8_3 = var_70:4.d
int64_t var_68 = var_78
var_78 = 0
int64_t var_70_1 = 0
int32_t rdx_9 = sbb.d(rdx_6, rdx_6, rcx_5 != 0) + 0xc + rcx_5

if (rdx_9 s> r8_3)
    sub_1405947f0(&var_68, rdx_9)

sub_140a20ba0(&var_68, u"Developers/", 0xb)
int64_t rsi_1 = var_68
var_68 = 0
int32_t var_60
var_60.q = 0
int64_t var_38
int64_t* rax_5
int32_t rdx_10
rax_5, rdx_10 = sub_140b175a0(&var_38)
int64_t rax_6
int32_t rcx_9
int32_t r8_4

if (rcx_5 s> 1)
    int32_t rax_7 = rax_5[1].d
    int32_t rdi_1 = rax_7 - 1
    
    if (rax_7 == 0)
        rdi_1 = 0
    
    int32_t rax_8
    
    if (rcx_5 == 0)
        rax_8 = rcx_5 + 1
    
    if (rcx_5 != 0 || rdi_1 == 0)
        rax_8 = 0
    
    int64_t var_58 = rsi_1
    int32_t rdx_12 = rcx_5 + rdi_1 + rax_8
    rsi_1 = 0
    
    if (rdx_12 s> r8_3)
        sub_1405947f0(&var_58, rdx_12)
    
    rdx_10 = sub_140a20ba0(&var_58, *rax_5, rdi_1)
    rax_6 = var_58
    rcx_9 = rcx_5
    r8_4 = r8_3
    var_58 = 0
    int32_t var_50_1
    var_50_1.q = 0
else
    rax_6 = *rax_5
    *rax_5 = 0
    rcx_9 = rax_5[1].d
    r8_4 = *(rax_5 + 0xc)
    rax_5[1] = 0

int64_t var_48 = rax_6
int32_t rdx_16 = sbb.d(rdx_10, rdx_10, rcx_9 != 0) + 2 + rcx_9

if (rdx_16 s> r8_4)
    sub_1405947f0(&var_48, rdx_16)

sub_140a20ba0(&var_48, &data_142d5a024, 1)
*arg1 = var_48
arg1[1].d = rcx_9
*(arg1 + 0xc) = r8_4

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

int64_t rcx_15 = var_38

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return arg1
