// 函数: sub_142802af0
// 地址: 0x142802af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t var_78
memset(&var_78, 0, 0x58)
char* _String_1
char* _EndPtr

if ((*(*arg3 + 0x10))(arg3, "NbParticles", &_String_1) != 0)
    char* _String = _String_1
    _EndPtr = _String
    
    if (_String != 0 && *_String != 0)
        var_78 = strtoul(_String, &_EndPtr, 0xa)

void var_74
void var_70
sub_1428059d0(arg3, "Phases", &var_70, &_String_1, &var_74, arg4)
void var_50
sub_142804f00(arg3, "Restvalues", &var_50, &_String_1, &_EndPtr, arg4, var_78)
void var_68
void var_60
sub_142804d40(arg3, "Sets", &var_60, &_String_1, &var_68, arg4)
void var_58
sub_142804d40(arg3, "ParticleIndices", &var_58, &_String_1, &_EndPtr, arg4)
void var_48
void var_40
sub_142804d40(arg3, "TetherAnchors", &var_40, &_String_1, &var_48, arg4)
void var_38
sub_142804f00(arg3, "TetherLengths", &var_38, &_String_1, &var_48, arg4)
int64_t* rcx_8 = *arg5
int64_t rax_5 = (*(*rcx_8 + 0x70))(rcx_8, &var_78)
arg2[1] = rax_5
arg2[2] = rax_5
*arg2 = "PxClothFabric"
return arg2
