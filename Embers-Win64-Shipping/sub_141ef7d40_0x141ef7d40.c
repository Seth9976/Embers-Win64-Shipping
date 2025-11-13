// 函数: sub_141ef7d40
// 地址: 0x141ef7d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(9.99999975e-05f f>= *(arg4 + 0x30)))
    uint32_t zmm0[0x4] = *(arg4 + 0x28)
    zmm0[0] = zmm0[0] f- *(arg4 + 0x34)
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
    label_141ef7dae:
        uint32_t zmm1[0x4] = *(arg1[0x16] + 0x1d0)
        void* rax_2 = arg1[0x29]
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        uint32_t var_18 = zmm1[0]
        uint32_t var_10_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        uint32_t var_14_1 = zmm0[0]
        void* rcx = *(rax_2 + 0x290)
        int64_t rax_3 = *arg1
        zmm0 = *(rcx + 0x1e0)
        zmm1 = _mm_min_ss(_mm_shuffle_ps(zmm0, zmm0, 0x55)[0], zmm0[0])
        zmm1[0] = zmm1[0] f* *(rcx + 0x424)
        int512_t zmm3
        zmm3.o = zmm1
        
        if ((*(rax_3 + 0x898))(arg1, &var_18, arg4 + 0x1c, zmm3, var_18, var_10_1) != 0)
            return 1
    else
        zmm0 = *(arg4 + 0x2c)
        zmm0[0] = zmm0[0] f- *(arg4 + 0x38)
        
        if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141ef7dae
        
        zmm0 = *(arg4 + 0x30)
        zmm0[0] = zmm0[0] f- *(arg4 + 0x3c)
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f<= 9.99999975e-05f))
            goto label_141ef7dae

return 0
