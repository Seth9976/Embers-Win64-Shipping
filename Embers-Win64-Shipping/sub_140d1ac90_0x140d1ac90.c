// 函数: sub_140d1ac90
// 地址: 0x140d1ac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x26d8)
void var_26f8
int64_t rax_1 = __security_cookie ^ &var_26f8
int64_t r12 = 0
int32_t var_2688 = 0
int64_t* rax_2 = *arg2
int64_t* var_2588 = arg2
int64_t* r13 = *rax_2
*arg2 = &rax_2[1]
int128_t* var_2680 = arg1
int32_t i_2 = 0
int32_t var_26c8
int128_t var_2698
int64_t rcx_4
int64_t rcx_91
void*** rbx_1
int32_t i_1

switch (&__dos_header.e_magic[zx.q(jump_table_140d1c788[zx.q(r13[3].d) & 0x1f])])
    case 0x140d1ad1f
        void*** rax_8 = sub_140a82f30(0x78, 0)
        rbx_1 = rax_8
        
        if (rax_8 == 0)
            rbx_1 = nullptr
        else
            sub_140d115d0()
            sub_140cacf30(rbx_1, 0, &data_143e1bd90)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea7690
            void var_2568
            sub_140b58260(&var_2688, *(sub_14060c4d0(&var_2568, *r13) + 0x108), 1)
            int32_t r9_1 = *(r13 + 0x1c)
            int64_t rax_11 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2688, r9_1, *(r13 + 0x24), rax_11)
            *(rbx_1 + 0x3c) = 1
            r12 = 2
            *rbx_1 = &data_142ea7690
        
        if ((r12.b & 2) == 0)
            i_1 = i_2
        else
            int64_t var_2468
            rcx_4 = var_2468
        label_140d1c6b6:
            
            if (rcx_4 == 0)
                i_1 = i_2
            else
                sub_140a74f90(rcx_4)
                i_1 = i_2
    case 0x140d1ade3
        void*** rax_13 = sub_140a82f30(0x78, 0)
        rbx_1 = rax_13
        
        if (rax_13 == 0)
            rbx_1 = nullptr
        else
            sub_140d11470()
            sub_140cacf30(rbx_1, 0, &data_143e1bde0)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea7830
            void var_2670
            void var_2448
            sub_140b58260(&var_2670, *(sub_14060c4d0(&var_2448, *r13) + 0x108), 1)
            int32_t r9_2 = *(r13 + 0x1c)
            int64_t rax_16 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2670, r9_2, *(r13 + 0x24), rax_16)
            *(rbx_1 + 0x3c) = 2
            r12 = 4
            *rbx_1 = &data_142ea7830
        
        if ((r12.b & 4) != 0)
            int64_t var_2348
            rcx_4 = var_2348
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1aea5
        void*** rax_18 = sub_140a82f30(0x78, 0)
        rbx_1 = rax_18
        
        if (rax_18 == 0)
            rbx_1 = nullptr
        else
            sub_140d11680()
            sub_140cacf30(rbx_1, 0, &data_143e1be30)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea79d0
            void var_2668
            void var_2328
            sub_140b58260(&var_2668, *(sub_14060c4d0(&var_2328, *r13) + 0x108), 1)
            int32_t r9_3 = *(r13 + 0x1c)
            int64_t rax_21 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2668, r9_3, *(r13 + 0x24), rax_21)
            *(rbx_1 + 0x3c) = 4
            r12 = 8
            *rbx_1 = &data_142ea79d0
        
        if ((r12.b & 8) != 0)
            int64_t var_2228
            rcx_4 = var_2228
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1af67
        void*** rax_23 = sub_140a82f30(0x78, 0)
        rbx_1 = rax_23
        
        if (rax_23 == 0)
            rbx_1 = nullptr
        else
            sub_140d11520()
            sub_140cacf30(rbx_1, 0, &data_143e1be80)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea7b70
            void var_2660
            void var_2208
            sub_140b58260(&var_2660, *(sub_14060c4d0(&var_2208, *r13) + 0x108), 1)
            int32_t r9_4 = *(r13 + 0x1c)
            int64_t rax_26 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2660, r9_4, *(r13 + 0x24), rax_26)
            *(rbx_1 + 0x3c) = 8
            r12 = 0x10
            *rbx_1 = &data_142ea7b70
        
        if ((r12.b & 0x10) != 0)
            int64_t var_2108
            rcx_4 = var_2108
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b029
        void*** rax_28 = sub_140a82f30(0x78, 0)
        rbx_1 = rax_28
        
        if (rax_28 == 0)
            rbx_1 = nullptr
        else
            sub_140d120d0()
            sub_140cacf30(rbx_1, 0, &data_143e1bed0)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea7d10
            void var_2658
            void var_20e8
            sub_140b58260(&var_2658, *(sub_14060c4d0(&var_20e8, *r13) + 0x108), 1)
            int32_t r9_5 = *(r13 + 0x1c)
            int64_t rax_31 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2658, r9_5, *(r13 + 0x24), rax_31)
            *(rbx_1 + 0x3c) = 2
            r12 = 0x20
            *rbx_1 = &data_142ea7d10
        
        if ((r12.b & 0x20) != 0)
            int64_t var_1fe8
            rcx_4 = var_1fe8
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b0eb
        void*** rax_33 = sub_140a82f30(0x78, 0)
        rbx_1 = rax_33
        
        if (rax_33 == 0)
            rbx_1 = nullptr
        else
            sub_140d12180()
            sub_140cacf30(rbx_1, 0, &data_143e1bf20)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea7eb0
            void var_2650
            void var_1fc8
            sub_140b58260(&var_2650, *(sub_14060c4d0(&var_1fc8, *r13) + 0x108), 1)
            int32_t r9_6 = *(r13 + 0x1c)
            int64_t rax_36 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2650, r9_6, *(r13 + 0x24), rax_36)
            *(rbx_1 + 0x3c) = 4
            r12 = 0x40
            *rbx_1 = &data_142ea7eb0
        
        if ((r12.b & 0x40) != 0)
            int64_t var_1ec8
            rcx_4 = var_1ec8
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b1ad
        void*** rax_38 = sub_140d16610(0x78)
        rbx_1 = rax_38
        
        if (rax_38 == 0)
            rbx_1 = nullptr
        else
            void var_2648
            void var_1ea8
            sub_140b58260(&var_2648, *(sub_14060c4d0(&var_1ea8, *r13) + 0x108), 1)
            int32_t r9_7 = *(r13 + 0x1c)
            int64_t rax_41 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2648, r9_7, *(r13 + 0x24), rax_41)
            *(rbx_1 + 0x3c) = 8
            *rbx_1 = &data_142ea8050
            r12 = 0x80
        
        if (r12.b s< 0)
            int64_t var_1da8
            rcx_4 = var_1da8
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b251
        void*** rax_43 = sub_140d16610(0x78)
        rbx_1 = rax_43
        
        if (rax_43 == 0)
            rbx_1 = nullptr
        else
            void var_2640
            void var_1d88
            sub_140b58260(&var_2640, *(sub_14060c4d0(&var_1d88, *r13) + 0x108), 1)
            int32_t r9_8 = *(r13 + 0x1c)
            int64_t rax_46 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2640, r9_8, *(r13 + 0x24), rax_46)
            *(rbx_1 + 0x3c) = 8
            *rbx_1 = &data_142ea8050
            r12 = 0x100
        
        if (test_bit(r12.d, 8))
            int64_t var_1c88
            rcx_4 = var_1c88
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b2f7
        void*** rax_48 = sub_140d16610(0x78)
        rbx_1 = rax_48
        
        if (rax_48 == 0)
            rbx_1 = nullptr
        else
            void var_2638
            void var_1c68
            sub_140b58260(&var_2638, *(sub_14060c4d0(&var_1c68, *r13) + 0x108), 1)
            int32_t r9_9 = *(r13 + 0x1c)
            int64_t rax_51 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2638, r9_9, *(r13 + 0x24), rax_51)
            *(rbx_1 + 0x3c) = 8
            *rbx_1 = &data_142ea8050
            r12 = 0x200
        
        if (test_bit(r12.d, 9))
            int64_t var_1b68
            rcx_4 = var_1b68
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b39d
        void*** rax_53 = sub_140a82f30(0x78, 0)
        rbx_1 = rax_53
        
        if (rax_53 == 0)
            rbx_1 = nullptr
        else
            sub_140d113c0()
            sub_140cacf30(rbx_1, 0, &data_143e1bfc0)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea81f0
            void var_2630
            void var_1b48
            sub_140b58260(&var_2630, *(sub_14060c4d0(&var_1b48, *r13) + 0x108), 1)
            int32_t r9_10 = *(r13 + 0x1c)
            int64_t rax_56 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2630, r9_10, *(r13 + 0x24), rax_56)
            *(rbx_1 + 0x3c) = 4
            r12 = 0x400
            *rbx_1 = &data_142ea81f0
        
        if (test_bit(r12.d, 0xa))
            int64_t var_1a48
            rcx_4 = var_1a48
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b460
        void*** rax_58 = sub_140a82f30(0x78, 0)
        rbx_1 = rax_58
        
        if (rax_58 == 0)
            rbx_1 = nullptr
        else
            sub_140d11310()
            sub_140cacf30(rbx_1, 0, &data_143e1c010)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea8390
            void var_2628
            void var_1a28
            sub_140b58260(&var_2628, *(sub_14060c4d0(&var_1a28, *r13) + 0x108), 1)
            int32_t r9_11 = *(r13 + 0x1c)
            int64_t rax_61 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2628, r9_11, *(r13 + 0x24), rax_61)
            *(rbx_1 + 0x3c) = 8
            r12 = 0x800
            *rbx_1 = &data_142ea8390
        
        if (test_bit(r12.d, 0xb))
            int64_t var_1928
            rcx_4 = var_1928
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b523
        int64_t r14_1 = r13[6]
        int32_t r15_1 = 0
        uint32_t rdi_1 = 0
        
        if (r14_1 != 0)
            uint64_t count = r13[5]
            char* rax_63 = j_sub_140a82f30(count)
            char* rbx_2 = rax_63
            
            if (rax_63 == 0)
                rbx_2 = nullptr
            else
                memset(rax_63, 0, count)
            
            r14_1(rbx_2)
            int32_t rax_64 = 0
            
            if (count == 0)
                rdi_1 = 0
            else
                uint64_t rcx_45 = 0
                
                while (true)
                    char rdx_33 = rbx_2[rcx_45]
                    
                    if (rdx_33 != 0)
                        r15_1 = rax_64
                        rdi_1 = zx.d(rdx_33)
                        break
                    
                    rax_64 += 1
                    rcx_45 = zx.q(rax_64)
                    
                    if (rcx_45 u>= count)
                        rdi_1 = 0
                        break
            
            j_sub_140a74f90(rbx_2)
        
        void*** rax_65 = sub_140a82f30(0x80, 0)
        
        if (rax_65 == 0)
            rbx_1 = nullptr
        else
            sub_140d11050()
            sub_140cacf30(rax_65, 0, &data_143e1b9d0)
            rax_65[0xa] = 0
            *rax_65 = &data_142ea8530
            void var_2620
            void var_1908
            sub_140b58260(&var_2620, *(sub_14060c4d0(&var_1908, *r13) + 0x108), 1)
            int32_t r9_12 = *(r13 + 0x1c)
            bool cond:0_1 = (r13[3].d & 0x20) != 0
            var_2698 = *arg1
            int32_t rax_68
            rax_68.b = cond:0_1
            char var_26b8_1 = rax_68.b
            rbx_1 = sub_140cf0430(rax_65, &var_2698, &var_2620, r9_12, r15_1, r13[2], rdi_1, 
                *(r13 + 0x24))
            r12 = 0x1000
        
        if (test_bit(r12.d, 0xc))
            int64_t var_1808
            rcx_4 = var_1808
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b660
        void*** rax_72 = sub_140a82f30(0x80, 0)
        rbx_1 = rax_72
        
        if (rax_72 == 0)
            rbx_1 = nullptr
        else
            sub_140d11cb0()
            sub_140cacf30(rbx_1, 0, &data_143e1c060)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea8660
            int64_t rax_73 = r13[5]
            
            if (rax_73 != 0)
                r12 = rax_73()
            
            void var_2618
            void var_17e8
            sub_140b58260(&var_2618, *(sub_14060c4d0(&var_17e8, *r13) + 0x108), 1)
            int32_t r9_13 = *(r13 + 0x1c)
            int64_t rax_77 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2618, r9_13, *(r13 + 0x24), rax_77)
            rbx_1[0xf] = r12
            r12 = 0x2000
            *(rbx_1 + 0x3c) = 8
            *rbx_1 = &data_142ea8660
        
        if (test_bit(r12.d, 0xd))
            int64_t var_16e8
            rcx_4 = var_16e8
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b737
        void*** rax_79 = sub_140a82f30(0x80, 0)
        rbx_1 = rax_79
        
        if (rax_79 == 0)
            rbx_1 = nullptr
        else
            sub_140d122e0()
            sub_140cacf30(rbx_1, 0, &data_143e1c500)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea87c0
            int64_t rax_80 = r13[5]
            
            if (rax_80 != 0)
                r12 = rax_80()
            
            void var_2610
            void var_16c8
            sub_140b58260(&var_2610, *(sub_14060c4d0(&var_16c8, *r13) + 0x108), 1)
            int32_t r9_14 = *(r13 + 0x1c)
            int64_t rax_84 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2610, r9_14, *(r13 + 0x24), rax_84)
            rbx_1[0xf] = r12
            r12 = 0x4000
            *(rbx_1 + 0x3c) = 8
            *rbx_1 = &data_142ea87c0
        
        if (test_bit(r12.d, 0xe))
            int64_t var_15c8
            rcx_4 = var_15c8
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b80e
        void*** rax_86 = sub_140a82f30(0x80, 0)
        rbx_1 = rax_86
        
        if (rax_86 == 0)
            rbx_1 = nullptr
        else
            sub_140d117e0()
            sub_140cacf30(rbx_1, 0, &data_143e1bb60)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea8920
            int64_t rax_87 = r13[5]
            
            if (rax_87 != 0)
                r12 = rax_87()
            
            void var_2608
            void var_15a8
            sub_140b58260(&var_2608, *(sub_14060c4d0(&var_15a8, *r13) + 0x108), 1)
            int32_t r9_15 = *(r13 + 0x1c)
            int64_t rax_91 = r13[2] | 0x8001040000000
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2608, r9_15, *(r13 + 0x24), rax_91)
            rbx_1[0xf] = r12
            r12 = 0x8000
            *(rbx_1 + 0x3c) = 0x1c
            *rbx_1 = &data_142ea8920
        
        if (test_bit(r12.d, 0xf))
            int64_t var_14a8
            rcx_4 = var_14a8
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b8e5
        void*** rax_93 = sub_140a82f30(0x80, 0)
        rbx_1 = rax_93
        
        if (rax_93 == 0)
            rbx_1 = nullptr
        else
            sub_140d11ec0()
            sub_140cacf30(rbx_1, 0, &data_143e1c3b0)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea8a80
            int64_t rax_94 = r13[5]
            
            if (rax_94 != 0)
                r12 = rax_94()
            
            void var_2600
            void var_1488
            sub_140b58260(&var_2600, *(sub_14060c4d0(&var_1488, *r13) + 0x108), 1)
            int32_t r9_16 = *(r13 + 0x1c)
            int64_t rax_98 = r13[2] | 0x8000000000000
            int32_t rax_99 = *(r13 + 0x24)
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2600, r9_16, rax_99, rax_98)
            rbx_1[0xf] = r12
            r12 = 0x10000
            *(rbx_1 + 0x3c) = 0x28
            *rbx_1 = &data_142ea8a80
        
        if (test_bit(r12.d, 0x10))
            int64_t var_1388
            rcx_4 = var_1388
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1b9bc
        void*** rax_100 = sub_140a82f30(0x88, 0)
        rbx_1 = rax_100
        
        if (rax_100 == 0)
            rbx_1 = nullptr
        else
            sub_140d111b0()
            sub_140cacf30(rbx_1, 0, &data_143e1ba70)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea8c10
            int64_t rax_101 = r13[6]
            int64_t rdi_2
            
            if (rax_101 == 0)
                rdi_2 = 0
            else
                rdi_2 = rax_101()
            
            int64_t rax_103 = r13[5]
            
            if (rax_103 != 0)
                r12 = rax_103()
            
            void var_1368
            sub_140b58260(&var_2680, *(sub_14060c4d0(&var_1368, *r13) + 0x108), 1)
            int32_t rax_106 = *(r13 + 0x1c)
            int64_t r14_2 = r13[2]
            int32_t r15_2 = *(r13 + 0x24)
            var_2688 = rax_106
            
            if (rdi_2 == 0)
                rdi_2 = sub_140bdf2e0()
                rax_106 = var_2688
            
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2680, rax_106, r15_2, r14_2 | 0x8001040000200)
            rbx_1[0x10] = r12
            *rbx_1 = &data_142ea8c10
            r12 = 0x20000
            *(rbx_1 + 0x3c) = 8
            rbx_1[0xf] = rdi_2
        
        if (test_bit(r12.d, 0x11))
            int64_t var_1268
            rcx_4 = var_1268
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1bacf
        void*** rax_108 = sub_140a82f30(0x88, 0)
        rbx_1 = rax_108
        
        if (rax_108 == 0)
            rbx_1 = nullptr
        else
            sub_140d11e10()
            sub_140cacf30(rbx_1, 0, &data_143e1c360)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea8d70
            int64_t rax_109 = r13[5]
            
            if (rax_109 != 0)
                r12 = rax_109()
            
            void var_25f8
            void var_1248
            sub_140b58260(&var_25f8, *(sub_14060c4d0(&var_1248, *r13) + 0x108), 1)
            int64_t rdi_3 = r13[2]
            int32_t rsi_1 = *(r13 + 0x24)
            int32_t r14_4 = *(r13 + 0x1c)
            int64_t rax_112 = sub_140bdf2e0()
            var_2698 = *var_2680
            sub_140cd3f40(rbx_1, &var_2698, &var_25f8, r14_4, rsi_1, rdi_3 | 0x8000000000000)
            rbx_1[0x10] = r12
            *rbx_1 = &data_142ea8d70
            r12 = 0x40000
            *(rbx_1 + 0x3c) = 0x28
            rbx_1[0xf] = rax_112
        
        if (test_bit(r12.d, 0x12))
            int64_t var_1148
            rcx_4 = var_1148
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1bbc4
        void*** rax_114 = sub_140a82f30(0x80, 0)
        rbx_1 = rax_114
        
        if (rax_114 == 0)
            rbx_1 = nullptr
        else
            sub_140d11730()
            sub_140cacf30(rbx_1, 0, &data_143e1bb10)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea8ed0
            int64_t rax_115 = r13[5]
            
            if (rax_115 != 0)
                r12 = rax_115()
            
            void var_25f0
            void var_1128
            sub_140b58260(&var_25f0, *(sub_14060c4d0(&var_1128, *r13) + 0x108), 1)
            int32_t r9_19 = *(r13 + 0x1c)
            int64_t rax_119 = r13[2] & 0xffffff7ffff7fff7
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_25f0, r9_19, *(r13 + 0x24), rax_119 | 0x1040000200)
            rbx_1[0xf] = r12
            r12 = 0x80000
            *(rbx_1 + 0x3c) = 0x10
            *rbx_1 = &data_142ea8ed0
        
        if (test_bit(r12.d, 0x13))
            int64_t var_1028
            rcx_4 = var_1028
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1bca8
        void*** rax_122 = sub_140a82f30(0x78, 0)
        rbx_1 = rax_122
        
        if (rax_122 == 0)
            rbx_1 = nullptr
        else
            sub_140d11b50()
            sub_140cacf30(rbx_1, 0, &data_143e1bcf0)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea9000
            void var_25e8
            void var_1008
            sub_140b58260(&var_25e8, *(sub_14060c4d0(&var_1008, *r13) + 0x108), 1)
            int32_t r9_20 = *(r13 + 0x1c)
            int64_t rax_125 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_25e8, r9_20, *(r13 + 0x24), rax_125)
            *(rbx_1 + 0x3c) = 8
            r12 = 0x100000
            *rbx_1 = &data_142ea9000
        
        if (test_bit(r12.d, 0x14))
            int64_t var_f08
            rcx_4 = var_f08
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1bd6b
        void*** rax_127 = sub_140a82f30(0x78, 0)
        rbx_1 = rax_127
        
        if (rax_127 == 0)
            rbx_1 = nullptr
        else
            sub_140d11f70()
            sub_140cacf30(rbx_1, 0, &data_143e1c450)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea9130
            void var_25e0
            void var_ee8
            sub_140b58260(&var_25e0, *(sub_14060c4d0(&var_ee8, *r13) + 0x108), 1)
            int32_t r9_21 = *(r13 + 0x1c)
            int64_t rax_130 = r13[2] | 0x8000000000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_25e0, r9_21, *(r13 + 0x24), rax_130)
            *(rbx_1 + 0x3c) = 0x10
            r12 = 0x200000
            *rbx_1 = &data_142ea9130
        
        if (test_bit(r12.d, 0x15))
            int64_t var_de8
            rcx_4 = var_de8
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1be2e
        void*** rax_132 = sub_140a82f30(0x88, 0)
        rbx_1 = rax_132
        
        if (rax_132 == 0)
            rbx_1 = nullptr
        else
            sub_140cea1e0()
            sub_140cacf30(rbx_1, 0, &data_143e1b870)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea3c20
            void var_dc8
            sub_140b58260(&i_2, *(sub_14060c4d0(&var_dc8, *r13) + 0x108), 1)
            int32_t r9_22 = *(r13 + 0x1c)
            int32_t rdi_5 = r13[5].d
            int64_t rax_135 = r13[2] | 0x200
            int32_t rax_136 = *(r13 + 0x24)
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &i_2, r9_22, rax_136, rax_135)
            rbx_1[0xf] = 0
            r12 = 0x400000
            *rbx_1 = &data_142ea3c20
            rbx_1[0x10].d = rdi_5
            *(rbx_1 + 0x3c) = 0x10
        
        if (not(test_bit(r12.d, 0x16)))
            i_1 = 1
        else
            int64_t var_cc8
            rcx_91 = var_cc8
        label_140d1bef2:
            
            if (rcx_91 == 0)
                i_1 = 1
            else
                sub_140a74f90(rcx_91)
                i_1 = 1
    case 0x140d1bf06
        void*** rax_137 = sub_140a82f30(0xa8, 0)
        
        if (rax_137 == 0)
            rbx_1 = nullptr
        else
            sub_140d11890()
            sub_140cacf30(rax_137, 0, &data_143e1bbb0)
            rax_137[0xa] = 0
            *rax_137 = &data_142ea9260
            void var_25d8
            void var_ca8
            sub_140b58260(&var_25d8, *(sub_14060c4d0(&var_ca8, *r13) + 0x108), 1)
            int32_t rax_139 = r13[5].d
            int32_t r9_23 = *(r13 + 0x1c)
            int64_t rax_140 = r13[2]
            int32_t rax_141 = *(r13 + 0x24)
            var_2698 = *arg1
            rbx_1 = sub_140cf0530(rax_137, &var_2698, &var_25d8, r9_23, rax_141, rax_140, rax_139)
            r12 = 0x800000
        
        int64_t var_ba8
        
        if (test_bit(r12.d, 0x17) && var_ba8 != 0)
            sub_140a74f90(var_ba8)
        
        i_1 = 2
    case 0x140d1bfca
        void*** rax_143 = sub_140a82f30(0x98, 0)
        
        if (rax_143 == 0)
            rbx_1 = nullptr
        else
            sub_140d11d60()
            sub_140cacf30(rax_143, 0, &data_143e1c310)
            rax_143[0xa] = 0
            *rax_143 = &data_142ea9390
            void var_25d0
            void var_b88
            sub_140b58260(&var_25d0, *(sub_14060c4d0(&var_b88, *r13) + 0x108), 1)
            int64_t rax_145 = r13[2]
            int32_t r9_24 = *(r13 + 0x1c)
            int32_t rax_146 = *(r13 + 0x24)
            var_2698 = *arg1
            rbx_1 = sub_140cf08f0(rax_143, &var_2698, &var_25d0, r9_24, rax_146, rax_145)
            r12 = 0x1000000
        
        if (test_bit(r12.d, 0x18))
            int64_t var_a88
            rcx_91 = var_a88
            goto label_140d1bef2
        
        i_1 = 1
    case 0x140d1c077
        void*** rax_148 = sub_140a82f30(0x80, 0)
        
        if (rax_148 == 0)
            rbx_1 = nullptr
        else
            sub_140d12020()
            sub_140cacf30(rax_148, 0, &data_143e1c4a0)
            rax_148[0xa] = 0
            *rax_148 = &data_142ea94c0
            int64_t rax_149 = r13[5]
            
            if (rax_149 != 0)
                r12 = rax_149()
            
            void var_25c8
            void var_a68
            sub_140b58260(&var_25c8, *(sub_14060c4d0(&var_a68, *r13) + 0x108), 1)
            int64_t rax_152 = r13[2]
            int32_t r9_25 = *(r13 + 0x1c)
            var_26c8.q = r12
            int32_t rax_153 = *(r13 + 0x24)
            var_2698 = *arg1
            rbx_1 = sub_140cf0940(rax_148, &var_2698, &var_25c8, r9_25, rax_153, rax_152, var_26c8)
            r12 = 0x2000000
        
        if (test_bit(r12.d, 0x19))
            int64_t var_968
            rcx_4 = var_968
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1c13b
        void*** rax_155 = sub_140a82f30(0x80, 0)
        rbx_1 = rax_155
        
        if (rax_155 == 0)
            rbx_1 = nullptr
        else
            sub_140d11260()
            sub_140cacf30(rbx_1, 0, &data_143e1bac0)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea95f0
            int64_t rax_156 = r13[5]
            
            if (rax_156 != 0)
                r12 = rax_156()
            
            void var_2578
            void var_948
            sub_140b58260(&var_2578, *(sub_14060c4d0(&var_948, *r13) + 0x108), 1)
            int32_t r9_26 = *(r13 + 0x1c)
            int64_t rax_160 = r13[2] | 0x1000000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2578, r9_26, *(r13 + 0x24), rax_160)
            rbx_1[0xf] = r12
            r12 = 0x4000000
            *(rbx_1 + 0x3c) = 0x10
            *rbx_1 = &data_142ea95f0
        
        if (test_bit(r12.d, 0x1a))
            int64_t var_848
            rcx_4 = var_848
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1c218
        void*** rax_162 = sub_140a82f30(0x80, 0)
        rbx_1 = rax_162
        
        if (rax_162 == 0)
            rbx_1 = nullptr
        else
            sub_140d119f0()
            sub_140cacf30(rbx_1, 0, &data_143e1bc50)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea9ad0
            int64_t rax_163 = r13[5]
            
            if (rax_163 != 0)
                r12 = rax_163()
            
            void var_25c0
            void var_828
            sub_140b58260(&var_25c0, *(sub_14060c4d0(&var_828, *r13) + 0x108), 1)
            int32_t r9_27 = *(r13 + 0x1c)
            int64_t rax_167 = r13[2] | 0x200
            int32_t rax_168 = *(r13 + 0x24)
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_25c0, r9_27, rax_168, rax_167)
            rbx_1[0xf] = r12
            r12 = 0x8000000
            *(rbx_1 + 0x3c) = 0x10
            *rbx_1 = &data_142ea9ad0
        
        if (test_bit(r12.d, 0x1b))
            int64_t var_728
            rcx_4 = var_728
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1c2e7
        void*** rax_169 = sub_140a82f30(0x80, 0)
        rbx_1 = rax_169
        
        if (rax_169 == 0)
            rbx_1 = nullptr
        else
            sub_140d11aa0()
            sub_140cacf30(rbx_1, 0, &data_143e1bca0)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea9c30
            int64_t rax_170 = r13[5]
            
            if (rax_170 != 0)
                r12 = rax_170()
            
            void var_25b8
            void var_708
            sub_140b58260(&var_25b8, *(sub_14060c4d0(&var_708, *r13) + 0x108), 1)
            int32_t r9_28 = *(r13 + 0x1c)
            int64_t rax_174 = r13[2] | 0x1000000000
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_25b8, r9_28, *(r13 + 0x24), rax_174)
            rbx_1[0xf] = r12
            r12 = 0x10000000
            *(rbx_1 + 0x3c) = 1
            *rbx_1 = &data_142ea9c30
        
        if (test_bit(r12.d, 0x1c))
            int64_t var_608
            rcx_4 = var_608
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1c3be
        void*** rax_176 = sub_140d16540(0x78)
        rbx_1 = rax_176
        
        if (rax_176 == 0)
            rbx_1 = nullptr
        else
            void var_25b0
            void var_5e8
            sub_140b58260(&var_25b0, *(sub_14060c4d0(&var_5e8, *r13) + 0x108), 1)
            int64_t rax_178 = r13[2]
            int32_t r9_29 = *(r13 + 0x1c)
            int32_t rax_179 = *(r13 + 0x24)
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_25b0, r9_29, rax_179, rax_178)
            *(rbx_1 + 0x3c) = 0x18
            *rbx_1 = &data_142eaefe8
            r12 = 0x20000000
        
        if (test_bit(r12.d, 0x1d))
            int64_t var_4e8
            rcx_4 = var_4e8
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1c457
        void*** rax_180 = sub_140a82f30(0x88, 0)
        
        if (rax_180 == 0)
            rbx_1 = nullptr
        else
            sub_140ccf960()
            sub_140cacf30(rax_180, 0, &data_143e1b210)
            rax_180[0xa] = 0
            *rax_180 = &data_142e9fd38
            int64_t rax_181 = r13[5]
            
            if (rax_181 != 0)
                r12 = rax_181()
            
            void var_25a8
            void var_4c8
            sub_140b58260(&var_25a8, *(sub_14060c4d0(&var_4c8, *r13) + 0x108), 1)
            int64_t rax_184 = r13[2]
            int32_t r9_30 = *(r13 + 0x1c)
            var_26c8.q = r12
            int32_t rax_185 = *(r13 + 0x24)
            var_2698 = *arg1
            rbx_1 = sub_140cace90(rax_180, &var_2698, &var_25a8, r9_30, rax_185, rax_184, var_26c8)
            r12 = 0x40000000
        
        if (test_bit(r12.d, 0x1e))
            int64_t var_3c8
            rcx_91 = var_3c8
            goto label_140d1bef2
        
        i_1 = 1
    case 0x140d1c51b
        void*** rax_187 = sub_140a82f30(0x80, 0)
        rbx_1 = rax_187
        
        if (rax_187 == 0)
            rbx_1 = nullptr
        else
            sub_140ccfb50()
            sub_140cacf30(rbx_1, 0, &data_143e1b2d0)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142e9ff38
            void var_25a0
            void var_3a8
            sub_140b58260(&var_25a0, *(sub_14060c4d0(&var_3a8, *r13) + 0x108), 1)
            int64_t rax_189 = r13[5]()
            int32_t r9_31 = *(r13 + 0x1c)
            int64_t rcx_128 = r13[2] | 0x8000000000000
            int32_t rcx_129 = *(r13 + 0x24)
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_25a0, r9_31, rcx_129, rcx_128)
            *(rbx_1 + 0x3c) = 0x20
            r12 = 0x80000000
            *rbx_1 = &data_142e9ff38
            rbx_1[0xf] = rax_189
        
        if (r12.d s< 0)
            int64_t var_2a8
            rcx_4 = var_2a8
            goto label_140d1c6b6
        
        i_1 = i_2
    case 0x140d1c5e9
        void*** rax_190 = sub_140a82f30(0x80, 0)
        rbx_1 = rax_190
        
        if (rax_190 == 0)
            rbx_1 = nullptr
        else
            sub_140d11100()
            sub_140cacf30(rbx_1, 0, &data_143e1ba20)
            rbx_1[0xa] = 0
            *rbx_1 = &data_142ea74f0
            int64_t rax_191 = r13[5]
            
            if (rax_191 != 0)
                r12 = rax_191()
            
            void var_2598
            void var_288
            sub_140b58260(&var_2598, *(sub_14060c4d0(&var_288, *r13) + 0x108), 1)
            int32_t r9_32 = *(r13 + 0x1c)
            int64_t rax_195 = r13[2] | 0x8001040000200
            var_2698 = *arg1
            sub_140cd3f40(rbx_1, &var_2698, &var_2598, r9_32, *(r13 + 0x24), rax_195)
            rbx_1[0xf] = r12
            r12 = 1
            *(rbx_1 + 0x3c) = 1
            *rbx_1 = &data_142ea74f0
        
        if ((r12.b & 1) != 0)
            int64_t var_188
            rcx_4 = var_188
            goto label_140d1c6b6
        
        i_1 = i_2

rbx_1[7].d = r13[4].d
char* rdx_97 = r13[1]

if (rdx_97 != 0)
    void var_168
    rbx_1[0xa] = *sub_140b58260(&var_2698, *(sub_14060c4d0(&var_168, rdx_97) + 0x108), 1)
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)

int32_t* result = arg3
*result -= 1

if (i_1 != 0)
    int64_t* rsi_2 = var_2588
    int32_t i
    
    do
        var_2698:8.b = 0
        var_2698.q = rbx_1
        var_2588.o = var_2698
        sub_140d1ac90(&var_2588, rsi_2, result)
        result = arg3
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_26f8)
return result
