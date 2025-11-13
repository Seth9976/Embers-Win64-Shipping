// 函数: sub_141bc6420
// 地址: 0x141bc6420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 + 0x8f2) != 0)
    result = data_143de5458
    
    if (*(arg1 + 0x900) != result
            && modu.dp.q(0:result, sx.q(*(arg1 + 0x8ec))) == sx.q(*(arg1 + 0x8e8)))
        sub_140db2ea0(arg1 + 0x390)
        *(arg1 + 0x8f4) = 1

if (*(arg1 + 0x8f3) != 0)
    *(arg1 + 0x8f4) = 1

int32_t rcx_1 = data_143f312d0
int64_t* r14 = nullptr
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
uint32_t zmm8[0x4]
uint32_t var_68[0x4] = zmm8
uint32_t zmm9[0x4]
uint32_t var_78[0x4] = zmm9

if (rcx_1 s> 0)
    if (data_1439ec524 != 0)
        result = zx.q(data_1439ec520)
    
    if (data_1439ec524 == 0 || data_1439ec518 != data_143de5458)
        result = 0

if (rcx_1 s<= 0 || result.d s<= rcx_1)
    float zmm3[0x4] = *(arg3 + 0x1c)
    uint128_t zmm4 = zx.o(*arg3)
    zmm7 = *(arg3 + 0xc)
    zmm6 = arg3[2].d
    uint128_t zmm0
    zmm0.d = zmm3.d f* zmm3[0]
    float zmm2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float zmm1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    zmm2[0] = zmm2[0] * zmm2[0]
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm2[0] = zmm2[0] f+ zmm0.d
    zmm3[0] = zmm3[0] * zmm3[0]
    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    zmm1[0] = zmm1[0] + zmm3[0]
    zmm9 = _mm_sqrt_ss(0, zmm2[0])
    zmm8 = _mm_sqrt_ss(0, zmm1[0])
    zmm9[0] = zmm9[0] f* zmm4.d
    zmm8[0] = zmm8[0] f* zmm0.d
    
    if (zmm9[0] f!= *(arg1 + 0x800) || zmm8[0] f!= *(arg1 + 0x804))
        *(arg1 + 0x800) = zmm9[0]
        *(arg1 + 0x804) = zmm8[0]
        *(arg1 + 0x8f4) = 1
    label_141bc6674:
        void* rax_2 = sub_140d3c6e0(arg1 + 0x908)
        bool rcx_6
        
        if (rax_2 != 0 && *(rax_2 + 0x1b0) != 0 && data_143de5480 != 0)
            rcx_6 = GetCurrentThreadId() == data_143de5470
        
        int64_t* rcx_7
        
        if (rax_2 == 0 || *(rax_2 + 0x1b0) == 0 || (data_143de5480 != 0 && rcx_6 == 0))
            uint32_t rax_4
            
            if (data_143de5480 != 0)
                rax_4.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rax_4.b != 0)
                rcx_7 = *(data_143e29f28 + 0x20)
                (*(*rcx_7 + 0x140))(rcx_7, 0)
        else
            rcx_7 = *(data_143e29f28 + 0x20)
            (*(*rcx_7 + 0x140))(rcx_7, *(rax_2 + 0x1b0))
        int64_t rcx_8 = data_143de5458
        int32_t rax_7
        
        if (data_1439ec524 != 0)
            rax_7 = data_1439ec520
        
        if (data_1439ec524 == 0 || data_1439ec518 != rcx_8)
            rax_7 = 0
        
        zmm9 = __andps_xmmxud_memxud(zmm9, data_142d3f770)
        zmm8 = __andps_xmmxud_memxud(zmm8, data_142d3f770)
        zmm9[0] = zmm9[0] f+ zmm9[0]
        zmm8[0] = zmm8[0] f+ zmm8[0]
        data_1439ec518 = rcx_8
        zmm7[0] = zmm7[0] + 0.5f
        data_1439ec520 = rax_7 + 1
        data_1439ec524 = 1
        zmm9[0] = zmm9[0] f+ 0.5f
        *(arg1 + 0x900) = rcx_8
        zmm8[0] = zmm8[0] f+ 0.5f
        int32_t rcx_9 = int.d(zmm7[0])
        int32_t r12_2 = int.d(zmm9[0]) s>> 1
        int32_t rbp_2 = int.d(zmm8[0]) s>> 1
        
        if (rcx_9 != 0x80000000)
            zmm0 = _mm_cvtepi32_ps(zx.o(rcx_9))
            
            if (not(zmm0.d f== zmm7[0]))
                zmm7 = _mm_cvtepi32_ps(zx.o(rcx_9
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm7, zmm7[0].q)) & 1)))
        
        zmm6[0] = zmm6[0] + 0.5f
        int32_t rcx_11 = int.d(zmm6[0])
        
        if (rcx_11 != 0x80000000)
            zmm0 = _mm_cvtepi32_ps(zx.o(rcx_11))
            
            if (not(zmm0.d f== zmm6[0]))
                zmm6 = _mm_cvtepi32_ps(zx.o(rcx_11
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6[0].q)) & 1)))
        
        result = *(arg1 + 0x910)
        int64_t* rbx_3 = *(result + 0x20)
        void* r13_1 = *(result + 0x18)
        
        if (r12_2 == 0 || rbp_2 == 0)
            result.b = 0
        else
            char* rsi_3 = *(arg1 + 0x808) + 0x1a8
            void* arg_8
            
            if (*(rsi_3 + 0x10) != 0)
                int64_t* rcx_13 = *(rsi_3 + 8)
                
                if (rcx_13 != 0 && (*(*rcx_13 + 0x28))(rcx_13).b != 0)
                    if (*(rsi_3 + 0x10) != 0)
                        r14 = *(rsi_3 + 8)
                    
                    (*(*r14 + 0x48))(r14, &arg_8)
                    *rsi_3 = arg_8.b
            
            if ((*rsi_3 & 0x19) == 0)
                result.b = 0
            else
                zmm8 = zx.o(0)
                zmm8[0] = float.s(zx.q(r12_2))
                (*(*rbx_3 + 0x338))(rbx_3)
                
                if (not(zmm0.d f!= zmm8[0]))
                    (*(*rbx_3 + 0x340))(rbx_3)
                    zmm1 = zx.o(0)
                    zmm1[0] = float.s(zx.q(rbp_2))
                
                char var_c8
                
                if (zmm0.d f!= zmm8[0] || not(zmm0.d f== zmm1[0]))
                    if (sub_140cbe180(rbx_3) == 0 || rbx_3[0x1c].b != 2)
                        var_c8 = 0
                        sub_1423c21e0(rbx_3, zx.q(r12_2), zx.q(rbp_2), 2, 0)
                        int64_t rdx_8
                        rdx_8.b = 1
                        zmm6 = sub_1423cc130(rbx_3, rdx_8)
                    else
                        zmm6 = sub_1423c84a0(rbx_3, zx.q(r12_2), zx.q(rbp_2))
                
                zmm7 ^= data_142d3f780
                zmm6 ^= data_142d3f780
                *(arg1 + 0x780) = zmm8[0]
                zmm0.d = float.s(zx.q(rbp_2))
                *(arg1 + 0x784) = zmm0.d
                *(r13_1 + 0x2c) = zmm7[0]
                *(r13_1 + 0x30) = zmm6[0]
                uint64_t rax_20
                rax_20.b = data_143f312d8 != 0
                var_c8.q = arg2
                char result_1 =
                    sub_141ba3d40(r13_1, arg1 + 0x818, rbx_3, arg1 + 0x390, var_c8, rax_20.b)
                *(arg1 + 0x8f4) = 0
                arg_8 = arg1
                sub_141bdada0(&data_1439ec4f0, &arg_8)
                result = zx.q(result_1)
                *(arg1 + 0x8f8) = data_143dbb3b8
    else
        if (*(arg1 + 0x8f4) != 0)
            goto label_141bc6674
        
        result.b = 0
else
    void* r9_2 = data_1439ec508
    void* rsi_1 = &data_1439ec4f0
    int64_t rbx_1 = sx.q(data_1439ec510)
    void* rdx_2 = &data_1439ec4f0
    
    if (r9_2 != 0)
        rdx_2 = r9_2
    
    void* rcx_2 = rdx_2
    void* r8 = rdx_2 + (rbx_1 << 3)
    
    if (rdx_2 != r8)
        while (*rcx_2 != arg1)
            rcx_2 += 8
            
            if (rcx_2 == r8)
                goto label_141bc6550
    
    if (rdx_2 == r8 || ((rcx_2 - rdx_2) s>> 3).d == 0xffffffff)
    label_141bc6550:
        int32_t rax_1 = (rbx_1 + 1).d
        bool cond:3_1 = rax_1 s<= data_1439ec514
        data_1439ec510 = rax_1
        
        if (not(cond:3_1))
            sub_141bdc7e0(&data_1439ec4f0, rbx_1.d)
            r9_2 = data_1439ec508
        
        if (r9_2 != 0)
            rsi_1 = r9_2
        
        *(rsi_1 + (rbx_1 << 3)) = arg1
    
    result.b = 0

return result
