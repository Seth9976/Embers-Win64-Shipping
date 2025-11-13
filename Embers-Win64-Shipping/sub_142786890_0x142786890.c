// 函数: sub_142786890
// 地址: 0x142786890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
arg1[0x46] = 0x3c23d70a
arg1[0x47].w = 1
*arg1 = &data_1434add48
arg1[0x56] = 0
arg1[0x57].d = 0x3f800000
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"PostProcessComponent0", 1)
int64_t* rax_1 = sub_142574730()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x55] = rax_2
arg1[0x26] = rax_2
arg1[0x44] =
    sub_140d2f6f0(sub_1425b9040(), 0, /Engine/EngineDebugMaterials/VolumeToRender", 0, 0, 0, 1, 0)
int64_t* rax_6 =
    sub_140d2f6f0(sub_142543940(), 0, /Engine/EngineDebugMaterials/M_VolumeRenderSphereTracePP", 0, 
    0, 0, 1, 0)

if (rax_6 == 0)
    arg1[0x45] = 0
    return arg1

arg1[0x45] = sub_141bb9010(rax_6)
return arg1
