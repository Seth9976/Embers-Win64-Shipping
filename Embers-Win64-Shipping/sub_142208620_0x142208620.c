// 函数: sub_142208620
// 地址: 0x142208620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = zx.o(0)

if (not(arg4 <= 0f))
    zmm6.d = 1f / arg4

uint32_t rcx = zx.d(*(arg1 + 0x68))
int32_t result

if (rcx == 0)
    result = *(arg1 + 0x48)
else if (rcx == 1)
    result = *(arg1 + 0x64)
else if (rcx != 2)
    result = 0
else if (*(arg1 + 0x30) != 1)
    result = sub_141f64920(arg3)
else
    void* rcx_2 = *(arg3 + 0x430)
    
    if (rcx_2 == 0)
        result = 0
    else
        result = sub_142319650(rcx_2)

int32_t rdi = 0
int64_t result_2 = sx.q(result)

if (result s> 0)
    int64_t r15_1 = 0
    int64_t rbp_1 = 0
    
    do
        int32_t rbx_1 = -1
        
        if (*(arg1 + 0x30) != 1)
            uint32_t rcx_8 = zx.d(*(arg1 + 0x68))
            
            if (rcx_8 == 0)
                rbx_1 = sub_141f5e0e0(arg3, *(*(arg1 + 0x40) + sx.q(rdi) * 0x14))
            else if (rcx_8 == 1)
                rbx_1 = *(*(arg2 + 0x40) + (r15_1 << 2))
            else if (rcx_8 == 2)
                rbx_1 = rdi
            
            goto label_1422087eb
        
        void* arg_8 = nullptr
        void var_88
        uint128_t zmm0
        uint128_t zmm2
        
        if (sub_1421f4330(arg1, arg2, arg3, rdi, &arg_8, &var_88) == 0)
        label_1422087eb:
            
            if (rbx_1 == 0xffffffff)
                goto label_14220872a
            
            float var_78[0x4][0x4]
            int96_t var_98_1 = sub_141f5e2b0(arg3, &var_78, rbx_1)[3].12
            
            if (rdi s>= *(arg2 + 0x28))
                goto label_14220872a
            
            int32_t* rax_6 = *(arg2 + 0x20)
            uint128_t zmm4_1 = var_98_1.d
            uint128_t zmm3 = var_98_1:4.d
            zmm2 = var_98_1:8.d
            zmm0.d = zmm4_1.d f- *(rax_6 + rbp_1)
            uint128_t zmm1
            zmm1.d = zmm3.d f- *(rax_6 + rbp_1 + 4)
            uint64_t* rcx_13 = *(arg2 + 0x30)
            int32_t result_1 = zmm2.d
            zmm2.d = zmm2.d f- *(rax_6 + rbp_1 + 8)
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = zmm1.d f* zmm6.d
            zmm2.d = zmm2.d f* zmm6.d
            *(rcx_13 + rbp_1) = (_mm_unpacklo_ps(zmm0, zmm1.q)).q
            *(rcx_13 + rbp_1 + 8) = zmm2.d
            result = result_1
            zmm0 = _mm_unpacklo_ps(zmm4_1, zmm3.q)
        else
            sub_141f5e0e0(arg3, *(arg_8 + 0x30))
        label_14220872a:
            uint64_t* rcx_6 = *(arg2 + 0x30)
            *(rcx_6 + rbp_1) = data_143dbb1f8.q
            *(rcx_6 + rbp_1 + 8) = data_143dbb200
            zmm2 = *(arg3 + 0x1d0)
            result = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
            zmm0 = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)
        uint64_t* rcx_7 = *(arg2 + 0x20)
        rdi += 1
        r15_1 += 1
        *(rcx_7 + rbp_1) = zmm0.q
        *(rcx_7 + rbp_1 + 8) = result
        rbp_1 += 0xc
    while (r15_1 s< result_2)

return result
