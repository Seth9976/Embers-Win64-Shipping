// 函数: sub_140d9bb20
// 地址: 0x140d9bb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r10 = arg5
int64_t* result = arg1
float zmm1[0x4] = *(arg3 + 4)
float zmm5[0x4] = *(arg3 + 0xc)
float zmm2[0x4] = *arg3
float zmm4[0x4] = *(arg3 + 8)
int128_t zmm7 = *(r10 + 8)
int32_t zmm3 = _mm_min_ss(zmm7.d, zmm4[0])
int128_t zmm9 = *r10
float zmm0[0x4] = _mm_max_ss(zmm2[0], zmm9.d)
float zmm10[0x4] = *(r10 + 0xc)
float zmm11[0x4] = *(r10 + 4)
float zmm8[0x4] = _mm_min_ss(zmm10[0], zmm5[0])
float zmm6[0x4] = _mm_max_ss(zmm1[0], zmm11[0])

if (zmm8[0] < zmm6[0] || not(zmm3 f>= zmm0[0]))
    zmm0 = zx.o(0)
    zmm6 = zx.o(0)
    zmm3 = (zx.o(0)).d
    zmm8 = zx.o(0)

if (zmm0[0] != zmm2[0] || zmm6[0] != zmm1[0] || zmm3 f!= zmm4[0] || zmm8[0] != zmm5[0])
    bool cond:0_1 = *arg4 != 0
    zmm4[0] = zmm4[0] - zmm2[0]
    zmm5[0] = zmm5[0] - zmm1[0]
    
    if (not(cond:0_1))
        zmm1 = (*arg2)[2]
        zmm4[0] = zmm4[0] + zmm1[0]
        
        if (not(zmm4[0] f< zmm7.d))
            zmm0 = *arg2
            zmm0[0] = zmm0[0] - zmm4[0]
        
        if (zmm4[0] f< zmm7.d || not(zmm0[0] f>= zmm9.d))
            zmm0 = zmm1
        
        zmm1 = (*arg2)[1]
        goto label_140d9bc14
    
    zmm2 = (*arg2)[3]
    zmm1 = (*arg2)[1]
    zmm5[0] = zmm5[0] + zmm2[0]
    zmm1[0] = zmm1[0] - zmm5[0]
    arg1.b = zmm10[0] > zmm5[0]
    bool rax_2 = zmm1[0] >= zmm11[0]
    
    if (arg1.b != 0 || rax_2 == 0)
        zmm0 = *arg2
        zmm1 = zmm2
        
        if (arg1.b != 0 || rax_2 != 0)
        label_140d9bc14:
            bool cond:1_1 = zmm0[0] f>= zmm9.d
            zmm3 = data_143dbb1f0.d
            zmm4[0] = zmm4[0] + zmm0[0]
            zmm2 = data_143dbb1f0:4.d
            zmm5[0] = zmm5[0] + zmm1[0]
            
            if (not(cond:1_1))
                zmm3 = zmm9.d f- zmm0[0]
            
            if (not(zmm1[0] >= zmm11[0]))
                zmm2 = zmm11
                zmm2[0] = zmm2[0] - zmm1[0]
            
            if (not(zmm4[0] f<= zmm7.d))
                zmm3 = zmm7.d f- zmm4[0]
            
            if (not(zmm5[0] <= zmm10[0]))
                zmm2 = zmm10
                zmm2[0] = zmm2[0] - zmm5[0]
            
            zmm0[0] = zmm0[0] f+ zmm3
            zmm1[0] = zmm1[0] + zmm2[0]
            *result = (_mm_unpacklo_ps(zmm0, zmm1[0].q)).q
        else
            arg5.d = 0
            sub_140d9bb20(zmm0, zmm1, arg3, &arg5, r10)
    else
        zmm0 = *arg2
        
        if (rax_2 != 0)
            goto label_140d9bc14
        
        arg5.d = 0
        sub_140d9bb20(zmm0, zmm1, arg3, &arg5, r10)
else
    *arg1 = zmm2[0]
    arg1[1] = zmm1[0]

return result
