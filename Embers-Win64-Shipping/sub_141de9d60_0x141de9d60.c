// 函数: sub_141de9d60
// 地址: 0x141de9d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4] = *(arg4 + 4)
float zmm6[0x4]

if (zmm8[0] >= 0f)
    zmm6 = _mm_min_ss(sub_141debbc0(arg1)[0], zmm8[0])
else
    zmm6 = zx.o(0)

uint64_t result
float zmm6_1[0x4]
float zmm7
result, zmm6_1, zmm7 = sub_141deca00(arg1, zmm6[0])

if (result.d == 0xffffffff)
label_141de9f61:
    void* rsi_2 = arg2[2]
    int64_t rbx_4 = 0
    int32_t rdx_5 = *(rsi_2 + 0xa8)
    arg2[1].d = 0
    
    if (rdx_5 s> *(arg2 + 0xc))
        result = sub_141acba60(arg2, rdx_5)
    
    int64_t rbp_2 = sx.q(*(rsi_2 + 0xa8))
    
    if (rbp_2.d != 0)
        int32_t rcx_12 = arg2[1].d
        int32_t rdx_6 = rcx_12 + rbp_2.d
        
        if (rdx_6 s> *(arg2 + 0xc))
            sub_141acba60(arg2, rdx_6)
            rcx_12 = arg2[1].d
        
        result = memcpy(sx.q(rcx_12) * 0x30 + *arg2, *(rsi_2 + 0xa0), (rbp_2 * 0x30).d)
        arg2[1].d += rbp_2.d
    
    arg2[2] = rsi_2
    
    if (*(rsi_2 + 0xf0) != 0)
        result = sub_140d3c6e0(rsi_2 + 0x38)
        
        if (result != 0)
            int64_t arg_20 = 0
            result = sub_141dec140(sub_140d3c6e0(rsi_2 + 0x40), 0)
            int32_t i_2 = arg2[1].d
            uint64_t result_1 = result
            
            if (i_2 != 0)
                int64_t r8_8 = 0
                uint64_t i_1 = zx.q(i_2)
                uint64_t i
                
                do
                    rbx_4 += 0x30
                    result = *arg2
                    r8_8 += 4
                    float (* rdx_11)[0x4] = sx.q(*(*(arg2[2] + 0x70) + r8_8 - 4)) * 0x30 + *result_1
                    *(rbx_4 + result - 0x30) = *rdx_11
                    *(rbx_4 + result - 0x20) = rdx_11[1]
                    *(rbx_4 + result - 0x10) = rdx_11[2]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
else
    int64_t rbx_2 = sx.q(result.d) << 5
    int64_t* rbx_3 = rbx_2 + *arg1
    
    if (rbx_2 == neg.q(*arg1) || *(rbx_3 + 0x1c) == 0)
        goto label_141de9f61
    
    result = sub_141ded510(rbx_3, zmm6_1[0])
    
    if (result.b == 0)
        goto label_141de9f61
    
    int64_t* r14_1 = *rbx_3
    
    if (r14_1 == 0)
        goto label_141de9f61
    
    float zmm0_2[0x4]
    zmm0_2, result = sub_141decb10(rbx_3)
    bool cond:1_1 = rbx_3[3].d s<= 1
    zmm8 = zmm0_2
    zmm6_1[0] = zmm6_1[0] f- rbx_3[1].d
    
    if (not(cond:1_1))
        float zmm1_1[0x4] = rbx_3[2].d
        zmm1_1[0] = zmm1_1[0] f- *(rbx_3 + 0xc)
        uint32_t temp0_3[0x4] = __andps_xmmxud_memxud(zmm0_2, data_142d3f770)
        zmm1_1[0] = zmm1_1[0] f/ temp0_3[0]
        zmm0_2, result, zmm7, zmm8 = sub_140a454f0(zmm6_1, zmm1_1)
        r14_1 = *rbx_3
        zmm6_1 = zmm0_2
    
    bool cond:2_1 = zmm8[0] <= zmm7
    zmm6_1[0] = zmm6_1[0] * zmm8[0]
    
    if (cond:2_1)
        zmm0_2 = rbx_3[2].d
    else
        zmm0_2 = *(rbx_3 + 0xc)
    
    zmm6_1[0] = zmm6_1[0] + zmm0_2[0]
    
    if (r14_1 == 0)
        goto label_141de9f61
    
    int64_t rbp_1 = sx.q(*(arg4 + 0x10))
    int64_t r15_1 = *(arg4 + 8)
    float var_84_1 = (*(arg4 + 4))[0]
    char var_88 = *arg4
    int64_t var_80 = 0
    int32_t var_78_1 = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1407c3650(&var_80, rbp_1.d, 0)
        memcpy(var_80, r15_1, (rbp_1 * 0xc).d)
    else
        int32_t var_74_1 = 0
    
    uint32_t count = *(arg4 + 0x20)
    int64_t rsi_1 = *(arg4 + 0x18)
    int64_t var_70 = 0
    uint32_t count_1 = count
    
    if (count != 0)
        sub_1405da9e0(&var_70, count, 0)
        memcpy(var_70, rsi_1, count)
    else
        int32_t var_64_1 = 0
    
    float var_84_2 = zmm6_1[0]
    char rax_2 = (*(*r14_1 + 0x2d0))(r14_1)
    var_88 &= rax_2
    result = (*(*r14_1 + 0x2c0))(r14_1, arg2, arg3, &var_88, var_88)
    int64_t rcx_9 = var_70
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)
    
    int64_t rcx_10 = var_80
    
    if (rcx_10 != 0)
        return sub_140a74f90(rcx_10)

return result
