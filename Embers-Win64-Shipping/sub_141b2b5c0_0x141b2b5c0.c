// 函数: sub_141b2b5c0
// 地址: 0x141b2b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1
int128_t zmm6
int128_t zmm7
i_1, zmm6, zmm7 = j_sub_140ce3290(arg1)

if (arg1[0x43].d != 0)
    int32_t i_4 = 0
    int64_t* i = arg1[0x42]
    int32_t r12_1 = 0
    void* r13_3 = &i[sx.q(arg1[0x43].d) * 2]
    int64_t* var_a8 = nullptr
    int64_t* r15_1 = nullptr
    int32_t var_9c_1 = 0
    int32_t i_2
    
    for (; i != r13_3; i = &i[2])
        int64_t i_5 = sx.q(i_4)
        i_4 = (i_5 + 1).d
        i_2 = i_4
        
        if (i_4 s> r12_1)
            sub_1405a4f90(&var_a8)
            r12_1 = var_9c_1
            i_4 = i_2
            r15_1 = var_a8
        
        int64_t* rdx_4 = &r15_1[i_5 * 2]
        *rdx_4 = 0
        rdx_4[1] = 0
        sub_140b21e10(i, rdx_4)
    
    int64_t rax = sx.q(arg1[0x41].d)
    double zmm0_1[0x2]
    
    if (rax.d s>= 0 && rax.d s< i_4)
        int32_t rcx_2 = data_143f2c430
        char var_94_1 = 0
        int64_t var_68_1 = 0
        zmm0_1 = *(r15_1 + rax * 0x10)
        *(arg1 + 0xfc) = (rcx_2.q u>> 0x20).b
        *(arg1 + 0x100) = zmm0_1
        arg1[0x1f].d = rcx_2
        arg1[0x22] = var_68_1
        arg1[0x23] = 0
    
    sub_141f89770(&arg1[0x32], &var_a8)
    i_1 = i_2
    int64_t* r8_1 = var_a8
    int128_t var_48_1 = zmm6
    int128_t var_58_1 = zmm7
    
    while (i_1 s>= 0)
        if (i_1 s>= r8_1[1].d)
            break
        
        int64_t r10_1 = *r8_1
        int64_t i_3 = sx.q(i_1)
        int64_t rdx_6 = sx.q(*(r10_1 + (i_3 << 3) + 4))
        int64_t rcx_3
        
        if (rdx_6.d s< 0 || rdx_6.d s>= i_4)
            rcx_3.b = 0
        else
            rcx_3.b = 1
        
        if (rcx_3.b != 0)
            int32_t var_98_2 = data_143f2c430
            char var_94_2 = 0
            int64_t var_68_2 = 0
            int64_t var_60_1 = 0
            _mm_cvtps_pd((*(r10_1 + (i_3 << 3))).q)
            zmm0_1 = *(r15_1 + rdx_6 * 0x10)
            double var_90_1[0x2] = zmm0_1
            int64_t var_70_1 = (_mm_unpackhi_pd(zmm0_1, zmm0_1[0])).q
            int64_t arg_10
            int128_t zmm6_1 = sub_141a514d0(&arg_10)
            int32_t arg_8
            zmm7 = sub_141a6d2f0(&arg_8, 0, arg_10, zmm6_1)
            int64_t rsi_1 = sx.q(arg1[0x1e].d)
            int32_t rax_8 = (rsi_1 + 1).d
            arg1[0x1e].d = rax_8
            
            if (rax_8 s> *(arg1 + 0xf4))
                sub_1405a4cf0(&arg1[0x1d])
            
            *(arg1[0x1d] + (rsi_1 << 2)) = arg_8
            int64_t rsi_2 = sx.q(arg1[0x25].d)
            int32_t rax_10 = (rsi_2 + 1).d
            arg1[0x25].d = rax_10
            
            if (rax_10 s> *(arg1 + 0x12c))
                sub_1405c4ec0(&arg1[0x24])
            
            int64_t rax_11 = arg1[0x24]
            rcx_3 = rsi_2 * 5
            *(rax_11 + (rcx_3 << 3)) = zmm7
            *(rax_11 + (rcx_3 << 3) + 0x10) = var_70_1.o
            *(rax_11 + (rcx_3 << 3) + 0x20) = var_60_1
            i_1 = i_2
            r8_1 = var_a8
        
        i_1 += 1
        i_2 = i_1
    
    if (r15_1 != 0)
        return sub_140a74f90(r15_1)

return i_1
