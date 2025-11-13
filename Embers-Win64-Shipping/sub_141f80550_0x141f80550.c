// 函数: sub_141f80550
// 地址: 0x141f80550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d
int32_t r8 = 0
int128_t* rsi = arg2
uint32_t zmm6[0x4] = arg5
arg2.b = 1
int128_t zmm7 = arg7
int32_t* result

if (rbx s<= 0)
label_141f80683:
    arg1[1].d = rbx + 1
    
    if (rbx + 1 s> *(arg1 + 0xc))
        sub_1405c4ec0(arg1)
    
    result = *arg1
    int64_t* rdx_1 = &result[sx.q(rbx) * 0xa]
    
    if (rdx_1 != 0)
        *rdx_1 = *rsi
        rdx_1[1].d = *(rsi + 8)
        result = arg8
        rdx_1[4] = result
        *(rdx_1 + 0xc) = arg3[0]
        rdx_1[2].d = arg4[0]
        *(rdx_1 + 0x14) = zmm6[0]
        rdx_1[3].d = zmm7.d
        *(rdx_1 + 0x1c) = arg6
else
    zmm6[0] = zmm6[0] f- 1f
    result = nullptr
    
    do
        int64_t rcx = *arg1
        uint32_t zmm0[0x4] = *rsi
        zmm0[0] = zmm0[0] f- *(result + rcx)
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
            zmm0 = *(rsi + 4)
            zmm0[0] = zmm0[0] f- *(result + rcx + 4)
            
            if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
                zmm0 = *(rsi + 8)
                zmm0[0] = zmm0[0] f- *(result + rcx + 8)
                
                if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
                    arg3[0] = arg3[0] f- *(result + rcx + 0xc)
                    
                    if (not(_mm_and_ps(arg3, 0x7fffffff)[0] f> 9.99999994e-09f))
                        arg4[0] = arg4[0] f- *(result + rcx + 0x10)
                        
                        if (not(_mm_and_ps(arg4, 0x7fffffff)[0] f> 9.99999994e-09f)
                                && *(result + rcx + 0x1c) == arg6)
                            *(result + rcx + 0x18) = zmm7.d
                            
                            if (_mm_and_ps(zmm6, 0x7fffffff)[0] f> 9.99999994e-09f)
                                zmm0 = zmm6
                            else
                                zmm0 = *(result + rcx + 0x14)
                            
                            *(result + rcx + 0x14) = zmm0[0]
                            arg2.b = 0
        
        rbx = arg1[1].d
        r8 += 1
        result = &result[0xa]
    while (r8 s< rbx)
    
    if (arg2.b != 0)
        goto label_141f80683

return result
