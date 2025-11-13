// 函数: sub_140edb490
// 地址: 0x140edb490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ca8
int64_t rax_1 = __security_cookie ^ &var_ca8
int64_t r12 = 0
*arg2 = 0
int64_t* rbx = arg3
arg2[1] = 0
int64_t* var_c70 = rbx
int32_t rsi = 0
int32_t var_c68 = 0
void* var_c50
sub_140ebaa70(arg1, &var_c50, *arg3)
void* rdi = var_c50

if (rdi == 0)
label_140edb8a0:
    
    if (*arg2 == 0)
        char rax_42
        
        if (rdi != 0)
            rax_42 = sub_140ab3dc0(rdi + 0x38)
        
        uint64_t var_c30
        int64_t var_ab8
        uint64_t* rax_44
        int32_t rsi_3
        
        if (rdi == 0 || rax_42 != 0)
            rsi_3 = rsi | 8
            rax_44 = sub_140b63b70(rbx, &var_ab8)
        else
            rsi_3 = rsi | 4
            int64_t* rax_43 = sub_140ac6680(rdi + 0x38)
            var_c30 = 0
            int32_t rbx_9 = rax_43[1].d
            int64_t rdi_1 = *rax_43
            int32_t var_c28_1 = rbx_9
            
            if (rbx_9 != 0)
                sub_1405a4c70(&var_c30, rbx_9, 0)
                memcpy(var_c30, rdi_1, rbx_9 * 2)
                rax_44 = &var_c30
            else
                int32_t var_c24_1 = 0
                rax_44 = &var_c30
        
        uint64_t rdi_2 = *rax_44
        *rax_44 = 0
        int32_t rbx_10 = rax_44[1].d
        rax_44[1] = 0
        var_c68.q = rdi_2
        
        if ((rsi_3.b & 8) != 0)
            int64_t rcx_29 = var_ab8
            rsi_3 &= 0xfffffff7
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
        
        if ((rsi_3.b & 4) != 0)
            uint64_t rcx_30 = var_c30
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
        
        if (rbx_10 s<= 1)
            int64_t var_c60 = 0
            int32_t var_c58_1 = 0
            sub_1405947f0(&var_c60, 8)
            int32_t rax_45 = var_c58_1 + 8
            var_c58_1 = rax_45
            
            if (rax_45 s> 0)
                sub_140594770(&var_c60)
            
            int64_t rbx_11 = var_c60
            sub_1405a7220(rbx_11, 8, "Unknown", 8, 0x3f)
            
            if (rdi_2 != 0)
                sub_140a74f90(rdi_2)
            
            var_c68.q = rbx_11
        
        if (arg5 == 0)
            void var_a98
            int64_t* rax_46 = _vfprintf_p_l(&var_a98, u"unrecognized tab", u"TabManagement")
            int64_t var_be0 = *rax_46
            int64_t* rcx_37 = rax_46[1]
            
            if (rcx_37 != 0)
                rcx_37[1].d += 1
            
            int32_t var_bd0_1 = rax_46[2].d
            char var_bc8_1 = 1
            int64_t var_bc0 = 0
            int32_t var_bb8_1 = 0
            void var_a68
            int64_t* rax_48 = sub_140edd410(var_c70, &var_a68)
            int64_t var_c10 = *rax_48
            int64_t* rcx_40 = rax_48[1]
            
            if (rcx_40 != 0)
                rcx_40[1].d += 1
            
            int32_t var_c00_1 = rax_48[2].d
            char var_bf8_1 = 1
            int64_t var_bf0 = 0
            int32_t var_be8_1 = 0
            void var_490
            int64_t* rax_50 = sub_14068d9d0(&var_490)
            sub_14065da90(&rax_50[0x34], &var_be0)
            rax_50[0x37].b = var_bc8_1
            sub_140692f90(&rax_50[0x38], &var_bc0)
            void*** rax_51 = j_sub_140a82f30(0x7a8)
            void*** rdi_3 = rax_51
            
            if (rax_51 == 0)
                rdi_3 = nullptr
            else
                rax_51[1].d = 1
                *(rax_51 + 0xc) = 1
                *rdi_3 = &data_142d8b060
                
                if (rdi_3 != -0x10)
                    sub_140f66da0(&rdi_3[2])
            
            void* var_b68 = &rdi_3[2]
            sub_14065fa30(&var_b68, &rdi_3[2])
            int16_t var_c88
            var_c88.q = 0x798
            void var_c78
            void* var_b58_1 = &var_c78
            void* var_ad8
            void** rax_52 =
                sub_140697520(&var_b68, &var_ad8, rax_50, sub_140e23ed0(&rdi_3[2], "STextBlock"))
            void* var_b38 = *rax_52
            void* rcx_50 = rax_52[1]
            void* var_b30_1 = rcx_50
            
            if (rcx_50 != 0)
                *(rcx_50 + 8) += 1
            
            void var_a30
            int64_t* rax_53 = sub_14068c940(&var_a30)
            rax_53[0x34].d = 2
            *(rax_53 + 0x1a4) = 2
            void*** rax_54 = j_sub_140a82f30(0x3d8)
            void*** rdi_4 = rax_54
            
            if (rax_54 == 0)
                rdi_4 = nullptr
            else
                rax_54[1].d = 1
                *(rax_54 + 0xc) = 1
                *rdi_4 = &data_142d8c570
                
                if (rdi_4 != -0x10)
                    sub_140f20750(&rdi_4[2])
            
            void* var_b80 = &rdi_4[2]
            sub_14065fa30(&var_b80, &rdi_4[2])
            var_c88.q = 0x3c8
            void var_c77
            void* var_b70_1 = &var_c77
            void* rax_55
            int128_t zmm1_3
            rax_55, zmm1_3 = sub_1406937a0(rax_53, &var_b38, sub_140e23ed0(&rdi_4[2], "SBox"))
            void* var_ae8
            void** rax_56 = sub_140695d20(&var_b80, &var_ae8, rax_55, zmm1_3)
            int64_t* rdi_5 = rax_56[1]
            void* r15_3 = *rax_56
            
            if (rdi_5 != 0)
                rdi_5[1].d += 1
            
            void var_790
            int64_t* rax_57 = sub_140e93b40(&var_790)
            sub_14065da90(&rax_57[0x42], &var_c10)
            rax_57[0x45].b = var_bf8_1
            sub_140692f90(&rax_57[0x46], &var_bf0)
            rax_57[0x56].b = 0
            void* var_c20 = r15_3
            
            if (rdi_5 != 0)
                rdi_5[1].d += 1
            
            if (&var_c20 != &rax_57[0x34])
                int128_t zmm1_4 = var_c20.o
                int128_t var_a40_1 = zmm1_4
                var_c20.o = *(rax_57 + 0x1a0)
                *(rax_57 + 0x1a0) = zmm1_4
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    (**rdi_5)(rdi_5)
                    int32_t temp21_1 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (temp21_1 == 1)
                        (*(*rdi_5 + 8))(rdi_5, 1)
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    (**rdi_5)(rdi_5)
                    int32_t temp22_1 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (temp22_1 == 1)
                        (*(*rdi_5 + 8))(rdi_5, 1)
            
            void*** rax_62 = j_sub_140a82f30(0x768)
            void*** rdi_6 = rax_62
            
            if (rax_62 == 0)
                rdi_6 = nullptr
            else
                rax_62[1].d = 1
                *(rax_62 + 0xc) = 1
                *rdi_6 = &data_142edf130
                
                if (rdi_6 != -0x10)
                    sub_140ee3010(&rdi_6[2])
            
            void* var_b98 = &rdi_6[2]
            sub_140918950(&var_b98, &rdi_6[2])
            var_c88.q = 0x758
            void var_c76
            void* var_b88_1 = &var_c76
            void* var_aa8
            void** rax_63 =
                sub_140e9bae0(&var_b98, &var_aa8, rax_57, sub_140e23ed0(&rdi_6[2], "SDockTab"))
            int64_t* rbx_16 = rax_63[1]
            
            if (rbx_16 != 0)
                rbx_16[1].d += 1
            
            void var_a50
            
            if (arg2 == &var_a50)
            label_140edbdcc:
                
                if (rbx_16 != 0)
                    rbx_16[1].d -= 1
                    
                    if (rbx_16[1].d == 1)
                        (**rbx_16)(rbx_16)
                        int32_t temp25_1 = *(rbx_16 + 0xc)
                        *(rbx_16 + 0xc) -= 1
                        
                        if (temp25_1 == 1)
                            (*(*rbx_16 + 8))(rbx_16, 1)
            else
                *arg2 = *rax_63
                int64_t* rdi_7 = arg2[1]
                
                if (rbx_16 == rdi_7)
                    goto label_140edbdcc
                
                arg2[1] = rbx_16
                
                if (rdi_7 != 0)
                    rdi_7[1].d -= 1
                    
                    if (rdi_7[1].d == 1)
                        (**rdi_7)(rdi_7)
                        int32_t temp29_1 = *(rdi_7 + 0xc)
                        *(rdi_7 + 0xc) -= 1
                        
                        if (temp29_1 == 1)
                            (*(*rdi_7 + 8))(rdi_7, 1)
            
            int64_t* var_aa0
            
            if (var_aa0 != 0)
                var_aa0[1].d -= 1
                
                if (var_aa0[1].d == 1)
                    (**var_aa0)(var_aa0)
                    int32_t temp28_1 = *(var_aa0 + 0xc)
                    *(var_aa0 + 0xc) -= 1
                    
                    if (temp28_1 == 1)
                        (*(*var_aa0 + 8))(var_aa0, 1)
            
            if (rdi_6 != 0)
                rdi_6[1].d -= 1
                
                if (rdi_6[1].d == 1)
                    (**rdi_6)(rdi_6)
                    int32_t temp31_1 = *(rdi_6 + 0xc)
                    *(rdi_6 + 0xc) -= 1
                    
                    if (temp31_1 == 1)
                        (*rdi_6)[1](rdi_6, 1)
            
            sub_140e97b20(&var_790)
            int64_t* var_ae0
            
            if (var_ae0 != 0)
                var_ae0[1].d -= 1
                
                if (var_ae0[1].d == 1)
                    (**var_ae0)(var_ae0)
                    int32_t temp33_1 = *(var_ae0 + 0xc)
                    *(var_ae0 + 0xc) -= 1
                    
                    if (temp33_1 == 1)
                        (*(*var_ae0 + 8))(var_ae0, 1)
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t temp35_1 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (temp35_1 == 1)
                        (*rdi_4)[1](rdi_4, 1)
            
            sub_140690290(&var_a30)
            int64_t* var_ad0
            
            if (var_ad0 != 0)
                var_ad0[1].d -= 1
                
                if (var_ad0[1].d == 1)
                    (**var_ad0)(var_ad0)
                    int32_t temp37_1 = *(var_ad0 + 0xc)
                    *(var_ad0 + 0xc) -= 1
                    
                    if (temp37_1 == 1)
                        (*(*var_ad0 + 8))(var_ad0, 1)
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp38_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp38_1 == 1)
                        (*rdi_3)[1](rdi_3, 1)
            
            sub_1406913d0(&var_490)
            sub_140745b20(&var_bf0)
            
            if (rcx_40 != 0)
                rcx_40[1].d -= 1
                
                if (rcx_40[1].d == 1)
                    (**rcx_40)(rcx_40)
                    int32_t rax_81 = *(rcx_40 + 0xc)
                    *(rcx_40 + 0xc) -= 1
                    
                    if (rax_81 == 1)
                        (*(*rcx_40 + 8))(rcx_40, 1)
            
            int64_t* var_a60
            
            if (var_a60 != 0)
                var_a60[1].d -= 1
                
                if (var_a60[1].d == 1)
                    (**var_a60)(var_a60)
                    int32_t rax_85 = *(var_a60 + 0xc)
                    *(var_a60 + 0xc) -= 1
                    
                    if (rax_85 == 1)
                        (*(*var_a60 + 8))(var_a60, 1)
            
            sub_140745b20(&var_bc0)
            
            if (rcx_37 != 0)
                rcx_37[1].d -= 1
                
                if (rcx_37[1].d == 1)
                    (**rcx_37)(rcx_37)
                    int32_t rax_89 = *(rcx_37 + 0xc)
                    *(rcx_37 + 0xc) -= 1
                    
                    if (rax_89 == 1)
                        (*(*rcx_37 + 8))(rcx_37, 1)
            
            int64_t* var_a90
            
            if (var_a90 != 0)
                var_a90[1].d -= 1
                
                if (var_a90[1].d == 1)
                    (**var_a90)(var_a90)
                    int32_t r13_1 = *(var_a90 + 0xc)
                    *(var_a90 + 0xc) -= 1
                    
                    if (r13_1 == 1)
                        (*(*var_a90 + 8))(var_a90, zx.q(r13_1))
            
            sub_140f15e80(*arg2, var_c70)
        
        int64_t rax_94 = var_c68.q
        
        if (rax_94 != 0)
            sub_140a74f90(rax_94)
        
        goto label_140edc044
    
