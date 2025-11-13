// 函数: sub_141aa0220
// 地址: 0x141aa0220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 0x118)
void* r15 = *(arg2 + 0x18)
float zmm6[0x4]
float var_38[0x4] = zmm6
float zmm7[0x4]
float var_48[0x4] = zmm7
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
int64_t result
void* r14
float zmm2[0x4]
int128_t zmm10
int128_t zmm11

if (not(zmm0[0] < 0.999989986f))
    int32_t rax = *(arg1 + 0xd0)
    int32_t rdx
    
    if (rax s>= 0)
        rdx = *(arg1 + 0xd4)
    else
        int32_t rcx = rax * 2
        
        if ((rcx & 0xfffffffe) == 0xfffffffe)
            rdx = -1
        else
            rdx = *(*(r15 + 0x80) + (sx.q(rcx) s>> 1 << 2))
    
    int32_t rax_4 = *(arg1 + 0xf0)
    int32_t rbx
    
    if (rax_4 s>= 0)
        rbx = *(arg1 + 0xf4)
    else
        int32_t rcx_3 = rax_4 * 2
        
        if ((rcx_3 & 0xfffffffe) == 0xfffffffe)
            rbx = -1
        else
            rbx = *(*(r15 + 0x80) + (sx.q(rcx_3) s>> 1 << 2))
    
    char* rcx_7 = *(arg2 + 0x20)
    r14 = arg2 + 8
    int64_t rdi = sx.q(rdx)
    
    if (rcx_7[rdi] == 0)
        zmm10, zmm11 = sub_141a98300(r14, rdx)
        rcx_7 = *(r14 + 0x18)
    
    int64_t rdx_2 = *r14
    int64_t rdi_1 = sx.q(rbx)
    bool cond:1_1 = rcx_7[rdi_1] != 0
    zmm7 = *(rdx_2 + rdi * 0x30 + 0x10)
    zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    zmm9 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    
    if (not(cond:1_1))
        zmm7, zmm8, zmm9, zmm10, zmm11 = sub_141a98300(r14, rbx)
        rdx_2 = *r14
    
    result = rdi_1 * 6
    zmm6 = *(rdx_2 + (result << 3) + 0x10)
    zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
