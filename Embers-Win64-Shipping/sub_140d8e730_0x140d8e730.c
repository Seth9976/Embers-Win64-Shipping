// 函数: sub_140d8e730
// 地址: 0x140d8e730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = arg3[3]
zmm4[0] = zmm4[0] f- arg3[1]
uint128_t zmm5
zmm5.d = arg3[2].d f- *arg3
int32_t r10 = *(arg1 + 0x9c)
float zmm2[0x4] = 0x3f800000
int128_t* r11 = arg4
float zmm3[0x4] = 0x3f800000
zmm3[0] = 1f f/ data_1439ae6a4
int32_t r13 = 0
int32_t rdi_1 = r10 - 1
int32_t r14 = rdi_1
uint128_t zmm6
uint128_t var_48 = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
zmm2[0] = 1f f/ data_1439ae6a0
int32_t rdx_1 = *(arg1 + 0x98)
int32_t var_198 = 0
float zmm14[0x4] = *arg3
zmm4[0] = zmm4[0] * 0.5f
int32_t var_164 = zmm5.d
zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
float var_198_1 = zmm4[0]
zmm4[0] = zmm4[0] f+ arg3[1]
int32_t r8 = 0
zmm4[0] = zmm4[0] * zmm3[0]
zmm4[0] = zmm4[0] + zmm4[0]
zmm4[0] = zmm4[0] - 0.5f
float zmm1[0x4] = zmm5
int32_t rax_2 = int.d(zmm4[0]) s>> 1
zmm1[0] = zmm1[0] * 0.5f

if (rax_2 s>= 0)
    r8 = rax_2

int32_t rax_3 = 0
zmm1[0] = zmm1[0] f+ *arg3
zmm1[0] = zmm1[0] * zmm2[0]
zmm1[0] = zmm1[0] + zmm1[0]
zmm1[0] = zmm1[0] - 0.5f
int32_t rcx_1 = int.d(zmm1[0]) s>> 1

if (rcx_1 s>= 0)
    rax_3 = rcx_1

int32_t rcx_2 = rdx_1 - 1

if (rax_3 s<= rdx_1 - 1)
    rcx_2 = rax_3

int32_t rax_4 = rcx_2
int32_t var_1c8 = rcx_2

if (r8 s<= rdi_1)
    r14 = r8

int32_t var_1c0 = rcx_2
int32_t var_1bc = r14

if (arg5 != 0)
    rax_4 = r14

int64_t* result

if (rdx_1 s< 1 || r10 s< 1)
    *arg2 = 0
    result = arg2
    arg2[1] = 0
else
    int32_t rdx_2 = arg5
    int32_t rcx_3 = 0
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    int32_t var_1a0_1
    int32_t var_19c_1
    int64_t var_160_1
    
    if (rdx_2 != 0)
        var_160_1 = 0
        zmm2[0] = zmm2[0] f* *r11
        int32_t r10_1 = rdx_1 - 1
        int32_t r8_1 = rdx_1 - 1
        zmm2[0] = zmm2[0] f* *(r11 + 8)
        zmm2[0] = zmm2[0] + zmm2[0]
        zmm2[0] = zmm2[0] + zmm2[0]
        zmm2[0] = zmm2[0] - 0.5f
        zmm2[0] = zmm2[0] - 0.5f
        int32_t rax_11 = int.d(zmm2[0]) s>> 1
        
        if (rax_11 s>= 0)
            rcx_3 = rax_11
        
        if (rcx_3 s<= rdx_1 - 1)
            r10_1 = rcx_3
        
        int32_t rcx_5 = 0
        var_1a0_1 = r10_1
        int32_t rax_13 = int.d(zmm2[0]) s>> 1
        
        if (rax_13 s>= 0)
            rcx_5 = rax_13
        
        if (rcx_5 s<= rdx_1 - 1)
            r8_1 = rcx_5
        
        var_19c_1 = r8_1
    else
        var_160_1 = 1
        zmm3[0] = zmm3[0] f* *(r11 + 4)
        zmm3[0] = zmm3[0] f* *(r11 + 0xc)
        zmm3[0] = zmm3[0] + zmm3[0]
        zmm3[0] = zmm3[0] + zmm3[0]
        zmm3[0] = zmm3[0] - 0.5f
        zmm3[0] = zmm3[0] - 0.5f
        int32_t rax_6 = int.d(zmm3[0]) s>> 1
        
        if (rax_6 s>= 0)
            rcx_3 = rax_6
        
        int32_t rax_7 = rdi_1
        
        if (rcx_3 s<= rdi_1)
            rax_7 = rcx_3
        
        int32_t rcx_4 = 0
        var_1a0_1 = rax_7
        int32_t rax_9 = int.d(zmm3[0]) s>> 1
        
        if (rax_9 s>= 0)
            rcx_4 = rax_9
        
        if (rcx_4 s<= rdi_1)
            rdi_1 = rcx_4
        
        var_19c_1 = rdi_1
    
    int64_t* var_180
    int64_t* rsi_1 = var_180
    int64_t* r15_1 = var_180
    char var_1d8_1 = 0
