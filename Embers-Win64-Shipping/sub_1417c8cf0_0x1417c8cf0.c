// 函数: sub_1417c8cf0
// 地址: 0x1417c8cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
*arg1 = 0
arg1[1] = 0

if (arg2 u> 0xc0)
label_1417c90f0:
    
    if (*result != u"UNKONWN")
        sub_1405947f0(result, 8)
        int32_t rax_25 = result[1].d + 8
        result[1].d = rax_25
        
        if (rax_25 s> *(result + 0xc))
            sub_140594770(result)
        
        **result = *u"UNKONWN"
else
    switch (arg2)
        case 0
            if (*result != u"eNO_ERROR")
                sub_1405947f0(result, 0xa)
                int32_t rax_3 = result[1].d + 0xa
                result[1].d = rax_3
                
                if (rax_3 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_memcpy(*result, u"eNO_ERROR", 0x14)
        case 1
            if (*result != u"eDEBUG_INFO")
                sub_1405947f0(result, 0xc)
                int32_t rax_5 = result[1].d + 0xc
                result[1].d = rax_5
                
                if (rax_5 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rax_6 = *result
                *rax_6 = (*u"eDEBUG_INFO")[0].o
                rax_6[1].q = 0x4f0046004e
        case 2
            if (*result != u"eDEBUG_WARNING")
                sub_1405947f0(result, 0xf)
                int32_t rax_8 = result[1].d + 0xf
                result[1].d = rax_8
                
                if (rax_8 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_7 = *result
                *rcx_7 = (*u"eDEBUG_WARNING")[0].o
                rcx_7[1].q = 0x49004e00520041
                *(rcx_7 + 0x18) = 0x47004e
                *(rcx_7 + 0x1c) = 0
        case 3, 5, 6, 7, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
                0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 
                0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 
                0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x41, 0x42, 0x43, 
                0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 
                0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 
                0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 
                0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 
                0x7c, 0x7d, 0x7e, 0x7f, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 
                0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 
                0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 
                0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 
                0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf
            goto label_1417c90f0
        case 4
            if (*result != u"eINVALID_PARAMETER")
                sub_1405947f0(result, 0x13)
                int32_t rax_10 = result[1].d + 0x13
                result[1].d = rax_10
                
                if (rax_10 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_wcscpy(*result, u"eINVALID_PARAMETER")
        case 8
            if (*result != u"eINVALID_OPERATION")
                sub_1405947f0(result, 0x13)
                int32_t rax_12 = result[1].d + 0x13
                result[1].d = rax_12
                
                if (rax_12 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_wcscpy(*result, u"eINVALID_OPERATION")
        case 0x10
            if (*result != u"eOUT_OF_MEMORY")
                sub_1405947f0(result, 0xf)
                int32_t rax_14 = result[1].d + 0xf
                result[1].d = rax_14
                
                if (rax_14 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_16 = *result
                *rcx_16 = (*u"eOUT_OF_MEMORY")[0].o
                rcx_16[1].q = 0x4f004d0045004d
                *(rcx_16 + 0x18) = 0x590052
                *(rcx_16 + 0x1c) = 0
        case 0x20
            if (*result != u"eINTERNAL_ERROR")
                sub_1405947f0(result, 0x10)
                int32_t rax_16 = result[1].d + 0x10
                result[1].d = rax_16
                
                if (rax_16 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_memcpy(*result, u"eINTERNAL_ERROR", 0x20)
        case 0x40
            if (*result != u"eABORT")
                sub_1405947f0(result, 7)
                int32_t rax_19 = result[1].d + 7
                result[1].d = rax_19
                
                if (rax_19 s> *(result + 0xc))
                    sub_140594770(result)
                
                __builtin_wcscpy(*result, u"eABORT")
        case 0x80
            if (*result != u"ePERF_WARNING")
                sub_1405947f0(result, 0xe)
                int32_t rax_21 = result[1].d + 0xe
                result[1].d = rax_21
                
                if (rax_21 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_24 = *result
                *rcx_24 = (*u"ePERF_WARNING")[0].o
                rcx_24[1].q = 0x4e0049004e0052
                *(rcx_24 + 0x18) = 0x47
        case 0xc0
            if (*result != u"eLOGGING_INFO")
                sub_1405947f0(result, 0xe)
                int32_t rax_23 = result[1].d + 0xe
                result[1].d = rax_23
                
                if (rax_23 s> *(result + 0xc))
                    sub_140594770(result)
                
                int128_t* rcx_27 = *result
                *rcx_27 = (*u"eLOGGING_INFO")[0].o
                rcx_27[1].q = 0x46004e0049005f
                *(rcx_27 + 0x18) = 0x4f

return result
