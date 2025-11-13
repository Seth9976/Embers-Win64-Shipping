// 函数: sub_140b73110
// 地址: 0x140b73110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = sub_140b73e20()
int64_t r14 = 0
int64_t var_28 = 0
int32_t rdi = 0
int64_t var_20 = 0
int32_t r15 = 0
int32_t rax_1

if (rax != 0 && *rax != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rax[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        r15 = var_20:4.d
        rdi = var_20.d
        r14 = var_28
    
    rdi += rbx_1.d + 1
    var_20.d = rdi
    
    if (rdi s> r15)
        sub_140594770(&var_28)
        r15 = var_20:4.d
        rdi = var_20.d
        r14 = var_28
    
    UnDecorator::getReferenceType(r14, rax, (rbx_1.d + 1) * 2)
    rax_1 = 0x18

if (rax == 0 || *rax == 0 || rdi == 0)
    rax_1 = 0x19

int32_t rdx_4 = rax_1 + rdi
*arg1 = r14
arg1[1].d = rdi
*(arg1 + 0xc) = r15

if (rdx_4 s> r15)
    sub_1405947f0(arg1, rdx_4)

sub_140a2cf70(arg1, u"UnrealShaderWorkingDir/", 0x17)
return arg1
