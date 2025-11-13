// 函数: sub_141423160
// 地址: 0x141423160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x3158)
void var_3178
int64_t rax_1 = __security_cookie ^ &var_3178
float zmm2[0x4] = *arg1
void* r14 = arg2
float zmm6[0x4] = data_1439b6d80
float zmm5[0x4] = data_1439b6d90
int32_t rax_2 = *(arg1 + 0x48)
int64_t* r10 = arg1[4].q
bool r9 = data_1439b6d04 != 0
int64_t rdi = arg1[5].q
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm6)
int32_t temp0_4
int32_t temp1
temp0_4:temp1 = sx.q(rax_2)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm5)
int32_t rax_5 = (temp1 - temp0_4) s>> 1
int32_t r8 = rax_5
float zmm7[0x4] = data_1439b6d60
float temp0_7[0x4] = _mm_mul_ps(temp0_1, zmm7)
bool var_3148 = r9
float zmm8[0x4] = data_1439b6d70
int64_t* var_3100 = r10
int64_t var_30f8 = rdi
float temp0_11[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0, zmm8), temp0_7), temp0_3), temp0_6)
zmm2 = arg1[1]
float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm7)
float var_30d8[0x4] = temp0_11
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm8)
float temp0_17[0x4] = _mm_mul_ps(temp0_13, zmm6)
float temp0_18[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_14)
float temp0_20[0x4] = _mm_mul_ps(temp0_18, zmm5)
float temp0_22[0x4] = _mm_add_ps(_mm_add_ps(temp0_19, temp0_17), temp0_20)
zmm2 = arg1[2]
float temp0_23[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_24[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_25[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm7)
float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm6)
float var_30c8[0x4] = temp0_22
float temp0_28[0x4] = _mm_mul_ps(temp0_23, zmm8)
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm5)
float temp0_33[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_28, temp0_26), temp0_27), temp0_30)
zmm2 = arg1[3]
float temp0_34[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_36[0x4] = _mm_mul_ps(temp0_34, zmm8)
float temp0_37[0x4] = _mm_mul_ps(temp0_35, zmm7)
float var_30b8[0x4] = temp0_33
float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm6)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_5)
int32_t rcx = 0
uint64_t result = zx.q(((temp3 + (temp2 & 0x1ff)) s>> 9) + 1)
int32_t var_3140 = 0
float var_30a8[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_36, temp0_37), temp0_39), 
    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm5))

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t rbx_1 = 0x200
        int32_t rax_10 = r8 - rcx
        float (* rcx_1)[0x4] = &var_30d8
        
        if (rax_10 s<= 0x200)
            rbx_1 = rax_10
        
        int32_t var_3078[0x200]
        int32_t* var_3150_1 = &var_3078
        float var_2878[0x200]
        float* var_3158_1 = &var_2878
        void var_2078
        float (* r9_1)[0x4] = &var_2078
        
        if (r9 == 0)
            sub_1414239a0(rcx_1, r10, rbx_1, r9_1, var_3158_1, var_3150_1)
        else
            sub_141423720(rcx_1, r10, rbx_1, r9_1, var_3158_1, var_3150_1)
        
        int64_t j = 0
        int64_t r12_1 = 0
        int64_t j_1 = 0
        
        if (rbx_1 s> 0)
            void* r9_3 = rdi - &var_3078
            void* var_30e0_1 = r9_3
            
            do
                int32_t rdi_1 = *(&var_2078 + (r12_1 << 2))
                bool cond:4_1 = var_3078[j] == 0
                int64_t rbx_2 = sx.q(*(r9_3 + &var_3078[j]))
                void var_2074
                int32_t r8_2 = *(&var_2074 + (r12_1 << 2))
                void var_2070
                int32_t rsi_1 = *(&var_2070 + (r12_1 << 2))
                int32_t var_206c[0x7fd]
                int32_t rcx_2 = var_206c[r12_1]
                r12_1 += 4
                int32_t var_3144 = rbx_2.d
                
                if (cond:4_1)
                    if (rdi_1 s<= rsi_1 && r8_2 s<= rcx_2)
                        int64_t r13_1 = sx.q(*(r14 + 0x68))
                        int32_t zmm6_1 = var_2878[j]
                        int32_t var_3124_1 = r8_2
                        int32_t var_311c_1 = rcx_2
                        int64_t var_3090_1 = rsi_1.q
                        int32_t var_3114_1 = rcx_2
                        int32_t rax_20 = (r13_1 + 1).d
                        *(r14 + 0x68) = rax_20
                        
                        if (rax_20 s> *(r14 + 0x6c))
                            sub_1405a4df0(r14 + 0x60)
                        
                        int64_t rax_21 = *(r14 + 0x60)
                        void* r9_4 = arg2
                        int64_t rcx_7 = r13_1 * 3
                        void* r14_1 = r9_4 + 0x70
                        *(rax_21 + (rcx_7 << 3)) = rdi_1.q.o
                        *(rax_21 + (rcx_7 << 3) + 0x10) = rdi_1.q
                        int32_t rcx_8 = *(r14_1 + 8)
                        var_3144 = rcx_8
                        *(r14_1 + 8) = rcx_8 + 1
                        
                        if (rcx_8 + 1 s> *(r14_1 + 0xc))
                            sub_1405a4cf0(r14_1)
                            rcx_8 = var_3144
                            r9_4 = arg2
                        
                        *(*r14_1 + (sx.q(rcx_8) << 2)) = rbx_2.d
                        void* rbx_3 = r9_4 + 0x80
                        int64_t r14_2 = sx.q(*(rbx_3 + 8))
                        int32_t rax_24 = (r14_2 + 1).d
                        *(rbx_3 + 8) = rax_24
                        
                        if (rax_24 s> *(rbx_3 + 0xc))
                            sub_1405daba0(rbx_3)
                            r9_4 = arg2
                        
                        int32_t var_310c_1 = zmm6_1
                        int32_t var_3110_1 = r13_1.d
                        *(r14_2 + *rbx_3) = 0
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(rdi_1)
                        int32_t r8_7 = ((temp5_1 & 0x3f) + temp6_1) s>> 6
                        
                        if (rdi_1 s>= rsi_1)
                            rsi_1 = rdi_1
                        
                        if (rsi_1 s>= rdi_1)
                            rdi_1 = rsi_1
                        
                        int32_t rcx_12 = 0
                        int32_t temp7_1
                        int32_t temp8_1
                        temp7_1:temp8_1 = sx.q(rdi_1)
                        int32_t rax_31 = (temp8_1 + (temp7_1 & 0x3f)) s>> 6
                        
                        if (r8_7 s>= 0)
                            rcx_12 = r8_7
                        
                        int64_t rdx_19 = sx.q(rcx_12)
                        int32_t rcx_13 = 5
                        
                        if (rax_31 s<= 5)
                            rcx_13 = rax_31
                        
                        int64_t r14_3 = sx.q(rcx_13)
                        
                        if (rdx_19 s<= r14_3)
                            void* rdi_5 = (rdx_19 << 4) + 8 + r9_4
                            int64_t k_1 = r14_3 - rdx_19 + 1
                            int64_t k
                            
                            do
                                int64_t rsi_2 = sx.q(*rdi_5)
                                int32_t rax_32 = (rsi_2 + 1).d
                                *rdi_5 = rax_32
                                
                                if (rax_32 s> *(rdi_5 + 4))
                                    sub_1405a4d70(rdi_5 - 8)
                                
                                int64_t rax_33 = *(rdi_5 - 8)
                                rdi_5 += 0x10
                                *(rax_33 + (rsi_2 << 3)) = var_3110_1.q
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                        
                        r14 = arg2
                    else if (arg3[1].d == *(arg3 + 0x34))
                    label_1414236f5:
                        *sub_14140f610(arg3, rbx_2.d, &var_3144) = 0
                    else
                        void* rcx_19 = arg3[8]
                        void* r8_8 = &arg3[7]
                        
                        if (rcx_19 != 0)
                            r8_8 = rcx_19
                        
                        int32_t rax_37 = *(r8_8 + (((sx.q(arg3[9].d) - 1) & rbx_2) << 2))
                        
                        if (rax_37 == 0xffffffff)
                        label_1414236f5_1:
                            *sub_14140f610(arg3, rbx_2.d, &var_3144) = 0
                        else
                            int32_t* rdx_27
                            
                            while (true)
                                rdx_27 = (sx.q(rax_37) << 4) + *arg3
                                
                                if (*rdx_27 == rbx_2.d)
                                    break
                                
                                rax_37 = rdx_27[2]
                                
                                if (rax_37 == 0xffffffff)
                                    goto label_1414236f5_2
                            
                            if (rax_37 == 0xffffffff || rdx_27 == 0)
                            label_1414236f5_2:
                                *sub_14140f610(arg3, rbx_2.d, &var_3144) = 0
                            else
                                rdx_27[1].b = 0
                else if (arg3[1].d == *(arg3 + 0x34))
                label_141423445:
                    *sub_14140f610(arg3, rbx_2.d, &var_3144) = 1
                else
                    void* rcx_3 = arg3[8]
                    void* r8_3 = &arg3[7]
                    
                    if (rcx_3 != 0)
                        r8_3 = rcx_3
                    
                    int32_t rax_14 = *(r8_3 + (((sx.q(arg3[9].d) - 1) & rbx_2) << 2))
                    
                    if (rax_14 == 0xffffffff)
                    label_141423445_1:
                        *sub_14140f610(arg3, rbx_2.d, &var_3144) = 1
                    else
                        int32_t* rdx_10
                        
                        while (true)
                            rdx_10 = (sx.q(rax_14) << 4) + *arg3
                            
                            if (*rdx_10 == rbx_2.d)
                                break
                            
                            rax_14 = rdx_10[2]
                            
                            if (rax_14 == 0xffffffff)
                                goto label_141423445_2
                        
                        if (rax_14 == 0xffffffff || rdx_10 == 0)
                        label_141423445_2:
                            *sub_14140f610(arg3, rbx_2.d, &var_3144) = 1
                        else
                            rdx_10[1].b = 1
                
                r9_3 = var_30e0_1
                j = j_1 + 1
                j_1 = j
            while (j s< sx.q(rbx_1))
            
            rdi = var_30f8
        
        r8 = rax_5
        r9 = var_3148
        r10 = var_3100 + sx.q(rbx_1 * 2) * 0xc
        rcx = var_3140 + rbx_1
        i = i_1
        i_1 -= 1
        var_3100 = r10
        var_3140 = rcx
        rdi += sx.q(rbx_1) << 2
        var_30f8 = rdi
    while (i != 1)

result.b = 1
__security_check_cookie(rax_1 ^ &var_3178)
return result
