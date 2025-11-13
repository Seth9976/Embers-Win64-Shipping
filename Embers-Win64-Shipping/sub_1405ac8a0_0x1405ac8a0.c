// 函数: sub_1405ac8a0
// 地址: 0x1405ac8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int32_t var_10 = 0x66
*arg1 = &data_142d48f68
__builtin_memset(&arg1[5], 0, 0x18)
arg1[8].b = 1
wchar16 const* const var_18 =
"/Engine/Functions/Engine_MaterialFunctions02/PivotPainter2/Black_1x1_EXR_Texture."
"Black_1x1_EXR_Texture"
int128_t zmm0 = var_18.o
__builtin_memset(&arg1[9], 0, 0x18)
var_18.o = zmm0
sub_140d2c760(&arg1[9], &var_18)
int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

(*(*rcx_1 + 0x40))(rcx_1, 
    r.Composure.CompositingElements.Editor.WarnWhenSceneCaptureIsMissingCamera", &arg1[8], By default, "
"scene capture (CG) elements rely on a camera to position themselves.\nTo catch when one isn't set "
"up", 0)
return arg1
