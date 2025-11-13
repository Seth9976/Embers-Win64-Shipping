// 函数: sub_140f5a560
// 地址: 0x140f5a560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = arg2[2].d
int64_t* r14 = nullptr
float zmm3[0x4] = arg2[3].d
zmm2[0] = zmm2[0] f* *(arg2 + 0x24)
uint128_t zmm7 = zx.o(*arg3)
float zmm8[0x4] = 0x3f800000
float zmm9[0x4] = *(arg2 + 0x28)
zmm9[0] = zmm9[0] f* *(arg2 + 0x1c)
uint32_t arg_8 = zmm7.d
uint128_t zmm11 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
zmm9[0] = zmm9[0] - zmm2[0]
zmm3 ^= 0x80000000
zmm7 = zmm11
zmm8[0] = 1f / zmm9[0]
float zmm1[0x4] = *(arg2 + 0x2c) ^ 0x80000000
zmm9[0] = zmm9[0] * zmm8[0]
zmm8[0] = zmm8[0] f* *(arg2 + 0x1c)
zmm8[0] = zmm8[0] f* *(arg2 + 0x24)
zmm8[0] = zmm8[0] * zmm2[0]
float zmm5[0x4] = zmm8 ^ 0x80000000
zmm11.d = zmm11.d f* zmm8[0]
float zmm6[0x4] = zmm8 ^ 0x80000000
float zmm0[0x4] = zmm1
zmm0[0] = zmm0[0] * zmm9[0]
zmm1[0] = zmm1[0] * zmm6[0]
zmm7.d = zmm7.d f* zmm5[0]
zmm3[0] = zmm3[0] * zmm8[0]
zmm3[0] = zmm3[0] * zmm5[0]
zmm3[0] = zmm3[0] + zmm1[0]
zmm1 = arg_8
zmm3[0] = zmm3[0] + zmm0[0]
zmm1[0] = zmm1[0] * zmm9[0]
zmm1[0] = zmm1[0] * zmm6[0]
zmm7.d = zmm7.d f+ zmm1[0]
zmm11.d = zmm11.d f+ zmm1[0]
zmm7.d = zmm7.d f+ zmm3[0]
zmm11.d = zmm11.d f+ zmm3[0]

if (arg1[0x58].d != 0)
    int64_t* rcx = arg1[0x57]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x58].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x57]
        
        arg1[0x56].b = (*(*rcx_1 + 0x48))(rcx_1)

if (arg1[0x56].b == 0)
    zmm6 = 0x3f800000
else
    zmm6 = 0x40000000

int32_t* result = sub_140f48630(arg1)
zmm1 = zx.o(0)
zmm6[0] = zmm6[0] f* result[2]
zmm6[0] = zmm6[0] * 0.5f

if (arg1[0x5c].d != 0)
    zmm7 = *(arg2 + 4)
    zmm0 = zmm7
    zmm0[0] = zmm0[0] - zmm6[0]
    
    if (zmm0[0] == zmm1[0])
        zmm1 = __minss_xmmss_memss(zx.o(0).d, 0x3f800000)
    else
        zmm7.d = zmm7.d f- zmm11.d
    label_140f5a786:
        zmm7.d = zmm7.d f- zmm6[0]
        zmm7.d = zmm7.d f/ zmm0[0]
        
        if (zmm7.d f>= zmm1[0])
            zmm1 = __minss_xmmss_memss(zmm7.d, 0x3f800000)
else
    zmm0 = *arg2
    zmm0[0] = zmm0[0] - zmm6[0]
    
    if (zmm0[0] != zmm1[0])
        goto label_140f5a786
    
    zmm1 = __minss_xmmss_memss(zx.o(0).d, 0x3f800000)

zmm0 = arg1[0x75].d
zmm6 = *(arg1 + 0x3ac)
zmm6[0] = zmm6[0] - zmm0[0]
zmm6[0] = zmm6[0] * zmm1[0]
zmm6[0] = zmm6[0] + zmm0[0]

if (*(arg1 + 0x3b1) != 0)
    if (arg1[0x6f].d != 0)
        int64_t* rcx_3 = arg1[0x6e]
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
            int64_t* rcx_4
            
            if (arg1[0x6f].d == 0)
                rcx_4 = nullptr
            else
                rcx_4 = arg1[0x6e]
            
            (*(*rcx_4 + 0x48))(rcx_4)
            arg1[0x6d].d = zmm0[0]
    
    zmm7.d = arg1[0x6d].d.d f- zmm6[0]
    
    if (arg1[0x74].d != 0)
        int64_t* rcx_5 = arg1[0x73]
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
            if (arg1[0x74].d != 0)
                r14 = arg1[0x73]
            
            (*(*r14 + 0x48))(r14)
            arg1[0x72].d = zmm0[0]
    
    zmm0 = arg1[0x72].d
    zmm0[0] = zmm0[0] * 0.5f
    
    if (zmm7.d f<= zmm0[0])
        zmm0 = *sub_140eff5d0(&arg1[0x72], zmm0[0])
        zmm0[0] = zmm0[0] * -0.5f
        
        if (not(zmm7.d f>= zmm0[0]))
            zmm7 = *(arg1 + 0x3ac)
            zmm6 = arg1[0x75].d
            int32_t* rax_13 = sub_140eff5d0(&arg1[0x72], zmm0[0])
            result = sub_140eff5d0(&arg1[0x6d], zmm0[0])
            zmm0 = *result
            zmm0[0] = zmm0[0] f+ *rax_13
            goto label_140f5a867
        
        result = sub_140eff5d0(&arg1[0x6d], zmm0[0])
        *result
    else
        zmm7 = *(arg1 + 0x3ac)
        zmm6 = arg1[0x75].d
        int32_t* rax_11 = sub_140eff5d0(&arg1[0x6d], zmm0[0])
        result = sub_140eff5d0(&arg1[0x72], zmm0[0])
        zmm0 = *rax_11
        zmm0[0] = zmm0[0] f- *result
    label_140f5a867:
        
        if (not(zmm0[0] < zmm6[0]))
            _mm_min_ss(zmm0[0], zmm7.d)

return result