label_140edc051:
    int64_t* rbx_27 = *(arg1 + 0x10)
    
    if (rbx_27 != 0)
        int32_t rax_95 = rbx_27[1].d
        
        if (rax_95 != 0)
            rbx_27[1].d = rax_95 + 1
            rax_95.b = 1
        
        if (rax_95.b == 0)
            rbx_27 = nullptr
        
        if (rbx_27 != 0)
            int32_t rax_96 = rbx_27[1].d
            r12 = *(arg1 + 8)
            rbx_27[1].d = rax_96
            
            if (rax_96 == 0)
                (**rbx_27)(rbx_27)
                int32_t temp6_1 = *(rbx_27 + 0xc)
                *(rbx_27 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_27 + 8))(rbx_27, 1)
    
    int64_t var_ba8 = r12
    
    if (rbx_27 != 0)
        rbx_27[1].d += 1
    
    sub_140f168d0(*arg2, &var_ba8)
    
    if (rbx_27 != 0)
        rbx_27[1].d -= 1
        
        if (rbx_27[1].d == 1)
            (**rbx_27)(rbx_27)
            int32_t temp3_1 = *(rbx_27 + 0xc)
            *(rbx_27 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_27 + 8))(rbx_27, 1)
    
    if (rbx_27 != 0)
        rbx_27[1].d -= 1
        
        if (rbx_27[1].d == 1)
            (**rbx_27)(rbx_27)
            int32_t temp5_1 = *(rbx_27 + 0xc)
            *(rbx_27 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_27 + 8))(rbx_27, 1)
