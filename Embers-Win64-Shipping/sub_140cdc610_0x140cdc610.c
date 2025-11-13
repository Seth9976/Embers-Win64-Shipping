// 函数: sub_140cdc610
// 地址: 0x140cdc610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3

if (*arg3 != &(*U"RGBXYZF10|")[6])
    int32_t rdx = 0
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 2)
        sub_1405947f0(arg3, 2)
        rdx = rdi[1].d
    
    rdi[1].d = rdx + 2
    
    if (rdx + 2 s> *(rdi + 0xc))
        sub_140594770(rdi)
    
    **rdi = 0x46

int64_t var_18
sub_140b63b70(*(arg1 + 8), &var_18)
int32_t var_10
int32_t r8_1

if (var_10 == 0)
    r8_1 = 0
else
    r8_1 = var_10 - 1

sub_140a20ba0(rdi, var_18, r8_1)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 9)
int32_t rax_2 = arg2[1].d + 9
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"PROPERTY", 0x12)
return arg2
