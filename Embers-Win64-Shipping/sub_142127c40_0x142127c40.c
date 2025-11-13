// 函数: sub_142127c40
// 地址: 0x142127c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
*arg1 = 0
arg1[1] = 0

if (arg2 u> 0xb)
label_14212809a:
    
    if (*result != u"Unknown")
        sub_1405947f0(result, 8)
        int32_t rax_27 = result[1].d + 8
        result[1].d = rax_27
        
        if (rax_27 s> *(result + 0xc))
            sub_140594770(result)
        
        **result = *u"Unknown"
else
    switch (arg2)
        case 0
            if (*result != u"MSM_Unlit")
                sub_1405947f0(result, 0xa)
                int32_t rax_2 = result[1].d + 0xa
                result[1].d = rax_2
                
                if (rax_2 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_memcpy(*result, u"MSM_Unlit", 0x14)
        case 1
            if (*result != u"MSM_DefaultLit")
                sub_1405947f0(result, 0xf)
                int32_t rax_4 = result[1].d + 0xf
                result[1].d = rax_4
                
                if (rax_4 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_5 = *result
                *rcx_5 = (*u"MSM_DefaultLit")[0].o
                rcx_5[1].q = 0x4c0074006c0075
                *(rcx_5 + 0x18) = 0x740069
                *(rcx_5 + 0x1c) = 0
        case 2
            if (*result != u"MSM_Subsurface")
                sub_1405947f0(result, 0xf)
                int32_t rax_6 = result[1].d + 0xf
                result[1].d = rax_6
                
                if (rax_6 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_8 = *result
                *rcx_8 = (*u"MSM_Subsurface")[0].o
                rcx_8[1].q = 0x61006600720075
                *(rcx_8 + 0x18) = 0x650063
                *(rcx_8 + 0x1c) = 0
        case 3
            if (*result != u"MSM_PreintegratedSkin")
                sub_1405947f0(result, 0x16)
                int32_t rax_8 = result[1].d + 0x16
                result[1].d = rax_8
                
                if (rax_8 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_11 = *result
                __builtin_memcpy(rcx_11, u"MSM_Preintegrate", 0x20)
                *(rcx_11 + 0x20) = 0x69006b00530064
                *(rcx_11 + 0x28) = 0x6e
        case 4
            if (*result != u"MSM_ClearCoat")
                sub_1405947f0(result, 0xe)
                int32_t rax_10 = result[1].d + 0xe
                result[1].d = rax_10
                
                if (rax_10 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_14 = *result
                *rcx_14 = (*u"MSM_ClearCoat")[0].o
                rcx_14[1].q = 0x61006f00430072
                *(rcx_14 + 0x18) = 0x74
        case 5
            if (*result != u"MSM_SubsurfaceProfile")
                sub_1405947f0(result, 0x16)
                int32_t rax_12 = result[1].d + 0x16
                result[1].d = rax_12
                
                if (rax_12 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_17 = *result
                __builtin_memcpy(rcx_17, u"MSM_SubsurfacePr", 0x20)
                *(rcx_17 + 0x20) = 0x6c00690066006f
                *(rcx_17 + 0x28) = 0x65
        case 6
            if (*result != u"MSM_TwoSidedFoliage")
                sub_1405947f0(result, 0x14)
                int32_t rax_14 = result[1].d + 0x14
                result[1].d = rax_14
                
                if (rax_14 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rax_15 = *result
                __builtin_memcpy(rax_15, u"MSM_TwoSidedFoli", 0x20)
                *(rax_15 + 0x20) = 0x6500670061
        case 7
            goto label_14212809a
        case 8
            if (*result != u"MSM_Cloth")
                sub_1405947f0(result, 0xa)
                int32_t rax_17 = result[1].d + 0xa
                result[1].d = rax_17
                
                if (rax_17 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_memcpy(*result, u"MSM_Cloth", 0x14)
        case 9
            if (*result != u"MSM_Eye")
                sub_1405947f0(result, 8)
                int32_t rax_19 = result[1].d + 8
                result[1].d = rax_19
                
                if (rax_19 s> *(result + 0xc))
                    sub_140594770(result)
                
                **result = *u"MSM_Eye"
        case 0xa
            if (*result != u"MSM_SingleLayerWater")
                sub_1405947f0(result, 0x15)
                int32_t rax_22 = result[1].d + 0x15
                result[1].d = rax_22
                
                if (rax_22 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_27 = *result
                __builtin_memcpy(rcx_27, u"MSM_SingleLayerW", 0x20)
                *(rcx_27 + 0x20) = 0x72006500740061
                *(rcx_27 + 0x28) = 0
        case 0xb
            if (*result != u"MSM_ThinTranslucent")
                sub_1405947f0(result, 0x14)
                int32_t rax_24 = result[1].d + 0x14
                result[1].d = rax_24
                
                if (rax_24 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rax_25 = *result
                __builtin_memcpy(rax_25, u"MSM_ThinTransluc", 0x20)
                *(rax_25 + 0x20) = 0x74006e0065

return result
