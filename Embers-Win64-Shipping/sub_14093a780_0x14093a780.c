// 函数: sub_14093a780
// 地址: 0x14093a780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rsi = 0
int64_t var_f0 = 0
int64_t var_b8 = 0
int64_t var_e8
sub_140942250(arg1, &var_e8, &arg_10, &var_f0, &var_b8)
uint128_t zmm6 = zx.o(0)
uint128_t var_c8 = zx.o(0)

if (var_f0 != 0)
    int64_t rbx_1 = var_e8
    int64_t* rdx_6
    
    if (*(arg1 + 0xc0) == *(arg1 + 0xec))
    label_14093a86e:
        rdx_6 = nullptr
    else
        int32_t rax_4 = sub_140b5ead0(rbx_1.d) + var_e8:4.d
        void* r8_1 = arg1 + 0xf0
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t rax_6 = *(r8_1 + (((sx.q(*(arg1 + 0x100)) - 1) & sx.q(rax_4)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_14093a86e_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(rax_6) << 5) + *(arg1 + 0xb8)
                
                if (*rdx_6 == rbx_1)
                    break
                
                rax_6 = rdx_6[3].d
                
                if (rax_6 == 0xffffffff)
                    goto label_14093a86e_2
            
            if (rax_6 == 0xffffffff)
            label_14093a86e_2:
                rdx_6 = nullptr
    
    void* rcx_2 = &rdx_6[1]
    
    if (rdx_6 == 0)
        rcx_2 = nullptr
    
    int64_t rax_12
    int64_t* rcx_5
    
    if (rcx_2 == 0)
        int64_t var_b0 = 0
        bool rax_13
        uint128_t zmm6_1
        rax_13, zmm6_1 = sub_140941920(&var_f0, &var_b0)
        
        if (rax_13 != 0)
            int64_t rdi_1 = var_f0
            int64_t var_d8
            void* const rcx_10
            
            if (*(arg1 + 0x70) == *(arg1 + 0x9c))
            label_14093a9a1:
                rcx_10 = nullptr
            else
                int32_t rcx_7 = var_f0.d
                var_d8 = rdi_1
                int32_t rax_16 = sub_140b5ead0(rcx_7) + var_d8:4.d
                void* r8_3 = arg1 + 0xa0
                void* rcx_8 = *(r8_3 + 8)
                
                if (rcx_8 != 0)
                    r8_3 = rcx_8
                
                int32_t rax_18 = *(r8_3 + (((sx.q(*(arg1 + 0xb0)) - 1) & sx.q(rax_16)) << 2))
                
                if (rax_18 == 0xffffffff)
                label_14093a9a1_1:
                    rcx_10 = nullptr
                else
                    int64_t r8_4 = *(arg1 + 0x68)
                    
                    while (true)
                        int64_t rdx_11 = sx.q(rax_18) * 3
                        rcx_10 = r8_4 + (rdx_11 << 3)
                        
                        if (*(r8_4 + (rdx_11 << 3)) == rdi_1)
                            break
                        
                        rax_18 = *(rcx_10 + 0x10)
                        
                        if (rax_18 == 0xffffffff)
                            goto label_14093a9a1_2
                    
                    if (rax_18 == 0xffffffff)
                    label_14093a9a1_2:
                        rcx_10 = nullptr
            
            void* r14_1 = rcx_10 + 8
            
            if (rcx_10 == 0)
                r14_1 = nullptr
            
            if (r14_1 != 0)
            label_14093aa8d:
                int64_t* rcx_18 = *r14_1
                (*(*rcx_18 + 8))(rcx_18, &var_d8, var_b8)
                int64_t* var_d0
                
                if (var_d8 == 0)
                    void* const rcx_31
                    
                    if (*(arg1 + 0x110) == *(arg1 + 0x13c))
                    label_14093acc0:
                        rcx_31 = nullptr
                    else
                        int32_t rax_41 = sub_140b5ead0(rbx_1.d) + var_e8:4.d
                        void* r8_9 = arg1 + 0x140
                        void* rcx_29 = *(r8_9 + 8)
                        
                        if (rcx_29 != 0)
                            r8_9 = rcx_29
                        
                        int32_t rax_43 =
                            *(r8_9 + (((sx.q(*(arg1 + 0x150)) - 1) & sx.q(rax_41)) << 2))
                        
                        if (rax_43 == 0xffffffff)
                        label_14093acc0_1:
                            rcx_31 = nullptr
                        else
                            int64_t r8_10 = *(arg1 + 0x108)
                            
                            while (true)
                                int64_t rdx_26 = sx.q(rax_43) * 5
                                rcx_31 = r8_10 + (rdx_26 << 2)
                                
                                if (*(r8_10 + (rdx_26 << 2)) == rbx_1)
                                    break
                                
                                rax_43 = *(rcx_31 + 0xc)
                                
                                if (rax_43 == 0xffffffff)
                                    goto label_14093acc0_2
                            
                            if (rax_43 == 0xffffffff)
                            label_14093acc0_2:
                                rcx_31 = nullptr
                    
                    void* rax_44 = rcx_31 + 8
                    
                    if (rcx_31 == 0)
                        rax_44 = nullptr
                    
                    if (rax_44 == 0 || *rax_44 == 0)
                        char var_f8 = 1
                        sub_14093b910(arg1 + 0x108, &var_e8, &var_f8)
                else
                    sub_14093b7e0(arg1 + 0xb8, &var_e8, &var_d8)
                    uint128_t zmm1_1 = var_d8.o
                    int64_t* rbx_3 = _mm_bsrli_si128(zmm1_1, 8).q
                    var_d0 = rbx_3
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d += 1
                        zmm6_1 = var_c8
                    
                    void* rcx_20 = _mm_bsrli_si128(zmm6_1, 8).q
                    uint128_t var_68_1 = zmm1_1
                    var_c8 = zmm1_1
                    
                    if (rcx_20 != 0)
                        int32_t rax_27 = *(rcx_20 + 8)
                        *(rcx_20 + 8) -= 1
                        
                        if (rax_27 == 1)
                            int64_t* rbx_4 = zmm6_1:8.q
                            (**rbx_4)(rbx_4)
                            int32_t rax_29 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (rax_29 == 1)
                                int64_t* rcx_22 = zmm6_1:8.q
                                (*(*rcx_22 + 8))(rcx_22, 1)
                    
                    r14_1.b = 0
                    int32_t rdx_20 = data_143989398
                    int32_t rcx_24 = data_1439893a4 + 1
                    int64_t r15_1 = var_d8
                    data_1439893a4 = rcx_24
                    int64_t rbx_5 = sx.q(rdx_20 - 1)
                    
                    if (rdx_20 - 1 s>= 0)
                        int64_t rdi_5 = rbx_5 << 4
                        int64_t temp1_1
                        
                        do
                            int64_t rax_32 = data_143989390
                            
                            if (*(rdi_5 + rax_32 + 8) == 0)
                                r14_1.b = 1
                            else
                                int64_t* rcx_25 = *(rdi_5 + rax_32)
                                
                                if (rcx_25 == 0)
                                    r14_1.b = 1
                                else if ((*(*rcx_25 + 0x50))(rcx_25, r15_1) == 0)
                                    r14_1.b = 1
                            
                            rdi_5 -= 0x10
                            temp1_1 = rbx_5
                            rbx_5 -= 1
                        while (temp1_1 - 1 s>= 0)
                        rcx_24 = data_1439893a4
                        rdx_20 = data_143989398
                    
                    data_1439893a4 = rcx_24 - 1
                    
                    if (r14_1.b != 0 && rcx_24 - 1 s<= 0)
                        int32_t rdi_6 = rdx_20
                        
                        if (rdx_20 s> 0)
                            int64_t* rbx_6 = nullptr
                            
                            do
                                int64_t rax_35 = data_143989390
                                
                                if (*(rbx_6 + rax_35 + 8) == 0)
                                    sub_1405a4880(&data_143989390, rsi, 1, 1)
                                else
                                    int64_t* rcx_27 = *(rbx_6 + rax_35)
                                    
                                    if (rcx_27 == 0)
                                        sub_1405a4880(&data_143989390, rsi, 1, 1)
                                    else if ((*(*rcx_27 + 0x20))(rcx_27) != 0)
                                        sub_1405a4880(&data_143989390, rsi, 1, 1)
                                    else
                                        rsi += 1
                                        rbx_6 = &rbx_6[2]
                                
                                rdx_20 = data_143989398
                            while (rsi s< rdx_20)
                        
                        int32_t rax_38 = rdx_20 * 2
                        
                        if (rax_38 s<= 2)
                            rax_38 = 2
                        
                        data_1439893a0 = rax_38
                        
                        if (rdi_6 s> rax_38 && data_14398939c != rdx_20)
                            sub_1405a5410(&data_143989390, rdx_20)
                
                if (var_d0 == 0)
                    goto label_14093ad29
                
                var_d0[1].d -= 1
                
                if (var_d0[1].d != 1)
                    goto label_14093ad29
                
                (**var_d0)(var_d0)
                int32_t rax_47 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (rax_47 != 1)
                    goto label_14093ad29
                
                rax_12 = *var_d0
                rcx_5 = var_d0
                goto label_14093ad26
            
            int64_t var_88
            int64_t rax_20
            rax_20, zmm6_1 = sub_1409420d0(sub_140b63b70(&var_f0, &var_88), arg1 + 0x158)
            int64_t rcx_13 = var_88
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            if (rax_20 == 0)
                goto label_14093aa84
            
            int64_t rdi_3 = var_f0
            
            if (*(arg1 + 0x70) != *(arg1 + 0x9c))
                int32_t rcx_14 = var_f0.d
                var_d8 = rdi_3
                int32_t rax_23 = sub_140b5ead0(rcx_14) + var_d8:4.d
                void* r8_5 = arg1 + 0xa0
                void* rcx_15 = *(r8_5 + 8)
                
                if (rcx_15 != 0)
                    r8_5 = rcx_15
                
                int32_t rax_25 = *(r8_5 + (((sx.q(*(arg1 + 0xb0)) - 1) & sx.q(rax_23)) << 2))
                
                if (rax_25 != 0xffffffff)
                    int64_t r8_6 = *(arg1 + 0x68)
                    void* rcx_17
                    
                    while (true)
                        int64_t rdx_17 = sx.q(rax_25) * 3
                        rcx_17 = r8_6 + (rdx_17 << 3)
                        
                        if (*(r8_6 + (rdx_17 << 3)) == rdi_3)
                            break
                        
                        rax_25 = *(rcx_17 + 0x10)
                        
                        if (rax_25 == 0xffffffff)
                            goto label_14093ad9b
                    
                    if (rax_25 != 0xffffffff && rcx_17 != 0)
                        r14_1 = rcx_17 + 8
                    label_14093aa84:
                        
                        if (r14_1 != 0)
                            goto label_14093aa8d
    else
        int64_t* rax_8 = *(rcx_2 + 8)
        
        if (rax_8 != 0)
            rax_8[1].d += 1
            zmm6 = var_c8
        
        uint128_t zmm0_1 = (*rcx_2).o
        int64_t var_a8_1
        var_a8_1.o = zmm6
        void* rcx_3 = _mm_bsrli_si128(zmm6, 8).q
        uint128_t var_78_1 = zmm0_1
        var_c8 = zmm0_1
        
        if (rcx_3 == 0)
            goto label_14093ad29
        
        int32_t rax_9 = *(rcx_3 + 8)
        *(rcx_3 + 8) -= 1
        
        if (rax_9 != 1)
            goto label_14093ad29
        
        (**rax_8)(rax_8)
        int32_t rax_11 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (rax_11 != 1)
            goto label_14093ad29
        
        rcx_5 = rax_8
        rax_12 = *rcx_5
    label_14093ad26:
        (*(rax_12 + 8))(rcx_5, 1)
    label_14093ad29:
        void* rcx_34 = var_c8:8.q
        
        if (rcx_34 != 0)
            int32_t rax_48 = *(rcx_34 + 8)
            *(rcx_34 + 8) -= 1
            
            if (rax_48 == 1)
                int64_t* rbx_8 = var_c8:8.q
                (**rbx_8)(rbx_8)
                int32_t r12_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (r12_1 == 1)
                    int64_t* rcx_36 = var_c8:8.q
                    (*(*rcx_36 + 8))(rcx_36, zx.q(r12_1))

label_14093ad9b:
__security_check_cookie(rax_1 ^ &var_128)
return var_c8.q