else
    if (*(rdi + 0xb0) == 0)
        goto label_140edb5c9
    
    int64_t* rcx = *(rdi + 0xa8)
    
    if (rcx == 0)
        goto label_140edb5c9
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140edb5c9
    
    int32_t var_b20_1 = rbx[1].d
    int64_t var_b18_1 = *arg4
    int64_t* rax_6 = arg4[1]
    int64_t var_b28 = *rbx
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    int64_t* rcx_1
    
    if (*(rdi + 0xb0) == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(rdi + 0xa8)
    
    char rax_8 = (*(*rcx_1 + 0x48))(rcx_1, &var_b28)
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            int64_t rdx_2 = *rax_6
            (*rdx_2)(rax_6, rdx_2)
            int32_t temp10_1 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rax_6 + 8))(rax_6, 1)
    
    if (rax_8 == 0)
        goto label_140edc044
    
    rbx = var_c70
label_140edb5c9:
    var_c68.q = rdi + 0xe8
    
    if (*(rdi + 0xe8) == 0)
    label_140edb614:
        int32_t var_b00_1 = rbx[1].d
        int64_t var_af8_1 = *arg4
        int64_t* rax_16 = arg4[1]
        int64_t var_b08 = *rbx
        
        if (rax_16 != 0)
            rax_16[1].d += 1
        
        int64_t* rcx_5
        
        if (*(rdi + 0xa0) == 0)
            rcx_5 = nullptr
        else
            rcx_5 = *(rdi + 0x98)
        
        int64_t var_c40
        (*(*rcx_5 + 0x48))(rcx_5, &var_c40, &var_b08)
        int64_t* var_c38
        int64_t* rbx_2 = var_c38
        int64_t rax_18 = var_c40
        int64_t* rsi_2 = rbx_2
        int64_t var_ac8 = rax_18
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            rbx_2 = var_c38
        
        if (arg2 == &var_ac8)
        label_140edb6c6:
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d != 1)
                    rbx_2 = var_c38
                else
                    (**rsi_2)(rsi_2)
                    int32_t temp12_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp12_1 != 1)
                        rbx_2 = var_c38
                    else
                        (*(*rsi_2 + 8))(rsi_2, 1)
                        rbx_2 = var_c38
        else
            *arg2 = rax_18
            int64_t* r15_1 = arg2[1]
            
            if (rsi_2 == r15_1)
                goto label_140edb6c6
            
            arg2[1] = rsi_2
            
            if (r15_1 != 0)
                r15_1[1].d -= 1
                
                if (r15_1[1].d != 1)
                    rbx_2 = var_c38
                else
                    (**r15_1)(r15_1)
                    int32_t temp16_1 = *(r15_1 + 0xc)
                    *(r15_1 + 0xc) -= 1
                    
                    if (temp16_1 != 1)
                        rbx_2 = var_c38
                    else
                        (*(*r15_1 + 8))(r15_1, 1)
                        rbx_2 = var_c38
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp15_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (rax_16 != 0)
            rax_16[1].d -= 1
            
            if (rax_16[1].d == 1)
                (**rax_16)(rax_16)
                int32_t temp17_1 = *(rax_16 + 0xc)
                *(rax_16 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*rax_16 + 8))(rax_16, 1)
        
        sub_140f15e80(*arg2, var_c70)
        void* rbx_4 = rdi + 0x38
        int64_t* var_b48
        int64_t* rax_27
        
        if (sub_140ab3dc0(rbx_4) == 0)
            int64_t var_b50 = *rbx_4
            int64_t* rax_29 = *(rbx_4 + 8)
            var_b48 = rax_29
            
            if (rax_29 != 0)
                rax_29[1].d += 1
                rdi = var_c50
            
            rsi = 2
            int32_t var_b40_1 = *(rbx_4 + 0x10)
            rax_27 = &var_b50
        else
            void var_a80
            rax_27 = sub_140aae2b0(&var_a80, rdi + 0x90)
            rsi = 1
        
        sub_140f14010(*arg2, rax_27)
        
        if ((rsi.b & 2) != 0)
            rsi &= 0xfffffffd
            
            if (var_b48 != 0)
                var_b48[1].d -= 1
                
                if (var_b48[1].d == 1)
                    (**var_b48)(var_b48)
                    int32_t rax_33 = *(var_b48 + 0xc)
                    *(var_b48 + 0xc) -= 1
                    
                    if (rax_33 == 1)
                        (*(*var_b48 + 8))(var_b48, 1)
                
                rdi = var_c50
        
        if ((rsi.b & 1) != 0)
            rsi &= 0xfffffffe
            int64_t* var_a78
            
            if (var_a78 != 0)
                var_a78[1].d -= 1
                
                if (var_a78[1].d == 1)
                    (**var_a78)(var_a78)
                    int32_t rax_37 = *(var_a78 + 0xc)
                    *(var_a78 + 0xc) -= 1
                    
                    if (rax_37 == 1)
                        (*(*var_a78 + 8))(var_a78, 1)
                
                rdi = var_c50
        
        sub_140f13f30(*arg2, sub_140e14f50(rdi + 0x18))
        int64_t* r15_2 = var_c68.q
        *r15_2 = *arg2
        void* rbx_8 = arg2[1]
        int64_t* rcx_23 = r15_2[1]
        
        if (rbx_8 != rcx_23)
            if (rbx_8 != 0)
                *(rbx_8 + 0xc) += 1
                rcx_23 = r15_2[1]
            
            if (rcx_23 != 0)
                int32_t temp18_1 = *(rcx_23 + 0xc)
                *(rcx_23 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*rcx_23 + 8))(rcx_23, 1)
            
            r15_2[1] = rbx_8
        
        rbx = var_c70
        goto label_140edb8a0
    
    void* rax_11 = *(rdi + 0xf0)
    
    if (rax_11 == 0 || *(rax_11 + 8) s<= 0)
        goto label_140edb614
    
    if (*(rdi + 0xc0) != 0)
        int64_t* rcx_4 = *(rdi + 0xb8)
        
        if (rcx_4 == 0)
            goto label_140edc044
        
        if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
            goto label_140edc044
        
        goto label_140edb614
    
label_140edc044:
    
    if (*arg2 != 0)
        goto label_140edc051

int64_t* var_c48

if (var_c48 != 0)
    var_c48[1].d -= 1
    
    if (var_c48[1].d == 1)
        (**var_c48)(var_c48)
        int32_t temp7_1 = *(var_c48 + 0xc)
        *(var_c48 + 0xc) -= 1
        
        if (temp7_1 == 1)
            int64_t r8_11 = *var_c48
            (*(r8_11 + 8))(var_c48, 1, r8_11)

__security_check_cookie(rax_1 ^ &var_ca8)
return arg2