else
    float zmm1[0x4]
    
    if (zmm0[0] > 9.99999975e-06f)
        int32_t rax_22 = *(arg1 + 0xd0)
        int32_t rdx_6
        
        if (rax_22 s>= 0)
            rdx_6 = *(arg1 + 0xd4)
        else
            int32_t rcx_18 = rax_22 * 2
            
            if ((rcx_18 & 0xfffffffe) == 0xfffffffe)
                rdx_6 = -1
            else
                rdx_6 = *(*(r15 + 0x80) + (sx.q(rcx_18) s>> 1 << 2))
        
        int32_t rax_26 = *(arg1 + 0xf0)
        int32_t rsi_1
        
        if (rax_26 s>= 0)
            rsi_1 = *(arg1 + 0xf4)
        else
            int32_t rcx_21 = rax_26 * 2
            
            if ((rcx_21 & 0xfffffffe) == 0xfffffffe)
                rsi_1 = -1
            else
                rsi_1 = *(*(r15 + 0x80) + (sx.q(rcx_21) s>> 1 << 2))
        
        int32_t rax_30 = *(arg1 + 0xe0)
        int32_t rdi_4
        
        if (rax_30 s>= 0)
            rdi_4 = *(arg1 + 0xe4)
        else
            int32_t rcx_24 = rax_30 * 2
            
            if ((rcx_24 & 0xfffffffe) == 0xfffffffe)
                rdi_4 = -1
            else
                rdi_4 = *(*(r15 + 0x80) + (sx.q(rcx_24) s>> 1 << 2))
        
        int32_t rax_34 = *(arg1 + 0x100)
        int32_t rbx_2
        
        if (rax_34 s>= 0)
            rbx_2 = *(arg1 + 0x104)
        else
            int32_t rcx_27 = rax_34 * 2
            
            if ((rcx_27 & 0xfffffffe) == 0xfffffffe)
                rbx_2 = -1
            else
                rbx_2 = *(*(r15 + 0x80) + (sx.q(rcx_27) s>> 1 << 2))
        
        char* rcx_31 = *(arg2 + 0x20)
        r14 = arg2 + 8
        int64_t rax_38 = sx.q(rdx_6)
        
        if (rcx_31[rax_38] == 0)
            zmm10, zmm11 = sub_141a98300(r14, rdx_6)
            rcx_31 = *(arg2 + 0x20)
        
        int64_t rdx_8 = *r14
        int64_t rax_41 = sx.q(rsi_1)
        int96_t var_f8_1 = (*(rdx_8 + rax_38 * 0x30 + 0x10))[0].12
        arg4 = rax_41
        
        if (rcx_31[rax_41] == 0)
            zmm10, zmm11 = sub_141a98300(r14, rsi_1)
            rdx_8 = *r14
            rcx_31 = *(arg2 + 0x20)
            rax_41 = arg4
        
        int64_t rsi_2 = sx.q(rdi_4)
        int96_t var_d8_1 = (*(rdx_8 + rax_41 * 0x30 + 0x10))[0].12
        
        if (rcx_31[rsi_2] == 0)
            zmm10, zmm11 = sub_141a98300(r14, rdi_4)
            rdx_8 = *r14
            rcx_31 = *(arg2 + 0x20)
        
        int64_t rdi_5 = sx.q(rbx_2)
        int96_t var_e8_1 = (*(rdx_8 + rsi_2 * 0x30 + 0x10))[0].12
        
        if (rcx_31[rdi_5] == 0)
            zmm10, zmm11 = sub_141a98300(r14, rbx_2)
            rdx_8 = *r14
        
        float zmm5 = *(arg1 + 0x118)
        zmm2 = var_f8_1:4.d
        result = rdi_5 * 6
        zmm2[0] = zmm2[0] f- var_e8_1:4.d
        float zmm3[0x4] = var_f8_1.d
        zmm3[0] = zmm3[0] f- var_e8_1.d
        zmm6 = *(rdx_8 + (result << 3) + 0x10)
        zmm1 = var_f8_1:8.d
        zmm1[0] = zmm1[0] f- var_e8_1:8.d
        zmm2[0] = zmm2[0] * zmm5
        float zmm4 = var_d8_1.d - zmm6[0]
        zmm3[0] = zmm3[0] * zmm5
        zmm2[0] = zmm2[0] f+ var_e8_1:4.d
        zmm1[0] = zmm1[0] * zmm5
        zmm3[0] = zmm3[0] f+ var_e8_1.d
        zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
        zmm1[0] = zmm1[0] f+ var_e8_1:8.d
        zmm8 = zmm2
        zmm7 = zmm3
        zmm3 = var_d8_1:4.d
        zmm9 = zmm1
        zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm1 = var_d8_1:8.d
        zmm3[0] = zmm3[0] - zmm2[0]
        zmm1[0] = zmm1[0] - zmm0[0]
        zmm6[0] = zmm6[0] + zmm4 * zmm5
        zmm3[0] = zmm3[0] * zmm5
        zmm1[0] = zmm1[0] * zmm5
        zmm2[0] = zmm2[0] + zmm3[0]
        zmm0[0] = zmm0[0] + zmm1[0]
    else
        int32_t rax_11 = *(arg1 + 0xe0)
        int32_t rdx_3
        
        if (rax_11 s>= 0)
            rdx_3 = *(arg1 + 0xe4)
        else
            int32_t rcx_9 = rax_11 * 2
            
            if ((rcx_9 & 0xfffffffe) == 0xfffffffe)
                rdx_3 = -1
            else
                rdx_3 = *(*(r15 + 0x80) + (sx.q(rcx_9) s>> 1 << 2))
        
        int32_t rax_15 = *(arg1 + 0x100)
        int32_t rbx_1
        
        if (rax_15 s>= 0)
            rbx_1 = *(arg1 + 0x104)
        else
            int32_t rcx_12 = rax_15 * 2
            
            if ((rcx_12 & 0xfffffffe) == 0xfffffffe)
                rbx_1 = -1
            else
                rbx_1 = *(*(r15 + 0x80) + (sx.q(rcx_12) s>> 1 << 2))
        
        char* rcx_16 = *(arg2 + 0x20)
        r14 = arg2 + 8
        int64_t rdi_2 = sx.q(rdx_3)
        
        if (rcx_16[rdi_2] == 0)
            zmm10, zmm11 = sub_141a98300(r14, rdx_3)
            rcx_16 = *(r14 + 0x18)
        
        int64_t rdx_5 = *r14
        int64_t rdi_3 = sx.q(rbx_1)
        bool cond:2_1 = rcx_16[rdi_3] != 0
        zmm1 = *(rdx_5 + rdi_2 * 0x30 + 0x10)
        zmm7 = zmm1
        zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm9 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        
        if (not(cond:2_1))
            zmm7, zmm8, zmm9, zmm10, zmm11 = sub_141a98300(r14, rbx_1)
            rdx_5 = *r14
        
        result = rdi_3 * 6
        zmm1 = *(rdx_5 + (result << 3) + 0x10)
        zmm6 = zmm1
        zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)

