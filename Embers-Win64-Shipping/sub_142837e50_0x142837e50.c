// 函数: sub_142837e50
// 地址: 0x142837e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rsi = arg3
uint128_t zmm7
uint128_t var_28 = zmm7
uint64_t rbx = arg2
uint128_t zmm8
uint128_t var_38 = zmm8
uint128_t zmm6 = 0x3f800000
int128_t zmm11 = 0x42fe0000
int128_t zmm12
int128_t var_78 = zmm12

if (arg2 != 0 && (arg1[3] != 2 || arg1[1] != 2 || arg1[2] != 1 || arg1[4] != 0xc || *arg1 != 8))
    result = zx.q(arg1[1])
    
    if (result.b != 0)
        arg2.b = arg1[2]
        
        if ((arg2.b & 0x10) != 0)
            result = sub_14283e0a4(rbx, result.d)
            arg2.b = arg1[2]
            zmm8 = _mm_cvtepi32_ps(zx.o(result.d))
        else if (result.b == 0)
            zmm8 = 0x42fe0000
        else
            switch (result.d)
                case 2
                    result = zx.q(*(arg3 + 7))
                    zmm8 = _mm_cvtepi32_ps(zx.o(result.d))
                case 3
                    result = zx.q(*(arg3 + 6))
                    zmm8 = _mm_cvtepi32_ps(zx.o(result.d))
                case 0xa
                    result = zx.q(*(arg3 + 6))
                    zmm8 = _mm_cvtepi32_ps(zx.o(sx.d(*(result + rbx + 0x20))))
                case 0xd
                    result = zx.q(sx.d(*(rbx + 0xa0)))
                    zmm8 = _mm_cvtepi32_ps(zx.o(result.d))
                case 0xe
                    result = zx.q(sx.d(*(rbx + 0xa2)))
                    zmm11 = 0x46800000
                    zmm8 = _mm_cvtepi32_ps(zx.o(result.d))
                case 0x10
                    result = zx.q(sx.d(*(rbx + 0xa4)))
                    zmm8 = _mm_cvtepi32_ps(zx.o(result.d))
                default
                    zmm8 = zx.o(0)
        
        zmm7 = 0x42800000
        int32_t rcx_9 = zx.d(arg2.b) & 0xf
        uint128_t zmm0
        
        if (rcx_9 u> 8)
            if (rcx_9 == 9)
                zmm0.d = 127f f- zmm8.d
            label_1428381ad:
                zmm0, result = sub_14283bd9c(zmm0.d)
            label_1428381b2:
                zmm8 = zmm0
                goto label_1428381b6
            
            if (rcx_9 == 0xa)
                if (not(zmm8.d f<= 64f))
                    zmm8.d = zmm8.d f- 64f
                    zmm8.d = zmm8.d f+ zmm8.d
                    zmm0 = zmm8
                    goto label_1428381ad
                
                zmm0.d = 64f f- zmm8.d
                zmm0.d = zmm0.d f+ zmm0.d
            label_14283819a:
                zmm0, result = sub_14283bd9c(zmm0.d)
                zmm8 = zmm0 ^ 0x80000000
                goto label_1428381b6
            
            if (rcx_9 == 0xb)
                if (zmm8.d f<= 64f)
                    zmm0.d = 64f f- zmm8.d
                    zmm0.d = zmm0.d f+ zmm0.d
                    goto label_1428381ad
                
                zmm8.d = zmm8.d f- 64f
                zmm8.d = zmm8.d f+ zmm8.d
                zmm0 = zmm8
                goto label_14283819a
            
            if (rcx_9 == 0xc)
                zmm7 = 0x42800000
                
                if (not(zmm8.d f< 64f))
                label_1428380f2:
                    zmm8 = 0x3f800000
                label_1428381c6:
                    result = zx.q(arg1[3])
                    
                    if (result.b == 0)
                        zmm6 = 0x3f800000
                    else
                        arg3.b = arg1[4]
                        
                        if ((arg3.b & 0x10) != 0)
                            result = sub_14283e0a4(rbx, result.d)
                            arg3.b = arg1[4]
                            zmm6 = _mm_cvtepi32_ps(zx.o(result.d))
                        else if (result.b == 0)
                            zmm6 = 0x42fe0000
                        else
                            switch (result.d)
                                case 2
                                    result = zx.q(*(rsi + 7))
                                    zmm6 = _mm_cvtepi32_ps(zx.o(result.d))
                                case 3
                                    result = zx.q(*(rsi + 6))
                                    zmm6 = _mm_cvtepi32_ps(zx.o(result.d))
                                case 0xa
                                    result = zx.q(*(rsi + 6))
                                    zmm6 = _mm_cvtepi32_ps(zx.o(sx.d(*(result + rbx + 0x20))))
                                case 0xd
                                    result = zx.q(sx.d(*(rbx + 0xa0)))
                                    zmm6 = _mm_cvtepi32_ps(zx.o(result.d))
                                case 0xe
                                    result = zx.q(sx.d(*(rbx + 0xa2)))
                                    zmm6 = _mm_cvtepi32_ps(zx.o(result.d))
                                case 0x10
                                    result = zx.q(sx.d(*(rbx + 0xa4)))
                                    zmm6 = _mm_cvtepi32_ps(zx.o(result.d))
                                default
                                    zmm8 = zx.o(0)
                        
                        int32_t rcx_31 = zx.d(arg3.b) & 0xf
                        
                        if (rcx_31 u> 8)
                            switch (rcx_31)
                                case 9
                                    zmm0, result = sub_14283bd9c(zmm6.d)
                                    zmm6.d = 1f f- zmm0.d
                                case 0xa, 0xb
                                    if (zmm6.d f<= zmm7.d)
                                        zmm7.d = zmm7.d f- zmm6.d
                                        zmm7.d = zmm7.d f+ zmm7.d
                                        zmm0, result = sub_14283bd9c(zmm7.d)
                                        zmm6 = zmm0
                                    else
                                        zmm6.d = zmm6.d f- zmm7.d
                                        zmm6.d = zmm6.d f+ zmm6.d
                                        zmm0, result = sub_14283bd9c(zmm6.d)
                                        zmm6 = zmm0 ^ 0x80000000
                                case 0xc
                                    if (zmm6.d f>= zmm7.d)
                                        zmm6 = 0x3f800000
                                    else
                                        zmm6 = zx.o(0)
                                case 0xd
                                    if (zmm6.d f< zmm7.d)
                                        zmm6 = 0x3f800000
                                    else
                                        zmm6 = zx.o(0)
                                case 0xe
                                    if (zmm6.d f>= zmm7.d)
                                        zmm6 = 0x3f800000
                                    else
                                        zmm6 = 0xbf800000
                                case 0xf
                                    if (zmm6.d f>= zmm7.d)
                                        zmm6 = 0xbf800000
                                    else
                                        zmm6 = 0x3f800000
                        else if (rcx_31 == 8)
                            zmm0, result = sub_14283bd9c(zmm6.d)
                            zmm6 = zmm0
                        else if (rcx_31 == 0)
                            zmm6.d = zmm6.d f/ 127f
                        else if (rcx_31 == 1)
                            zmm0.d = zmm6.d f/ 127f
                            zmm6.d = 1f f- zmm0.d
                        else if (rcx_31 == 2 || rcx_31 == 3)
                            zmm0.d = zmm6.d f+ zmm6.d
                            zmm6.d = zmm0.d f/ 127f
                            zmm6.d = zmm6.d f- 1f
                        else
                            if (rcx_31 == 4)
                                goto label_1428382db
                            
                            if (rcx_31 == 5)
                                uint128_t zmm10
                                zmm10.d = 127f f- zmm6.d
                                zmm0, result = sub_14283bb9c(zmm10.d)
                                zmm6 = zmm0
                            else if (rcx_31 == 6)
                                if (zmm6.d f<= zmm7.d)
                                    zmm7.d = zmm7.d f- zmm6.d
                                    zmm7.d = zmm7.d f+ zmm7.d
                                    zmm0, result = sub_14283bb9c(zmm7.d)
                                    zmm6 = zmm0 ^ 0x80000000
                                else
                                    zmm6.d = zmm6.d f- zmm7.d
                                    zmm6.d = zmm6.d f+ zmm6.d
                                label_1428382db:
                                    zmm0, result = sub_14283bb9c(zmm6.d)
                                    zmm6 = zmm0
                            else if (rcx_31 == 7)
                                if (zmm6.d f<= zmm7.d)
                                    zmm7.d = zmm7.d f- zmm6.d
                                    zmm7.d = zmm7.d f+ zmm7.d
                                    zmm0, result = sub_14283bb9c(zmm7.d)
                                    zmm6 = zmm0
                                else
                                    zmm6.d = zmm6.d f- zmm7.d
                                    zmm6.d = zmm6.d f+ zmm6.d
                                    zmm0, result = sub_14283bb9c(zmm6.d)
                                    zmm6 = zmm0 ^ 0x80000000
                    
                    zmm0.d = _mm_cvtpd_ps(zx.o(*(arg1 + 8))).d f* zmm8.d
                    zmm0.d = zmm0.d f* zmm6.d
            else
                if (rcx_9 != 0xd)
                    if (rcx_9 == 0xe)
                        zmm7 = 0x42800000
                        
                        if (not(zmm8.d f< 64f))
                            goto label_1428380f2
                    else
                        if (rcx_9 != 0xf)
                            goto label_1428381b6
                        
                        zmm7 = 0x42800000
                        
                        if (zmm8.d f< 64f)
                            goto label_1428380f2
                    
                    zmm8 = 0xbf800000
                    goto label_1428381c6
                
                zmm7 = 0x42800000
                
                if (zmm8.d f< 64f)
                    goto label_1428380f2
        else
            if (rcx_9 == 8)
                zmm0 = zmm8
                goto label_1428381ad
            
            if (rcx_9 != 0)
                if (rcx_9 != 1)
                    if (rcx_9 == 2)
                        zmm0.d = zmm8.d f+ zmm8.d
                        zmm8.d = zmm0.d f/ zmm11.d
                        zmm8.d = zmm8.d f- 1f
                        goto label_1428381b6
                    
                    if (rcx_9 != 3)
                        if (rcx_9 != 4)
                            if (rcx_9 == 5)
                                zmm0.d = 127f f- zmm8.d
                                zmm0, result = sub_14283bb9c(zmm0.d)
                                goto label_1428381b2
                            
                            if (rcx_9 != 6)
                                if (rcx_9 != 7)
                                    goto label_1428381b6
                                
                                if (zmm8.d f<= 64f)
                                    zmm0.d = 64f f- zmm8.d
                                    zmm0.d = zmm0.d f+ zmm0.d
                                    zmm0, result = sub_14283bb9c(zmm0.d)
                                    goto label_1428381b2
                                
                                zmm8.d = zmm8.d f- 64f
                                zmm8.d = zmm8.d f+ zmm8.d
                                zmm0 = zmm8
                                goto label_142838032
                            
                            if (zmm8.d f<= 64f)
                                zmm0.d = 64f f- zmm8.d
                                zmm0.d = zmm0.d f+ zmm0.d
                            label_142838032:
                                zmm0, result = sub_14283bb9c(zmm0.d)
                                zmm8 = zmm0 ^ 0x80000000
                                goto label_1428381b6
                            
                            zmm8.d = zmm8.d f- 64f
                            zmm8.d = zmm8.d f+ zmm8.d
                        
                        zmm0, result = sub_14283bb9c(zmm8.d)
                        goto label_1428381b2
                    
                    zmm8.d = zmm8.d f+ zmm8.d
                
                zmm0.d = zmm8.d f/ zmm11.d
                zmm8.d = 1f f- zmm0.d
                goto label_1428381b6
            
            zmm8.d = zmm8.d f/ zmm11.d
        label_1428381b6:
            zmm8.d f- 0f
            
            if (is_unordered.d(zmm8.d, 0f) || not(zmm8.d f== 0f))
                goto label_1428381c6

return result
