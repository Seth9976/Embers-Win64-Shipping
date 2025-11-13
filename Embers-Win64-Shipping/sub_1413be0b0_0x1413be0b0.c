// 函数: sub_1413be0b0
// 地址: 0x1413be0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
*(arg1 + 0x118) = 0
__builtin_memset(arg1 + 0x11c, 0, 0x18)
sub_1419c7530(arg1 + 0x118, arg2[3], u"RectLightTexture", 0)
sub_1419c7530(arg1 + 0x11c, arg2[3], u"TextureSampler", 0)
sub_1419c6ab0(arg1 + 0x120, arg2[3], u"Dimensions", 0)
sub_1419c6ab0(arg1 + 0x126, arg2[3], u"MipLevel", 0)
int64_t* rbp_1 = arg2[3]
sub_1419c7530(arg1 + 0x12c, rbp_1, u"MipTree", 0)
int16_t* var_38 = nullptr
int64_t var_30 = 0
sub_1405947f0(&var_38, 3)
int32_t rsi = var_30:4.d
int32_t rdi = var_30.d + 3
var_30.d = rdi

if (rdi s> rsi)
    sub_140594770(&var_38)
    rsi = var_30:4.d
    rdi = var_30.d

int16_t* rbx = var_38
UnDecorator::getReferenceType(rbx, &data_142da77e8, 6)
var_38 = rbx
var_30.d = rdi
int32_t r15
r15.b = rdi == 0
var_30:4.d = rsi
int32_t rdx_7 = rdi + 7 + r15

if (rdx_7 s> rsi)
    sub_1405947f0(&var_38, rdx_7)

sub_140a20ba0(&var_38, u"MipTree", 7)
int16_t* r8 = &data_142d40450
int16_t* rbx_1 = var_38

if (var_30.d != 0)
    r8 = rbx_1

sub_1419c7530(arg1 + 0x130, rbp_1, r8, 0)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return arg1
