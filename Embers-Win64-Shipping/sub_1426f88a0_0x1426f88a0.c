// 函数: sub_1426f88a0
// 地址: 0x1426f88a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(sub_1427009f0(arg1, arg2))
int32_t result

if (rbx.d != sub_1427009f0(arg1, arg3) || rbx.d == 0xffffffff)
    result.b = 0
else
    void* rsi_2 = *(arg1 + 0x28) + rbx * 0x90
    uint128_t zmm2
    zmm2.d = 1f f/ *(rsi_2 + 4)
    int32_t rcx_4 = *(rsi_2 + 0x40) - 1
    float zmm3 = *(rsi_2 + 0x24)
    float zmm4 = *(rsi_2 + 0x28)
    int32_t r9 = int.d((*arg2 - zmm3) f* zmm2.d)
    int32_t rdx_1 = int.d((arg2[1] f- zmm4) f* zmm2.d)
    int32_t r8
    
    if (rdx_1 s>= 0)
        r8 = rcx_4
        
        if (rdx_1 s< rcx_4)
            r8 = rdx_1
    else
        r8 = 0
    
    int32_t rax_2 = *(rsi_2 + 0x3c) - 1
    int32_t rdx_2
    
    if (r9 s>= 0)
        rdx_2 = rax_2
        
        if (r9 s< rax_2)
            rdx_2 = r9
    else
        rdx_2 = 0
    
    float zmm1_1 = *arg3 - zmm3
    int32_t var_28 = rdx_2
    int32_t var_24_1 = r8
    int32_t var_20_1 = 0
    int32_t rdx_3 = int.d(zmm1_1 f* zmm2.d)
    int32_t r8_1 = int.d((arg3[1] f- zmm4) f* zmm2.d)
    
    if (r8_1 s< 0)
        rcx_4 = 0
    else if (r8_1 s< rcx_4)
        rcx_4 = r8_1
    
    if (rdx_3 s< 0)
        rax_2 = 0
    else if (rdx_3 s< rax_2)
        rax_2 = rdx_3
    
    int32_t var_34_1 = rcx_4
    int32_t var_38 = rax_2
    int32_t var_30_1 = 0
    int32_t* var_18 = nullptr
    int32_t i_3 = 0
    
    if (sub_1426f86c0(rsi_2, &var_28, &var_38, &var_18).b == 0)
        int32_t* rcx_13 = var_18
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        result.b = 0
    else
        uint64_t i_2 = zx.q(i_3)
        result = arg4[1].d
        
        if (i_2.d s> result)
            arg4[1].d = i_2.d
            
            if (i_2.d s> *(arg4 + 0xc))
                sub_140638a00(arg4)
        else if (i_2.d s< result && result != i_2.d)
            arg4[1].d = i_2.d
            sub_140775970(arg4)
        
        int32_t* r10_1 = var_18
        
        if (i_2.d s> 0)
            int32_t* r9_2 = r10_1
            uint64_t i_1 = i_2
            uint64_t i
            
            do
                int32_t rcx_10 = *r9_2
                int32_t rdx_6 = r9_2[1]
                void* r8_4 = r9_2 - r10_1
                r9_2 = &r9_2[3]
                int32_t rax_5 = *(rsi_2 + 0x40) * rcx_10
                zmm2 = _mm_cvtepi32_ps(zx.o(rcx_10))
                int64_t rax_7 = *(rsi_2 + 0x58)
                zmm2.d = zmm2.d f+ 0.5f
                int64_t rdx_7 = *arg4
                uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(rdx_6))
                zmm2.d = zmm2.d f* *(rsi_2 + 4)
                zmm1_2.d = zmm1_2.d f+ 0.5f
                int32_t var_20_2 = (*(rax_7 + (sx.q(rax_5 + rdx_6) << 2))).d
                zmm2.d = zmm2.d f+ *(rsi_2 + 0x24)
                zmm1_2.d = zmm1_2.d f* *(rsi_2 + 4)
                zmm1_2.d = zmm1_2.d f+ *(rsi_2 + 0x28)
                *(r8_4 + rdx_7) = (_mm_unpacklo_ps(zmm2, zmm1_2.q)).q
                *(r8_4 + rdx_7 + 8) = var_20_2
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (r10_1 != 0)
            sub_140a74f90(r10_1)
        
        result.b = 1

return result
