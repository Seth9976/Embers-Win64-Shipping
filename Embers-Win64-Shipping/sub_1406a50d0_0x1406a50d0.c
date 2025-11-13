// 函数: sub_1406a50d0
// 地址: 0x1406a50d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1048)
void var_1058
int64_t rax_1 = __security_cookie ^ &var_1058
sub_140de8fc0(*(arg1 + 0x208))
int16_t* const rdx = &data_142d40450

if (data_143cddfd8 != 0)
    rdx = data_143cddfd0

uint64_t result = sub_140b1f3f0(&data_143cddfe0, rdx, 0)

if (result.b != 0)
    result = data_143cddfe0
    int64_t rcx_3 = (sx.q(data_143cddfe8) << 4) + result
    uint64_t result_1 = result
    
    while (result != rcx_3)
        int32_t rbx_1 = *(result + 8)
        int64_t rdi_1 = *result
        int64_t var_ff8 = 0
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_ff8, rbx_1, 0)
            memcpy(var_ff8, rdi_1, rbx_1 * 2)
        else
            int32_t var_fec_1 = 0
        
        int64_t var_1020 = 0
        int32_t var_1018_1 = 0
        sub_1405947f0(&var_1020, 2)
        int32_t rax_2 = var_1018_1 + 2
        var_1018_1 = rax_2
        
        if (rax_2 s> 0)
            sub_140594770(&var_1020)
        
        sub_1405a7220(var_1020, 2, U"-", 2, 0x3f)
        int64_t var_ed0
        sub_140a9fca0(&var_ed0, &var_1020)
        int64_t var_fb8 = var_ed0
        void* var_ec8
        void* var_fb0_1 = var_ec8
        
        if (var_ec8 != 0)
            *(var_ec8 + 8) += 1
        
        int128_t zmm0_1 = data_143cdda20
        int128_t zmm1_1 = data_143cdda30
        int32_t var_ec0
        int32_t var_fa8_1 = var_ec0
        int64_t var_e98 = data_143cdda10
        int64_t var_e90_1 = data_143cdda18
        int64_t var_e68_1 = data_143cdda40
        void* rax_9 = data_143cdda48
        char var_fa0_1 = 1
        int64_t* var_f98 = nullptr
        int32_t var_f90_1 = 0
        void* var_e60_1 = rax_9
        int128_t var_e88_1 = zmm0_1
        int128_t var_e78_1 = zmm1_1
        
        if (rax_9 != 0)
            *(rax_9 + 8) += 1
        
        int64_t var_e58_1 = data_143cdda50
        int32_t var_e50_1 = data_143cdda58
        char var_e4c_1 = data_143cdda5c
        char var_e48_1 = 1
        int64_t* var_e40_1 = nullptr
        int32_t var_e38_1 = 0
        uint128_t var_df0
        sub_140acc920(&var_df0, &data_14399f630)
        int16_t* var_1010 = nullptr
        int32_t var_1008_1 = 0
        sub_1405947f0(&var_1010, 0xc)
        int32_t rsi_1 = var_1008_1 + 0xc
        
        if (rsi_1 s> 0)
            sub_140594770(&var_1010)
        
        int16_t* r14_1 = var_1010
        sub_1405a7220(r14_1, 0xc, "transparent", 0xc, 0x3f)
        int64_t rcx_18
        
        if (data_143cdd238 == data_143cdd264)
        label_1406a543c:
            rcx_18 = 0
        else
            int32_t rcx_14
            int16_t* rdx_6
            
            if (rsi_1 == 0)
                rdx_6 = &data_142d40450
                rcx_14 = 0
            else
                rdx_6 = r14_1
                rcx_14 = rsi_1 - 1
            
            void* rbx_2 = data_143cdd270
            int64_t rdx_7 = sx.q(sub_1405969c0(rcx_14, rdx_6))
            void* rax_17 = &data_143cdd268
            
            if (rbx_2 != 0)
                rax_17 = rbx_2
            
            int32_t rbx_3 = *(rax_17 + ((rdx_7 & sx.q(data_143cdd278 - 1)) << 2))
            
            if (rbx_3 == 0xffffffff)
            label_1406a543c_1:
                rcx_18 = 0
            else
                int64_t* rcx_16 = data_143cdd230
                
                while (true)
                    int16_t* const rdx_9 = &data_142d40450
                    
                    if (rsi_1 != 0)
                        rdx_9 = r14_1
                    
                    int16_t* const rcx_17
                    
                    if (rcx_16[sx.q(rbx_3) * 0x14 + 1].d == 0)
                        rcx_17 = &data_142d40450
                    else
                        rcx_17 = rcx_16[sx.q(rbx_3) * 0x14]
                    
                    if (sub_140a54510(rcx_17, rdx_9) == 0)
                        break
                    
                    rcx_16 = data_143cdd230
                    rbx_3 = rcx_16[sx.q(rbx_3) * 0x14 + 0x13].d
                    
                    if (rbx_3 == 0xffffffff)
                        goto label_1406a543c_2
                
                if (rbx_3 == 0xffffffff)
                label_1406a543c_2:
                    rcx_18 = 0
                else
                    rcx_18 = data_143cdd230 + sx.q(rbx_3) * 0xa0
        
        void var_478
        int64_t* rax_21 = sub_14068d9d0(&var_478)
        sub_140692eb0(&rax_21[0x3b], &var_e98)
        sub_14065da90(&rax_21[0x34], &var_fb8)
        rax_21[0x37].b = var_fa0_1
        
        if (&var_f98 != &rax_21[0x38])
            int64_t* rcx_23
            
            if (var_f90_1 != 0)
                rcx_23 = var_f98
            
            if (var_f90_1 != 0 && rcx_23 != 0)
                (*(*rcx_23 + 0x40))(rcx_23, &rax_21[0x38])
            else if (rax_21[0x39].d != 0)
                int64_t* rcx_25 = rax_21[0x38]
                
                if (rcx_25 != 0)
                    (*(*rcx_25 + 0x38))(rcx_25, 0)
                    int64_t rcx_26 = rax_21[0x38]
                    
                    if (rcx_26 != 0)
                        rax_21[0x38] = sub_140a84c80(rcx_26, 0, 0)
                    
                    rax_21[0x39].d = 0
        
        void*** rax_25 = j_sub_140a82f30(0x7a8)
        void*** rdi_4 = rax_25
        
        if (rax_25 == 0)
            rdi_4 = nullptr
        else
            rax_25[1].d = 1
            *(rax_25 + 0xc) = 1
            *rax_25 = &data_142d8b060
            
            if (rax_25 != -0x10)
                sub_140f66da0(&rax_25[2])
        
        void*** var_f00_1 = rdi_4
        void* var_f08 = &rdi_4[2]
        sub_14065fa30(&var_f08, &rdi_4[2])
        int16_t var_1038_2
        var_1038_2.q = 0x798
        void var_1028
        void* var_ef8_1 = &var_1028
        void* var_e00
        void** rax_26 =
            sub_140697520(&var_f08, &var_e00, rax_21, sub_140e23ed0(&rdi_4[2], "STextBlock"))
        int64_t* rsi_3 = rax_26[1]
        void* r12_1 = *rax_26
        
        if (rsi_3 != 0)
            rsi_3[1].d += 1
        
        int64_t rbx_7 = var_ff8
        uint64_t var_1000_1 = 0
        uint64_t var_f68 = 0
        int32_t r15_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_f68, rbx_1, 0)
            uint64_t rax_27 = var_f68
            var_1000_1 = rax_27
            memcpy(rax_27, rbx_7, rbx_1 * 2)
            int32_t var_f5c
            r15_1 = var_f5c
        else
            r15_1 = 0
        
        void var_808
        int64_t* rax_28 = sub_14068cc20(&var_808)
        uint128_t zmm0_2 = var_df0
        uint128_t var_eb8 = zx.o(0)
        rax_28[0x36] = &data_143cdd500
        rax_28[0x62].b = 0
        *(rax_28 + 0x300) = zmm0_2
        
        if (&var_eb8 != &rax_28[0x63])
            zmm0_2 = *(rax_28 + 0x318)
            int128_t var_d30_1 = zx.o(0)
            var_eb8 = zmm0_2
            int64_t* rbx_8 = _mm_bsrli_si128(zmm0_2, 8).q
            *(rax_28 + 0x318) = zx.o(0)
            
            if (rbx_8 != 0)
                rbx_8[1].d -= 1
                
                if (rbx_8[1].d == 1)
                    (**rbx_8)(rbx_8)
                    int32_t temp1_1 = *(rbx_8 + 0xc)
                    *(rbx_8 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_8 + 8))(rbx_8, 1)
        
        rax_28[0x65].b = 1
        void var_d40
        
        if (&var_d40 != &rax_28[0x66] && rax_28[0x67].d != 0)
            int64_t* rcx_37 = rax_28[0x66]
            
            if (rcx_37 != 0)
                (*(*rcx_37 + 0x38))(rcx_37, 0)
                int64_t rcx_38 = rax_28[0x66]
                
                if (rcx_38 != 0)
                    rax_28[0x66] = sub_140a84c80(rcx_38, 0, 0)
                
                rax_28[0x67].d = 0
        
        int64_t* rax_33 = sub_140a84c80(0, 0x30, 0)
        int64_t* rbx_10 = rax_33
        int32_t r14_2 = 3
        
        if (rax_33 != 0)
            *rbx_10 = &data_142d8c010
            rbx_10[1] = var_1000_1
            var_1000_1 = 0
            rbx_10[2].d = rbx_1
            *(rbx_10 + 0x14) = r15_1
            rbx_10[3] = arg1
            rbx_10[5] = sub_140a387b0()
        
        void var_db0
        
        if (&var_db0 != &rax_28[0x44])
            if (rbx_10 != 0)
                (*(*rbx_10 + 0x40))(rbx_10, &rax_28[0x44])
            else if (rax_28[0x45].d != 0)
                int64_t* rcx_50 = rax_28[0x44]
                
                if (rcx_50 != 0)
                    (*(*rcx_50 + 0x38))(rcx_50, 0)
                    int64_t rcx_51 = rax_28[0x44]
                    
                    if (rcx_51 != 0)
                        rax_28[0x44] = sub_140a84c80(rcx_51, 0, 0)
                    
                    rax_28[0x45].d = 0
        
        if (rbx_10 != 0)
            (*(*rbx_10 + 0x38))(rbx_10, 0)
            rbx_10 = sub_140a84c80(rbx_10, 0, 0)
            r14_2 = 0
        
        int64_t* rcx_42 = rbx_10
        
        if (r14_2 == 0)
            rcx_42 = nullptr
        
        if (rcx_42 == 0)
            goto label_1406a5783
        
        (*(*rcx_42 + 0x38))(rcx_42, 0)
        
        if (rbx_10 != 0)
            rbx_10 = sub_140a84c80(rbx_10, 0, 0)
        label_1406a5783:
            
            if (rbx_10 != 0)
                sub_140a74f90(rbx_10)
        
        void* var_fd8 = r12_1
        
        if (rsi_3 != 0)
            rsi_3[1].d += 1
        
        if (&var_fd8 != &rax_28[0x34])
            int128_t zmm1_3 = var_fd8.o
            int128_t var_d20_1 = zmm1_3
            var_fd8.o = *(rax_28 + 0x1a0)
            *(rax_28 + 0x1a0) = zmm1_3
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t temp4_1 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t temp5_1 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
        
        void*** rax_47 = j_sub_140a82f30(0x5c8)
        void*** rdi_7 = rax_47
        
        if (rax_47 == 0)
            rdi_7 = nullptr
        else
            rax_47[1].d = 1
            *(rax_47 + 0xc) = 1
            *rdi_7 = &data_142d8c580
            
            if (rdi_7 != -0x10)
                sub_140ee2d30(&rdi_7[2])
        
        void*** var_f18_1 = rdi_7
        int64_t* var_f20 = &rdi_7[2]
        sub_14065fa30(&var_f20, &rdi_7[2])
        var_1038_2.q = 0x5b8
        void var_1027
        void* var_f10_1 = &var_1027
        int64_t* var_e10
        int64_t** rax_50 =
            sub_140696120(&var_f20, &var_e10, rax_28, sub_140e23ed0(&rdi_7[2], "SButton"))
        int64_t* rbx_13 = rax_50[1]
        int64_t* var_ea8 = *rax_50
        int64_t* var_ea0_1 = rbx_13
        
        if (rbx_13 != 0)
            rbx_13[1].d += 1
        
        void*** rax_51 = j_sub_140a82f30(0x88)
        void*** r14_3 = rax_51
        
        if (rax_51 == 0)
            r14_3 = nullptr
        else
            sub_14068e490(rax_51)
            *r14_3 = &data_142d8add0
        
        int32_t var_e28_1 = 0
        char var_e24_1 = 1
        r14_3[5].d = 0
        r14_3[6].d = 0
        *(r14_3 + 0x34) = 1
        void var_e20
        
        if (&var_e20 != &r14_3[7] && r14_3[8].d != 0)
            int64_t* rcx_57 = r14_3[7]
            
            if (rcx_57 != 0)
                (*(*rcx_57 + 0x38))(rcx_57, 0)
                int64_t rcx_58 = r14_3[7]
                
                if (rcx_58 != 0)
                    r14_3[7] = sub_140a84c80(rcx_58, 0, 0)
                
                r14_3[8].d = 0
        
        sub_140693600(r14_3, &var_ea8)
        
        if (rbx_13 != 0)
            rbx_13[1].d -= 1
            
            if (rbx_13[1].d == 1)
                (**rbx_13)(rbx_13)
                int32_t temp7_1 = *(rbx_13 + 0xc)
                *(rbx_13 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_13 + 8))(rbx_13, 1)
        
        void*** rax_56 = j_sub_140a82f30(0x88)
        void*** rdi_9 = rax_56
        
        if (rax_56 == 0)
            rdi_9 = nullptr
        else
            sub_14068e490(rax_56)
            *rdi_9 = &data_142d8add0
        
        var_1038_2.q = &var_ff8
        int64_t var_dc0
        void* var_da0
        void** rax_58 =
            sub_14069a8f0(arg1, &var_da0, sub_140b18970(&var_dc0, &var_ff8), 1, var_1038_2)
        sub_140693600(rdi_9, rax_58)
        int64_t* rbx_15 = rax_58[1]
        
        if (rbx_15 != 0)
            rbx_15[1].d -= 1
            
            if (rbx_15[1].d == 1)
                (**rbx_15)(rbx_15)
                int32_t temp9_1 = *(rbx_15 + 0xc)
                *(rbx_15 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_15 + 8))(rbx_15, 1)
        
        void var_d00
        int64_t* rax_61 = sub_14068d420(&var_d00)
        int64_t rsi_4 = sx.q(rax_61[0x35].d)
        int32_t rcx_69 = (rsi_4 + 1).d
        rax_61[0x35].d = rcx_69
        
        if (rcx_69 s> *(rax_61 + 0x1ac))
            sub_140638870(&rax_61[0x34])
        
        *(rax_61[0x34] + (rsi_4 << 3)) = rdi_9
        int64_t rdi_10 = sx.q(rax_61[0x35].d)
        int32_t rax_63 = (rdi_10 + 1).d
        rax_61[0x35].d = rax_63
        
        if (rax_63 s> *(rax_61 + 0x1ac))
            sub_140638870(&rax_61[0x34])
        
        *(rax_61[0x34] + (rdi_10 << 3)) = r14_3
        void*** rax_65 = j_sub_140a82f30(0x2e8)
        void*** rdi_11 = rax_65
        
        if (rax_65 == 0)
            rdi_11 = nullptr
        else
            rax_65[1].d = 1
            *(rax_65 + 0xc) = 1
            *rdi_11 = &data_142d8c590
            
            if (rdi_11 != -0x10)
                sub_14068e500(&rdi_11[2])
        
        void*** var_f30_1 = rdi_11
        void* var_f38 = &rdi_11[2]
        sub_14065fa30(&var_f38, &rdi_11[2])
        var_1038_2.q = 0x2d8
        void var_1026
        void* var_f28_1 = &var_1026
        void* var_dd0
        void** rax_66 =
            sub_140696920(&var_f38, &var_dd0, rax_61, sub_140e23ed0(&rdi_11[2], "SHorizontalBox"))
        int64_t* rbx_18 = rax_66[1]
        void* rsi_5 = *rax_66
        
        if (rbx_18 != 0)
            rbx_18[1].d += 1
        
        void var_b50
        int64_t* rax_67 = sub_14068c640(&var_b50)
        rax_67[0x44] = rcx_18 + 0x10
        rax_67[0x45].b = 1
        void var_d80
        
        if (&var_d80 != &rax_67[0x46] && rax_67[0x47].d != 0)
            int64_t* rcx_77 = rax_67[0x46]
            
            if (rcx_77 != 0)
                (*(*rcx_77 + 0x38))(rcx_77, 0)
                int64_t rcx_78 = rax_67[0x46]
                
                if (rcx_78 != 0)
                    rax_67[0x46] = sub_140a84c80(rcx_78, 0, 0)
                
                rax_67[0x47].d = 0
        
        void* var_fc8 = rsi_5
        int64_t* rdi_13 = rbx_18
        
        if (rbx_18 != 0)
            rbx_18[1].d += 1
        
        if (&var_fc8 != &rax_67[0x34])
            int128_t zmm1_6 = var_fc8.o
            int128_t var_d10_1 = zmm1_6
            var_fc8.o = *(rax_67 + 0x1a0)
            rdi_13 = rbx_18
            *(rax_67 + 0x1a0) = zmm1_6
        
        if (rdi_13 != 0)
            rdi_13[1].d -= 1
            
            if (rdi_13[1].d == 1)
                (**rdi_13)(rdi_13)
                int32_t temp12_1 = *(rdi_13 + 0xc)
                *(rdi_13 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rdi_13 + 8))(rdi_13, 1)
        
        if (rbx_18 != 0)
            rbx_18[1].d -= 1
            
            if (rbx_18[1].d == 1)
                (**rbx_18)(rbx_18)
                int32_t temp13_1 = *(rbx_18 + 0xc)
                *(rbx_18 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rbx_18 + 8))(rbx_18, 1)
        
        void*** rax_76 = j_sub_140a82f30(0x4c8)
        void*** rdi_14 = rax_76
        
        if (rax_76 == 0)
            rdi_14 = nullptr
        else
            rax_76[1].d = 1
            *(rax_76 + 0xc) = 1
            *rdi_14 = &data_142d8c5a0
            
            if (rdi_14 != -0x10)
                sub_140f20640(&rdi_14[2])
        
        void*** var_f48_1 = rdi_14
        void* var_f50 = &rdi_14[2]
        sub_14065fa30(&var_f50, &rdi_14[2])
        var_1038_2.q = 0x4b8
        void var_1025
        void* var_f40_1 = &var_1025
        void* var_de0
        void** rax_77 =
            sub_140695920(&var_f50, &var_de0, rax_67, sub_140e23ed0(&rdi_14[2], "SBorder"))
        void* var_f78 = *rax_77
        void* rcx_88 = rax_77[1]
        void* var_f70_1 = rcx_88
        
        if (rcx_88 != 0)
            *(rcx_88 + 8) += 1
        
        int64_t* r14_5 = *(arg1 + 0x208)
        void*** rax_78 = j_sub_140a82f30(0x88)
        void*** rbx_20 = rax_78
        
        if (rax_78 == 0)
            rbx_20 = nullptr
        else
            sub_14068e490(rax_78)
            *rbx_20 = &data_142d8add0
        
        if (r14_5[0x59].b == 0)
            int64_t rsi_6 = sx.q(r14_5[0x58].d)
            int32_t rax_79 = (rsi_6 + 1).d
            r14_5[0x58].d = rax_79
            
            if (rax_79 s> *(r14_5 + 0x2c4))
                sub_140638870(&r14_5[0x57])
            
            *(r14_5[0x57] + (rsi_6 << 3)) = rbx_20
            int64_t rax_81 = r14_5[0x56]
            
            if (rax_81 != 0 && rbx_20[1] != rax_81)
                rbx_20[1] = rax_81
                sub_140de7bf0(rbx_20)
        
        sub_140e19ef0(r14_5, 1)
        int32_t var_ef0_1 = 0
        int32_t var_ee8 = 0
        char var_ee4_1 = 1
        int64_t var_ee0 = 0
        int32_t var_ed8_1 = 0
        rbx_20[5].d = 0
        rbx_20[6].d = 0
        *(rbx_20 + 0x34) = 1
        
        if (&var_ee0 != &rbx_20[7] && rbx_20[8].d != 0)
            int64_t* rcx_93 = rbx_20[7]
            
            if (rcx_93 != 0)
                (*(*rcx_93 + 0x38))(rcx_93, 0)
                int64_t rcx_94 = rbx_20[7]
                
                if (rcx_94 != 0)
                    rbx_20[7] = sub_140a84c80(rcx_94, 0, 0)
                
                rbx_20[8].d = 0
        
        sub_14068f990(&var_ee8)
        sub_140693600(rbx_20, &var_f78)
        sub_140669d70(&var_f78)
        int64_t* var_dd8
        
        if (var_dd8 != 0)
            var_dd8[1].d -= 1
            
            if (var_dd8[1].d == 1)
                (**var_dd8)(var_dd8)
                int32_t temp16_1 = *(var_dd8 + 0xc)
                *(var_dd8 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_dd8 + 8))(var_dd8, 1)
        
        sub_140669d70(&var_f50)
        sub_14068fed0(&var_b50)
        int64_t* var_dc8
        
        if (var_dc8 != 0)
            var_dc8[1].d -= 1
            
            if (var_dc8[1].d == 1)
                (**var_dc8)(var_dc8)
                int32_t temp17_1 = *(var_dc8 + 0xc)
                *(var_dc8 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*var_dc8 + 8))(var_dc8, 1)
        
        sub_140669d70(&var_f38)
        int64_t var_b60
        
        if (var_b60 != 0)
            sub_140a74f90(var_b60)
        
        sub_140660250(&var_d00)
        int64_t rcx_107 = var_dc0
        
        if (rcx_107 != 0)
            sub_140a74f90(rcx_107)
        
        int64_t* var_e08
        
        if (var_e08 != 0)
            var_e08[1].d -= 1
            
            if (var_e08[1].d == 1)
                (**var_e08)(var_e08)
                int32_t temp19_1 = *(var_e08 + 0xc)
                *(var_e08 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*var_e08 + 8))(var_e08, 1)
        
        sub_140669d70(&var_f20)
        sub_1406905f0(&var_808)
        
        if (var_1000_1 != 0)
            sub_140a74f90(var_1000_1)
        
        int64_t* var_df8
        
        if (var_df8 != 0)
            var_df8[1].d -= 1
            
            if (var_df8[1].d == 1)
                (**var_df8)(var_df8)
                int32_t temp21_1 = *(var_df8 + 0xc)
                *(var_df8 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*var_df8 + 8))(var_df8, 1)
        
        sub_140669d70(&var_f08)
        sub_1406913d0(&var_478)
        int16_t* rcx_117 = var_1010
        
        if (rcx_117 != 0)
            sub_140a74f90(rcx_117)
        
        int64_t* rax_94
        
        if (var_e38_1 == 0)
            rax_94 = var_e40_1
        label_1406a5fb0:
            
            if (rax_94 != 0)
                sub_140a74f90(rax_94)
        else if (var_e40_1 != 0)
            (*(*var_e40_1 + 0x38))(var_e40_1, 0)
            rax_94 = sub_140a84c80(var_e40_1, 0, 0)
            int64_t* var_e40_2 = rax_94
            int32_t var_e38_2 = 0
            goto label_1406a5fb0
        sub_140691aa0(&var_e98)
        int64_t* rax_96
        
        if (var_f90_1 == 0)
            rax_96 = var_f98
        label_1406a5ffe:
            
            if (rax_96 != 0)
                sub_140a74f90(rax_96)
        else
            int64_t* rbx_26 = var_f98
            
            if (rbx_26 != 0)
                (*(*rbx_26 + 0x38))(rbx_26, 0)
                rax_96 = sub_140a84c80(rbx_26, 0, 0)
                var_f98 = rax_96
                int32_t var_f90_2 = 0
                goto label_1406a5ffe
        sub_1405970a0(&var_fb8)
        sub_1405970a0(&var_ed0)
        int64_t rcx_127 = var_1020
        
        if (rcx_127 != 0)
            sub_140a74f90(rcx_127)
        
        int64_t rcx_128 = var_ff8
        
        if (rcx_128 != 0)
            sub_140a74f90(rcx_128)
        
        result = result_1 + 0x10
        result_1 = result

__security_check_cookie(rax_1 ^ &var_1058)
return result
