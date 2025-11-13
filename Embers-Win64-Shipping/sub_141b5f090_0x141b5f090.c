// 函数: sub_141b5f090
// 地址: 0x141b5f090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int32_t rcx = *(rax + 0x14)
int32_t r13 = *(rax + 0x10)
int32_t arg_10 = rcx
float* result

if (arg2[2].b == 0)
    float* result_4 = j_sub_140a82f30(0x30)
    float* result_1 = result_4
    
    if (result_4 == 0)
        result_1 = nullptr
    else
        *result_4 = 0.0
        __builtin_memset(&result_4[4], 0, 0x20)
        result_4[2] = 0x3f800000
        result_4[3] = 0x3f800000
    
    void*** rax_21 = j_sub_140a82f30(0x58)
    int32_t rbp_1
    void*** rsi_3
    
    if (rax_21 == 0)
        rbp_1 = arg_10
        rsi_3 = nullptr
    else
        int64_t var_48 = *arg2
        void* rcx_12 = arg2[1]
        void* var_40_1 = rcx_12
        
        if (rcx_12 != 0)
            *(rcx_12 + 8) += 1
        
        rbp_1 = arg_10
        int32_t rax_22 = 8
        
        if (*(arg2 + 0x11) != 0)
            rax_22 = 0x18
        
        rsi_3 = sub_14234f120(rax_21, r13, rbp_1, 2, &var_48, rax_22, 0)
    
    int64_t r14_2 = sx.q(*(arg1 + 0x220))
    int32_t rax_24 = (r14_2 + 1).d
    *(arg1 + 0x220) = rax_24
    
    if (rax_24 s> *(arg1 + 0x224))
        sub_1405a4d70(arg1 + 0x218)
    
    void* rcx_15 = &rsi_3[4]
    
    if (rsi_3 == 0)
        rcx_15 = nullptr
    
    *(*(arg1 + 0x218) + (r14_2 << 3)) = rsi_3
    sub_141997e80(rcx_15)
    *(result_1 + 0x10) = rsi_3
    result = result_1
    *result_1 = 0.0
    result_1[2] = 0x3f800000
    result_1[3] = 0x3f800000
    result_1[6] = r13
    result_1[7] = rbp_1
else
    int64_t* rsi = nullptr
    void*** rdi = nullptr
    int32_t i = 0
    int64_t* rax_2
    int32_t rbp
    
    if (*(arg1 + 0x210) s> 0)
        int64_t* r14_1 = nullptr
        
        do
            if (rsi != 0)
                rbp = arg_10
                goto label_141b5f240
            
            rdi = *(r14_1 + *(arg1 + 0x208))
            rax_2 = sub_140de76e0(rdi, r13, rcx, *arg2)
            rcx = arg_10
            i += 1
            r14_1 = &r14_1[1]
            rsi = rax_2
        while (i s< *(arg1 + 0x210))
    
    if (*(arg1 + 0x210) s> 0 && rax_2 != 0)
        rbp = rcx
    else
        void*** rax_3 = j_sub_140a82f30(0x48)
        rdi = rax_3
        
        if (rax_3 == 0)
            rdi = nullptr
        else
            int32_t rcx_2 = data_1439c8644
            int32_t rsi_1 = *(arg1 + 0x228)
            *rdi = &data_142ec2778
            rdi[1] = 0
            rdi[2] = 0
            rdi[6].d = rcx_2
            rdi[3] = 0
            rdi[4] = 0
            rdi[5].d = rsi_1
            *(rdi + 0x2c) = rsi_1
            *(rdi + 0x34) = 1
            rdi[7].w = 0
            sub_140e19c80(rdi)
            *rdi = &data_14306cd40
            void*** rax_4 = j_sub_140a82f30(0x58)
            
            if (rax_4 == 0)
                rdi[8] = 0
            else
                int128_t var_38 = zx.o(0)
                rdi[8] = sub_14234f120(rax_4, rsi_1, rsi_1, 2, &var_38, 0x10, 1)
        
        int64_t rsi_2 = sx.q(*(arg1 + 0x210))
        int32_t rax_7 = (rsi_2 + 1).d
        *(arg1 + 0x210) = rax_7
        
        if (rax_7 s> *(arg1 + 0x214))
            sub_1405a4d70(arg1 + 0x208)
        
        rbp = arg_10
        *(*(arg1 + 0x208) + (rsi_2 << 3)) = rdi
        rsi = sub_140de76e0(*(*(arg1 + 0x208) + (sx.q(*(arg1 + 0x210)) << 3) - 8), r13, rbp, *arg2)
    
label_141b5f240:
    float* result_3 = j_sub_140a82f30(0x30)
    float* result_2 = result_3
    
    if (result_3 == 0)
        result_2 = nullptr
    else
        *result_3 = 0.0
        __builtin_memset(&result_3[4], 0, 0x20)
        result_3[2] = 0x3f800000
        result_3[3] = 0x3f800000
    
    *(result_2 + 0x10) = rdi[8]
    uint32_t rdx_4 = zx.d(rsi[4].b)
    uint32_t rdx_5 = rdx_4 * 2
    float zmm1 = float.s(zx.q(*(rsi + 0x14) + rdx_4))
    float zmm0_1 = float.s(zx.q(*(rdi + 0x2c)))
    *result_2 = float.s(zx.q(rsi[2].d + rdx_4)) / float.s(zx.q(rdi[5].d))
    result_2[1] = zmm1 / zmm0_1
    result = result_2
    zmm1 = float.s(zx.q(*(rsi + 0x1c) - rdx_5))
    zmm0_1 = float.s(zx.q(*(rdi + 0x2c)))
    result_2[2] = float.s(zx.q(rsi[3].d - rdx_5)) / float.s(zx.q(rdi[5].d))
    result_2[3] = zmm1 / zmm0_1
    result_2[6] = r13
    result_2[7] = rbp

return result
