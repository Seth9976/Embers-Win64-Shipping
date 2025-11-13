// 函数: sub_141396000
// 地址: 0x141396000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419c7530(&arg1[0x7a], arg2, u"BilinearTextureSampler", 0)
sub_1419c6ab0(arg1, arg2, u"ViewportSize", 0)
sub_1419c6ab0(&arg1[3], arg2, u"ViewportRect", 0)
sub_1419c6ab0(&arg1[0x74], arg2, u"ScreenPosToPixel", 0)
sub_1419c6ab0(&arg1[0x77], arg2, u"SceneColorBufferUVViewport", 0)
int32_t i = 0
void* rsi = &arg1[0x53]
void* rdi_1 = &arg1[0x1c]
int64_t result

do
    int16_t* var_48
    sub_140a2e390(&var_48, u"PostprocessInput%d", zx.q(i))
    int16_t* const r8_2 = &data_142d40450
    int32_t var_40
    
    if (var_40 != 0)
        r8_2 = var_48
    
    sub_1419c7530(rdi_1 - 0x2c, arg2, r8_2, 0)
    int16_t* rcx_7 = var_48
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int16_t* var_38
    sub_140a2e390(&var_38, u"PostprocessInput%dSampler", zx.q(i))
    int16_t* const r8_4 = &data_142d40450
    int32_t var_30
    
    if (var_30 != 0)
        r8_4 = var_38
    
    sub_1419c7530(rdi_1, arg2, r8_4, 0)
    int16_t* rcx_10 = var_38
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int16_t* var_28
    sub_140a2e390(&var_28, u"PostprocessInput%dSize", zx.q(i))
    int16_t* r8_6 = &data_142d40450
    int32_t var_20
    
    if (var_20 != 0)
        r8_6 = var_28
    
    sub_1419c6ab0(rsi - 0x42, arg2, r8_6, 0)
    int16_t* rcx_13 = var_28
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int16_t* var_18
    sub_140a2e390(&var_18, u"PostprocessInput%dMinMax", zx.q(i))
    int16_t* r8_8 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        r8_8 = var_18
    
    result = sub_1419c6ab0(rsi, arg2, r8_8, 0)
    int16_t* rcx_16 = var_18
    
    if (rcx_16 != 0)
        result = sub_140a74f90(rcx_16)
    
    i += 1
    rdi_1 += 4
    rsi += 6
while (i u< 0xb)

return result
