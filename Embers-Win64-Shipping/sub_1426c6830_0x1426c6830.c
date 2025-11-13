// 函数: sub_1426c6830
// 地址: 0x1426c6830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a6c70(arg1, arg2)
*arg1 = &data_14346a388
arg1[5] = &data_14346a670
__builtin_memset(&arg1[0xe], 0, 0x20)
*(arg1 + 0x94) &= 0xfffffffe
arg1[0x12].b = 0xff
__builtin_memset(&arg1[0x13], 0, 0x20)
*(arg1 + 0xbc) &= 0xfffffffe
arg1[0x17].b = 0xff
__builtin_memset(&arg1[0x18], 0, 0x20)
*(arg1 + 0xe4) &= 0xfffffffe
arg1[0x1c].b = 0xff
int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 0xb)
int32_t r13 = var_30:4.d
int32_t r12 = var_30.d + 0xb
var_30.d = r12

if (r12 s> r13)
    sub_140594770(&var_38)
    r13 = var_30:4.d
    r12 = var_30.d

int64_t rbp = var_38
sub_1405a7220(rbp, 0xb, "Cone Check", 0xb, 0x3f)

if (&arg1[6] != &var_38)
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = rbp
    arg1[7].d = r12
    *(arg1 + 0x3c) = r13
else if (rbp != 0)
    sub_140a74f90(rbp)

void* rax = sub_142452380()
void arg_8
sub_1426a9410(&arg1[0xe], arg1, *sub_140b58260(&arg_8, u"ConeOrigin", 1), rax)
sub_1426a98a0(&arg1[0xe], arg1, *sub_140b58260(&arg_8, u"ConeOrigin", 1))
void* rax_3 = sub_142452380()
sub_1426a9410(&arg1[0x13], arg1, *sub_140b58260(&arg_8, u"ConeDirection", 1), rax_3)
sub_1426a98a0(&arg1[0x13], arg1, *sub_140b58260(&arg_8, u"ConeDirection", 1))
*(arg1 + 0xbc) |= 1
void* rax_6 = sub_142452380()
sub_1426a9410(&arg1[0x18], arg1, *sub_140b58260(&arg_8, u"Observed", 1), rax_6)
sub_1426a98a0(&arg1[0x18], arg1, *sub_140b58260(&arg_8, u"Observed", 1))
arg1[0xb].b |= 5
*(arg1 + 0x64) = 0
arg1[0xd].d = 0x42340000
return arg1
