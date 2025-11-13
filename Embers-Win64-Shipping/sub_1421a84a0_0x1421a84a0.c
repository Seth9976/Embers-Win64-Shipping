// 函数: sub_1421a84a0
// 地址: 0x1421a84a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
int32_t i = 0
*(arg1 + 0x118) = 0
__builtin_memset(arg1 + 0x11c, 0, 0xa6)
sub_1419c7530(arg1 + 0x118, arg2[3], u"PositionTexture", 0)
sub_1419c7530(arg1 + 0x11c, arg2[3], u"PositionTextureSampler", 0)
sub_1419c7530(arg1 + 0x120, arg2[3], u"VelocityTexture", 0)
sub_1419c7530(arg1 + 0x124, arg2[3], u"VelocityTextureSampler", 0)
sub_1419c7530(arg1 + 0x128, arg2[3], u"AttributesTexture", 0)
sub_1419c7530(arg1 + 0x12c, arg2[3], u"AttributesTextureSampler", 0)
sub_1419c7530(arg1 + 0x130, arg2[3], u"RenderAttributesTexture", 0)
sub_1419c7530(arg1 + 0x134, arg2[3], u"RenderAttributesTextureSampler", 0)
sub_1419c7530(arg1 + 0x138, arg2[3], u"CurveTexture", 0)
sub_1419c7530(arg1 + 0x13c, arg2[3], u"CurveTextureSampler", 0)
void* rdi_1 = arg1 + 0x150

do
    int16_t* var_70
    sub_140a2e390(&var_70, u"VectorFieldTextures%d", zx.q(i))
    int16_t* const r8_2 = &data_142d40450
    int32_t var_68
    
    if (var_68 != 0)
        r8_2 = var_70
    
    sub_1419c7530(rdi_1 - 0x10, arg2[3], r8_2, 0)
    int16_t* rcx_14 = var_70
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int16_t* var_60
    sub_140a2e390(&var_60, u"VectorFieldTexturesSampler%d", zx.q(i))
    int16_t* r8_4 = &data_142d40450
    int32_t var_58
    
    if (var_58 != 0)
        r8_4 = var_60
    
    sub_1419c7530(rdi_1, arg2[3], r8_4, 0)
    int16_t* rcx_17 = var_60
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    i += 1
    rdi_1 += 4
while (i s< 4)

sub_1419c6ab0(arg1 + 0x17e, arg2[3], u"CollisionDepthBounds", 0)
sub_1421ae200(arg1 + 0x160, arg2[3])
sub_14111ea20(arg1 + 0x184, arg2[3])
return arg1
