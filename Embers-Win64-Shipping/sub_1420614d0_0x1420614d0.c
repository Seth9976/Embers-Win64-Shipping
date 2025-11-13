// 函数: sub_1420614d0
// 地址: 0x1420614d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 0x14)
int32_t rax = var_10 + 0x14
var_10 = rax

if (rax s> 0)
    sub_140594770(&var_18)

sub_1405a7220(var_18, 0x14, "MANUAL_VERTEX_FETCH", 0x14, 0x3f)
void arg_8
int32_t rbp = *sub_14062d6e0(arg2 + 0x2a8, &arg_8, &var_18)

if (var_18 != 0)
    sub_140a74f90(var_18)

if (rbp == 0xffffffff && sub_1419d5c70(*arg1) != 0)
    sub_1410b3e70(arg2, u"MANUAL_VERTEX_FETCH", &(*U"RGBXYZF10|")[7])

if (sub_1419d5c70(*arg1) != 0)
    sub_1410b3e70(arg2, u"USE_INSTANCING", &(*U"RGBXYZF10|")[7])
    sub_1410b3e70(arg2, u"USE_INSTANCING_BONEMAP", &(*U"RGBXYZF10|")[7])
    sub_1410b3e70(arg2, u"USE_DITHERED_LOD_TRANSITION_FOR_INSTANCED", &(*U"RGBXYZF10|")[8])

sub_1410b3fe0(arg2, u"USE_PER_VERTEX_HITPROXY_ID", 1)
return sub_1420ff270(arg1, arg2) __tailcall