label_140d8e9a1:
    int32_t r10_2 = var_1c8
    int32_t r8_2 = arg9
    
    while (true)
        int32_t rax_14 = r14
        
        if (rdx_2 == 0)
            rax_14 = r10_2
        
        if (rax_14 s< 0)
        label_140d8f01b:
            *arg2 = 0
            arg2[1] = 0
            result = arg2
            break
        
        void* r9_1 = arg1
        int32_t* rdi_2 = 0x98
        int32_t rax_15 = r10_2
        
        if (rdx_2 != 0)
            rdi_2 = 0x9c
        
        if (rdx_2 != 0)
            rax_15 = r14
        
        if (rax_15 s>= *(rdi_2 + r9_1))
            goto label_140d8f01b
        
        int64_t var_178 = var_1c0.q
        int32_t rax_17
        int32_t* rcx_6
        
        if (rdx_2 != 0)
            var_1c8 = r14
            rcx_6 = &var_1bc
            rax_17 = r14
        else
            rcx_6 = &var_1c0
            rax_17 = r10_2
        
        int32_t* r10_3 = &var_178:4
        int64_t rdi_3 = var_160_1
        zmm11 = zx.o(0)
        zmm12 = 0xbf800000
        *rcx_6 = rax_17 + arg6
        
        if (rdi_3 == 0)
            r10_3 = &var_178
        
        float var_1b0_1[0x4] = zmm11
        *r10_3 = var_1a0_1
        float zmm0[0x4]
        
        while (true)
            int32_t rdx_3 = var_178:4.d
            int32_t rax_20 = var_178.d
            int32_t rcx_7 = rdx_3
            
            if (rdi_3 == 0)
                rcx_7 = rax_20
            
            if (rcx_7 s> var_19c_1)
                break
            
            int64_t r10_4 = *(r9_1 + 0x88)
            int64_t var_148_1 = r10_4
            int64_t rdx_5 = sx.q(rax_20 + rdx_3 * *(r9_1 + 0x98)) * 3
            int32_t rax_23 = *(r10_4 + (rdx_5 << 3) + 0x10)
            int64_t var_150_1 = rdx_5
            int64_t rcx_8 = sx.q(rax_23 - 1)
            int64_t var_1d0_1 = rcx_8
            
            if (rax_23 - 1 s>= 0)
                int64_t temp2_1
                
                do
                    int64_t* r12_3 =
                        (sx.q(*(*(r10_4 + (rdx_5 << 3) + 8) + (rcx_8 << 2))) << 6) + *(r9_1 + 0x50)
                    int64_t* rdi_4 = r12_3[1]
                    
                    if (rdi_4 != 0)
                        int32_t rax_26 = rdi_4[1].d
                        
                        if (rax_26 != 0)
                            rdi_4[1].d = rax_26 + 1
                            
                            if (rdi_4 != 0)
                                int64_t* r14_1 = *r12_3
                                
                                if (r14_1 == 0)
                                    goto label_140d8eda8
                                
                                int32_t rax_28
                                
                                if (r8_2 != 0xffffffff)
                                    rax_28 = *(r12_3 + 0x3c)
                                
                                if (r8_2 != 0xffffffff && rax_28 != 0xffffffff && r8_2 != rax_28)
                                    goto label_140d8eda8
                                
                                int128_t* rax_29 = sub_140e15850(r14_1)
                                zmm7 = rax_29[2]
                                zmm2 = *rax_29
                                zmm5.d = rax_29[3].q.d f- *(arg1 + 0xac)
                                float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                                float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                zmm2[0] = zmm2[0] f* *(rax_29 + 0x1c)
                                temp0_3[0] = temp0_3[0] * temp0_2[0]
                                float temp0_4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                                zmm2[0] = zmm2[0] * zmm7[0]
                                zmm1 = zmm5
                                temp0_3[0] = temp0_3[0] * temp0_4[0]
                                float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                                zmm6.d = zmm5.d f+ zmm2[0]
                                temp0_5[0] = temp0_5[0] f- *(arg1 + 0xa8)
                                zmm1[0] = zmm1[0] + temp0_3[0]
                                temp0_3[0] = temp0_3[0] f+ zmm6.d
                                zmm2[0] = zmm2[0] + temp0_5[0]
                                temp0_3[0] = temp0_3[0] + temp0_5[0]
                                temp0_3[0] = temp0_3[0] + zmm2[0]
                                float temp0_8[0x4] = _mm_min_ss(
                                    _mm_min_ss(_mm_min_ss(temp0_3[0], zmm2[0])[0], temp0_3[0])[0], 
                                    temp0_5[0])
                                temp0_8[0] = temp0_8[0] + 0.100000001f
                                
                                if (temp0_8[0] <= zmm14[0])
                                label_140d8eda3:
                                    rcx_8 = var_1d0_1
                                label_140d8eda8:
                                    rdi_4[1].d -= 1
                                    
                                    if (rdi_4[1].d == 1)
                                    label_140d8edb4:
                                        (**rdi_4)(rdi_4)
                                        int32_t temp9_1 = *(rdi_4 + 0xc)
                                        *(rdi_4 + 0xc) -= 1
                                        
                                        if (temp9_1 == 1)
                                            (*(*rdi_4 + 8))(rdi_4, 1)
                                        
                                        rcx_8 = var_1d0_1
                                else
                                    if (_mm_max_ss(
                                            _mm_max_ss(_mm_max_ss(temp0_3[0], zmm2[0])[0], 
                                                temp0_3[0])[0], 
                                            temp0_5[0])[0] f< *arg4 || temp0_8[0] f> *(arg4 + 8))
                                        goto label_140d8eda3
                                    
                                    if (_mm_max_ss(
                                            _mm_max_ss(_mm_max_ss(zmm1[0], zmm6.d)[0], temp0_3[0])[
                                                0], 
                                            zmm5.d)[0] f< *(arg4 + 4))
                                        goto label_140d8eda3
                                    
                                    if (_mm_min_ss(
                                            _mm_min_ss(_mm_min_ss(zmm1[0], zmm6.d)[0], temp0_3[0])[
                                                0], 
                                            zmm5.d)[0] f> *(arg4 + 0xc))
                                        goto label_140d8eda3
                                    
                                    if (var_1b0_1[0].q == 0)
                                    label_140d8ec29:
                                        
                                        if (arg8[6].b == 0)
                                            r12_3.b = 0
                                        else
                                            r15_1 = arg8[1]
                                            r13 |= 1
                                            
                                            if (r15_1 != 0)
                                                r15_1[1].d += 1
                                            
                                            if (*arg8 == 0)
                                                r12_3.b = 0
                                            else
                                                rsi_1 = arg8[1]
                                                r13 |= 2
                                                
                                                if (rsi_1 != 0)
                                                    rsi_1[1].d += 1
                                                
                                                int64_t var_120 = *arg8
                                                int64_t* var_118_1 = rsi_1
                                                
                                                if (rsi_1 != 0)
                                                    rsi_1[1].d += 1
                                                
                                                if (sub_140db2f50(arg1, &var_120, r12_3) != 0)
                                                    r12_3.b = 0
                                                else
                                                    r12_3.b = 1
                                        
                                        if ((r13.b & 2) != 0)
                                            r13 &= 0xfffffffd
                                            
                                            if (rsi_1 != 0)
                                                rsi_1[1].d -= 1
                                                
                                                if (rsi_1[1].d == 1)
                                                    (**rsi_1)(rsi_1)
                                                    int32_t temp16_1 = *(rsi_1 + 0xc)
                                                    *(rsi_1 + 0xc) -= 1
                                                    
                                                    if (temp16_1 == 1)
                                                        (*(*rsi_1 + 8))(rsi_1, 1)
                                        
                                        if ((r13.b & 1) != 0)
                                            r13 &= 0xfffffffe
                                            
                                            if (r15_1 != 0)
                                                r15_1[1].d -= 1
                                                
                                                if (r15_1[1].d == 1)
                                                    (**r15_1)(r15_1)
                                                    int32_t temp17_1 = *(r15_1 + 0xc)
                                                    *(r15_1 + 0xc) -= 1
                                                    
                                                    if (temp17_1 == 1)
                                                        (*(*r15_1 + 8))(r15_1, 1)
                                        
                                        if (r12_3.b == 0)
                                            if (r14_1[0x34].d != 0)
                                                int64_t* rcx_15 = r14_1[0x33]
                                                
                                                if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
                                                    int64_t* rcx_16
                                                    
                                                    if (r14_1[0x34].d == 0)
                                                        rcx_16 = nullptr
                                                    else
                                                        rcx_16 = r14_1[0x33]
                                                    
                                                    r14_1[0x32].b = (*(*rcx_16 + 0x48))(rcx_16)
                                            
                                            if (r14_1[0x32].b != 0
                                                    && (*(*r14_1 + 0x198))(r14_1) != 0)
                                                rdi_4[1].d += 1
                                                zmm12 = temp0_8
                                                int64_t* var_128_1 = rdi_4
                                                zmm0 = r14_1.o
                                                int64_t* var_130_1
                                                var_130_1.o = zmm11
                                                zmm1 = _mm_bsrli_si128(zmm11, 8)
                                                zmm11 = zmm0
                                                int64_t* r14_2 = zmm1[0].q
                                                var_1b0_1 = zmm0
                                                
                                                if (r14_2 != 0)
                                                    r14_2[1].d -= 1
                                                    
                                                    if (r14_2[1].d == 1)
                                                        (**r14_2)(r14_2)
                                                        int32_t temp19_1 = *(r14_2 + 0xc)
                                                        *(r14_2 + 0xc) -= 1
                                                        
                                                        if (temp19_1 == 1)
                                                            (*(*r14_2 + 8))(r14_2, 1)
                                            
                                            goto label_140d8eda3
                                    else
                                        zmm12[0] = zmm12[0] + 0.100000001f
                                        
                                        if (zmm12[0] > temp0_8[0])
                                            goto label_140d8ec29
                                    
                                    rdi_4[1].d -= 1
                                    
                                    if (rdi_4[1].d == 1)
                                        goto label_140d8edb4
                                    
                                    rcx_8 = var_1d0_1
                    
                    r9_1 = arg1
                    temp2_1 = rcx_8
                    rcx_8 -= 1
                    r8_2 = arg9
                    rdx_5 = var_150_1
                    r10_4 = var_148_1
                    var_1d0_1 = rcx_8
                while (temp2_1 - 1 s>= 0)
                r11 = arg4
                rdi_3 = var_160_1
            
            *r10_3 += 1
        
        int64_t* rdi_5
        
        if (var_1b0_1[0].q != 0)
            zmm12[0] = zmm12[0] + 0.100000001f
            
            if (not(zmm12[0] f<= *(r11 + 8)))
                rdi_5 = arg8
                char rax_61 = rdi_5[6].b
                
                if (rax_61 == 1)
                    *arg2 = rdi_5[2]
                    void* rax_68 = rdi_5[3]
                    arg2[1] = rax_68
                    
                    if (rax_68 != 0)
                        *(rax_68 + 8) += 1
                    
                    int64_t* rbx_5 = var_1b0_1[2].q
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            int64_t rdx_9 = *rbx_5
                            (*rdx_9)(rbx_5, rdx_9)
                            int32_t temp6_1 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                int64_t r8_5 = *rbx_5
                                (*(r8_5 + 8))(rbx_5, 1, r8_5)
                    
                    result = arg2
                    break
                    break
                
                if (rax_61 != 2)
                    int64_t* result_1
                    
                    if (rax_61 == 3)
                    label_140d8f10d:
                        result_1 = arg2
                        *result_1 = 0
                        result_1[1] = 0
                    label_140d8f11b:
                        int64_t* rbx_4 = var_1b0_1[2].q
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t temp10_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp10_1 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)
                        
                        result = result_1
                        break
                        break
                    
                    if (rax_61 - 4 u<= 1)
                        if (rdi_5[5].d == 0)
                            goto label_140d8f10d
                        
                        int64_t* rcx_31 = rdi_5[4]
                        
                        if (rcx_31 == 0)
                            goto label_140d8f10d
                        
                        if ((*(*rcx_31 + 0x28))(rcx_31) == 0)
                            goto label_140d8f10d
                        
                    label_140d8f0e8:
                        int64_t* r12_5
                        
                        if (rdi_5[5].d == 0)
                            r12_5 = nullptr
                        else
                            r12_5 = rdi_5[4]
                        
                        result_1 = arg2
                        (*(*r12_5 + 0x48))(r12_5, result_1, zx.q(arg7))
                        goto label_140d8f11b
            
            *arg2 = var_1b0_1[0].q
            arg2[1] = var_1b0_1[2].q
            result = arg2
            break
        
        if (var_1d8_1 != 0 && rax_4 == var_1c8)
        label_140d8efec:
            int64_t* rbx_3 = var_1b0_1[2].q
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp5_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            goto label_140d8f01b
        
        r10_2 = var_1c0
        rdx_2 = arg5
        r14 = var_1bc
        int32_t rax_48 = r14
        
        if (rdx_2 == 0)
            rax_48 = r10_2
        
        var_1c8 = r10_2
        int32_t rax_49
        
        if (rax_48 s>= 0)
            rax_49 = r10_2
            
            if (rdx_2 != 0)
                rax_49 = r14
        
        if (rax_48 s>= 0 && rax_49 s< *(rdi_2 + r9_1))
            goto label_140d8ef83
        
        rdi_5 = arg8
        char rax_50 = rdi_5[6].b
        
        if (rax_50 == 2)
            if (var_1d8_1 != 0)
                goto label_140d8efec
            
            zmm1 = *r11
            int32_t r14_3 = *(r9_1 + 0x9c)
            zmm0 = var_164
            float var_18c
            float* rax_51 = &var_18c
            int32_t r10_5 = *(r9_1 + 0x98)
            zmm14 = zmm1
            zmm0[0] = zmm0[0] * 0.5f
            float var_190
            
            if (rdx_2 == 0)
                rax_51 = &var_190
            
            var_1d8_1 = 1
            r14 = r14_3 - 1
            int32_t rdx_7 = 0
            zmm0[0] = zmm0[0] f+ *arg3
            var_190 = zmm0[0]
            zmm0 = var_198_1
            zmm0[0] = zmm0[0] f+ arg3[1]
            var_18c = zmm0[0]
            *rax_51 = zmm1[0]
            zmm1 = var_18c
            zmm1[0] = zmm1[0] f/ data_1439ae6a4
            zmm1[0] = zmm1[0] + zmm1[0]
            zmm1[0] = zmm1[0] - 0.5f
            int32_t rax_52 = int.d(zmm1[0])
            zmm1 = var_190
            zmm1[0] = zmm1[0] f/ data_1439ae6a0
            int32_t rax_53 = rax_52 s>> 1
            
            if (rax_53 s>= 0)
                rdx_7 = rax_53
            
            r10_2 = r10_5 - 1
            int32_t rax_54 = 0
            zmm1[0] = zmm1[0] + zmm1[0]
            zmm1[0] = zmm1[0] - 0.5f
            int32_t rcx_25 = int.d(zmm1[0]) s>> 1
            
            if (rcx_25 s>= 0)
                rax_54 = rcx_25
            
            if (rax_54 s<= r10_2)
                r10_2 = rax_54
            
            var_1c8 = r10_2
            
            if (rdx_7 s<= r14)
                r14 = rdx_7
            
            var_1c0 = r10_2
            rdx_2 = arg5
            var_1bc = r14
            goto label_140d8ef83
        
        if (rax_50 != 5 || rdi_5[5].d == 0)
            goto label_140d8ef83
        
        int64_t* rcx_26 = rdi_5[4]
        
        if (rcx_26 == 0)
            goto label_140d8ef83
        
        if ((*(*rcx_26 + 0x28))(rcx_26) != 0)
            goto label_140d8f0e8
        
        r11 = arg4
        r8_2 = arg9
        r10_2 = var_1c8
        rdx_2 = arg5
    label_140d8ef83:
        int64_t* rdi_6 = var_1b0_1[2].q
        
        if (rdi_6 != 0)
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                (**rdi_6)(rdi_6)
                int32_t temp12_1 = *(rdi_6 + 0xc)
                *(rdi_6 + 0xc) -= 1
                r11 = arg4
                r8_2 = arg9
                r10_2 = var_1c8
                rdx_2 = arg5
                
                if (temp12_1 == 1)
                    (*(*rdi_6 + 8))(rdi_6, 1, r8_2)
                    r11 = arg4
                    rdx_2 = arg5
                    goto label_140d8e9a1

return result
