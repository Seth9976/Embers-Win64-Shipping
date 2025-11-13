// 函数: sub_142110d90
// 地址: 0x142110d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
*arg2 = 0
arg2[1] = 0

if (arg3 u> 0x10)
    sub_140af98a0("Unknown", 0x5c5, u"Unknown material usage: %u", zx.q(arg3))
    sub_140afbb40()
else
    switch (arg3)
        case 0
            if (*result != u"bUsedWithSkeletalMesh")
                sub_1405947f0(result, 0x16)
                int32_t rax_2 = result[1].d + 0x16
                result[1].d = rax_2
                
                if (rax_2 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_4 = *result
                __builtin_memcpy(rcx_4, u"bUsedWithSkeleta", 0x20)
                *(rcx_4 + 0x20) = 0x730065004d006c
                *(rcx_4 + 0x28) = 0x68
        case 1
            if (*result != u"bUsedWithParticleSprites")
                sub_1405947f0(result, 0x19)
                int32_t rax_4 = result[1].d + 0x19
                result[1].d = rax_4
                
                if (rax_4 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_wcscpy(*result, u"bUsedWithParticleSprites")
        case 2
            if (*result != u"bUsedWithBeamTrails")
                sub_1405947f0(result, 0x14)
                int32_t rax_6 = result[1].d + 0x14
                result[1].d = rax_6
                
                if (rax_6 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rax_7 = *result
                __builtin_memcpy(rax_7, u"bUsedWithBeamTra", 0x20)
                *(rax_7 + 0x20) = 0x73006c0069
        case 3
            if (*result != u"bUsedWithMeshParticles")
                sub_1405947f0(result, 0x17)
                int32_t rax_9 = result[1].d + 0x17
                result[1].d = rax_9
                
                if (rax_9 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_12 = *result
                __builtin_memcpy(rcx_12, u"bUsedWithMeshPar", 0x20)
                *(rcx_12 + 0x20) = 0x6c006300690074
                *(rcx_12 + 0x28) = 0x730065
                *(rcx_12 + 0x2c) = 0
        case 4
            if (*result != u"bUsedWithStaticLighting")
                sub_1405947f0(result, 0x18)
                int32_t rax_19 = result[1].d + 0x18
                result[1].d = rax_19
                
                if (rax_19 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_memcpy(*result, u"bUsedWithStaticLighting", 0x30)
        case 5
            if (*result != u"bUsedWithMorphTargets")
                sub_1405947f0(result, 0x16)
                int32_t rax_22 = result[1].d + 0x16
                result[1].d = rax_22
                
                if (rax_22 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_24 = *result
                __builtin_memcpy(rcx_24, u"bUsedWithMorphTa", 0x20)
                *(rcx_24 + 0x20) = 0x74006500670072
                *(rcx_24 + 0x28) = 0x73
        case 6
            if (*result != u"bUsedWithSplineMeshes")
                sub_1405947f0(result, 0x16)
                int32_t rax_24 = result[1].d + 0x16
                result[1].d = rax_24
                
                if (rax_24 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_27 = *result
                __builtin_memcpy(rcx_27, u"bUsedWithSplineM", 0x20)
                *(rcx_27 + 0x20) = 0x65006800730065
                *(rcx_27 + 0x28) = 0x73
        case 7
            if (*result != u"bUsedWithInstancedStaticMeshes")
                sub_1405947f0(result, 0x1f)
                int32_t rax_26 = result[1].d + 0x1f
                result[1].d = rax_26
                
                if (rax_26 s> *(result + 0xc))
                    sub_140594770(result)
                
                void* rcx_30 = *result
                __builtin_memcpy(rcx_30, u"bUsedWithInstancedStatic", 0x30)
                *(rcx_30 + 0x30) = 0x6800730065004d
                *(rcx_30 + 0x38) = 0x730065
                *(rcx_30 + 0x3c) = 0
        case 8
            if (*result != u"bUsedWithGeometryCollections")
                sub_1405947f0(result, 0x1d)
                int32_t rax_28 = result[1].d + 0x1d
                result[1].d = rax_28
                
                if (rax_28 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_33 = *result
                __builtin_memcpy(rcx_33, u"bUsedWithGeometryCollect", 0x30)
                *(rcx_33 + 0x30) = 0x73006e006f0069
                *(rcx_33 + 0x38) = 0
        case 9
            if (*result != u"bUsedWithClothing")
                sub_1405947f0(result, 0x12)
                int32_t rax_30 = result[1].d + 0x12
                result[1].d = rax_30
                
                if (rax_30 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_memcpy(*result, u"bUsedWithClothing", 0x24)
        case 0xa
            if (*result != u"bUsedWithNiagaraSprites")
                sub_1405947f0(result, 0x18)
                int32_t rax_11 = result[1].d + 0x18
                result[1].d = rax_11
                
                if (rax_11 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_memcpy(*result, u"bUsedWithNiagaraSprites", 0x30)
        case 0xb
            if (*result != u"bUsedWithNiagaraRibbons")
                sub_1405947f0(result, 0x18)
                int32_t rax_14 = result[1].d + 0x18
                result[1].d = rax_14
                
                if (rax_14 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_memcpy(*result, u"bUsedWithNiagaraRibbons", 0x30)
        case 0xc
            if (*result != u"bUsedWithNiagaraMeshParticles")
                sub_1405947f0(result, 0x1e)
                int32_t rax_17 = result[1].d + 0x1e
                result[1].d = rax_17
                
                if (rax_17 s> *(result + 0xc))
                    sub_140594770(result)
                
                void* rcx_19 = *result
                __builtin_memcpy(rcx_19, u"bUsedWithNiagaraMeshPart", 0x30)
                *(rcx_19 + 0x30) = 0x65006c00630069
                *(rcx_19 + 0x38) = 0x73
        case 0xd
            if (*result != u"bUsedWithGeometryCache")
                sub_1405947f0(result, 0x17)
                int32_t rax_32 = result[1].d + 0x17
                result[1].d = rax_32
                
                if (rax_32 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_39 = *result
                __builtin_memcpy(rcx_39, u"bUsedWithGeometr", 0x20)
                *(rcx_39 + 0x20) = 0x63006100430079
                *(rcx_39 + 0x28) = 0x650068
                *(rcx_39 + 0x2c) = 0
        case 0xe
            if (*result != u"bUsedWithWater")
                sub_1405947f0(result, 0xf)
                int32_t rax_34 = result[1].d + 0xf
                result[1].d = rax_34
                
                if (rax_34 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_42 = *result
                *rcx_42 = (*u"bUsedWithWater")[0].o
                rcx_42[1].q = 0x74006100570068
                *(rcx_42 + 0x18) = 0x720065
                *(rcx_42 + 0x1c) = 0
        case 0xf
            if (*result != u"bUsedWithHairStrands")
                sub_1405947f0(result, 0x15)
                int32_t rax_36 = result[1].d + 0x15
                result[1].d = rax_36
                
                if (rax_36 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_45 = *result
                __builtin_memcpy(rcx_45, u"bUsedWithHairStr", 0x20)
                *(rcx_45 + 0x20) = 0x730064006e0061
                *(rcx_45 + 0x28) = 0
        case 0x10
            if (*result != u"bUsedWithLidarPointCloud")
                sub_1405947f0(result, 0x19)
                int32_t rax_38 = result[1].d + 0x19
                result[1].d = rax_38
                
                if (rax_38 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_wcscpy(*result, u"bUsedWithLidarPointCloud")

return result
