// 函数: sub_142281e20
// 地址: 0x142281e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int32_t* result = __security_cookie ^ &var_448
int32_t* result_2 = result
int64_t* var_3f8 = arg3

if ((*(arg2 + 0x1a) & 3) == 0)
    int64_t* rbx_1 = *arg2
    int64_t* rsi_1 = arg2[1]
    (*(*rbx_1 + 0x20))(rbx_1, "PxRigidBody")
    (*(*rsi_1 + 0x20))(rsi_1, "PxRigidBody")
    result = rbx_1[2]
    int32_t* result_4
    
    if (result == 0 || *result != 1)
        result_4 = nullptr
    else
        result_4 = *(result + 8)
    
    int32_t* rbx_2 = rsi_1[2]
    int32_t* result_3
    
    if (rbx_2 == 0 || *rbx_2 != 1)
        result_3 = nullptr
    else
        result_3 = *(rbx_2 + 8)
    
    int64_t rbp
    rbp.b = 0
    
    if (result_4 == 0 && result != 0 && *result == 7)
        int64_t* rcx_2 = *(result + 8)
        
        if (rcx_2 != 0)
            rbp.b = 1
            result = (*(*rcx_2 + 0x20))(rcx_2)
            result_4 = result
    
    if (result_3 == 0)
        result = rsi_1[2]
        
        if (result != 0 && *result == 7)
            int64_t* rcx_3 = *(result + 8)
            
            if (rcx_3 != 0)
                rbp.b = 1
                result = (*(*rcx_3 + 0x20))(rcx_3)
                result_3 = result
    
    if (result_4 != 0 && result_3 != 0 && result_4 != result_3
            && (rbp.b == 0 || (result_4[3].b & 4) != 0 || (result_3[3].b & 4) != 0))
        int64_t* rsi_2 = var_3f8
        void* r15_1 = *(arg1 + 8)
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int64_t* r14_1 = r15_1 + 0xe0
        int32_t rbp_1 = r14_1[1].d
        int64_t* var_3f0_1 = r14_1
        int32_t* result_1
        sub_14225dd10(&result_1, result_4, result_3, rsi_2, arg4, r14_1)
        int32_t rax_6 = 0
        int32_t var_414_1 = 0
        float zmm0_1[0x4]
        float zmm1_1[0x4]
        int64_t zmm2_1
        
        if (arg4 u> 0)
            int128_t zmm7
            int128_t var_58_1 = zmm7
            float zmm8[0x4]
            float var_68_1[0x4] = zmm8
            float zmm9[0x4]
            float var_78_1[0x4] = zmm9
            float zmm10[0x4]
            float var_88_1[0x4] = zmm10
            float zmm11[0x4]
            float var_98_1[0x4] = zmm11
            
            do
                int64_t rcx_6 = sx.q(result_1[sx.q(rax_6)])
                
                if (rcx_6.d != 0xffffffff)
                    int64_t* r12_1 = *rsi_2
                    int64_t* r15_2 = rsi_2[1]
                    void* var_408 = nullptr
                    void* rdi_2 = rcx_6 * 0x68 + *r14_1
                    int64_t r14_2 = 0
                    
                    if ((*(*r12_1 + 0xc0))(r12_1) == 1)
                        (*(*r12_1 + 0xc8))(r12_1, &var_408, 1, 0)
                        void* r14_3 = var_408
                        int32_t* r14_4
                        
                        if (r14_3 != 0)
                            r14_4 = *(r14_3 + 0x10)
                        
                        if (r14_3 == 0 || r14_4 == 0 || *r14_4 != 2)
                            r14_2 = 0
                        else
                            r14_2 = *(r14_4 + 8)
                    
                    void* var_400 = nullptr
                    int64_t rbp_2 = 0
                    
                    if ((*(*r15_2 + 0xc0))(r15_2) == 1)
                        (*(*r15_2 + 0xc8))(r15_2, &var_400, 1, 0)
                        void* rbp_3 = var_400
                        int32_t* rbp_4
                        
                        if (rbp_3 != 0)
                            rbp_4 = *(rbp_3 + 0x10)
                        
                        if (rbp_3 == 0 || rbp_4 == 0 || *rbp_4 != 2)
                            rbp_2 = 0
                        else
                            rbp_2 = *(rbp_4 + 8)
                    
                    void var_3b8
                    int32_t i_2 = sub_142281870(rsi_2, &var_3b8, 0x10)
                    int64_t i_1 = sx.q(i_2)
                    
                    if (i_2 s> 0)
                        void var_394
                        void* rbx_3 = &var_394
                        int64_t i
                        
                        do
                            zmm11 = *(rbx_3 - 0x10)
                            zmm6 = *(rbx_3 - 4)
                            zmm7 = *rbx_3
                            zmm10 = *(rbx_3 - 0x14)
                            zmm8 = *(rbx_3 + 4)
                            zmm9 = *(rbx_3 - 0xc)
                            zmm11[0] = zmm11[0] f* zmm7.d
                            zmm8[0] = zmm8[0] * zmm9[0]
                            zmm2_1.d = zmm6.q.d f* zmm10[0]
                            zmm2_1.d = zmm2_1.d f+ zmm11[0]
                            zmm2_1.d = zmm2_1.d f+ zmm8[0]
                            zmm10[0] = zmm10[0] f* zmm2_1.d
                            zmm11[0] = zmm11[0] f* zmm2_1.d
                            zmm9[0] = zmm9[0] f* zmm2_1.d
                            zmm10[0] = zmm10[0] f+ *(rdi_2 + 0x50)
                            zmm6.d = zmm6.d f- zmm10[0]
                            zmm11[0] = zmm11[0] f+ *(rdi_2 + 0x54)
                            zmm7.d = zmm7.d f- zmm11[0]
                            zmm8[0] = zmm8[0] - zmm9[0]
                            *(rdi_2 + 0x50) = zmm10[0]
                            zmm9[0] = zmm9[0] f+ *(rdi_2 + 0x58)
                            *(rdi_2 + 0x54) = zmm11[0]
                            *(rdi_2 + 0x58) = zmm9[0]
                            zmm6.d = zmm6.d f+ *(rdi_2 + 0x5c)
                            zmm7.d = zmm7.d f+ *(rdi_2 + 0x60)
                            zmm8[0] = zmm8[0] f+ *(rdi_2 + 0x64)
                            *(rdi_2 + 0x5c) = zmm6.d
                            *(rdi_2 + 0x60) = zmm7.d
                            *(rdi_2 + 0x64) = zmm8[0]
                            
                            if (var_408 == 0)
                                void* rax_15 = (*(*r12_1 + 0xd0))(r12_1, zx.q(*(rbx_3 - 8)))
                                
                                if (rax_15 != 0)
                                    int32_t* rax_16 = *(rax_15 + 0x10)
                                    
                                    if (rax_16 == 0 || *rax_16 != 2)
                                        r14_2 = 0
                                    else
                                        r14_2 = *(rax_16 + 8)
                            
                            if (var_400 == 0)
                                void* rax_18 = (*(*r15_2 + 0xd0))(r15_2, zx.q(*(rbx_3 + 8)))
                                
                                if (rax_18 != 0)
                                    int32_t* rax_19 = *(rax_18 + 0x10)
                                    
                                    if (rax_19 == 0 || *rax_19 != 2)
                                        rbp_2 = 0
                                    else
                                        rbp_2 = *(rax_19 + 8)
                            
                            int64_t rsi_3 = sx.q(*(rdi_2 + 0x48))
                            int32_t rax_20 = (rsi_3 + 1).d
                            *(rdi_2 + 0x48) = rax_20
                            
                            if (rax_20 s> *(rdi_2 + 0x4c))
                                sub_1405c4f50(rdi_2 + 0x40)
                            
                            int64_t rcx_16 = rsi_3 * 0x30
                            int64_t* rcx_17 = rcx_16 + *(rdi_2 + 0x40)
                            
                            if (rcx_16 != neg.q(*(rdi_2 + 0x40)))
                                zmm2_1 = *(rbx_3 - 0x20)
                                zmm1_1 = *(rbx_3 - 0x24)
                                float var_3c8_1 = (*(rbx_3 - 0x1c))[0]
                                *(rcx_17 + 0xc) = (_mm_unpacklo_ps(zmm10, zmm11[0].q)).q
                                zmm0_1 = *(rbx_3 - 0x18)
                                *rcx_17 = (_mm_unpacklo_ps(zmm1_1, zmm2_1)).q
                                rcx_17[1].d = var_3c8_1
                                rcx_17[3].d = (zmm0_1 ^ 0x80000000)[0]
                                *(rcx_17 + 0x14) = zmm9[0]
                                rcx_17[4] = r14_2
                                rcx_17[5] = rbp_2
                            
                            rbx_3 += 0x30
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        rsi_2 = var_3f8
                    
                    r14_1 = var_3f0_1
                
                rsi_2 = &rsi_2[8]
                rax_6 = var_414_1 + 1
                var_3f8 = rsi_2
                var_414_1 = rax_6
            while (rax_6 u< arg4)
        
        int32_t rdx_7 = r14_1[1].d
        
        if (rbp_1 s< rdx_7)
            int32_t rdi_3 = rbp_1 + 1
            int64_t rbx_4 = sx.q(rbp_1) * 0x68
            
            do
                int64_t rcx_18 = *r14_1
                zmm0_1 = *(rbx_4 + rcx_18 + 0x54)
                zmm2_1 = *(rbx_4 + rcx_18 + 0x50)
                zmm1_1 = *(rbx_4 + rcx_18 + 0x58)
                zmm2_1.d = zmm2_1.d f* zmm2_1.d
                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                zmm2_1.d = zmm2_1.d f+ zmm0_1[0]
                zmm2_1.d = zmm2_1.d f+ zmm1_1[0]
                
                if (not(zmm2_1.d f>= 9.99999975e-05f))
                    int64_t rsi_4 = sx.q(rbp_1) * 0x68
                    int64_t rcx_19 = *(rcx_18 + rsi_4 + 0x40)
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                    
                    int32_t rcx_22 = r14_1[1].d
                    int32_t rax_27 = rcx_22 - rbp_1
                    
                    if (rax_27 != 1)
                        int64_t rcx_20 = *r14_1
                        memmove(rcx_20 + rsi_4, sx.q(rdi_3) * 0x68 + rcx_20, (rax_27 - 1) * 0x68)
                        rcx_22 = *(r15_1 + 0xe8)
                    
                    r14_1[1].d = rcx_22 - 1
                    sub_142276780(r14_1)
                    rdx_7 = *(r15_1 + 0xe8)
                    rbp_1 -= 1
                    rdi_3 -= 1
                    rbx_4 -= 0x68
                
                rbp_1 += 1
                rdi_3 += 1
                rbx_4 += 0x68
            while (rbp_1 s< rdx_7)
        
        result = result_1
        
        if (result != 0)
            result = sub_140a74f90(result)

__security_check_cookie(result_2 ^ &var_448)
return result
