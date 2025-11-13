// 函数: sub_1426c7bc0
// 地址: 0x1426c7bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426c7870(arg1, arg2)
*arg1 = &data_14346d8c0
arg1[5] = &data_14346db98
int64_t var_28 = 0
int64_t var_20 = 0
sub_1405947f0(&var_28, 0x12)
int32_t r14 = var_20:4.d
int32_t rbp = var_20.d + 0x12
var_20.d = rbp

if (rbp s> r14)
    sub_140594770(&var_28)
    r14 = var_20:4.d
    rbp = var_20.d

int64_t rdi = var_28
sub_1405a7220(rdi, 0x12, "Set default focus", 0x12, 0x3f)

if (&arg1[6] != &var_28)
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = rdi
    arg1[7].d = rbp
    *(arg1 + 0x3c) = r14
else if (rdi != 0)
    sub_140a74f90(rdi)

arg1[0xb].b &= 0xf3
arg1[0xb].b |= 3
arg1[0x13].b = 0
void* rax = sub_142452380()
void arg_8
sub_1426a9410(&arg1[0xe], arg1, *sub_140b58260(&arg_8, u"BlackboardKey", 1), rax)
sub_1426a98a0(&arg1[0xe], arg1, *sub_140b58260(&arg_8, u"BlackboardKey", 1))
return arg1
