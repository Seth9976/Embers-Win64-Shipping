// 函数: sub_140e46130
// 地址: 0x140e46130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi
int64_t* var_10 = rdi
int64_t* rsi = arg1
void* r12 = nullptr
int32_t r13 = 0
void* r14 = nullptr
int64_t* r15 = nullptr
int128_t var_148
__builtin_memset(&var_148, 0, 0x20)
int32_t arg_20
char rax
uint128_t zmm0_1
rax, zmm0_1 = sub_140e82350(arg1, &arg_20, (zx.o(0)).q)
void* var_138

if (rax == 0)
label_140e46fb1:
    rdi.b = 0
else
    int128_t zmm1_1
    char i
    
    do
        int64_t* rax_2 = (*(*rsi + 8))(rsi)
        int64_t var_128 = 0
        int32_t rbx_1 = rax_2[1].d
        int64_t rdi_1 = *rax_2
        int32_t var_11c
        int32_t r8
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_128, rbx_1, 0)
            zmm0_1 = memcpy(var_128, rdi_1, rbx_1 * 2)
            r8 = var_11c
        else
            r8 = 0
            var_11c = 0
        
        int64_t* rbx_2 = var_148:8.q
        var_148.q = 0
        
        if (rbx_2 != 0)
            var_148:8.q = 0
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
            
            r8 = var_11c
        
        int64_t rax_5 = sx.q(arg_20)
        int64_t var_130_1
        uint128_t var_118
        int64_t* rbx_6
        int64_t* rbx_10
        
        if (rax_5.d u<= 8)
            switch (rax_5)
                case 0
                    if (r12 != 0)
                        if (r15 != 0)
                            r15[1].d += 1
                        
                        int64_t rbx_3 = sx.q(r13)
                        r13 = (rbx_3 + 1).d
                        var_130_1.d = r13
                        
                        if (r13 s> var_130_1:4.d)
                            sub_140610660(&var_138)
                            r13 = var_130_1.d
                            r14 = var_138
                        
                        int64_t rax_7 = rbx_3 * 2
                        *(r14 + (rax_7 << 3)) = r12
                        *(r14 + (rax_7 << 3) + 8) = r15
                        
                        if (r15 != 0)
                            int32_t rax_8 = r15[1].d
                            r15[1].d = rax_8
                            
                            if (rax_8 == 0)
                                (**r15)(r15)
                                int32_t temp9_1 = *(r15 + 0xc)
                                *(r15 + 0xc) -= 1
                                
                                if (temp9_1 == 1)
                                    (*(*r15 + 8))(r15, 1)
                    
                    int64_t* rax_11 = j_sub_140a82f30(0x48)
                    
                    if (rax_11 == 0)
                        rax_11 = nullptr
                    else
                        rax_11[1].d = 1
                        *rax_11 = &data_142d854e8
                        *(rax_11 + 0xc) = 1
                        __builtin_memset(&rax_11[2], 0, 0x38)
                    
                    int64_t* rbx_4 = rax_11
                    r12 = &rax_11[2]
                    int64_t* rdi_2 = rbx_4
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d += 1
                        rbx_4 = rax_11
                    
                    int64_t* rsi_1 = r15
                    
                    if (rdi_2 != r15)
                        r15 = rdi_2
                        
                        if (rsi_1 != 0)
                            rsi_1[1].d -= 1
                            
                            if (rsi_1[1].d != 1)
                                rbx_4 = rax_11
                            else
                                (**rsi_1)(rsi_1)
                                int32_t temp30_1 = *(rsi_1 + 0xc)
                                *(rsi_1 + 0xc) -= 1
                                
                                if (temp30_1 != 1)
                                    rbx_4 = rax_11
                                else
                                    (*(*rsi_1 + 8))(rsi_1, 1)
                                    rbx_4 = rax_11
                    else if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d != 1)
                            rbx_4 = rax_11
                        else
                            (**rdi_2)(rdi_2)
                            int32_t temp29_1 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (temp29_1 != 1)
                                rbx_4 = rax_11
                            else
                                (*(*rdi_2 + 8))(rdi_2, 1)
                                rbx_4 = rax_11
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            (**rbx_4)(rbx_4)
                            int32_t temp40_1 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (temp40_1 == 1)
                                (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    *r12 = 6
                    
                    if (r12 + 8 != &var_128)
                        int64_t rsi_2 = var_128
                        int32_t r8_3 = *(r12 + 0x14)
                        *(r12 + 0x10) = rbx_1
                        
                        if (rbx_1 != 0 || r8_3 != 0)
                            sub_1405a4c70(r12 + 8, rbx_1, r8_3)
                            memcpy(*(r12 + 8), rsi_2, rbx_1 * 2)
                        else
                            *(r12 + 0x14) = rbx_1
                    
                    void*** rax_17 = sub_140666cd0()
                    zmm0_1 = (&rax_17[2]).o
                    var_118 = zmm0_1
                    zmm0_1 = _mm_bsrli_si128(zmm0_1, 8)
                    rbx_6 = zmm0_1.q
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d += 1
                        rbx_6 = rax_17
                    
                    rdi = var_118:8.q
                    
                    if (r12 + 0x28 == &var_118)
                        goto label_140e464b7
                    
                    *(r12 + 0x28) = var_118.q
                    int64_t* rbx_7 = *(r12 + 0x30)
                    
                    if (rdi == rbx_7)
                        rbx_6 = rax_17
                    label_140e464b7:
                        
                        if (rdi != 0)
                            rdi[1].d -= 1
                            
                            if (rdi[1].d == 1)
                                (**rdi)(rdi)
                                int32_t temp52_1 = *(rdi + 0xc)
                                *(rdi + 0xc) -= 1
                                
                                if (temp52_1 == 1)
                                    (*(*rdi + 8))(rdi, 1)
                            
                            rbx_6 = rax_17
                    else
                        *(r12 + 0x30) = rdi
                        
                        if (rbx_7 == 0)
                            rbx_6 = rax_17
                        else
                            rbx_7[1].d -= 1
                            
                            if (rbx_7[1].d != 1)
                                rbx_6 = rax_17
                            else
                                (**rbx_7)(rbx_7)
                                int32_t temp54_1 = *(rbx_7 + 0xc)
                                *(rbx_7 + 0xc) -= 1
                                
                                if (temp54_1 != 1)
                                    rbx_6 = rax_17
                                else
                                    (*(*rbx_7 + 8))(rbx_7, 1)
                                    rbx_6 = rax_17
                    
                    goto label_140e46ec1
                case 1
                    if (r13 s> 0)
                        if (&var_128 != r12 + 8)
                            int32_t rbx_8 = *(r12 + 0x10)
                            int64_t rdi_4 = *(r12 + 8)
                            int32_t var_120_2 = rbx_8
                            
                            if (rbx_8 != 0 || r8 != 0)
                                sub_1405a4c70(&var_128, rbx_8, r8)
                                memcpy(var_128, rdi_4, rbx_8 * 2)
                            else
                                var_11c = 0
                        
                        int64_t* rax_24 = j_sub_140a82f30(0x30)
                        int64_t* rbx_9 = rax_24
                        
                        if (rax_24 == 0)
                            rbx_9 = nullptr
                        else
                            rax_24[1].d = 1
                            *(rax_24 + 0xc) = 1
                            *rbx_9 = &data_142d84f48
                            void* rax_25 = *(r12 + 0x30)
                            int64_t var_68 = *(r12 + 0x28)
                            void* var_60_1 = rax_25
                            
                            if (rax_25 != 0)
                                *(rax_25 + 8) += 1
                            
                            sub_140669820(&rbx_9[2], &var_68)
                        
                        rbx_10 = rbx_9
                        int64_t* rdi_5 = rbx_10
                        
                        if (rbx_10 != 0)
                            rbx_10[1].d += 1
                            rbx_10 = rbx_9
                        
                        int64_t* rsi_3 = var_148:8.q
                        var_148.q = &rbx_9[2]
                        
                        if (rdi_5 != rsi_3)
                            var_148:8.q = rdi_5
                            
                            if (rsi_3 != 0)
                                rsi_3[1].d -= 1
                                
                                if (rsi_3[1].d != 1)
                                    rbx_10 = rbx_9
                                else
                                    (**rsi_3)(rsi_3)
                                    int32_t temp43_1 = *(rsi_3 + 0xc)
                                    *(rsi_3 + 0xc) -= 1
                                    
                                    if (temp43_1 != 1)
                                        rbx_10 = rbx_9
                                    else
                                        (*(*rsi_3 + 8))(rsi_3, 1)
                                        rbx_10 = rbx_9
                        else if (rdi_5 != 0)
                            rdi_5[1].d -= 1
                            
                            if (rdi_5[1].d != 1)
                                rbx_10 = rbx_9
                            else
                                (**rdi_5)(rdi_5)
                                int32_t temp42_1 = *(rdi_5 + 0xc)
                                *(rdi_5 + 0xc) -= 1
                                
                                if (temp42_1 != 1)
                                    rbx_10 = rbx_9
                                else
                                    (*(*rdi_5 + 8))(rdi_5, 1)
                                    rbx_10 = rbx_9
                        
                    label_140e46629:
                        
                        if (rbx_10 != 0)
                            rbx_10[1].d -= 1
                            
                            if (rbx_10[1].d == 1)
                                (**rbx_10)(rbx_10)
                                int32_t temp47_1 = *(rbx_10 + 0xc)
                                *(rbx_10 + 0xc) -= 1
                                
                                if (temp47_1 == 1)
                                    (*(*rbx_10 + 8))(rbx_10, 1)
                        
                        int64_t rcx_30 = sx.q(r13 - 1)
                        int64_t rax_33 = rcx_30 * 2
                        int64_t* rbx_11 = *(r14 + (rax_33 << 3) + 8)
                        r12 = *(r14 + (rax_33 << 3))
                        
                        if (rbx_11 != 0)
                            rbx_11[1].d += 1
                        
                        void* r14_1 = r14 + (rcx_30 << 4)
                        int64_t* rdi_6 = *(r14_1 + 8)
                        
                        if (rdi_6 != 0)
                            rdi_6[1].d -= 1
                            
                            if (rdi_6[1].d == 1)
                                (**rdi_6)(rdi_6)
                                int32_t temp51_1 = *(rdi_6 + 0xc)
                                *(rdi_6 + 0xc) -= 1
                                
                                if (temp51_1 == 1)
                                    (*(*rdi_6 + 8))(rdi_6, 1)
                        
                        if (0 != 0)
                            memmove(r14_1, (sx.q(r13) << 4) + var_138, 0 << 4)
                        
                        var_130_1.d = r13 - 1
                        zmm0_1 = sub_140638bc0(&var_138)
                        
                        if (rbx_11 != 0)
                            rbx_11[1].d += 1
                        
                        rdi = r15
                        int64_t rax_38
                        int64_t* rcx_37
                        
                        if (rbx_11 != r15)
                            bool cond:0_1 = r15 == 0
                            r15 = rbx_11
                            
                            if (cond:0_1)
                                goto label_140e4672d
                            
                            rdi[1].d -= 1
                            
                            if (rdi[1].d != 1)
                                goto label_140e4672d
                            
                            (**rdi)(rdi)
                            int32_t temp59_1 = *(rdi + 0xc)
                            *(rdi + 0xc) -= 1
                            
                            if (temp59_1 != 1)
                                goto label_140e4672d
                            
                            rax_38 = *rdi
                            rcx_37 = rdi
                            goto label_140e4672a
                        
                        if (rbx_11 != 0)
                            rbx_11[1].d -= 1
                            
                            if (rbx_11[1].d != 1)
                                goto label_140e4672d
                            
                            (**rbx_11)(rbx_11)
                            int32_t temp57_1 = *(rbx_11 + 0xc)
                            *(rbx_11 + 0xc) -= 1
                            
                            if (temp57_1 != 1)
                                goto label_140e4672d
                            
                            rax_38 = *rbx_11
                            rcx_37 = rbx_11
                        label_140e4672a:
                            (*(rax_38 + 8))(rcx_37, 1)
                        label_140e4672d:
                            
                            if (rbx_11 != 0)
                                rbx_11[1].d -= 1
                                
                                if (rbx_11[1].d == 1)
                                    (**rbx_11)(rbx_11)
                                    int32_t temp60_1 = *(rbx_11 + 0xc)
                                    *(rbx_11 + 0xc) -= 1
                                    
                                    if (temp60_1 == 1)
                                        (*(*rbx_11 + 8))(rbx_11, 1)
                        
                        r13 = var_130_1.d
                        r14 = var_138
                case 2
                    if (r12 != 0)
                        if (r15 != 0)
                            r15[1].d += 1
                        
                        int64_t rbx_12 = sx.q(r13)
                        r13 = (rbx_12 + 1).d
                        var_130_1.d = r13
                        
                        if (r13 s> var_130_1:4.d)
                            sub_140610660(&var_138)
                            r13 = var_130_1.d
                            r14 = var_138
                        
                        int64_t rax_43 = rbx_12 * 2
                        *(r14 + (rax_43 << 3)) = r12
                        *(r14 + (rax_43 << 3) + 8) = r15
                        
                        if (r15 != 0)
                            int32_t rax_44 = r15[1].d
                            r15[1].d = rax_44
                            
                            if (rax_44 == 0)
                                (**r15)(r15)
                                int32_t temp10_1 = *(r15 + 0xc)
                                *(r15 + 0xc) -= 1
                                
                                if (temp10_1 == 1)
                                    (*(*r15 + 8))(r15, 1)
                    
                    int64_t* rax_47
                    rax_47, zmm0_1 = j_sub_140a82f30(0x48)
                    
                    if (rax_47 == 0)
                        rax_47 = nullptr
                    else
                        rax_47[1].d = 1
                        *rax_47 = &data_142d854e8
                        *(rax_47 + 0xc) = 1
                        __builtin_memset(&rax_47[2], 0, 0x38)
                    
                    int64_t* rbx_13 = rax_47
                    r12 = &rax_47[2]
                    rdi = rbx_13
                    
                    if (rbx_13 != 0)
                        rbx_13[1].d += 1
                        rbx_13 = rax_47
                    
                    int64_t* rsi_5 = r15
                    
                    if (rdi != r15)
                        r15 = rdi
                        
                        if (rsi_5 != 0)
                            rsi_5[1].d -= 1
                            
                            if (rsi_5[1].d != 1)
                                rbx_13 = rax_47
                            else
                                (**rsi_5)(rsi_5)
                                int32_t temp35_1 = *(rsi_5 + 0xc)
                                *(rsi_5 + 0xc) -= 1
                                
                                if (temp35_1 != 1)
                                    rbx_13 = rax_47
                                else
                                    (*(*rsi_5 + 8))(rsi_5, 1)
                                    rbx_13 = rax_47
                    else if (rdi != 0)
                        rdi[1].d -= 1
                        
                        if (rdi[1].d != 1)
                            rbx_13 = rax_47
                        else
                            (**rdi)(rdi)
                            int32_t temp34_1 = *(rdi + 0xc)
                            *(rdi + 0xc) -= 1
                            
                            if (temp34_1 != 1)
                                rbx_13 = rax_47
                            else
                                (*(*rdi + 8))(rdi, 1)
                                rbx_13 = rax_47
                    
                    if (rbx_13 != 0)
                        rbx_13[1].d -= 1
                        
                        if (rbx_13[1].d == 1)
                            (**rbx_13)(rbx_13)
                            int32_t temp44_1 = *(rbx_13 + 0xc)
                            *(rbx_13 + 0xc) -= 1
                            
                            if (temp44_1 == 1)
                                (*(*rbx_13 + 8))(rbx_13, 1)
                    
                    *r12 = 5
                    
                    if (r12 + 8 != &var_128)
                        rdi = sx.q(rbx_1)
                        int64_t rsi_6 = var_128
                        int32_t r8_10 = *(r12 + 0x14)
                        *(r12 + 0x10) = rdi.d
                        
                        if (rdi.d != 0 || r8_10 != 0)
                            sub_1405a4c70(r12 + 8, rdi.d, r8_10)
                            zmm0_1 = memcpy(*(r12 + 8), rsi_6, rdi.d * 2)
                        else
                            *(r12 + 0x14) = rdi.d
                case 3
                    if (r13 s> 0)
                        if (&var_128 != r12 + 8)
                            int32_t rbx_15 = *(r12 + 0x10)
                            int64_t rdi_7 = *(r12 + 8)
                            int32_t var_120_3 = rbx_15
                            
                            if (rbx_15 != 0 || r8 != 0)
                                sub_1405a4c70(&var_128, rbx_15, r8)
                                memcpy(var_128, rdi_7, rbx_15 * 2)
                            else
                                var_11c = 0
                        
                        int64_t* rax_54 = j_sub_140a82f30(0x30)
                        int64_t* rbx_16 = rax_54
                        
                        if (rax_54 == 0)
                            rbx_16 = nullptr
                        else
                            rax_54[1].d = 1
                            *(rax_54 + 0xc) = 1
                            *rbx_16 = &data_142d84f58
                            sub_140669740(&rbx_16[2], r12 + 0x18)
                        
                        rbx_10 = rbx_16
                        int64_t* rdi_8 = rbx_10
                        
                        if (rbx_10 != 0)
                            rbx_10[1].d += 1
                            rbx_10 = rbx_16
                        
                        int64_t* rsi_7 = var_148:8.q
                        var_148.q = &rbx_16[2]
                        
                        if (rdi_8 != rsi_7)
                            var_148:8.q = rdi_8
                            
                            if (rsi_7 != 0)
                                rsi_7[1].d -= 1
                                
                                if (rsi_7[1].d != 1)
                                    rbx_10 = rbx_16
                                else
                                    (**rsi_7)(rsi_7)
                                    int32_t temp46_1 = *(rsi_7 + 0xc)
                                    *(rsi_7 + 0xc) -= 1
                                    
                                    if (temp46_1 != 1)
                                        rbx_10 = rbx_16
                                    else
                                        (*(*rsi_7 + 8))(rsi_7, 1)
                                        rbx_10 = rbx_16
                        else if (rdi_8 != 0)
                            rdi_8[1].d -= 1
                            
                            if (rdi_8[1].d == 1)
                                (**rdi_8)(rdi_8)
                                int32_t temp45_1 = *(rdi_8 + 0xc)
                                *(rdi_8 + 0xc) -= 1
                                
                                if (temp45_1 == 1)
                                    (*(*rdi_8 + 8))(rdi_8, 1)
                            
                            rbx_10 = rbx_16
                        
                        goto label_140e46629
                case 4
                    char rbx_17 = rsi[0xd].b
                    void*** rax_60
                    rax_60, zmm0_1 = j_sub_140a82f30(0x28)
                    
                    if (rax_60 == 0)
                        rax_60 = nullptr
                    else
                        rax_60[1].d = 1
                        *rax_60 = &data_142d854f8
                        *(rax_60 + 0xc) = 1
                        rax_60[2] = &data_142d84c78
                        rax_60[4].b = rbx_17
                        rax_60[3].d = 4
                    
                    rbx_6 = rax_60
                    rdi = rbx_6
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d += 1
                        rbx_6 = rax_60
                    
                    int64_t* rsi_8 = var_148:8.q
                    var_148.q = &rax_60[2]
                    
                    if (rdi != rsi_8)
                        var_148:8.q = rdi
                        
                        if (rsi_8 != 0)
                            rsi_8[1].d -= 1
                            
                            if (rsi_8[1].d != 1)
                                rbx_6 = rax_60
                            else
                                (**rsi_8)(rsi_8)
                                int32_t temp22_1 = *(rsi_8 + 0xc)
                                *(rsi_8 + 0xc) -= 1
                                
                                if (temp22_1 != 1)
                                    rbx_6 = rax_60
                                else
                                    (*(*rsi_8 + 8))(rsi_8, 1)
                                    rbx_6 = rax_60
                    else if (rdi != 0)
                        rdi[1].d -= 1
                        
                        if (rdi[1].d == 1)
                            (**rdi)(rdi)
                            int32_t temp21_1 = *(rdi + 0xc)
                            *(rdi + 0xc) -= 1
                            
                            if (temp21_1 == 1)
                                (*(*rdi + 8))(rdi, 1)
                        
                        rbx_6 = rax_60
                    
                label_140e46ec1:
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t temp16_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp16_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                case 5
                    int64_t* rax_67 = (*(*rsi + 0x10))(rsi, &__dos_header)
                    int64_t* rax_68
                    rax_68, zmm0_1 = j_sub_140a82f30(0x30)
                    int64_t* rbx_18 = rax_68
                    
                    if (rax_68 == 0)
                        rbx_18 = nullptr
                    else
                        rax_68[1].d = 1
                        *(rax_68 + 0xc) = 1
                        *rbx_18 = &data_142d85508
                        rbx_18[2] = &data_142d84ab0
                        rbx_18[3].d = 0
                        zmm0_1 = sub_140596d10(&rbx_18[4], rax_67)
                        rbx_18[3].d = 2
                    
                    rbx_6 = rbx_18
                    rdi = rbx_6
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d += 1
                        rbx_6 = rbx_18
                    
                    int64_t* rsi_9 = var_148:8.q
                    var_148.q = &rbx_18[2]
                    
                    if (rdi != rsi_9)
                        var_148:8.q = rdi
                        
                        if (rsi_9 != 0)
                            rsi_9[1].d -= 1
                            
                            if (rsi_9[1].d != 1)
                                rbx_6 = rbx_18
                            else
                                (**rsi_9)(rsi_9)
                                int32_t temp24_1 = *(rsi_9 + 0xc)
                                *(rsi_9 + 0xc) -= 1
                                
                                if (temp24_1 != 1)
                                    rbx_6 = rbx_18
                                else
                                    (*(*rsi_9 + 8))(rsi_9, 1)
                                    rbx_6 = rbx_18
                    else if (rdi != 0)
                        rdi[1].d -= 1
                        
                        if (rdi[1].d == 1)
                            (**rdi)(rdi)
                            int32_t temp23_1 = *(rdi + 0xc)
                            *(rdi + 0xc) -= 1
                            
                            if (temp23_1 == 1)
                                (*(*rdi + 8))(rdi, 1)
                        
                        rbx_6 = rbx_18
                    
                    goto label_140e46ec1
                case 6
                    if ((arg3 & 1) == 0)
                        int64_t zmm6_1 = rsi[0xb]
                        void*** rax_80 = j_sub_140a82f30(0x28)
                        
                        if (rax_80 == 0)
                            rax_80 = nullptr
                        else
                            rax_80[1].d = 1
                            *rax_80 = &data_142d854f8
                            *(rax_80 + 0xc) = 1
                            rax_80[2] = &data_142d84b38
                            rax_80[4] = zmm6_1
                            rax_80[3].d = 3
                        
                        zmm0_1 = (&rax_80[2]).o
                        var_118 = zmm0_1
                        zmm0_1 = _mm_bsrli_si128(zmm0_1, 8)
                        void* rax_81 = zmm0_1.q
                        
                        if (rax_81 != 0)
                            *(rax_81 + 8) += 1
                        
                        var_148.q = var_118.q
                        var_118.q = 0
                        sub_14066a200(&var_148:8, &var_118:8)
                        int64_t* rbx_20 = var_118:8.q
                        
                        if (rbx_20 != 0)
                            rbx_20[1].d -= 1
                            
                            if (rbx_20[1].d == 1)
                                (**rbx_20)(rbx_20)
                                int32_t temp25_1 = *(rbx_20 + 0xc)
                                *(rbx_20 + 0xc) -= 1
                                
                                if (temp25_1 == 1)
                                    (*(*rbx_20 + 8))(rbx_20, 1)
                        
                        rbx_6 = rax_80
                    else
                        void*** rax_74
                        rax_74, zmm0_1 = j_sub_140a82f30(0x30)
                        void*** rbx_19 = rax_74
                        
                        if (rax_74 == 0)
                            rbx_19 = nullptr
                        else
                            rax_74[1].d = 1
                            *(rax_74 + 0xc) = 1
                            *rbx_19 = &data_142d85508
                            rbx_19[2] = &data_142d84bd0
                            rbx_19[3].d = 0
                            zmm0_1 = sub_140596d10(&rbx_19[4], &rsi[9])
                            rbx_19[3].d = 3
                        
                        rbx_6 = rbx_19
                        rdi = rbx_6
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d += 1
                            rbx_6 = rbx_19
                        
                        int64_t* rsi_10 = var_148:8.q
                        var_148.q = &rbx_19[2]
                        
                        if (rdi != rsi_10)
                            var_148:8.q = rdi
                            
                            if (rsi_10 != 0)
                                rsi_10[1].d -= 1
                                
                                if (rsi_10[1].d != 1)
                                    rbx_6 = rbx_19
                                else
                                    (**rsi_10)(rsi_10)
                                    int32_t temp39_1 = *(rsi_10 + 0xc)
                                    *(rsi_10 + 0xc) -= 1
                                    
                                    if (temp39_1 != 1)
                                        rbx_6 = rbx_19
                                    else
                                        (*(*rsi_10 + 8))(rsi_10, 1)
                                        rbx_6 = rbx_19
                        else if (rdi != 0)
                            rdi[1].d -= 1
                            
                            if (rdi[1].d == 1)
                                (**rdi)(rdi)
                                int32_t temp38_1 = *(rdi + 0xc)
                                *(rdi + 0xc) -= 1
                                
                                if (temp38_1 == 1)
                                    (*(*rdi + 8))(rdi, 1)
                            
                            rbx_6 = rbx_19
                    
                    goto label_140e46ec1
                case 7
                    void*** rax_85 = sub_140918a00()
                    zmm0_1 = (&rax_85[2]).o
                    var_118 = zmm0_1
                    zmm0_1 = _mm_bsrli_si128(zmm0_1, 8)
                    void* rax_86 = zmm0_1.q
                    
                    if (rax_86 != 0)
                        *(rax_86 + 8) += 1
                    
                    var_148.q = var_118.q
                    var_118.q = 0
                    sub_14066a200(&var_148:8, &var_118:8)
                    int64_t* rbx_21 = var_118:8.q
                    
                    if (rbx_21 != 0)
                        rbx_21[1].d -= 1
                        
                        if (rbx_21[1].d == 1)
                            (**rbx_21)(rbx_21)
                            int32_t temp7_1 = *(rbx_21 + 0xc)
                            *(rbx_21 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rbx_21 + 8))(rbx_21, 1)
                    
                    rbx_6 = rax_85
                    goto label_140e46ec1
                case 8
                    int64_t rcx_89 = var_128
                    
                    if (rcx_89 != 0)
                        sub_140a74f90(rcx_89)
                    
                    goto label_140e46fb1_1
        
        if (var_148.q != 0 && r12 != 0)
            if (*r12 != 6)
                rdi = sx.q(*(r12 + 0x20))
                int32_t rax_92 = (rdi + 1).d
                *(r12 + 0x20) = rax_92
                
                if (rax_92 s> *(r12 + 0x24))
                    zmm0_1 = sub_140610660(r12 + 0x18)
                
                int64_t* rcx_85 = (rdi << 4) + *(r12 + 0x18)
                *rcx_85 = var_148.q
                rcx_85[1] = var_148:8.q
                void* rax_95 = var_148:8.q
                
                if (rax_95 != 0)
                    *(rax_95 + 8) += 1
            else
                zmm0_1 = j_sub_140b746f0(*(r12 + 0x28), &var_128, &var_148)
        
        int64_t rcx_86 = var_128
        
        if (rcx_86 != 0)
            zmm0_1 = sub_140a74f90(rcx_86)
        
        rsi = arg1
        i, zmm0_1, zmm1_1 = sub_140e82350(rsi, &arg_20, zmm0_1.q)
    while (i != 0)
    
    if (r12 == 0 || rsi[8].d s> 1)
    label_140e46fb1_1:
        rdi.b = 0
    else
        sub_14066a470(arg2, r12, zmm1_1)
        rdi.b = 1

int64_t* rbx_22 = var_148:8.q

if (rbx_22 != 0)
    rbx_22[1].d -= 1
    
    if (rbx_22[1].d == 1)
        (**rbx_22)(rbx_22)
        int32_t temp2_1 = *(rbx_22 + 0xc)
        *(rbx_22 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_22 + 8))(rbx_22, 1)

if (r15 != 0)
    r15[1].d -= 1
    
    if (r15[1].d == 1)
        (**r15)(r15)
        int32_t temp3_1 = *(r15 + 0xc)
        *(r15 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_19 = *r15
            (*(r8_19 + 8))(r15, 1, r8_19)

sub_1406cafa0(&var_138)
return zx.q(rdi.b)
