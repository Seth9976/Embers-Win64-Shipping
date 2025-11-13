// 函数: sub_140774a30
// 地址: 0x140774a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x230)
float zmm12[0x4] = arg2

if (rcx != 0)
    *(arg1 + 0x230) = 0
    (**rcx)(rcx, 1)

int64_t* rcx_1 = *(arg1 + 0x228)

if (rcx_1 != 0)
    *(arg1 + 0x228) = 0
    (**rcx_1)(rcx_1, 1)

*(arg1 + 0x260) = 0

if (*(arg1 + 0x264) s<= 0xffffffff)
    sub_140775b10(arg1 + 0x258, 0)

int32_t rax_3 = *(arg1 + 0x274)
*(arg1 + 0x270) = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_140775b10(arg1 + 0x268, 0)

int32_t rax_4 = *(arg1 + 0x284)
*(arg1 + 0x280) = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_140775b10(arg1 + 0x278, 0)

uint64_t result = zx.q(*(arg1 + 0x294))
*(arg1 + 0x290) = 0
int32_t temp2 = result.d

if (temp2 s< 0 && temp2 != 0)
    result = sub_140775b10(arg1 + 0x288, 0)

*(arg1 + 0x1f8) = 0x3f800000

if (not(arg4[0] f<= (zx.o(0)).d) && arg5 s>= 1)
    int32_t r15_1 = data_143cda914
    TEB* gsbase
    int64_t* rax_6 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    int64_t* var_b8 = rax_6
    
    if (r15_1 s> *(rax_6 + 0x14))
        _Init_thread_header(&data_143cda914)
        r15_1 = data_143cda914
        
        if (r15_1 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
            r15_1 = data_143cda914
    
    float zmm0_1[0x4] = logf(arg3.d)
    int64_t* rax_7 = var_b8
    zmm0_1[0] = zmm0_1[0] f* data_143cda910
    
    if (r15_1 s> *(rax_7 + 0x14))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    int128_t zmm10
    zmm10.d = float.s(arg5)
    float zmm0_2 = logf(zmm12[0]) f* data_143cda910
    zmm0_1[0] = zmm0_1[0] - zmm0_2
    zmm10.d = zmm10.d f/ _mm_max_ss(zmm0_1[0], 0x3c23d70a)[0]
    arg2 = 0x3f800000
    zmm10 = _mm_max_ss(zmm10.d, 0x3c23d70a)
    arg2[0] = 1f f/ zmm10.d
    int128_t zmm0_3 = powf(2f, arg2[0])
    arg4[0] = arg4[0] * 3f
    int128_t zmm9
    zmm9.d = zmm0_3.d f- 1f
    int32_t i = 8
    zmm9.d = zmm9.d f* zmm12[0]
    zmm9 = _mm_max_ss(zmm9.d, 0x3c23d70a)
    arg4[0] = arg4[0] f/ zmm9.d
    arg4[0] = arg4[0] + arg4[0]
    zmm0_3.d = -0.5f - arg4[0]
    int32_t rdx_3 = neg.d(int.d(zmm0_3.d) s>> 1)
    
    if (rdx_3 s> 0x100)
        while (i s< 0xd)
            i += 1
            
            if (rdx_3 s<= 1 << i.b)
                break
    
    int32_t i_1 = i
    int16_t arg_c = 0x101
    i_1.q = i_1.q
    result = sub_141c342a0(&i_1, &data_143f34940)
    
    if (result.b != 0)
        result = sub_141c3dad0(&var_b8, &i_1, &data_143f34940)
        
        if (arg1 + 0x230 != result)
            int64_t* rcx_9 = *(arg1 + 0x230)
            *(arg1 + 0x230) = *result
            *result = 0
            
            if (rcx_9 != 0)
                result = (**rcx_9)(rcx_9, 1)
        
        int64_t* rcx_10 = var_b8
        
        if (rcx_10 != 0)
            result = (**rcx_10)(rcx_10, 1)
        
        int64_t* rcx_11 = *(arg1 + 0x230)
        
        if (rcx_11 != 0)
            sub_14074a020(arg1 + 0x258, (*(*rcx_11 + 8))(rcx_11))
            int64_t* rcx_13 = *(arg1 + 0x230)
            int32_t rax_17 = (*(*rcx_13 + 8))(rcx_13) + 2 + *(arg1 + 0x270)
            *(arg1 + 0x270) = rax_17
            
            if (rax_17 s> *(arg1 + 0x274))
                sub_140775270(arg1 + 0x268)
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(*(arg1 + 0x270))
            int32_t rdx_9 = ((temp4_1 - temp3_1) s>> 1) + *(arg1 + 0x280)
            *(arg1 + 0x280) = rdx_9
            
            if (rdx_9 s> *(arg1 + 0x284))
                sub_140775270(arg1 + 0x278)
            
            int32_t rax_22 = *(arg1 + 0x290) + arg5
            *(arg1 + 0x290) = rax_22
            
            if (rax_22 s> *(arg1 + 0x294))
                sub_140775270(arg1 + 0x288)
            
            int64_t* rcx_18 = *(arg1 + 0x230)
            int32_t rax_24 = (*(*rcx_18 + 8))(rcx_18)
            int64_t* rcx_19 = *(arg1 + 0x230)
            int64_t rax_25 = *rcx_19
            uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(rax_24))
            uint32_t rcx_20 = zx.d((*(rax_25 + 0x10))(rcx_19))
            float zmm1
            
            if (rcx_20 == 1)
                zmm1 = 1f / (zmm6_1.d f* zmm6_1.d)
            else if (rcx_20 == 2)
                zmm1 = 1f f/ zmm6_1.d
            else if (rcx_20 == 3)
                zmm1 = zmm6_1.d f* zmm6_1.d
            else if (rcx_20 == 4)
                zmm1 = zmm6_1.d
            else
                zmm1 = 1f
            
            *(arg1 + 0x1f8) = zmm1
            float zmm0_4 = 0.5f
            zmm6_1.d = _mm_max_ss(zmm6_1.d, 0x3f800000).d f* zmm9.d
            zmm1 = arg4[0] f/ zmm6_1.d
            
            if (not(zmm1 < 0.5f))
                zmm0_4 = _mm_min_ss(zmm1, 0x40000000)
            
            int64_t* rcx_24 = *(arg1 + 0x230)
            float var_a8_1 = zmm12[0]
            int32_t var_ac_1 = zmm10.d
            float var_a4_1 = zmm0_4
            int32_t var_b0 = arg5
            char var_a0_1 = 2
            result = sub_141c3db70(&var_b8, &var_b0, (*(*rcx_24 + 8))(rcx_24, zmm1), arg4)
            
            if (arg1 + 0x228 != result)
                int64_t* rcx_26 = *(arg1 + 0x228)
                *(arg1 + 0x228) = *result
                *result = 0
                
                if (rcx_26 != 0)
                    result = (**rcx_26)(rcx_26, 1)
            
            int64_t* rcx_27 = var_b8
            
            if (rcx_27 != 0)
                return (**rcx_27)(rcx_27, 1)

return result
