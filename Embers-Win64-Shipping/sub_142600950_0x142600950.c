// 函数: sub_142600950
// 地址: 0x142600950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = &__return_addr

if (arg4 != 0 && not(data_14399f940 == 0f))
    sub_1403780e0(arg1)
    uint64_t i_1 = zx.q(zx.d(*(arg1 + 0x7a)) * *(arg3 + 0xc))
    result = zx.d(data_143de5480)
    int64_t r14_1 = data_143f71200
    int64_t rcx
    int64_t rbx_1
    
    if (result.b == 0)
        rbx_1 = 0
        rcx = 0
    else
        rbx_1 = 0
        bool cond:1_1 = GetCurrentThreadId() != data_143de5470
        result = zx.d(data_143de5480)
        rcx.b = cond:1_1
    
    int128_t zmm11 = *(r14_1 + (rcx << 2))
    int64_t r14_2 = data_143f71208
    int64_t rcx_1
    
    if (result.b == 0)
        rcx_1 = 0
    else
        bool cond:2_1 = GetCurrentThreadId() != data_143de5470
        result = zx.d(data_143de5480)
        rcx_1.b = cond:2_1
    
    int128_t zmm10 = *(r14_2 + (rcx_1 << 2))
    int64_t r14_3 = data_143f71210
    int64_t rcx_2
    
    if (result.b == 0)
        rcx_2 = 0
    else
        bool cond:3_1 = GetCurrentThreadId() != data_143de5470
        result = zx.d(data_143de5480)
        rcx_2.b = cond:3_1
    
    int128_t zmm9 = *(r14_3 + (rcx_2 << 2))
    int64_t r14_4 = data_143f71218
    
    if (result.b != 0)
        result = GetCurrentThreadId()
        rbx_1.b = result != data_143de5470
    
    int128_t zmm8 = *(r14_4 + (rbx_1 << 2))
    
    if (arg3[1].d == 1)
        int128_t* rbx_2 = *arg3
        
        if (i_1.d != 0)
            int128_t zmm6
            int128_t var_18_1 = zmm6
            uint64_t i
            
            do
                zmm6 = *rbx_2
                
                if (not(zmm6.d f== 0f))
                    float zmm0 = powf(zmm6.d, zmm10.d)
                    float zmm3 = data_143f7128c
                    float zmm5_1 = zmm0
                    float zmm2 = data_143f71294
                    zmm0 = data_143f71278
                    float zmm4_1 = zmm3 f* data_143f7127c
                    float zmm1 = zmm6.d f* zmm6.d f* zmm6.d
                    zmm6.d = zmm6.d f* zmm8.d
                    zmm5_1 = zmm5_1 f* zmm11.d - zmm1 f* zmm9.d
                    zmm1 = data_143f71290 f* data_143f71280
                    data_143f71290 = zmm3
                    zmm5_1 = zmm5_1 f+ zmm6.d
                    data_143f7128c = zmm5_1
                    zmm4_1 = zmm4_1 + zmm0 * zmm5_1
                    zmm0 = zmm2 f* data_143f71284
                    zmm4_1 = zmm4_1 + zmm1
                    zmm1 = data_143f71298 f* data_143f71288
                    data_143f71298 = zmm2
                    zmm4_1 = zmm4_1 + zmm0 + zmm1
                    data_143f71294 = zmm4_1
                    *rbx_2 = zmm4_1
                
                rbx_2 += 4
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        return sub_1403780b0(arg1)

return result
