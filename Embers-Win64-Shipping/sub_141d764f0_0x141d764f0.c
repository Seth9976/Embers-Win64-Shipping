// 函数: sub_141d764f0
// 地址: 0x141d764f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rdx = u"Uncompressed"

if (*(arg1 + 0xd8) != 0)
    rdx = u"Compressed"

void var_28
sub_140b2f3c0(&var_28, rdx)
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 8)
int32_t rax = var_40 + 8
var_40 = rax

if (rax s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"quality", 0x10)
int64_t* var_38 = &var_48
void* var_30 = &var_28
void arg_8
sub_141d73530(arg2, &arg_8, &var_38, nullptr)
int64_t rcx_5 = var_48

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t var_18

if (var_18 != 0)
    sub_140a74f90(var_18)

uint64_t rax_1 = zx.q(*(arg1 + 0xd9))
int16_t* const rdx_3 = &data_142d40450

if (rax_1.d u<= 5)
    switch (rax_1)
        case 0
            rdx_3 = u"sRGB"
        case 1
            rdx_3 = u"P3D65"
        case 2
            rdx_3 = u"Rec2020"
        case 3
            rdx_3 = u"ACES"
        case 4
            rdx_3 = u"ACEScg"
        case 5
            rdx_3 = u"Linear"

sub_140b2f3c0(&var_28, rdx_3)
var_48 = 0
int32_t var_40_1 = 0
sub_1405947f0(&var_48, 6)
int32_t rax_2 = var_40_1 + 6
var_40_1 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"gamut", 0xc)
var_38 = &var_48
void* var_30_1 = &var_28
int32_t* result = sub_141d73530(arg2, &arg_8, &var_38, nullptr)
int64_t rcx_14 = var_48

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

if (var_18 == 0)
    return result

return sub_140a74f90(var_18)
