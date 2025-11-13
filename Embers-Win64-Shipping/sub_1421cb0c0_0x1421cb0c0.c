// 函数: sub_1421cb0c0
// 地址: 0x1421cb0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[3]
float rax
float zmm0[0x4]
float zmm2[0x4]

if ((*(rcx + 0x431) & 4) == 0)
    int32_t rax_1 = arg1[0xb].d
    *(arg1 + 0x134) = arg1[0xa]
    *(arg1 + 0x13c) = rax_1
    zmm2 = *(rcx + 0x1d0)
    rax = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    zmm0 = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)
else
    zmm2 = *(rcx + 0x1d0)
    rax = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    zmm0 = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)
    *(arg1 + 0x134) = zmm0.q
    *(arg1 + 0x13c) = rax
arg1[0xa] = zmm0.q
arg1[0xb].d = rax
float result[0x4] = sub_1421d1290(arg1)
float zmm1_1[0x4] = arg1[0x2f].d
result[0] = result[0] f+ arg1[0x25].d
int64_t* rcx_1
rcx_1.b = 0
float result_1[0x4] = zx.o(0)
arg1[0x25].d = result[0]
float zmm0_1[0x4]

if ((*(*(arg3 + 0x30) + 0x5b) & 1) != 0)
    bool cond:0_1 = zmm1_1[0] <= 9.99999975e-05f
    *(arg1 + 0x12c) = result[0]
    
    if (not(cond:0_1))
        zmm0_1, rcx_1, result_1 = sub_140a454f0(result, zmm1_1)
        int32_t zmm2_1 = arg1[0x2f].d
        zmm1_1 = zx.o(arg1[0x2e].d)
        *(arg1 + 0x12c) = zmm0_1[0]
        zmm0_1 = arg1[0x25].d
        zmm1_1 = _mm_cvtepi32_ps(zmm1_1)
        zmm1_1[0] = zmm1_1[0] f* zmm2_1
        zmm0_1[0] = zmm0_1[0] - zmm1_1[0]
        rcx_1.b = zmm0_1[0] f>= zmm2_1
else
    bool cond:1_1 = zmm1_1[0] <= 0f
    result[0] = result[0] f+ *(arg1 + 0x12c)
    *(arg1 + 0x12c) = result[0]
    
    if (cond:1_1 || result[0] < zmm1_1[0])
        rcx_1.b = 0
    else
        rcx_1.b = 1

result = arg1[0x32].d

if (rcx_1.b != 0)
    arg1[0x2e].d += 1
    (*(*arg1 + 0x90))(arg1, zmm1_1)
    void* rax_4 = *(arg3 + 0x30)
    
    if ((*(rax_4 + 0x5b) & 1) == 0)
        zmm0_1 = *(arg1 + 0x12c)
        zmm0_1[0] = zmm0_1[0] f- arg1[0x2f].d
        *(arg1 + 0x12c) = zmm0_1[0]
        rax_4 = *(arg3 + 0x30)
    
    if ((*(rax_4 + 0xd2) & 1) != 0)
        result = sub_1421c3280(arg1)
    else if ((*(rax_4 + 0xa8) & 1) != 0 && arg1[0x2e].d == 1)
        result = sub_1421c3280(arg1)
    
    if ((arg1[0x1c].b & 0x40) != 0)
        int32_t i = -3
        
        if (*(arg3 + 0x40) s> 0xfffffffd)
            do
                int32_t i_1
                
                if (i == 0xfffffffd)
                    i_1 = -3
                else if (i == 0xfffffffe)
                    i_1 = -4
                else
                    i_1 = -2
                    
                    if (i != 0xffffffff)
                        i_1 = i
                
                int64_t* rax_5 = sub_142192eb0(arg3, i_1)
                
                if (rax_5 != 0 && (*(rax_5 + 0x29) & 8) != 0)
                    int64_t r8 = *rax_5
                    (*(r8 + 0x2e8))(rax_5, arg1, r8)
                
                i += 1
            while (i s< *(arg3 + 0x40))

if ((*(*(arg3 + 0x30) + 0xa8) & 1) != 0 && arg1[0x2e].d s> 0)
    result = result_1

zmm1_1 = *(arg1 + 0x12c)
zmm1_1[0] = zmm1_1[0] - result[0]
*(arg1 + 0x12c) = zmm1_1[0]
return result
