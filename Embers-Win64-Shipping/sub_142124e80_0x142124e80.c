// 函数: sub_142124e80
// 地址: 0x142124e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
*arg1 = 0
arg1[1] = 0

if (arg2 u<= 6)
    switch (arg2)
        case 0
            if (*result != u"BLEND_Opaque")
                sub_1405947f0(result, 0xd)
                int32_t rax_2 = result[1].d + 0xd
                result[1].d = rax_2
                
                if (rax_2 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_2 = *result
                *rcx_2 = (*u"BLEND_Opaque")[0].o
                rcx_2[1].q = 0x65007500710061
                *(rcx_2 + 0x18) = 0
        case 1
            if (*result != u"BLEND_Masked")
                sub_1405947f0(result, 0xd)
                int32_t rax_4 = result[1].d + 0xd
                result[1].d = rax_4
                
                if (rax_4 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_5 = *result
                *rcx_5 = (*u"BLEND_Masked")[0].o
                rcx_5[1].q = 0x640065006b0073
                *(rcx_5 + 0x18) = 0
        case 2
            if (*result != u"BLEND_Translucent")
                sub_1405947f0(result, 0x12)
                int32_t rax_6 = result[1].d + 0x12
                result[1].d = rax_6
                
                if (rax_6 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_memcpy(*result, u"BLEND_Translucent", 0x24)
        case 3
            if (*result != u"BLEND_Additive")
                sub_1405947f0(result, 0xf)
                int32_t rax_8 = result[1].d + 0xf
                result[1].d = rax_8
                
                if (rax_8 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_11 = *result
                *rcx_11 = (*u"BLEND_Additive")[0].o
                rcx_11[1].q = 0x69007400690064
                *(rcx_11 + 0x18) = 0x650076
                *(rcx_11 + 0x1c) = 0
        case 4
            if (*result != u"BLEND_Modulate")
                sub_1405947f0(result, 0xf)
                int32_t rax_10 = result[1].d + 0xf
                result[1].d = rax_10
                
                if (rax_10 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_14 = *result
                *rcx_14 = (*u"BLEND_Modulate")[0].o
                rcx_14[1].q = 0x61006c00750064
                *(rcx_14 + 0x18) = 0x650074
                *(rcx_14 + 0x1c) = 0
        case 5
            if (*result != u"BLEND_AlphaComposite")
                sub_1405947f0(result, 0x15)
                int32_t rax_12 = result[1].d + 0x15
                result[1].d = rax_12
                
                if (rax_12 s> *(result + 0xc))
                    sub_140594770(result)
                
                int64_t rcx_17 = *result
                __builtin_memcpy(rcx_17, u"BLEND_AlphaCompo", 0x20)
                *(rcx_17 + 0x20) = 0x65007400690073
                *(rcx_17 + 0x28) = 0
        case 6
            if (*result != u"BLEND_AlphaHoldout")
                sub_1405947f0(result, 0x13)
                int32_t rax_14 = result[1].d + 0x13
                result[1].d = rax_14
                
                if (rax_14 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_wcscpy(*result, u"BLEND_AlphaHoldout")
else if (*result != u"Unknown")
    sub_1405947f0(result, 8)
    int32_t rax_16 = result[1].d + 8
    result[1].d = rax_16
    
    if (rax_16 s> *(result + 0xc))
        sub_140594770(result)
    
    **result = *u"Unknown"

return result
