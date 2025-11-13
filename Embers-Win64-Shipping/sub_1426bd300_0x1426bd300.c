// 函数: sub_1426bd300
// 地址: 0x1426bd300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = *(arg1 + 0xac)
uint32_t rsi = 0
int32_t rdx = *(arg1 + 0xb8)
int32_t var_48 = data_143b57f88
int64_t var_40 = *(arg1 + 0xb0)
int32_t var_34 = zmm4.d
int64_t var_58 = 0
uint64_t var_50 = data_143b57f80
int64_t var_30
__builtin_memset(&var_30, 0, 0x14)
void* rdx_3 = *(arg1 + 0x98)
int32_t var_38
int32_t rcx_12 = ((((((((rdx u>> 1 & 1) | (zx.d(rdx.b) & 1) << 2 | 2) * 2) | (rdx u>> 4 & 1)) * 2)
    | (rdx u>> 3 & 1)) * 2) | (rdx u>> 2 & 1)) << 2 | (var_38 & 0xffffff40)
void* rdx_5

if (rdx_3 == 0)
    uint128_t zmm3 = data_143b57f80.d
    int32_t zmm2 = *(arg1 + 0xa0)
    
    if (not((zmm3 ^ 0x80000000).d f>= zmm2) && not(zmm2 f>= zmm3.d))
        zmm3 = data_143b57f80:4.d
        zmm2 = *(arg1 + 0xa4)
        
        if (not((zmm3 ^ 0x80000000).d f>= zmm2) && not(zmm2 f>= zmm3.d))
            zmm3 = data_143b57f88
            zmm2 = *(arg1 + 0xa8)
            
            if (not((zmm3 ^ 0x80000000).d f>= zmm2) && not(zmm2 f>= zmm3.d))
                char rax_19 = sub_142702cb0(arg2[0x5b], arg1 + 0xa0, 3, zmm4)
                void arg_18
                
                if (rax_19 != 0)
                    sub_14270c2d0(arg2[0x5b], &arg_18, 0, 0)
                
                if ((rcx_12.b & 1) == 0)
                    int64_t var_50_2 = *(arg1 + 0xa0)
                    int32_t var_38_3 = rcx_12 | 1
                    int32_t var_48_2 = *(arg1 + 0xa8)
                
                if (rax_19 == 0)
                    void var_88
                    rdx_5 = &var_88
                    goto label_1426bd58b
                
                rsi = 1
                goto label_1426bd593
else
    char var_98 = 1
    char rax_13 = sub_142702db0(arg2[0x5b], rdx_3, 3, zmm4.d, 1)
    void arg_8
    
    if (rax_13 != 0)
        sub_14270c2d0(arg2[0x5b], &arg_8, 0, 0)
    int32_t var_38_2
    
    if ((*(arg1 + 0xb8) & 0x20) == 0)
        void* rcx_17 = *(*(arg1 + 0x98) + 0x130)
        int32_t* rax_16
        
        if (rcx_17 == 0)
            int32_t var_6c_1 = data_143dbb200
            int64_t var_74
            rax_16 = &var_74
            var_74 = data_143dbb1f8.q
        else
            float zmm1_1[0x4] = *(rcx_17 + 0x1d0)
            float var_80
            rax_16 = &var_80
            var_80 = zmm1_1[0]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            float var_68_1[0x4] = zmm1_1
            float var_78_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            float var_7c_1 = temp0_1[0]
        
        if ((rcx_12.b & 1) == 0)
            int64_t var_50_1 = *rax_16
            int32_t var_48_1 = rax_16[2]
            var_38_2 = rcx_12 | 1
    else if ((rcx_12.b & 1) == 0)
        var_58 = *(arg1 + 0x98)
        var_38_2 = rcx_12 | 3
    
    if (rax_13 == 0)
        void arg_20
        rdx_5 = &arg_20
    label_1426bd58b:
        rsi = zx.d(*((*(*arg2 + 0x770))(arg2, rdx_5, &var_58, 0, var_98) + 4))
        goto label_1426bd593
    
    rsi = 1
label_1426bd593:
    int64_t* var_28
    
    if (var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            (**var_28)(var_28)
            int32_t rdi_2 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (rdi_2 == 1)
                int64_t r8_3 = *var_28
                (*(r8_3 + 8))(var_28, zx.q(rdi_2), r8_3)
return zx.q(rsi)
