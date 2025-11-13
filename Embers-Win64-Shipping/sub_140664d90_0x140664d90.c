// 函数: sub_140664d90
// 地址: 0x140664d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = nullptr
int64_t* rsi = arg1
int32_t i_2 = 0
int32_t var_11c = 0
void* r15 = nullptr
int64_t* r12 = nullptr
void* var_128 = nullptr
int128_t var_148 = zx.o(0)
int32_t arg_20
char rax
uint128_t zmm0_1
rax, zmm0_1 = sub_140678630(arg1, &arg_20, (zx.o(0)).q)

if (rax == 0)
label_140665be5:
    rsi.b = 0
else
    int128_t zmm1_1
    char i
    
    do
        int64_t* rax_2 = (*(*rsi + 8))(rsi)
        int64_t var_138 = 0
        int32_t r8 = 0
        int32_t rbx_1 = rax_2[1].d
        int64_t rdi_1 = *rax_2
        int32_t var_12c
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_138, rbx_1, 0)
            zmm0_1 = memcpy(var_138, rdi_1, rbx_1 * 2)
            r8 = var_12c
        else
            var_12c = 0
        
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
            
            r8 = var_12c
        
        int64_t rax_5 = sx.q(arg_20)
        int64_t* rbx_5
        int64_t* rbx_9
        
        if (rax_5.d u<= 8)
            switch (rax_5)
                case 0
                    if (r15 != 0)
                        if (r12 != 0)
                            r12[1].d += 1
                        
                        int64_t i_3 = sx.q(i_2)
                        i_2 = (i_3 + 1).d
                        
                        if (i_2 s> var_11c)
                            sub_140610660(&var_128)
                            r14 = var_128
                        
                        int64_t rax_7 = i_3 * 2
                        *(r14 + (rax_7 << 3)) = r15
                        *(r14 + (rax_7 << 3) + 8) = r12
                        
                        if (r12 != 0)
                            int32_t rax_8 = r12[1].d
                            r12[1].d = rax_8
                            
                            if (rax_8 == 0)
                                (**r12)(r12)
                                int32_t temp20_1 = *(r12 + 0xc)
                                *(r12 + 0xc) -= 1
                                
                                if (temp20_1 == 1)
                                    (*(*r12 + 8))(r12, 1)
                    
                    int64_t* rax_11 = sub_140666c60()
                    int64_t* rbx_3 = rax_11
                    r15 = &rax_11[2]
                    int64_t* rdi_2 = rbx_3
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d += 1
                        rbx_3 = rax_11
                    
                    int64_t* rsi_1 = r12
                    
                    if (rdi_2 != r12)
                        r12 = rdi_2
                        
                        if (rsi_1 != 0)
                            rsi_1[1].d -= 1
                            
                            if (rsi_1[1].d != 1)
                                rbx_3 = rax_11
                            else
                                (**rsi_1)(rsi_1)
                                int32_t temp19_1 = *(rsi_1 + 0xc)
                                *(rsi_1 + 0xc) -= 1
                                
                                if (temp19_1 != 1)
                                    rbx_3 = rax_11
                                else
                                    (*(*rsi_1 + 8))(rsi_1, 1)
                                    rbx_3 = rax_11
                    else if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d != 1)
                            rbx_3 = rax_11
                        else
                            (**rdi_2)(rdi_2)
                            int32_t temp18_1 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (temp18_1 != 1)
                                rbx_3 = rax_11
                            else
                                (*(*rdi_2 + 8))(rdi_2, 1)
                                rbx_3 = rax_11
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp34_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp34_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    *r15 = 6
                    
                    if (r15 + 8 != &var_138)
                        int64_t rsi_2 = var_138
                        int32_t r8_3 = *(r15 + 0x14)
                        *(r15 + 0x10) = rbx_1
                        
                        if (rbx_1 != 0 || r8_3 != 0)
                            sub_1405a4c70(r15 + 8, rbx_1, r8_3)
                            memcpy(*(r15 + 8), rsi_2, rbx_1 * 2)
                        else
                            *(r15 + 0x14) = rbx_1
                    
                    int64_t* rax_17 = sub_140666cd0()
                    zmm0_1 = (&rax_17[2]).o
                    uint128_t var_78 = zmm0_1
                    zmm0_1 = _mm_bsrli_si128(zmm0_1, 8)
                    rbx_5 = zmm0_1.q
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d += 1
                        rbx_5 = rax_17
                    
                    int64_t* rdi_4 = var_78:8.q
                    
                    if (r15 + 0x28 == &var_78)
                        goto label_1406650d3
                    
                    *(r15 + 0x28) = var_78.q
                    int64_t* rbx_6 = *(r15 + 0x30)
                    
                    if (rdi_4 == rbx_6)
                        rbx_5 = rax_17
                    label_1406650d3:
                        
                        if (rdi_4 != 0)
                            rdi_4[1].d -= 1
                            
                            if (rdi_4[1].d == 1)
                                (**rdi_4)(rdi_4)
                                int32_t temp56_1 = *(rdi_4 + 0xc)
                                *(rdi_4 + 0xc) -= 1
                                
                                if (temp56_1 == 1)
                                    (*(*rdi_4 + 8))(rdi_4, 1)
                            
                            rbx_5 = rax_17
                    else
                        *(r15 + 0x30) = rdi_4
                        
                        if (rbx_6 == 0)
                            rbx_5 = rax_17
                        else
                            rbx_6[1].d -= 1
                            
                            if (rbx_6[1].d != 1)
                                rbx_5 = rax_17
                            else
                                (**rbx_6)(rbx_6)
                                int32_t temp60_1 = *(rbx_6 + 0xc)
                                *(rbx_6 + 0xc) -= 1
                                
                                if (temp60_1 != 1)
                                    rbx_5 = rax_17
                                else
                                    (*(*rbx_6 + 8))(rbx_6, 1)
                                    rbx_5 = rax_17
                    
                    goto label_140665afc
                case 1
                    if (i_2 s> 0)
                        if (&var_138 != r15 + 8)
                            int32_t rbx_7 = *(r15 + 0x10)
                            int64_t rdi_5 = *(r15 + 8)
                            int32_t var_130_2 = rbx_7
                            
                            if (rbx_7 != 0 || r8 != 0)
                                sub_1405a4c70(&var_138, rbx_7, r8)
                                memcpy(var_138, rdi_5, rbx_7 * 2)
                            else
                                var_12c = r8
                        
                        int64_t* rax_24 = j_sub_140a82f30(0x30)
                        int64_t* rbx_8 = rax_24
                        
                        if (rax_24 == 0)
                            rbx_8 = nullptr
                        else
                            rax_24[1].d = 1
                            *(rax_24 + 0xc) = 1
                            *rbx_8 = &data_142d84f48
                            void* rax_25 = *(r15 + 0x30)
                            int64_t var_68 = *(r15 + 0x28)
                            void* var_60_1 = rax_25
                            
                            if (rax_25 != 0)
                                *(rax_25 + 8) += 1
                            
                            sub_140669820(&rbx_8[2], &var_68)
                        
                        rbx_9 = rbx_8
                        int64_t* rdi_6 = rbx_9
                        
                        if (rbx_9 != 0)
                            rbx_9[1].d += 1
                            rbx_9 = rbx_8
                        
                        int64_t* rsi_3 = var_148:8.q
                        var_148.q = &rbx_8[2]
                        
                        if (rdi_6 != rsi_3)
                            var_148:8.q = rdi_6
                            
                            if (rsi_3 != 0)
                                rsi_3[1].d -= 1
                                
                                if (rsi_3[1].d != 1)
                                    rbx_9 = rbx_8
                                else
                                    (**rsi_3)(rsi_3)
                                    int32_t temp51_1 = *(rsi_3 + 0xc)
                                    *(rsi_3 + 0xc) -= 1
                                    
                                    if (temp51_1 != 1)
                                        rbx_9 = rbx_8
                                    else
                                        (*(*rsi_3 + 8))(rsi_3, 1)
                                        rbx_9 = rbx_8
                        else if (rdi_6 != 0)
                            rdi_6[1].d -= 1
                            
                            if (rdi_6[1].d != 1)
                                rbx_9 = rbx_8
                            else
                                (**rdi_6)(rdi_6)
                                int32_t temp50_1 = *(rdi_6 + 0xc)
                                *(rdi_6 + 0xc) -= 1
                                
                                if (temp50_1 != 1)
                                    rbx_9 = rbx_8
                                else
                                    (*(*rdi_6 + 8))(rdi_6, 1)
                                    rbx_9 = rbx_8
                        
                    label_140665245:
                        
                        if (rbx_9 != 0)
                            rbx_9[1].d -= 1
                            
                            if (rbx_9[1].d == 1)
                                (**rbx_9)(rbx_9)
                                int32_t temp55_1 = *(rbx_9 + 0xc)
                                *(rbx_9 + 0xc) -= 1
                                
                                if (temp55_1 == 1)
                                    (*(*rbx_9 + 8))(rbx_9, 1)
                        
                        int64_t rcx_30 = sx.q(i_2 - 1)
                        int64_t rax_33 = rcx_30 * 2
                        int64_t* rbx_10 = *(r14 + (rax_33 << 3) + 8)
                        r15 = *(r14 + (rax_33 << 3))
                        
                        if (rbx_10 != 0)
                            rbx_10[1].d += 1
                        
                        void* r14_1 = r14 + (rcx_30 << 4)
                        int64_t* rdi_7 = *(r14_1 + 8)
                        
                        if (rdi_7 != 0)
                            rdi_7[1].d -= 1
                            
                            if (rdi_7[1].d == 1)
                                (**rdi_7)(rdi_7)
                                int32_t temp61_1 = *(rdi_7 + 0xc)
                                *(rdi_7 + 0xc) -= 1
                                
                                if (temp61_1 == 1)
                                    (*(*rdi_7 + 8))(rdi_7, 1)
                        
                        if (0 != 0)
                            memmove(r14_1, (sx.q(i_2) << 4) + var_128, 0 << 4)
                        
                        zmm0_1 = sub_140638bc0(&var_128)
                        
                        if (rbx_10 != 0)
                            rbx_10[1].d += 1
                        
                        int64_t* rdi_8 = r12
                        
                        if (rbx_10 != r12)
                            bool cond:0_1 = r12 == 0
                            r12 = rbx_10
                            
                            if (not(cond:0_1))
                                rdi_8[1].d -= 1
                                
                                if (rdi_8[1].d == 1)
                                    (**rdi_8)(rdi_8)
                                    int32_t temp66_1 = *(rdi_8 + 0xc)
                                    *(rdi_8 + 0xc) -= 1
                                    
                                    if (temp66_1 == 1)
                                        (*(*rdi_8 + 8))(rdi_8, 1)
                            
                            goto label_140665328
                        
                        if (rbx_10 != 0)
                            rbx_10[1].d -= 1
                            
                            if (rbx_10[1].d != 1)
                            label_140665328:
                                
                                if (rbx_10 != 0)
                                    goto label_14066532d
                            else
                                (**rbx_10)(rbx_10)
                                int32_t temp64_1 = *(rbx_10 + 0xc)
                                *(rbx_10 + 0xc) -= 1
                                
                                if (temp64_1 != 1)
                                    goto label_140665328
                                
                                (*(*rbx_10 + 8))(rbx_10, 1)
                            label_14066532d:
                                rbx_10[1].d -= 1
                                
                                if (rbx_10[1].d == 1)
                                    (**rbx_10)(rbx_10)
                                    int32_t temp67_1 = *(rbx_10 + 0xc)
                                    *(rbx_10 + 0xc) -= 1
                                    
                                    if (temp67_1 == 1)
                                        (*(*rbx_10 + 8))(rbx_10, 1)
                        
                        i_2 -= 1
                        r14 = var_128
                        rsi = arg1
                case 2
                    if (r15 != 0)
                        if (r12 != 0)
                            r12[1].d += 1
                        
                        int64_t i_4 = sx.q(i_2)
                        i_2 = (i_4 + 1).d
                        
                        if (i_2 s> var_11c)
                            sub_140610660(&var_128)
                            r14 = var_128
                        
                        int64_t rax_44 = i_4 * 2
                        *(r14 + (rax_44 << 3)) = r15
                        *(r14 + (rax_44 << 3) + 8) = r12
                        
                        if (r12 != 0)
                            int32_t rax_45 = r12[1].d
                            r12[1].d = rax_45
                            
                            if (rax_45 == 0)
                                (**r12)(r12)
                                int32_t temp24_1 = *(r12 + 0xc)
                                *(r12 + 0xc) -= 1
                                
                                if (temp24_1 == 1)
                                    (*(*r12 + 8))(r12, 1)
                    
                    int64_t* rax_48
                    rax_48, zmm0_1 = sub_140666c60()
                    int64_t* rbx_11 = rax_48
                    r15 = &rax_48[2]
                    int64_t* rdi_9 = rbx_11
                    
                    if (rbx_11 != 0)
                        rbx_11[1].d += 1
                        rbx_11 = rax_48
                    
                    int64_t* rsi_5 = r12
                    
                    if (rdi_9 != r12)
                        r12 = rdi_9
                        
                        if (rsi_5 != 0)
                            rsi_5[1].d -= 1
                            
                            if (rsi_5[1].d != 1)
                                rbx_11 = rax_48
                            else
                                (**rsi_5)(rsi_5)
                                int32_t temp23_1 = *(rsi_5 + 0xc)
                                *(rsi_5 + 0xc) -= 1
                                
                                if (temp23_1 != 1)
                                    rbx_11 = rax_48
                                else
                                    (*(*rsi_5 + 8))(rsi_5, 1)
                                    rbx_11 = rax_48
                    else if (rdi_9 != 0)
                        rdi_9[1].d -= 1
                        
                        if (rdi_9[1].d != 1)
                            rbx_11 = rax_48
                        else
                            (**rdi_9)(rdi_9)
                            int32_t temp22_1 = *(rdi_9 + 0xc)
                            *(rdi_9 + 0xc) -= 1
                            
                            if (temp22_1 != 1)
                                rbx_11 = rax_48
                            else
                                (*(*rdi_9 + 8))(rdi_9, 1)
                                rbx_11 = rax_48
                    
                    if (rbx_11 != 0)
                        rbx_11[1].d -= 1
                        
                        if (rbx_11[1].d == 1)
                            (**rbx_11)(rbx_11)
                            int32_t temp35_1 = *(rbx_11 + 0xc)
                            *(rbx_11 + 0xc) -= 1
                            
                            if (temp35_1 == 1)
                                (*(*rbx_11 + 8))(rbx_11, 1)
                    
                    *r15 = 5
                    
                    if (r15 + 8 != &var_138)
                        int64_t rsi_6 = var_138
                        int32_t r8_10 = *(r15 + 0x14)
                        *(r15 + 0x10) = rbx_1
                        
                        if (rbx_1 != 0 || r8_10 != 0)
                            sub_1405a4c70(r15 + 8, rbx_1, r8_10)
                            zmm0_1 = memcpy(*(r15 + 8), rsi_6, rbx_1 * 2)
                        else
                            *(r15 + 0x14) = rbx_1
                    
                    rsi = arg1
                case 3
                    if (i_2 s> 0)
                        if (&var_138 != r15 + 8)
                            int32_t rbx_13 = *(r15 + 0x10)
                            int64_t rdi_11 = *(r15 + 8)
                            int32_t var_130_3 = rbx_13
                            
                            if (rbx_13 != 0 || r8 != 0)
                                sub_1405a4c70(&var_138, rbx_13, r8)
                                memcpy(var_138, rdi_11, rbx_13 * 2)
                            else
                                var_12c = r8
                        
                        int64_t* rax_55 = j_sub_140a82f30(0x30)
                        int64_t* rbx_14 = rax_55
                        
                        if (rax_55 == 0)
                            rbx_14 = nullptr
                        else
                            rax_55[1].d = 1
                            *(rax_55 + 0xc) = 1
                            *rbx_14 = &data_142d84f58
                            sub_140669740(&rbx_14[2], r15 + 0x18)
                        
                        rbx_9 = rbx_14
                        int64_t* rdi_12 = rbx_9
                        
                        if (rbx_9 != 0)
                            rbx_9[1].d += 1
                            rbx_9 = rbx_14
                        
                        int64_t* rsi_7 = var_148:8.q
                        var_148.q = &rbx_14[2]
                        
                        if (rdi_12 != rsi_7)
                            var_148:8.q = rdi_12
                            
                            if (rsi_7 != 0)
                                rsi_7[1].d -= 1
                                
                                if (rsi_7[1].d != 1)
                                    rbx_9 = rbx_14
                                else
                                    (**rsi_7)(rsi_7)
                                    int32_t temp53_1 = *(rsi_7 + 0xc)
                                    *(rsi_7 + 0xc) -= 1
                                    
                                    if (temp53_1 != 1)
                                        rbx_9 = rbx_14
                                    else
                                        (*(*rsi_7 + 8))(rsi_7, 1)
                                        rbx_9 = rbx_14
                        else if (rdi_12 != 0)
                            rdi_12[1].d -= 1
                            
                            if (rdi_12[1].d == 1)
                                (**rdi_12)(rdi_12)
                                int32_t temp52_1 = *(rdi_12 + 0xc)
                                *(rdi_12 + 0xc) -= 1
                                
                                if (temp52_1 == 1)
                                    (*(*rdi_12 + 8))(rdi_12, 1)
                            
                            rbx_9 = rbx_14
                        
                        goto label_140665245
                case 4
                    char rbx_15 = rsi[0xd].b
                    void*** rax_61
                    rax_61, zmm0_1 = j_sub_140a82f30(0x28)
                    
                    if (rax_61 != 0)
                        rax_61[1].d = 1
                        *rax_61 = &data_142d854f8
                        rax_61[2] = &data_142d84c78
                        *(rax_61 + 0xc) = 1
                        rax_61[4].b = rbx_15
                        rax_61[3].d = 4
                    
                    rbx_5 = rax_61
                    int64_t* rdi_13 = rbx_5
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d += 1
                        rbx_5 = rax_61
                    
                    int64_t* rsi_8 = var_148:8.q
                    var_148.q = &rax_61[2]
                    
                    if (rdi_13 != rsi_8)
                        var_148:8.q = rdi_13
                        
                        if (rsi_8 != 0)
                            rsi_8[1].d -= 1
                            
                            if (rsi_8[1].d != 1)
                                rbx_5 = rax_61
                            else
                                (**rsi_8)(rsi_8)
                                int32_t temp27_1 = *(rsi_8 + 0xc)
                                *(rsi_8 + 0xc) -= 1
                                
                                if (temp27_1 != 1)
                                    rbx_5 = rax_61
                                else
                                    (*(*rsi_8 + 8))(rsi_8, 1)
                                    rbx_5 = rax_61
                    else if (rdi_13 != 0)
                        rdi_13[1].d -= 1
                        
                        if (rdi_13[1].d == 1)
                            (**rdi_13)(rdi_13)
                            int32_t temp26_1 = *(rdi_13 + 0xc)
                            *(rdi_13 + 0xc) -= 1
                            
                            if (temp26_1 == 1)
                                (*(*rdi_13 + 8))(rdi_13, 1)
                        
                        rbx_5 = rax_61
                    
                label_140665afc:
                    
                    if (rbx_5 == 0)
                        rsi = arg1
                    else
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            (**rbx_5)(rbx_5)
                            int32_t temp36_1 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (temp36_1 == 1)
                                (*(*rbx_5 + 8))(rbx_5, 1)
                        
                        rsi = arg1
                case 5
                    int64_t* rax_68 = (*(*rsi + 0x10))(rsi, &__dos_header)
                    void*** rax_69
                    rax_69, zmm0_1 = j_sub_140a82f30(0x30)
                    void*** rbx_16 = rax_69
                    
                    if (rax_69 == 0)
                        rbx_16 = nullptr
                    else
                        rax_69[1].d = 1
                        *(rax_69 + 0xc) = 1
                        *rbx_16 = &data_142d85508
                        rbx_16[2] = &data_142d84ab0
                        rbx_16[3].d = 0
                        zmm0_1 = sub_140596d10(&rbx_16[4], rax_68)
                        rbx_16[3].d = 2
                    
                    rbx_5 = rbx_16
                    int64_t* rdi_15 = rbx_5
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d += 1
                        rbx_5 = rbx_16
                    
                    int64_t* rsi_9 = var_148:8.q
                    var_148.q = &rbx_16[2]
                    
                    if (rdi_15 != rsi_9)
                        var_148:8.q = rdi_15
                        
                        if (rsi_9 != 0)
                            rsi_9[1].d -= 1
                            
                            if (rsi_9[1].d != 1)
                                rbx_5 = rbx_16
                            else
                                (**rsi_9)(rsi_9)
                                int32_t temp38_1 = *(rsi_9 + 0xc)
                                *(rsi_9 + 0xc) -= 1
                                
                                if (temp38_1 != 1)
                                    rbx_5 = rbx_16
                                else
                                    (*(*rsi_9 + 8))(rsi_9, 1)
                                    rbx_5 = rbx_16
                    else if (rdi_15 != 0)
                        rdi_15[1].d -= 1
                        
                        if (rdi_15[1].d == 1)
                            (**rdi_15)(rdi_15)
                            int32_t temp37_1 = *(rdi_15 + 0xc)
                            *(rdi_15 + 0xc) -= 1
                            
                            if (temp37_1 == 1)
                                (*(*rdi_15 + 8))(rdi_15, 1)
                        
                        rbx_5 = rbx_16
                    
                    goto label_140665afc
                case 6
                    if ((arg3 & 1) == 0)
                        int64_t zmm6_1 = rsi[0xb]
                        void*** rax_81
                        rax_81, zmm0_1 = j_sub_140a82f30(0x28)
                        
                        if (rax_81 != 0)
                            rax_81[4] = zmm6_1
                            *rax_81 = &data_142d854f8
                            rax_81[2] = &data_142d84b38
                            rax_81[1].d = 1
                            *(rax_81 + 0xc) = 1
                            rax_81[3].d = 3
                        
                        int64_t* var_90_1 = rax_81
                        rbx_5 = var_90_1
                        int64_t* rdi_17 = rbx_5
                        
                        if (rbx_5 != 0)
                            rbx_5[1].d += 1
                            rbx_5 = var_90_1
                        
                        int64_t* rsi_11 = var_148:8.q
                        var_148.q = &rax_81[2]
                        
                        if (rdi_17 != rsi_11)
                            var_148:8.q = rdi_17
                            
                            if (rsi_11 != 0)
                                rsi_11[1].d -= 1
                                
                                if (rsi_11[1].d != 1)
                                    rbx_5 = var_90_1
                                else
                                    (**rsi_11)(rsi_11)
                                    int32_t temp40_1 = *(rsi_11 + 0xc)
                                    *(rsi_11 + 0xc) -= 1
                                    
                                    if (temp40_1 != 1)
                                        rbx_5 = var_90_1
                                    else
                                        (*(*rsi_11 + 8))(rsi_11, 1)
                                        rbx_5 = var_90_1
                        else if (rdi_17 != 0)
                            rdi_17[1].d -= 1
                            
                            if (rdi_17[1].d == 1)
                                (**rdi_17)(rdi_17)
                                int32_t temp39_1 = *(rdi_17 + 0xc)
                                *(rdi_17 + 0xc) -= 1
                                
                                if (temp39_1 == 1)
                                    (*(*rdi_17 + 8))(rdi_17, 1)
                            
                            rbx_5 = var_90_1
                    else
                        int64_t* rax_75
                        rax_75, zmm0_1 = j_sub_140a82f30(0x30)
                        int64_t* rbx_17 = rax_75
                        
                        if (rax_75 == 0)
                            rbx_17 = nullptr
                        else
                            rax_75[1].d = 1
                            *(rax_75 + 0xc) = 1
                            *rbx_17 = &data_142d85508
                            rbx_17[2] = &data_142d84bd0
                            rbx_17[3].d = 0
                            zmm0_1 = sub_140596d10(&rbx_17[4], &rsi[9])
                            rbx_17[3].d = 3
                        
                        rbx_5 = rbx_17
                        int64_t* rdi_16 = rbx_5
                        
                        if (rbx_5 != 0)
                            rbx_5[1].d += 1
                            rbx_5 = rbx_17
                        
                        int64_t* rsi_10 = var_148:8.q
                        var_148.q = &rbx_17[2]
                        
                        if (rdi_16 != rsi_10)
                            var_148:8.q = rdi_16
                            
                            if (rsi_10 != 0)
                                rsi_10[1].d -= 1
                                
                                if (rsi_10[1].d != 1)
                                    rbx_5 = rbx_17
                                else
                                    (**rsi_10)(rsi_10)
                                    int32_t temp48_1 = *(rsi_10 + 0xc)
                                    *(rsi_10 + 0xc) -= 1
                                    
                                    if (temp48_1 != 1)
                                        rbx_5 = rbx_17
                                    else
                                        (*(*rsi_10 + 8))(rsi_10, 1)
                                        rbx_5 = rbx_17
                        else if (rdi_16 != 0)
                            rdi_16[1].d -= 1
                            
                            if (rdi_16[1].d == 1)
                                (**rdi_16)(rdi_16)
                                int32_t temp47_1 = *(rdi_16 + 0xc)
                                *(rdi_16 + 0xc) -= 1
                                
                                if (temp47_1 == 1)
                                    (*(*rdi_16 + 8))(rdi_16, 1)
                            
                            rbx_5 = rbx_17
                    
                    goto label_140665afc
                case 7
                    void*** rax_87
                    rax_87, zmm0_1 = j_sub_140a82f30(0x20)
                    
                    if (rax_87 != 0)
                        rax_87[1].d = 1
                        *rax_87 = &data_142d85518
                        rax_87[2] = &data_142d84e10
                        *(rax_87 + 0xc) = 1
                        rax_87[3].d = 1
                    
                    rbx_5 = rax_87
                    int64_t* rdi_18 = rbx_5
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d += 1
                        rbx_5 = rax_87
                    
                    int64_t* rsi_12 = var_148:8.q
                    var_148.q = &rax_87[2]
                    
                    if (rdi_18 != rsi_12)
                        var_148:8.q = rdi_18
                        
                        if (rsi_12 != 0)
                            rsi_12[1].d -= 1
                            
                            if (rsi_12[1].d != 1)
                                rbx_5 = rax_87
                            else
                                (**rsi_12)(rsi_12)
                                int32_t temp33_1 = *(rsi_12 + 0xc)
                                *(rsi_12 + 0xc) -= 1
                                
                                if (temp33_1 != 1)
                                    rbx_5 = rax_87
                                else
                                    (*(*rsi_12 + 8))(rsi_12, 1)
                                    rbx_5 = rax_87
                    else if (rdi_18 != 0)
                        rdi_18[1].d -= 1
                        
                        if (rdi_18[1].d != 1)
                            rbx_5 = rax_87
                        else
                            (**rdi_18)(rdi_18)
                            int32_t temp32_1 = *(rdi_18 + 0xc)
                            *(rdi_18 + 0xc) -= 1
                            
                            if (temp32_1 != 1)
                                rbx_5 = rax_87
                            else
                                (*(*rdi_18 + 8))(rdi_18, 1)
                                rbx_5 = rax_87
                    
                    goto label_140665afc
                case 8
                    int64_t rcx_91 = var_138
                    
                    if (rcx_91 != 0)
                        sub_140a74f90(rcx_91)
                    
                    goto label_140665be5_1
        
        if (var_148.q != 0 && r15 != 0)
            if (*r15 != 6)
                int64_t rdi_19 = sx.q(*(r15 + 0x20))
                int32_t rax_94 = (rdi_19 + 1).d
                *(r15 + 0x20) = rax_94
                
                if (rax_94 s> *(r15 + 0x24))
                    zmm0_1 = sub_140610660(r15 + 0x18)
                
                int64_t* rcx_87 = (rdi_19 << 4) + *(r15 + 0x18)
                *rcx_87 = var_148.q
                rcx_87[1] = var_148:8.q
                void* rax_97 = var_148:8.q
                
                if (rax_97 != 0)
                    *(rax_97 + 8) += 1
            else
                zmm0_1 = j_sub_140b746f0(*(r15 + 0x28), &var_138, &var_148)
        
        int64_t rcx_88 = var_138
        
        if (rcx_88 != 0)
            zmm0_1 = sub_140a74f90(rcx_88)
        
        i, zmm0_1, zmm1_1 = sub_140678630(rsi, &arg_20, zmm0_1.q)
    while (i != 0)
    
    if (r15 == 0 || rsi[8].d s> 1)
    label_140665be5_1:
        rsi.b = 0
    else
        sub_14066a470(arg2, r15, zmm1_1)
        rsi.b = 1

int64_t* rbx_18 = var_148:8.q

if (rbx_18 != 0)
    rbx_18[1].d -= 1
    
    if (rbx_18[1].d == 1)
        (**rbx_18)(rbx_18)
        int32_t temp2_1 = *(rbx_18 + 0xc)
        *(rbx_18 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_18 + 8))(rbx_18, 1)

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        (**r12)(r12)
        int32_t temp3_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*r12 + 8))(r12, 1)

if (i_2 != 0)
    int64_t* rdi_20 = r14 + 8
    int32_t i_1
    
    do
        int64_t* rbx_19 = *rdi_20
        
        if (rbx_19 != 0)
            rbx_19[1].d -= 1
            
            if (rbx_19[1].d == 1)
                (**rbx_19)(rbx_19)
                int32_t temp8_1 = *(rbx_19 + 0xc)
                *(rbx_19 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    int64_t r8_16 = *rbx_19
                    (*(r8_16 + 8))(rbx_19, 1, r8_16)
        
        rdi_20 = &rdi_20[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r14 != 0)
    sub_140a74f90(r14)

return zx.q(rsi.b)
