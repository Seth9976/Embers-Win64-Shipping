// 函数: sub_140b16e40
// 地址: 0x140b16e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = sub_140a4d590()
int64_t r15 = 0
int32_t rdi = 0
int32_t r14 = 0
int64_t var_38 = 0
int64_t var_30 = 0

if (rax != 0 && *rax != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (*(rax + (rbx_1 << 1)) != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        r14 = var_30:4.d
        rdi = var_30.d
        r15 = var_38
    
    rdi += rbx_1.d + 1
    var_30.d = rdi
    
    if (rdi s> r14)
        sub_140594770(&var_38)
        r14 = var_30:4.d
        rdi = var_30.d
        r15 = var_38
    
    UnDecorator::getReferenceType(r15, rax, (rbx_1.d + 1) * 2)

int32_t rax_1

if (rax == 0 || *rax == 0 || rdi == 0)
    rax_1 = 1
else
    rax_1 = 0

int32_t rdx_5 = rdi + 8 + rax_1
var_38 = r15
var_30.d = rdi
var_30:4.d = r14

if (rdx_5 s> r14)
    sub_1405947f0(&var_38, rdx_5)

int32_t rdx_6 = sub_140a20ba0(&var_38, u"Content/", 8)
int32_t rcx_5 = var_30.d
int32_t r8_3 = var_30:4.d
int64_t var_28 = var_38
var_38 = 0
int64_t var_30_1 = 0
int32_t rdx_9 = sbb.d(rdx_6, rdx_6, rcx_5 != 0) + 0xc + rcx_5

if (rdx_9 s> r8_3)
    sub_1405947f0(&var_28, rdx_9)

sub_140a20ba0(&var_28, u"Developers/", 0xb)
*arg1 = var_28
arg1[1].d = rcx_5
*(arg1 + 0xc) = r8_3
return arg1
