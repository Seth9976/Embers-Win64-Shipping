// 函数: sub_1423652d0
// 地址: 0x1423652d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x188))
float zmm6[0x4] = arg2

if (result.d s<= 0)
    result.b = 0
    return result

int32_t i_1 = 0

if (arg5 != 0)
    if (zmm6[0] < 0f)
    label_14236555d:
        float zmm2[0x4] = *(arg1 + 0xf8)
        zmm2[0] = zmm2[0] + zmm6[0]
        
        if (zmm2[0] >= 0f)
            zmm6 = _mm_min_ss(zmm2[0], zmm2[0])
        else
            zmm6 = zx.o(0)
        
        goto label_142365584
    
    int64_t* rdx_5 = *(arg1 + 0x180)
    int64_t* var_68_1 = rdx_5
    arg2 = rdx_5[2].d
    
    if (zmm6[0] >= arg2[0])
        if (zmm6[0] >= 0f)
            goto label_142365584
        
        goto label_14236555d
    
    int64_t r8 = result * 3
    int32_t i = 0
    uint128_t zmm0
    zmm0.d = (*(arg1 + 0xf8)).d f- rdx_5[r8 - 1].d
    int64_t arg_8 = r8
    arg2[0] = arg2[0] f+ zmm0.d
    uint128_t zmm7
    zmm7.d = zmm0.d f+ zmm6[0]
    zmm7.d = zmm7.d f/ arg2[0]
    
    if (*(arg1 + 0x178) s> 0)
        int64_t rbp_2 = 0
        uint128_t* r12_5 = nullptr
        
        do
            int128_t* rcx_2 = *rdx_5
            int64_t r14_2 = sx.q(arg4[1].d)
            int32_t* rax_5 = rdx_5[r8 - 3]
            arg2 = *(rcx_2 + rbp_2)
            int32_t var_58_1 = (*(r12_5 + *(arg1 + 0x170))).d
            zmm0 = *(rcx_2 + rbp_2 + 4)
            arg2[0] = arg2[0] f- *(rax_5 + rbp_2)
            zmm0.d = zmm0.d f- *(rax_5 + rbp_2 + 4)
            arg2[0] = arg2[0] f* zmm7.d
            zmm0.d = zmm0.d f* zmm7.d
            arg2[0] = arg2[0] f+ *(rax_5 + rbp_2)
            zmm0.d = zmm0.d f+ *(rax_5 + rbp_2 + 4)
            int32_t rax_6 = (r14_2 + 1).d
            arg4[1].d = rax_6
            float var_54_1 = arg2[0]
            
            if (rax_6 s> *(arg4 + 0xc))
                sub_14083a7e0(arg4)
                r8 = arg_8
            
            int64_t rcx_4 = *arg4
            int64_t rdx_7 = r14_2 * 3
            i += 1
            r12_5 += 4
            rbp_2 += 8
            *(rcx_4 + (rdx_7 << 2)) = var_58_1.q
            int32_t var_50_1
            *(rcx_4 + (rdx_7 << 2) + 8) = var_50_1
            rdx_5 = var_68_1
            *arg3 = 0
        while (i s< *(arg1 + 0x178))
    
    result.b = 1
else
    int64_t* rdx_1 = *(arg1 + 0x180)
    int64_t r12_3 = (sx.q(*(arg1 + 0x188)) - 1) * 3
    int64_t* r12_4 = &rdx_1[r12_3]
    
    if (zmm6[0] f< rdx_1[r12_3 + 2].d)
        if (not(zmm6[0] f>= rdx_1[2].d))
            r12_4 = rdx_1
            result = 0
            goto label_14236535f
        
    label_142365584:
        char var_78_1 = arg5
        
        if (*arg3 != 0xffffffff)
            i_1 = *arg3
        
        int128_t zmm6_1
        result, zmm6_1 = sub_1423655e0(arg1, zmm6, i_1, arg4)
        *arg3 = result.d
        bool cond:2_1 = result.d != 0xffffffff
        
        if (result.d == 0xffffffff)
            if (i_1 != 0)
                char var_78_2 = arg5
                result = sub_1423655e0(arg1, zmm6_1, 0, arg4)
                *arg3 = result.d
            
            cond:2_1 = result.d != 0xffffffff
        
        result.b = cond:2_1
    else
        result = zx.q(*(arg1 + 0x2f8) - 1)
    label_14236535f:
        *arg3 = result.d
        
        if (r12_4 == 0)
            goto label_142365584
        
        if (*(arg1 + 0x178) s> 0)
            int128_t* r14_1 = nullptr
            int128_t* r15_1 = nullptr
            
            do
                int64_t rbp_1 = sx.q(arg4[1].d)
                int64_t rax_2 = *r12_4
                int64_t var_68
                var_68.d = (*(r15_1 + *(arg1 + 0x170))).d
                int32_t rax_3 = (rbp_1 + 1).d
                var_68:4.d = (*(r14_1 + rax_2)).d
                float var_60_1 = (*(r14_1 + rax_2 + 4))[0]
                arg4[1].d = rax_3
                
                if (rax_3 s> *(arg4 + 0xc))
                    sub_14083a7e0(arg4)
                
                int64_t rcx_1 = *arg4
                int64_t rdx_4 = rbp_1 * 3
                i_1 += 1
                r15_1 += 4
                r14_1 += 8
                *(rcx_1 + (rdx_4 << 2)) = var_68
                *(rcx_1 + (rdx_4 << 2) + 8) = var_60_1
            while (i_1 s< *(arg1 + 0x178))
        
        result.b = 1

return result
