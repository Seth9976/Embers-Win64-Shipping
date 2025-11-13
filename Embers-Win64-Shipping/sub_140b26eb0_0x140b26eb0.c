// 函数: sub_140b26eb0
// 地址: 0x140b26eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = sub_140a4d590()
int32_t r14 = 0
int64_t var_28 = 0
int64_t r15 = 0
int64_t var_20 = 0
int32_t rdi = 0
int32_t rbp = 0

if (rax != 0 && *rax != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (*(rax + (rbx_1 << 1)) != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rbp = var_20:4.d
        rdi = var_20.d
        r15 = var_28
    
    rdi += rbx_1.d + 1
    var_20.d = rdi
    
    if (rdi s> rbp)
        sub_140594770(&var_28)
        rbp = var_20:4.d
        rdi = var_20.d
        r15 = var_28
    
    UnDecorator::getReferenceType(r15, rax, (rbx_1.d + 1) * 2)

if (rax == 0 || *rax == 0 || rdi == 0)
    r14 = 1

int32_t rdx_5 = rdi + 0xf + r14
var_28 = r15
var_20.d = rdi
var_20:4.d = rbp

if (rdx_5 s> rbp)
    sub_1405947f0(&var_28, rdx_5)

sub_140a20ba0(&var_28, u"Saved/Sandboxes", 0xf)
*arg1 = var_28
arg1[1].d = var_20.d
*(arg1 + 0xc) = var_20:4.d
return arg1
