// 函数: sub_14214db40
// 地址: 0x14214db40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408891d0(arg2 + 0x2a8, u"PARTICLE_FACTORY", &(*U"RGBXYZF10|")[7])
sub_1408891d0(arg2 + 0x2a8, u"PARTICLE_MESH_FACTORY", &(*U"RGBXYZF10|")[7])
sub_1408891d0(arg2 + 0x2a8, u"PARTICLE_MESH_INSTANCED", &(*U"RGBXYZF10|")[7])
int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 0x14)
int32_t rax = var_10 + 0x14
var_10 = rax

if (rax s> 0)
    sub_140594770(&var_18)

sub_1405a7220(var_18, 0x14, "MANUAL_VERTEX_FETCH", 0x14, 0x3f)
void arg_10
int32_t* result = sub_14062d6e0(arg2 + 0x2a8, &arg_10, &var_18)
int32_t rsi = *result

if (var_18 != 0)
    result = sub_140a74f90(var_18)

if (rsi == 0xffffffff)
    result = sub_1419d5c70(*arg1)
    
    if (result.b != 0)
        return sub_1408891d0(arg2 + 0x2a8, u"MANUAL_VERTEX_FETCH", &(*U"RGBXYZF10|")[7])

return result
