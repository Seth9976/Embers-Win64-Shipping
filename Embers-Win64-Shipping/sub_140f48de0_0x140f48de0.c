// 函数: sub_140f48de0
// 地址: 0x140f48de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg7
void* r14 = arg1
int32_t rax_1 = (**r13)(r13)
int32_t* var_b8 = nullptr
int32_t i_6 = 0
arg7.d = 0
int32_t r12 = 0
int32_t var_ac = 0
uint64_t result
int32_t* rcx_3
int64_t r10_1

if (arg4 != 0)
    result = zx.q(arg4 - 1)
    
    if (result.d u<= 1)
        int32_t r15_2 = arg5 + 1
        int64_t rdi_1 = sx.q(r15_2)
        int32_t result_1
        result_1, r10_1 = (**r13)(r13)
        result = sx.q(result_1)
        
        if (rdi_1 s< result)
            uint64_t result_2 = result
            
            do
                char* rbx_3 = *(*(r13[2] + (rdi_1 << 3)) + 0x10) + 0x1a8
                
                if (*(rbx_3 + 0x10) != 0)
                    int64_t* rcx_6 = *(rbx_3 + 8)
                    
                    if (rcx_6 != 0)
                        char rax_5
                        rax_5, r10_1 = (*(*rcx_6 + 0x28))(rcx_6)
                        
                        if (rax_5 != 0)
                            int64_t* rcx_7
                            
                            if (*(rbx_3 + 0x10) == 0)
                                rcx_7 = nullptr
                            else
                                rcx_7 = *(rbx_3 + 8)
                            
                            r10_1 = (*(*rcx_7 + 0x48))(rcx_7, &arg7)
                            *rbx_3 = arg7.b
                
                result = zx.q(*rbx_3)
                
                if (result.b == data_1439ae51d)
                    rcx_3 = var_b8
                else
                    result = r13[2]
                    void* rbx_4 = *(result + (rdi_1 << 3))
                    
                    if (*(rbx_4 + 0x30) != 0)
                        int64_t* rcx_8 = *(rbx_4 + 0x28)
                        
                        if (rcx_8 != 0)
                            result, r10_1 = (*(*rcx_8 + 0x28))(rcx_8)
                            
                            if (result.b != 0)
                                int64_t* rcx_9
                                
                                if (*(rbx_4 + 0x30) == 0)
                                    rcx_9 = nullptr
                                else
                                    rcx_9 = *(rbx_4 + 0x28)
                                
                                result, r10_1 = (*(*rcx_9 + 0x48))(rcx_9)
                                *(rbx_4 + 0x20) = result.d
                    
                    if (*(rbx_4 + 0x20) == 0)
                        rcx_3 = var_b8
                    else
                        int64_t i_8 = sx.q(i_6)
                        i_6 = (i_8 + 1).d
                        
                        if (i_6 s> r12)
                            result, r10_1 = sub_1405a4cf0(&var_b8)
                            r12 = var_ac
                        
                        rcx_3 = var_b8
                        rcx_3[i_8] = r15_2
                
                r15_2 += 1
                rdi_1 += 1
            while (rdi_1 s< result_2)
            
            r14 = arg1
            goto label_140f48f74
