// 函数: sub_140da3370
// 地址: 0x140da3370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
uint128_t i_10 = zx.o(arg3)
int32_t rax_4 = *(arg1 + 0x58) - *(arg1 + 0x84)
uint128_t zmm2 = _mm_shuffle_ps(i_10, i_10, 0x55)
int64_t* result = arg2
void* rbx = arg1
uint64_t i_7 = i_10.q
float i_9 = i_10.d f- *(arg1 + 0xa0)
zmm2.d = zmm2.d f- *(arg1 + 0xa4)

if (rax_4 s<= 0 || *(arg1 + 0x90) s<= 0)
    *result = 0
    result[1] = 0
else
    int32_t r8 = 0
    int32_t r9_2 = *(arg1 + 0x9c) - 1
    int32_t var_13c_1 = zmm2.d
    zmm2.d = zmm2.d f/ data_1439ae6a4
    void* var_90_1 = nullptr
    int32_t var_88_1 = 0
    int32_t var_84_1 = 9
    char var_134_1 = 0
    float i_6 = i_9
    i_9 = i_9 f/ data_1439ae6a0
    zmm2.d = zmm2.d f+ zmm2.d
    int32_t var_138_1 = 0
    zmm2.d = zmm2.d f- 0.5f
    int32_t rax_6 = int.d(zmm2.d) s>> 1
    
    if (rax_6 s>= 0)
        r8 = rax_6
    
    int32_t rdx_1 = *(rbx + 0x98) - 1
    int32_t rax_7 = 0
    int32_t rcx_1 = int.d(i_9 + i_9 - 0.5f) s>> 1
    
    if (rcx_1 s>= 0)
        rax_7 = rcx_1
    
    if (rax_7 s<= rdx_1)
        rdx_1 = rax_7
    
    int32_t var_148 = rdx_1
    
    if (r8 s<= r9_2)
        r9_2 = r8
    
    int32_t var_144_1 = r9_2
    int32_t* rax_8
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    int64_t zmm8
    rax_8, zmm6_1, zmm7_1, zmm8 = sub_140da76d0(rbx, &i_7, &var_148)
    int64_t rdi_1 = sx.q(var_88_1)
    int32_t rax_9 = (rdi_1 + 1).d
    int32_t var_88_2 = rax_9
    void var_d8
    
    if (rax_9 s> var_84_1)
        sub_140dbc900(&var_d8, rdi_1.d)
    
    void* rdx_4 = &var_d8
    
    if (var_90_1 != 0)
        rdx_4 = var_90_1
    
    *(rdx_4 + (rdi_1 << 3)) = *rax_8
    void* rax_12 = &var_d8
    void* rcx_4 = var_90_1
    
    if (rcx_4 != 0)
        rax_12 = rcx_4
    
    int64_t rdx_5 = sx.q(*rax_12)
    
    if (rdx_5.d == 0xffffffff)
    label_140da3bd0:
        
        if (rcx_4 == 0)
            *result = 0
            result[1] = 0
        else
            sub_140a74f90(rcx_4)
            *result = 0
            result[1] = 0
    else
        int64_t* rdx_7 = (rdx_5 << 6) + *(rbx + 0x50)
        int64_t* r14_2 = rdx_7[1]
        int64_t* var_128_1 = r14_2
        
        if (r14_2 == 0)
            goto label_140da3bd0
        
        int32_t rax_13 = r14_2[1].d
        
        if (rax_13 == 0)
            r14_2 = nullptr
            var_128_1 = nullptr
        else
            r14_2[1].d = rax_13 + 1
            rcx_4 = var_90_1
        
        if (r14_2 == 0)
            goto label_140da3bd0
        
        uint64_t i_3 = *rdx_7
        i_7 = i_3
        int32_t rdx_8
        
        if (i_3 != 0 && arg5 != 0xffffffff)
            rdx_8 = *(rdx_7 + 0x3c)
        
        if (i_3 == 0 || (arg5 != 0xffffffff && rdx_8 != 0xffffffff && arg5 != rdx_8))
            if (r14_2 == 0)
                goto label_140da3bd0
            
            r14_2[1].d -= 1
            
            if (r14_2[1].d == 1)
                (**r14_2)(r14_2)
                int32_t temp1_1 = *(r14_2 + 0xc)
                *(r14_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*r14_2 + 8))(r14_2, 1)
            
            rcx_4 = var_90_1
            goto label_140da3bd0
        
        float (* r12_1)[0x4] = nullptr
        int32_t r15_1 = 0
        float (* var_160)[0x4] = nullptr
        int64_t* rdi_2 = r14_2
        int64_t var_158_1 = 0
        uint64_t i = i_3
        
        if (r14_2 != 0)
            r14_2[1].d += 1
        
        float var_48_1[0x4] = zmm6_1
        float var_58_1[0x4] = zmm7_1
        float zmm2_1[0x4]
        
        if (i_3 != 0)
            int32_t r14_3 = var_158_1:4.d
            
            do
                int128_t* rax_16 = sub_140e15850(i)
                zmm6_1 = *(rbx + 0xa0)
                float zmm4_1[0x4] = *(rbx + 0xa4)
                zmm6_1[0] = zmm6_1[0] f- *(rbx + 0xa8)
                uint128_t zmm1_1 = zx.o(rax_16[3].q)
                uint64_t var_e0_1 = zmm1_1.q
                zmm2_1 = rax_16[2]
                float zmm5_1 = zmm6_1[0]
                zmm7_1 = rax_16[1]
                float zmm0_1[0x4] = *rax_16
                zmm4_1[0] = zmm4_1[0] f- *(rbx + 0xac)
                uint128_t var_100_1 = zmm7_1
                float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xff)
                zmm4_1[0] = zmm4_1[0] + zmm7_1[0]
                float temp0_2[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
                zmm5_1 = zmm5_1 + temp0_1[0]
                temp0_2[0] = zmm2_1[0]
                float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
                zmm4_1[0] = zmm4_1[0] f+ zmm1_1.d
                float temp0_4[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                zmm6_1[0] = zmm6_1[0] + temp0_4[0]
                zmm0_1[3] = zmm5_1
                float temp0_6[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                var_100_1.d = zmm4_1[0]
                temp0_3[0] = temp0_6[0]
                float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
                temp0_7[0] = zmm1_1.d
                float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
                zmm2_1[3].q = (_mm_unpacklo_ps(zmm6_1, zmm4_1[0].q)).q
                var_148.o = temp0_8
                var_100_1 = temp0_8
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                    
                    if (rdi_2[1].d == 0xffffffff)
                        (**rdi_2)(rdi_2)
                        int32_t temp8_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
                
                int64_t rbx_1 = sx.q(r15_1)
                r15_1 = (rbx_1 + 1).d
                var_158_1.d = r15_1
                
                if (r15_1 s> r14_3)
                    sub_1407755b0(&var_160)
                    r15_1 = var_158_1.d
                    r12_1 = var_160
                    r14_3 = var_158_1:4.d
                
                void* rcx_10 = rbx_1 * 0x58 + r12_1
                *rcx_10 = zmm0_1
                *(rcx_10 + 0x10) = var_100_1
                *(rcx_10 + 0x20) = zmm2_1
                *(rcx_10 + 0x30) = var_e0_1
                *(rcx_10 + 0x38) = i
                *(rcx_10 + 0x40) = rdi_2
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                *(rcx_10 + 0x48) = 0
                *(rcx_10 + 0x50) = 0
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp13_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
                
                int64_t* rbx_2 = *(i + 0x38)
                uint64_t* rcx_13 = i + 0x30
                i = 0
                
                if (rbx_2 != 0)
                    int32_t rax_21 = rbx_2[1].d
                    
                    if (rax_21 == 0)
                        rbx_2 = nullptr
                    else
                        rbx_2[1].d = rax_21 + 1
                        
                        if (rbx_2 != 0)
                            i = *rcx_13
                
                int64_t* rsi = rdi_2
                
                if (rbx_2 != rdi_2)
                    rdi_2 = rbx_2
                    
                    if (rsi != 0)
                        rsi[1].d -= 1
                        
                        if (rsi[1].d == 1)
                            (**rsi)(rsi)
                            int32_t temp20_1 = *(rsi + 0xc)
                            *(rsi + 0xc) -= 1
                            
                            if (temp20_1 == 1)
                                (*(*rsi + 8))(rsi, 1)
                else if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp19_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp19_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rbx = arg1
            while (i != 0)
            
            r14_2 = var_128_1
            result = arg2
        
        int32_t rbx_3 = r15_1 - 1
        int64_t* rcx_18 = *(sx.q(rbx_3) * 0x58 + r12_1 + 0x38)
        
        if ((*(*rcx_18 + 0x208))(rcx_18) != 0)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r15_1)
            int32_t i_8 = (temp3_1 - temp2_1) s>> 1
            
            if (i_8 s> 0)
                float (* rdx_11)[0x4] = r12_1
                uint64_t i_4 = zx.q(i_8)
                uint64_t i_1
                
                do
                    float (* rcx_26)[0x4] = sx.q(rbx_3) * 0x58 + r12_1
                    
                    if (rdx_11 != rcx_26)
                        float zmm3[0x4] = *rdx_11
                        int128_t zmm4_2 = rdx_11[1]
                        int128_t zmm5_2 = rdx_11[2]
                        zmm6_1 = rdx_11[3]
                        zmm7_1 = rdx_11[4]
                        zmm2_1 = zx.o(rdx_11[5][0].q)
                        *rdx_11 = *rcx_26
                        rdx_11[1] = rcx_26[1]
                        rdx_11[2] = rcx_26[2]
                        rdx_11[3] = rcx_26[3]
                        rdx_11[4] = rcx_26[4]
                        rdx_11[5][0].q = rcx_26[5][0].q
                        *rcx_26 = zmm3
                        rcx_26[1] = zmm4_2
                        rcx_26[2] = zmm5_2
                        rcx_26[3] = zmm6_1
                        rcx_26[4] = zmm7_1
                        rcx_26[5][0].q = zmm2_1.q
                    
                    rdx_11 = &(*rdx_11)[0x16]
                    rbx_3 -= 1
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            if (arg4 == 0)
                float (* rsi_1)[0x4] = r12_1
                void* r13_2 = sx.q(r15_1) * 0x58 + r12_1
                
                if (r12_1 != r13_2)
                    do
                        char* rbx_5 = *(rsi_1 + 0x38) i+ 0x190
                        
                        if (*(rbx_5 + 0x10) != 0)
                            int64_t* rcx_27 = *(rbx_5 + 8)
                            
                            if (rcx_27 != 0 && (*(*rcx_27 + 0x28))(rcx_27) != 0)
                                int64_t* rcx_28
                                
                                if (*(rbx_5 + 0x10) == 0)
                                    rcx_28 = nullptr
                                else
                                    rcx_28 = *(rbx_5 + 8)
                                
                                *rbx_5 = (*(*rcx_28 + 0x48))(rcx_28)
                        
                        if (*rbx_5 == 0)
                            int32_t rdx_14 = ((rsi_1 - r12_1) s/ 0x58).d
                            
                            if (rdx_14 == 0xffffffff)
                                goto label_140da3948
                            
                            sub_140dbac50(&var_160, rdx_14, r15_1 - rdx_14, 1)
                            r15_1 = var_158_1.d
                            r12_1 = var_160
                            goto label_140da39cc_2
                        
                        rsi_1 = &(*rsi_1)[0x16]
                    while (rsi_1 != r13_2)
            
        label_140da3948:
            int32_t rsi_4
            
            if (r15_1 s<= 0 || rdx_7[2] == 0)
            label_140da39cc:
                rsi_4 = var_158_1:4.d
            else
                int64_t* rsi_2 = rdx_7[3]
                
                if (rsi_2 == 0)
                label_140da39cc_1:
                    rsi_4 = var_158_1:4.d
                else
                    int32_t rax_42 = rsi_2[1].d
                    
                    if (rax_42 s<= 0)
                    label_140da39cc_2:
                        rsi_4 = var_158_1:4.d
                    else
                        if (rsi_2 != 0)
                            if (rax_42 != 0)
                                rsi_2[1].d = rax_42 + 1
                                rax_42.b = 1
                            
                            if (rax_42.b == 0)
                                rsi_2 = nullptr
                        
                        int64_t* r13_3 = nullptr
                        
                        if (rsi_2 != 0)
                            r13_3 = rdx_7[2]
                        
                        (*(*r13_3 + 8))(r13_3, &var_148, sub_140e12190(i_7), zmm8, arg4)
                        
                        if (rsi_2 != 0)
                            rsi_2[1].d -= 1
                            
                            if (rsi_2[1].d == 1)
                                (**rsi_2)(rsi_2)
                                int32_t temp22_1 = *(rsi_2 + 0xc)
                                *(rsi_2 + 0xc) -= 1
                                
                                if (temp22_1 == 1)
                                    (*(*rsi_2 + 8))(rsi_2, 1)
                        
                        rsi_4 = var_158_1:4.d
                        
                        if (i_6 != 0)
                            int32_t rdx_16 = r15_1 i+ i_6
                            
                            if (rdx_16 s> rsi_4)
                                sub_140775cf0(&var_160, rdx_16)
                                r15_1 = var_158_1.d
                                r12_1 = var_160
                                rsi_4 = var_158_1:4.d
                            
                            float i_5 = i_6
                            void* rdx_18 = sx.q(r15_1) * 0x58 + r12_1
                            void* rcx_43 = var_148.q + 0x50
                            void* r8_5 = rdx_18 + 0x50
                            float i_2
                            
                            do
                                *rdx_18 = *(rcx_43 - 0x50)
                                *(rdx_18 + 0x10) = *(rcx_43 - 0x40)
                                *(rdx_18 + 0x20) = *(rcx_43 - 0x30)
                                *(rdx_18 + 0x30) = *(rcx_43 - 0x20)
                                *(r8_5 - 0x18) = *(rcx_43 - 0x18)
                                void* rax_56 = *(rcx_43 - 0x10)
                                *(r8_5 - 0x10) = rax_56
                                
                                if (rax_56 != 0)
                                    *(rax_56 + 8) += 1
                                
                                *(r8_5 - 8) = *(rcx_43 - 8)
                                void* rax_58 = *rcx_43
                                *r8_5 = rax_58
                                
                                if (rax_58 != 0)
                                    *(rax_58 + 8) += 1
                                
                                rdx_18 += 0x58
                                r8_5 += 0x58
                                rcx_43 += 0x58
                                i_2 = i_5
                                i_5 -= 1
                            while (i_2 != 1)
                            r15_1 += i_6
                        
                        sub_140d94ad0(&var_148)
            
            var_160 = nullptr
            int64_t var_158_2 = 0
            *arg2 = r12_1
            arg2[1].d = r15_1
            *(arg2 + 0xc) = rsi_4
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp15_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            sub_140d94ad0(&var_160)
            
            if (r14_2 != 0)
                r14_2[1].d -= 1
                
                if (r14_2[1].d == 1)
                    (**r14_2)(r14_2)
                    int32_t temp16_1 = *(r14_2 + 0xc)
                    *(r14_2 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        int64_t r8_3 = *r14_2
                        (*(r8_3 + 8))(r14_2, 1, r8_3)
            
            if (var_90_1 != 0)
                sub_140a74f90(var_90_1)
            
            result = arg2
        else
            *result = 0
            result[1] = 0
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp7_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            sub_140d94ad0(&var_160)
            
            if (r14_2 != 0)
                r14_2[1].d -= 1
                
                if (r14_2[1].d == 1)
                    (**r14_2)(r14_2)
                    int32_t temp10_1 = *(r14_2 + 0xc)
                    *(r14_2 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*r14_2 + 8))(r14_2, 1)
            
            if (var_90_1 != 0)
                sub_140a74f90(var_90_1)

__security_check_cookie(rax_1 ^ &var_198)
return result