zmm9[0] = zmm9[0] - zmm0[0]
zmm7[0] = zmm7[0] - zmm6[0]
zmm8[0] = zmm8[0] - zmm2[0]

if (_mm_and_ps(zmm7, 0x7fffffff)[0] > 9.99999975e-05f)
label_141aa06c9:
    void* rdi_6 = *(arg1 + 0x108)
    void* rbp_3 = (sx.q(*(arg1 + 0x110)) << 4) + rdi_6
    
    if (rdi_6 != rbp_3)
        int128_t var_78_1 = zmm10
        int128_t var_88_1 = zmm11
        
        do
            result = sub_141ea6180(rdi_6, r15)
            
            if (result.b != 0)
                int32_t rax_47 = *(rdi_6 + 8)
                int32_t rbx_3
                
                if (rax_47 s>= 0)
                    rbx_3 = *(rdi_6 + 0xc)
                else
                    int32_t rcx_36 = rax_47 * 2
                    
                    if ((rcx_36 & 0xfffffffe) == 0xfffffffe)
                        rbx_3 = -1
                    else
                        rbx_3 = *(*(r15 + 0x80) + (sx.q(rcx_36) s>> 1 << 2))
                
                int64_t rsi_3 = sx.q(rbx_3)
                
                if (*(rsi_3 + *(r14 + 0x18)) == 0)
                    zmm7, zmm8, zmm9 = sub_141a98300(r14, rbx_3)
                
                int64_t rax_52 = *r14
                int64_t rcx_41 = rsi_3 * 6
                int64_t rbx_4 = sx.q(arg3[1].d)
                float temp0_13[0x4] = _mm_unpacklo_ps(zmm7, zmm9[0].q)
                zmm10 = *(rax_52 + (rcx_41 << 3))
                zmm11 = *(rax_52 + (rcx_41 << 3) + 0x20)
                int32_t rax_53 = (rbx_4 + 1).d
                float temp0_16[0x4] = _mm_add_ps(*(rax_52 + (rcx_41 << 3) + 0x10), 
                    _mm_unpacklo_ps(temp0_13, _mm_unpacklo_ps(zmm8, 0)[0].q))
                arg3[1].d = rax_53
                
                if (rax_53 s> *(arg3 + 0xc))
                    sub_1405c4fe0(arg3)
                
                result = *arg3
                float (* rcx_44)[0x4] = rbx_4 << 6
                *(rcx_44 + result) = rbx_3.o
                *(rcx_44 + result + 0x10) = zmm10
                *(rcx_44 + result + 0x20) = temp0_16
                *(rcx_44 + result + 0x30) = zmm11
            
            rdi_6 += 0x10
        while (rdi_6 != rbp_3)
    
    int32_t rdx_14 = arg3[1].d
    
    if (rdx_14 s> 0)
        return sub_141a8a370(*arg3, rdx_14, arg4.b)
else
    if (_mm_and_ps(zmm8, 0x7fffffff)[0] > 9.99999975e-05f)
        goto label_141aa06c9
    
    if (not(_mm_and_ps(zmm9, 0x7fffffff)[0] <= 9.99999975e-05f))
        goto label_141aa06c9

return result