else
    result = sub_140f45640(arg5, r13)
    int32_t rbx_1 = result.d
    
    if (result.d s< rax_1)
        int32_t i_7 = 1
        result, r10_1 = sub_1405a4cf0(&var_b8)
        rcx_3 = var_b8
        i_6 = i_7
        *rcx_3 = rbx_1
    label_140f48f74:
        arg7.d = i_6
        
        if (i_6 s> 0)
            void** r12_1 = nullptr
            int32_t r8 = 0
            int32_t r9 = 0
            void** var_a8 = nullptr
            int32_t var_9c_1 = 0
            int64_t i_3 = sx.q(i_6)
            void* var_90
            float var_88
            float zmm0[0x4]
            uint128_t zmm1
            
            if (i_6 s> 0)
                int64_t r15_3 = 0
                uint64_t r10_3 = zx.q((sbb.q(r10_1, r10_1, arg2 != 0)).d) & 4
                uint64_t var_c0_1 = r10_3
                
                do
                    int64_t rdx_4 = sx.q(rcx_3[r15_3])
                    int64_t rcx_11 = *(r13[2] + (rdx_4 << 3))
                    int64_t rax_13 = *arg8
                    int64_t rcx_12 = rdx_4 * 5
                    zmm1 = *(rax_13 + (rcx_12 << 2))
                    void* rdx_5 = rax_13 + (rcx_12 << 2)
                    zmm0 = zmm1
                    var_90 = rdx_5
                    zmm0[0] = zmm0[0] f* *(rdx_5 + 0xc)
                    zmm1.d = zmm1.d f* *(rdx_5 + 0x10)
                    int64_t var_c8 = (_mm_unpacklo_ps(zmm0, zmm1.q)).q
                    zmm1 = *(&var_c8 + r10_3)
                    zmm0 = *(r14 + 0x300)
                    
                    if (zmm0[0] f< zmm1.d)
                        var_88 = zmm1.d
                    else
                        var_88 = zmm0[0]
                    
                    int64_t rbx_5 = sx.q(r8)
                    r8 = (rbx_5 + 1).d
                    
                    if (r8 s> r9)
                        sub_140ac0d60(&var_a8)
                        r9 = var_9c_1
                        r10_3 = var_c0_1
                        r12_1 = var_a8
                    
                    int64_t rdx_7 = rbx_5 * 3
                    rcx_3 = var_b8
                    r15_3 += 1
                    *(r12_1 + (rdx_7 << 3)) = rcx_11.o
                    r12_1[rdx_7 + 2] = var_88.q
                while (r15_3 s< i_3)
                
                i_6 = arg7.d
            
            int32_t arg_10 = neg.d(arg2)
            int32_t r8_1 = 0
            int64_t rcx_15 = sx.q(sub_140f45740(arg5, r13))
            int64_t rdx_9 = rcx_15 * 5
            void* r13_1 = *(r13[2] + (rcx_15 << 3))
            int64_t rax_17 = *arg8
            zmm1 = *(rax_17 + (rdx_9 << 2))
            zmm0 = zmm1
            zmm1.d = zmm1.d f* *(rax_17 + (rdx_9 << 2) + 0x10)
            zmm0[0] = zmm0[0] f* *(rax_17 + (rdx_9 << 2) + 0xc)
            zmm0 = _mm_unpacklo_ps(zmm0, zmm1.q)
            arg7 = zmm0.q
            uint128_t zmm6 = *(&arg7 + (zx.q((sbb.q(rax_17, rax_17, arg2 != 0)).d) & 4))
            uint128_t zmm9
            zmm9.d = zmm6.d f+ arg6
            zmm9.d = __maxss_xmmss_memss(zmm9.d, *(r14 + 0x300)).d f- zmm6.d
            float i = zmm9.d
            
            if (i_6 s> 0)
                while (not(i == 0f))
                    if (arg4 != 1)
                        zmm0 = _mm_cvtepi32_ps(zx.o(i_6))
                        i = i / zmm0[0]
                    
                    int64_t rdx_10 = i_3 - 1
                    float i_5 = i
                    
                    if (arg4 != 1)
                        rdx_10 = 0
                    
                    i = (zx.o(0)).d
                    
                    if (rdx_10 s< i_3)
                        if (i_3 - rdx_10 s>= 4)
                            float* rcx_16 = &r12_1[rdx_10 * 3 + 0xb]
                            int64_t j_2 = ((i_3 - rdx_10 - 4) u>> 2) + 1
                            rdx_10 += j_2 << 2
                            int64_t j
                            
                            do
                                zmm1.d = rcx_16[-0x12].d f- i_5
                                zmm0 = _mm_max_ss((*(r14 + 0x300))[0], zmm1.d)
                                rcx_16[-0x12] = zmm0[0]
                                zmm0[0] = zmm0[0] f- zmm1.d
                                zmm1.d = rcx_16[-0xc].d f- i_5
                                i = i + zmm0[0]
                                zmm0 = _mm_max_ss((*(r14 + 0x300))[0], zmm1.d)
                                rcx_16[-0xc] = zmm0[0]
                                zmm0[0] = zmm0[0] f- zmm1.d
                                zmm1.d = rcx_16[-6].d f- i_5
                                i = i + zmm0[0]
                                zmm0 = _mm_max_ss((*(r14 + 0x300))[0], zmm1.d)
                                rcx_16[-6] = zmm0[0]
                                zmm0[0] = zmm0[0] f- zmm1.d
                                float zmm2 = *rcx_16 - i_5
                                i = i + zmm0[0]
                                zmm0 = _mm_max_ss((*(r14 + 0x300))[0], zmm2)
                                *rcx_16 = zmm0[0]
                                zmm0[0] = zmm0[0] - zmm2
                                rcx_16 = &rcx_16[0x18]
                                i = i + zmm0[0]
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                        
                        if (rdx_10 s< i_3)
                            uint128_t* rcx_17 = &r12_1[rdx_10 + ((rdx_10 + 1) << 1)]
                            int64_t j_3 = i_3 - rdx_10
                            int64_t j_1
                            
                            do
                                zmm1.d = (*rcx_17).d f- i_5
                                zmm0 = _mm_max_ss((*(r14 + 0x300))[0], zmm1.d)
                                *rcx_17 = zmm0[0]
                                zmm0[0] = zmm0[0] f- zmm1.d
                                rcx_17 += 0x18
                                i = i + zmm0[0]
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                    
                    r8_1 += 1
                    
                    if (r8_1 s>= i_6)
                        break
            
            bool cond:0_1 = *(r13_1 + 0x48) == 0
            zmm9.d = zmm9.d f- i
            int64_t* r15_4 = r13_1 + 0x40
            zmm9.d = zmm9.d f+ zmm6.d
            zmm9 = __maxss_xmmss_memss(zmm9.d, *(r14 + 0x300))
            zmm6 = zmm9
            
            if (not(cond:0_1))
                int64_t* rcx_18 = *r15_4
                
                if (rcx_18 != 0 && (*(*rcx_18 + 0x28))(rcx_18) != 0)
                    int64_t* rcx_19
                    
                    if (r15_4[1].d == 0)
                        rcx_19 = nullptr
                    else
                        rcx_19 = *r15_4
                    
                    (*(*rcx_19 + 0x48))(rcx_19)
                    *(r13_1 + 0x38) = zmm0[0]
            
            uint128_t zmm7 = *(r13_1 + 0x38)
            
            if (i_3 s> 0)
                void** rsi_1 = r12_1
                int64_t i_4 = i_3
                int64_t i_1
                
                do
                    zmm0 = zx.o(rsi_1[2])
                    void* rbx_6 = *rsi_1
                    zmm6.d = zmm6.d f+ zmm0[0]
                    var_88.q = zmm0.q
                    
                    if (*(rbx_6 + 0x48) != 0)
                        int64_t* rcx_20 = *(rbx_6 + 0x40)
                        
                        if (rcx_20 != 0 && (*(*rcx_20 + 0x28))(rcx_20) != 0)
                            int64_t* rcx_21
                            
                            if (*(rbx_6 + 0x48) == 0)
                                rcx_21 = nullptr
                            else
                                rcx_21 = *(rbx_6 + 0x40)
                            
                            (*(*rcx_21 + 0x48))(rcx_21)
                            *(rbx_6 + 0x38) = zmm0[0]
                    
                    zmm7.d = zmm7.d f+ *(rbx_6 + 0x38)
                    rsi_1 = &rsi_1[3]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
                r15_4 = r13_1 + 0x40
            
            int128_t zmm8
            zmm8.d = 1f f/ zmm6.d
            zmm6.d = zmm7.d f* zmm9.d
            zmm6.d = zmm6.d f* zmm8.d
            int64_t var_98
            
            if (*(r13_1 + 0x58) == 0)
            label_140f4938b:
                var_98.d = zmm6.d
                var_90 = nullptr
                var_88 = 0f
                *(r13_1 + 0x38) = zmm6.d
                var_98:4.b = 1
                *(r13_1 + 0x3c) = 1
                sub_140692f90(r15_4, &var_90)
                result = sub_140745b20(&var_90)
            else
                int64_t* rcx_22 = *(r13_1 + 0x50)
                
                if (rcx_22 == 0)
                    goto label_140f4938b
                
                if ((*(*rcx_22 + 0x28))(rcx_22) == 0)
                    goto label_140f4938b
                
                if (*(r13_1 + 0x58) == 0)
                    result = (*(*nullptr + 0x48))(0, zmm6)
                else
                    int64_t* rcx_23 = *(r13_1 + 0x50)
                    result = (*(*rcx_23 + 0x48))(rcx_23, zmm6)
            
            if (i_3 s> 0)
                void** rsi_2 = r12_1
                int64_t i_2
                
                do
                    zmm6 = zx.o(rsi_2[2])
                    void* rbx_7 = *rsi_2
                    var_88.q = zmm6.q
                    zmm6.d = zmm6.d f* zmm7.d
                    zmm6.d = zmm6.d f* zmm8.d
                    
                    if (*(rbx_7 + 0x58) == 0)
                    label_140f49426:
                        var_98.d = zmm6.d
                        *(rbx_7 + 0x38) = zmm6.d
                        var_98:4.b = 1
                        var_90 = nullptr
                        var_88 = 0f
                        *(rbx_7 + 0x3c) = 1
                        sub_140692f90(rbx_7 + 0x40, &var_90)
                        result = sub_140745b20(&var_90)
                    else
                        int64_t* rcx_26 = *(rbx_7 + 0x50)
                        
                        if (rcx_26 == 0)
                            goto label_140f49426
                        
                        if ((*(*rcx_26 + 0x28))(rcx_26) == 0)
                            goto label_140f49426
                        
                        if (*(rbx_7 + 0x58) == 0)
                            result = (*(*nullptr + 0x48))(0, zmm6)
                        else
                            int64_t* rcx_27 = *(rbx_7 + 0x50)
                            result = (*(*rcx_27 + 0x48))(rcx_27, zmm6)
                    
                    rsi_2 = &rsi_2[3]
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
            
            if (r12_1 != 0)
                result = sub_140a74f90(r12_1)
        
        int32_t* rcx_31 = var_b8
        
        if (rcx_31 != 0)
            return sub_140a74f90(rcx_31)
return result
