// 函数: sub_1408bf8e0
// 地址: 0x1408bf8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_f8
int64_t rax_2 = __security_cookie ^ &var_f8
int128_t* rdi_1 = *(arg2 + 0x30)
int32_t r14_1 = 0
void* r13_1 = rdi_1 + sx.q(*(arg2 + 0x38)) * 0x18

if (rdi_1 != r13_1)
    int64_t* r12_1 = nullptr
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    
    do
        int64_t zmm1 = rdi_1[1].q
        int96_t zmm0 = (*rdi_1).12
        
        if (zmm1 != 0 && zmm0.b == 0)
            int64_t rax
            
            if (r14_1 s>= arg1[1].d)
                void*** rax_23 = j_sub_140a82f30(0x2b0)
                void*** rbx_7 = rax_23
                
                if (rax_23 == 0)
                    rbx_7 = nullptr
                else
                    sub_1408b9020(rax_23)
                    rbx_7[0x55].b = 0
                    *rbx_7 = &data_142e040e8
                    rbx_7[0x50].b = 1
                
                void*** rax_24 = j_sub_140a82f30(0x18)
                
                if (rax_24 != 0)
                    rax_24[1].d = 1
                    *rax_24 = &data_142d83c20
                    *(rax_24 + 0xc) = 1
                    rax_24[2] = rbx_7
                
                int64_t rbx_8 = sx.q(arg1[1].d)
                int32_t rax_25 = (rbx_8 + 1).d
                arg1[1].d = rax_25
                
                if (rax_25 s> *(arg1 + 0xc))
                    sub_140610660(arg1)
                
                void** rcx_21 = (rbx_8 << 4) + *arg1
                *rcx_21 = rbx_7
                rcx_21[1] = rax_24
                void*** rax_28 = rax_24
                
                if (rax_28 != 0)
                    rax_28[1].d += 1
                    rax_28 = rax_24
                
                int128_t var_a8 = rbx_7.o
                
                if (rax_28 != 0)
                    rax_28[1].d += 1
                
                void*** rax_29 = data_143ceb928
                
                if (rax_29 == 0)
                    rax_29 = j_sub_140a82f30(zx.q((&rax_29[6]).d))
                    
                    if (rax_29 != 0)
                        rax_29, zmm6 = sub_1408b9380(rax_29)
                    
                    data_143ceb928 = rax_29
                
                if (var_a8.q != 0)
                    sub_1408b88b0(&rax_29[4], &var_a8)
                
                void* rcx_25 = var_a8:8.q
                
                if (rcx_25 != 0)
                    int32_t rax_30 = *(rcx_25 + 8)
                    *(rcx_25 + 8) -= 1
                    
                    if (rax_30 == 1)
                        int64_t* rbx_9 = var_a8:8.q
                        (**rbx_9)(rbx_9)
                        int32_t rax_32 = *(rbx_9 + 0xc)
                        *(rbx_9 + 0xc) -= 1
                        
                        if (rax_32 == 1)
                            int64_t* rcx_27 = var_a8:8.q
                            (*(*rcx_27 + 8))(rcx_27, 1)
                
                rax, zmm6 = sub_1408bf440(rbx_7, zmm1, zmm0:4.d, zmm0:8.d, zmm6)
                int64_t* rbx_10 = rax_24
                
                if (rbx_10 != 0)
                    rbx_10[1].d -= 1
                    
                    if (rbx_10[1].d == 1)
                        (**rbx_10)(rbx_10)
                        rax = zx.q(*(rbx_10 + 0xc))
                        *(rbx_10 + 0xc) -= 1
                        
                        if (rax.d == 1)
                            (*(*rbx_10 + 8))(rbx_10, 1)
            else
                int64_t rax_3 = *arg1
                int64_t* rbx_1 = *(r12_1 + rax_3 + 8)
                void* rcx_1 = *(r12_1 + rax_3)
                void* var_d8_1 = rcx_1
                int64_t* var_d0 = rbx_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                    rbx_1 = var_d0
                
                if (rcx_1 == 0)
                    void*** rax_4 = j_sub_140a82f30(0x2b0)
                    void*** rbx_2 = rax_4
                    
                    if (rax_4 == 0)
                        rbx_2 = nullptr
                    else
                        sub_1408b9020(rax_4)
                        rbx_2[0x55].b = 0
                        *rbx_2 = &data_142e040e8
                        rbx_2[0x50].b = 1
                    
                    void*** rax_5 = j_sub_140a82f30(0x18)
                    
                    if (rax_5 != 0)
                        rax_5[1].d = 1
                        *rax_5 = &data_142d83c20
                        *(rax_5 + 0xc) = 1
                        rax_5[2] = rbx_2
                    
                    void*** var_78 = rax_5
                    int64_t var_80_1 = 0
                    sub_1405aeff0(&var_d0, &var_78)
                    void*** rbx_3 = var_78
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t rax_8 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (rax_8 == 1)
                                (*rbx_3)[1](rbx_3, 1)
                    
                    zmm6 = rbx_2.o
                    uint128_t var_68 = zmm6
                    rbx_1 = _mm_bsrli_si128(zmm6, 8).q
                    var_d0 = rbx_1
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                        rbx_1 = var_d0
                        zmm6 = rbx_2.o
                    
                    void*** rcx_6 = data_143ceb928
                    
                    if (rcx_6 == 0)
                        void*** rax_10 = j_sub_140a82f30(0x30)
                        
                        if (rax_10 == 0)
                            rcx_6 = nullptr
                            data_143ceb928 = 0
                        else
                            void*** rax_11
                            rax_11, zmm6 = sub_1408b9380(rax_10)
                            rcx_6 = rax_11
                            data_143ceb928 = rax_11
                    
                    void* rax_12 = zmm6.q
                    var_d8_1 = rax_12
                    
                    if (rax_12 != 0)
                        sub_1408b88b0(&rcx_6[4], &var_68)
                    
                    if (rbx_1 != 0)
                        int32_t rax_13 = rbx_1[1].d
                        rbx_1[1].d -= 1
                        int32_t rax_15
                        
                        if (rax_13 == 1)
                            int64_t* rbx_4 = var_d0
                            (**rbx_4)(rbx_4)
                            rax_15 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                        
                        if (rax_13 != 1 || rax_15 != 1)
                            rbx_1 = var_d0
                        else
                            rbx_1 = var_d0
                            (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        zmm6 = var_d8_1.o
                    
                    uint128_t* rdx_5 = (sx.q(r14_1) << 4) + *arg1
                    uint128_t var_b8 = zmm6
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                        rbx_1 = var_d0
                        zmm6 = var_b8
                    
                    if (&var_b8 != rdx_5)
                        uint128_t var_58_1 = zmm6
                        var_b8 = *rdx_5
                        *rdx_5 = zmm6
                    
                    void* rcx_11 = var_b8:8.q
                    
                    if (rcx_11 != 0)
                        int32_t rax_17 = *(rcx_11 + 8)
                        *(rcx_11 + 8) -= 1
                        
                        if (rax_17 == 1)
                            int64_t* rbx_5 = var_b8:8.q
                            (**rbx_5)(rbx_5)
                            int32_t rax_19 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (rax_19 == 1)
                                int64_t* rcx_13 = var_b8:8.q
                                (*(*rcx_13 + 8))(rcx_13, 1)
                        
                        rbx_1 = var_d0
                
                rax, zmm6 = sub_1408bf440(var_d8_1, zmm1, zmm0:4.d, zmm0:8.d, zmm6)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        int64_t* rbx_6 = var_d0
                        (**rbx_6)(rbx_6)
                        rax = zx.q(*(rbx_6 + 0xc))
                        *(rbx_6 + 0xc) -= 1
                        
                        if (rax.d == 1)
                            int64_t* rcx_16 = var_d0
                            (*(*rcx_16 + 8))(rcx_16, 1)
            r14_1 += 1
            r12_1 = &r12_1[2]
        
        rdi_1 += 0x18
    while (rdi_1 != r13_1)

int64_t rbx_11 = sx.q(arg1[1].d)

if (r14_1 s> rbx_11.d)
    arg1[1].d = r14_1
    
    if (r14_1 s> *(arg1 + 0xc))
        sub_140610660(arg1)
    
    memset((rbx_11 << 4) + *arg1, 0, sx.q(r14_1 - rbx_11.d) << 4)
else if (r14_1 s< rbx_11.d)
    sub_1408c24e0(arg1, r14_1, rbx_11.d - r14_1, 1)

__security_check_cookie(rax_2 ^ &var_f8)
