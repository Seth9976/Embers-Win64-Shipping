// 函数: sub_1411c8710
// 地址: 0x1411c8710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
__builtin_memset(arg1 + 0x118, 0, 0x42)
*(arg1 + 0x15a) = 0
*(arg1 + 0x15e) = 0
*(arg1 + 0x162) = 0
__builtin_memset(arg1 + 0x164, 0, 0x4a)
int64_t* rbx_1 = arg2[3]
sub_1419c7530(arg1 + 0x118, rbx_1, u"HeightfieldDescriptions", 0)
sub_1419c6ab0(arg1 + 0x11c, rbx_1, u"NumHeightfields", 0)
sub_1411d9b00(arg1 + 0x122, arg2[3])
int64_t* rbx_3 = arg2[3]
sub_1407862f0(arg1 + 0x132, rbx_3, u"ObjectIndirectArguments")
sub_1407862f0(arg1 + 0x13a, rbx_3, u"CulledObjectBounds")
sub_1407862f0(arg1 + 0x142, rbx_3, u"CulledObjectData")
sub_1407862f0(arg1 + 0x14a, rbx_3, u"CulledObjectBoxBounds")
sub_1419c7530(arg1 + 0x152, rbx_3, u"HFVisibilityTexture", 0)
sub_1419c7530(arg1 + 0x156, rbx_3, u"DistanceFieldTexture", 0)
sub_1419c7530(arg1 + 0x15a, rbx_3, u"DistanceFieldSampler", 0)
sub_1419c6ab0(arg1 + 0x15e, rbx_3, u"DistanceFieldAtlasTexelSize", 0)
sub_1419c6ab0(arg1 + 0x164, arg2[3], u"LightDirection", 0)
sub_1419c6ab0(arg1 + 0x16a, arg2[3], u"TanLightAngle", 0)
sub_1419c6ab0(arg1 + 0x170, arg2[3], u"CascadeDepthMinMax", 0)
int64_t* rbx_4 = arg2[3]
sub_1407862f0(arg1 + 0x176, rbx_4, u"ShadowTileNumCulledObjects")
sub_1407862f0(arg1 + 0x17e, rbx_4, u"ShadowTileStartOffsets")
sub_1407862f0(arg1 + 0x186, rbx_4, u"NextStartOffset")
sub_1407862f0(arg1 + 0x18e, rbx_4, u"ShadowTileArrayData")
sub_1419c6ab0(arg1 + 0x196, rbx_4, u"ShadowTileListGroupSize", 0)
sub_1419c6ab0(arg1 + 0x19c, rbx_4, u"ShadowAverageObjectsPerTile", 0)
sub_1419c6ab0(arg1 + 0x1a2, arg2[3], u"WorldToShadow", 0)
sub_1419c6ab0(arg1 + 0x1a8, arg2[3], u"TwoSidedMeshDistanceBias", 0)
return arg1
