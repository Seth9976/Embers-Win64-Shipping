// 函数: sub_141d8c4d0
// 地址: 0x141d8c4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8c8
int64_t rax_1 = __security_cookie ^ &var_8c8
int64_t* rax_2 = sub_141d88590()
int64_t r8 = *rax_2
char result = (*(r8 + 0x60))(rax_2, arg3, r8)

if (result == 0)
    void var_5c8
    int64_t* rax_3 = sub_141b7aa70(&var_5c8)
    *(rax_3 + 0x1c9) = 0
    void*** rax_4 = j_sub_140a82f30(0x410)
    void*** rdi_1 = rax_4
    
    if (rax_4 == 0)
        rdi_1 = nullptr
    else
        rax_4[1].d = 1
        *(rax_4 + 0xc) = 1
        *rdi_1 = &data_143237de0
        
        if (rdi_1 != -0x10)
            sub_140f67000(&rdi_1[2])
    
    void* var_808 = &rdi_1[2]
    sub_140918950(&var_808, &rdi_1[2])
    int64_t var_8a8_1 = 0x400
    void var_888
    void* var_7f8_1 = &var_888
    void* var_730
    void** rax_5 = sub_141d86480(&var_808, &var_730, rax_3, sub_140e23ed0(&rdi_1[2], "SViewport"))
    int64_t* rbx_2 = rax_5[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    void var_700
    
    if (arg1 + 0x18 == &var_700)
    label_141d8c64c:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    else
        *(arg1 + 0x18) = *rax_5
        int64_t* rdi_2 = *(arg1 + 0x20)
        
        if (rbx_2 == rdi_2)
            goto label_141d8c64c
        
        *(arg1 + 0x20) = rbx_2
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp7_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    int64_t* var_728
    
    if (var_728 != 0)
        var_728[1].d -= 1
        
        if (var_728[1].d == 1)
            (**var_728)(var_728)
            int32_t temp6_1 = *(var_728 + 0xc)
            *(var_728 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_728 + 8))(var_728, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp9_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*rdi_1)[1](rdi_1, 1)
    
    void var_3d8
    sub_140745b20(&var_3d8)
    int64_t* var_3f0
    
    if (var_3f0 != 0)
        var_3f0[1].d -= 1
        
        if (var_3f0[1].d == 1)
            (**var_3f0)(var_3f0)
            int32_t temp11_1 = *(var_3f0 + 0xc)
            *(var_3f0 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_3f0 + 8))(var_3f0, 1)
    
    void var_410
    sub_140745b20(&var_410)
    int64_t* var_420
    
    if (var_420 != 0)
        var_420[1].d -= 1
        
        if (var_420[1].d == 1)
            (**var_420)(var_420)
            int32_t temp12_1 = *(var_420 + 0xc)
            *(var_420 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_420 + 8))(var_420, 1)
    
    sub_140ddea30(&var_5c8)
    void*** rax_17 = sub_140ee0fd0()
    void* var_7d8 = &rax_17[2]
    sub_140918950(&var_7d8, &rax_17[2])
    int64_t var_8a8_2 = 0x450
    void var_887
    void* var_7c8_1 = &var_887
    sub_140e23ed0(&rax_17[2], "SThrobber")
    void var_218
    int64_t* rax_18
    int128_t zmm1_1
    rax_18, zmm1_1 = sub_140ee1870(&var_218)
    void* var_710
    void** rax_19 = sub_140ee5e40(&var_7d8, &var_710, rax_18, zmm1_1)
    void* var_7a8 = *rax_19
    void* rcx_26 = rax_19[1]
    void* var_7a0_1 = rcx_26
    
    if (rcx_26 != 0)
        *(rcx_26 + 8) += 1
    
    int128_t var_758
    __builtin_memcpy(&var_758, 
        "\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00\x20\x41\x01", 0x11)
    int64_t var_740 = 0
    int32_t var_738_1 = 0
    void*** rax_20 = j_sub_140a82f30(0x88)
    int32_t zmm7_1 = 0x3f800000
    void*** rbx_8 = rax_20
    
    if (rax_20 == 0)
        rbx_8 = nullptr
    else
        sub_140ddb700(rax_20)
        int32_t var_7c0_1 = 0x3f800000
        *rbx_8 = &data_142d8add0
        rbx_8[4].w = 0
        rbx_8[5].d = 1
        rbx_8[6].d = 0x3f800000
        *(rbx_8 + 0x34) = 1
        rbx_8[7] = 0
        rbx_8[8].d = 0
        char var_7bc_1 = 1
        int64_t var_7b8 = 0
        int32_t var_7b0_1 = 0
        int32_t var_778_1 = 1
        int32_t var_770_1 = 0x3f800000
        char var_76c_1 = 1
        int64_t var_768 = 0
        int32_t var_760_1 = 0
        sub_140745b20(&var_768)
        sub_140745b20(&var_7b8)
        rbx_8[0xb].b = 1
        rbx_8[0xc] = 0
        rbx_8[0xd].d = 0
        rbx_8[0xe].d = 0
        *(rbx_8 + 0x74) = 1
        rbx_8[0xf] = 0
        rbx_8[0x10].d = 0
        *rbx_8 = &data_142d8add0
    
    rbx_8[4].w = 0x303
    __builtin_memcpy(&rbx_8[9], 
        "\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00\x20\x41\x01", 0x11)
    
    if (&var_740 != &rbx_8[0xc] && rbx_8[0xd].d != 0)
        int64_t* rcx_30 = rbx_8[0xc]
        
        if (rcx_30 != 0)
            (*(*rcx_30 + 0x38))(rcx_30, 0)
            int64_t rcx_31 = rbx_8[0xc]
            
            if (rcx_31 != 0)
                rbx_8[0xc] = sub_140a84c80(rcx_31, 0, 0)
            
            rbx_8[0xd].d = 0
    
    sub_140745b20(&var_740)
    void* rax_23 = sub_140693860(rbx_8, &var_7a8)
    void var_3c8
    int64_t* rax_24 = sub_14068d420(&var_3c8)
    int64_t rdi_4 = sx.q(rax_24[0x35].d)
    int32_t rcx_35 = (rdi_4 + 1).d
    rax_24[0x35].d = rcx_35
    
    if (rcx_35 s> *(rax_24 + 0x1ac))
        sub_140638870(&rax_24[0x34])
    
    *(rax_24[0x34] + (rdi_4 << 3)) = rax_23
    void*** rax_26 = j_sub_140a82f30(0x2e8)
    void*** rdi_5 = rax_26
    
    if (rax_26 == 0)
        rdi_5 = nullptr
    else
        rax_26[1].d = 1
        *(rax_26 + 0xc) = 1
        *rdi_5 = &data_142d8c590
        
        if (rdi_5 != -0x10)
            sub_14068e550(&rdi_5[2])
    
    void* var_7f0 = &rdi_5[2]
    sub_14065fa30(&var_7f0, &rdi_5[2])
    int64_t var_8a8_3 = 0x2d8
    void var_886
    void* var_7e0_1 = &var_886
    void* var_720
    void** rax_27 =
        sub_140696920(&var_7f0, &var_720, rax_24, sub_140e23ed0(&rdi_5[2], "SVerticalBox"))
    void* var_798 = *rax_27
    void* rcx_42 = rax_27[1]
    void* var_790_1 = rcx_42
    
    if (rcx_42 != 0)
        *(rcx_42 + 8) += 1
    
    sub_140f8a540(*(arg1 + 0x18), &var_798)
    int64_t* var_718
    
    if (var_718 != 0)
        var_718[1].d -= 1
        
        if (var_718[1].d == 1)
            (**var_718)(var_718)
            int32_t temp15_1 = *(var_718 + 0xc)
            *(var_718 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_718 + 8))(var_718, 1)
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t temp16_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*rdi_5)[1](rdi_5, 1)
    
    int64_t var_228
    
    if (var_228 != 0)
        sub_140a74f90(var_228)
    
    sub_140660250(&var_3c8)
    int64_t* var_708
    
    if (var_708 != 0)
        var_708[1].d -= 1
        
        if (var_708[1].d == 1)
            (**var_708)(var_708)
            int32_t temp19_1 = *(var_708 + 0xc)
            *(var_708 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*var_708 + 8))(var_708, 1)
    
    if (rax_17 != 0)
        rax_17[1].d -= 1
        
        if (rax_17[1].d == 1)
            (**rax_17)(rax_17)
            int32_t temp20_1 = *(rax_17 + 0xc)
            *(rax_17 + 0xc) -= 1
            
            if (temp20_1 == 1)
                (*rax_17)[1](rax_17, 1)
    
    sub_140ddea30(&var_218)
    int32_t var_880
    (*(*arg2 + 0x18))(arg2, &var_880)
    int32_t* rax_37
    
    if (*data_143f38778 != 0 && *(data_143f5b298 + 0xaf8) != 0)
        rax_37 = (*(*arg2 + 0x198))(arg2)
    
    if (*data_143f38778 == 0 || (*(data_143f5b298 + 0xaf8) != 0 && rax_37.b != 0))
        rax_37.b = 0
    else
        rax_37.b = 1
    
    int32_t var_87c
    
    if (var_880 s> 0 && var_87c s> 0 && rax_37.b != 0)
        int64_t* r14_3 = arg2[6]
        void*** rax_39 = j_sub_140a82f30(0x310)
        void*** rdi_6
        
        if (rax_39 == 0)
            rdi_6 = nullptr
        else
            void* var_788 = *(arg1 + 0x18)
            void* rcx_58 = *(arg1 + 0x20)
            void* var_780_1 = rcx_58
            
            if (rcx_58 != 0)
                *(rcx_58 + 8) += 1
            
            void*** rax_40
            rax_40, zmm7_1 = sub_142329f50(rax_39, r14_3, &var_788)
            rdi_6 = rax_40
        
        void*** rax_41 = j_sub_140a82f30(0x18)
        void*** rbx_14 = rax_41
        
        if (rax_41 == 0)
            rbx_14 = nullptr
        else
            rax_41[1].d = 1
            *(rax_41 + 0xc) = 1
            *rbx_14 = &data_143084930
            rbx_14[2] = rdi_6
        
        void*** var_870 = rdi_6
        void*** var_868_1 = rbx_14
        
        if (arg1 + 8 == &var_870)
        label_141d8cc3a:
            
            if (rbx_14 != 0)
                rbx_14[1].d -= 1
                
                if (rbx_14[1].d == 1)
                    (**rbx_14)(rbx_14)
                    int32_t temp29_1 = *(rbx_14 + 0xc)
                    *(rbx_14 + 0xc) -= 1
                    
                    if (temp29_1 == 1)
                        (*rbx_14)[1](rbx_14, 1)
        else
            *(arg1 + 8) = rdi_6
            int64_t* rdi_7 = *(arg1 + 0x10)
            var_870 = nullptr
            
            if (rbx_14 == rdi_7)
                goto label_141d8cc3a
            
            void*** var_868_2 = nullptr
            *(arg1 + 0x10) = rbx_14
            
            if (rdi_7 != 0)
                rdi_7[1].d -= 1
                
                if (rdi_7[1].d == 1)
                    (**rdi_7)(rdi_7)
                    int32_t temp31_1 = *(rdi_7 + 0xc)
                    *(rdi_7 + 0xc) -= 1
                    
                    if (temp31_1 == 1)
                        (*(*rdi_7 + 8))(rdi_7, 1)
                
                rbx_14 = var_868_2
                goto label_141d8cc3a
        
        int64_t* rcx_65 = *(arg1 + 8) + 8
        var_8a8_3.d = 0
        (*(*rcx_65 + 0x1a8))(rcx_65, 0, zx.q(var_880), zx.q(var_87c), var_8a8_3, 0)
        int64_t* rcx_67 = *(arg1 + 8) + 8
        (*(*rcx_67 + 0x138))(rcx_67, 0)
        int64_t rdi_8 = *(arg1 + 8)
        uint32_t rbx_15 = zx.d(*((*(*r14_3 + 0x30))(r14_3) + 0x118))
        void* rax_51 = (*(*r14_3 + 0x30))(r14_3)
        int64_t rdx_11 = rdi_8 + 8
        var_8a8_3.d = rbx_15
        
        if (rdi_8 == 0)
            rdx_11 = 0
        
        void var_6d8
        sub_1423fa990(&var_6d8, rdx_11, 0, rax_51, var_8a8_3.d, 0, zmm7_1)
        int64_t rax_52 = *(arg1 + 8)
        int64_t r9_6 = *r14_3
        int64_t rdx_12 = rax_52 + 8
        
        if (rax_52 == 0)
            rdx_12 = 0
        
        (*(r9_6 + 0x20))(r14_3, rdx_12, &var_6d8, r9_6)
        sub_14240e030(&var_6d8, 0)
        void* rax_53 = *(arg1 + 8)
        int64_t* rbx_16 = rax_53 + 8
        
        if (rax_53 == 0)
            rbx_16 = nullptr
        
        if (sub_140a80f40() == 0)
            uint32_t rax_55
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_55.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_55.b == 0))
                void var_6f0
                void** rax_56 = sub_141d8d1c0(&var_6f0, nullptr, 0xff)
                *(*rax_56 + 0x10) = rbx_16
                void* rcx_77 = *rax_56
                int32_t r8_10 = rax_56[2].d
                int64_t* rdx_13 = rax_56[1]
                int64_t* rbx_17 = *(rcx_77 + 0x20)
                int64_t* var_850_1 = rbx_17
                int32_t* rdi_9 = &rbx_17[9]
                
                if (rbx_17 != 0)
                    *rdi_9 += 1
                    rbx_17 = var_850_1
                
                sub_1405a5630(rcx_77, rdx_13, r8_10, 1)
                
                if (rbx_17 != 0)
                    int32_t rax_57 = *rdi_9
                    *rdi_9 -= 1
                    
                    if (rax_57 == 1)
                        sub_140a2f6e0(var_850_1)
            else
                (*(*rbx_16 + 0x150))(rbx_16, &data_143f02b98, 0, 0)
        else
            (*(*rbx_16 + 0x150))(rbx_16, &data_143f02b98, 0, 0)
        
        void*** rax_58 = j_sub_140a82f30(0x18)
        void*** r14_4 = rax_58
        
        if (rax_58 == 0)
            r14_4 = nullptr
        else
            int64_t* rcx_80 = *(arg1 + 8) + 8
            int64_t rdx_14 = *rcx_80
            void* r15_2 = *(*(rdx_14 + 8))(rcx_80, rdx_14)
            void* rbx_18 = r15_2
            void* var_878 = rbx_18
            
            if (r15_2 != 0)
                *(r15_2 + 8) += 1
                rbx_18 = var_878
            
            int64_t rdi_10 = var_880.q
            *r14_4 = &data_143238218
            void*** rax_60 = j_sub_140a82f30(0x28)
            void*** rsi_2 = rax_60
            
            if (rax_60 == 0)
                rsi_2 = nullptr
            else
                void* var_810 = rbx_18
                
                if (r15_2 != 0)
                    *(r15_2 + 8) += 1
                    rbx_18 = var_878
                
                *rsi_2 = &data_14306c4e0
                rsi_2[1] = rbx_18
                
                if (r15_2 != 0)
                    *(r15_2 + 8) += 1
                
                rsi_2[3].d = 0xffffffff
                *(rsi_2 + 0x1c) = 4
                *rsi_2 = &data_1432381b8
                rsi_2[2] = &data_1432381d8
                *(rsi_2 + 0x24) = rdi_10:4.d
                rsi_2[4].d = rdi_10.d
                sub_1405d1550(&var_810)
            
            r14_4[1] = rsi_2
            void* rcx_82 = &rsi_2[2]
            r14_4[2] = rdi_10
            
            if (rsi_2 == 0)
                rcx_82 = nullptr
            
            sub_141997e80(rcx_82)
            sub_1405d1550(&var_878)
        
        int64_t* rax_62 = j_sub_140a82f30(0x18)
        int64_t* rbx_19 = rax_62
        
        if (rax_62 == 0)
            rbx_19 = nullptr
        else
            rax_62[1].d = 1
            *(rax_62 + 0xc) = 1
            *rbx_19 = &data_142d42ea8
            rbx_19[2] = r14_4
        
        void*** var_860 = r14_4
        int64_t* var_858_1 = rbx_19
        
        if (arg1 + 0x28 == &var_860)
        label_141d8cf7e:
            
            if (rbx_19 != 0)
                rbx_19[1].d -= 1
                
                if (rbx_19[1].d == 1)
                    (**rbx_19)(rbx_19)
                    int32_t temp33_1 = *(rbx_19 + 0xc)
                    *(rbx_19 + 0xc) -= 1
                    
                    if (temp33_1 == 1)
                        (*(*rbx_19 + 8))(rbx_19, 1)
        else
            *(arg1 + 0x28) = r14_4
            int64_t* rdi_11 = *(arg1 + 0x30)
            var_860 = nullptr
            
            if (rbx_19 == rdi_11)
                goto label_141d8cf7e
            
            int64_t* var_858_2 = nullptr
            *(arg1 + 0x30) = rbx_19
            
            if (rdi_11 != 0)
                rdi_11[1].d -= 1
                
                if (rdi_11[1].d == 1)
                    (**rdi_11)(rdi_11)
                    int32_t temp35_1 = *(rdi_11 + 0xc)
                    *(rdi_11 + 0xc) -= 1
                    
                    if (temp35_1 == 1)
                        (*(*rdi_11 + 8))(rdi_11, 1)
                
                rbx_19 = var_858_2
                goto label_141d8cf7e
        
        int64_t* rbx_20 = *(arg1 + 0x30)
        
        if (rbx_20 != 0)
            rbx_20[1].d += 1
            
            if (rbx_20 != 0)
                rbx_20[1].d += 1
        
        void* rdi_12 = *(arg1 + 0x18)
        *(rdi_12 + 0x390) = *(arg1 + 0x28)
        int64_t* rcx_88 = *(rdi_12 + 0x398)
        
        if (rbx_20 != rcx_88)
            if (rbx_20 != 0)
                *(rbx_20 + 0xc) += 1
                rcx_88 = *(rdi_12 + 0x398)
            
            if (rcx_88 != 0)
                int32_t temp38_1 = *(rcx_88 + 0xc)
                *(rcx_88 + 0xc) -= 1
                
                if (temp38_1 == 1)
                    (*(*rcx_88 + 8))(rcx_88, 1)
            
            *(rdi_12 + 0x398) = rbx_20
        
        if (rbx_20 != 0)
            rbx_20[1].d -= 1
            
            if (rbx_20[1].d == 1)
                (**rbx_20)(rbx_20)
                int32_t temp37_1 = *(rbx_20 + 0xc)
                *(rbx_20 + 0xc) -= 1
                
                if (temp37_1 == 1)
                    (*(*rbx_20 + 8))(rbx_20, 1)
            
            if (rbx_20 != 0)
                rbx_20[1].d -= 1
                
                if (rbx_20[1].d == 1)
                    (**rbx_20)(rbx_20)
                    int32_t temp40_1 = *(rbx_20 + 0xc)
                    *(rbx_20 + 0xc) -= 1
                    
                    if (temp40_1 == 1)
                        (*(*rbx_20 + 8))(rbx_20, 1)
        
        sub_1423fef60(&var_6d8)
    
    int64_t* rbx_21 = *(arg1 + 0x20)
    void* rax_73 = *(arg1 + 0x18)
    int32_t var_823_1 = 1
    char var_81f_1 = 0
    char var_824_1 = 1
    int128_t var_840
    __builtin_memset(&var_840, 0, 0x14)
    int32_t var_828_1 = 0xbf800000
    
    if (rbx_21 != 0)
        rbx_21[1].d += 1
    
    int64_t* rdi_13 = var_840.q
    void* var_848 = rax_73
    
    if (rbx_21 != rdi_13)
        var_840.q = rbx_21
        
        if (rdi_13 != 0)
            rdi_13[1].d -= 1
            
            if (rdi_13[1].d == 1)
                (**rdi_13)(rdi_13)
                int32_t temp24_1 = *(rdi_13 + 0xc)
                *(rdi_13 + 0xc) -= 1
                
                if (temp24_1 == 1)
                    (*(*rdi_13 + 8))(rdi_13, 1)
    else if (rbx_21 != 0)
        rbx_21[1].d -= 1
        
        if (rbx_21[1].d == 1)
            (**rbx_21)(rbx_21)
            int32_t temp23_1 = *(rbx_21 + 0xc)
            *(rbx_21 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*(*rbx_21 + 8))(rbx_21, 1)
    
    int64_t* rax_77 = sub_141d88590()
    int64_t r8_11 = *rax_77
    (*(r8_11 + 0x20))(rax_77, &var_848, r8_11)
    int64_t* rax_78 = sub_141d88590()
    int64_t rdx_16 = *rax_78
    result = (*(rdx_16 + 0x40))(rax_78, rdx_16)
    int32_t i_2
    int32_t i_1 = i_2
    int64_t* rbx_22 = var_840:8.q
    *(arg1 + 0x58) = 1
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_99 = *rbx_22
            
            if (rcx_99 != 0)
                result = sub_140a74f90(rcx_99)
            
            rbx_22 = &rbx_22[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_22 = var_840:8.q
    
    if (rbx_22 != 0)
        result = sub_140a74f90(rbx_22)
    
    int64_t* rbx_23 = var_840.q
    
    if (rbx_23 != 0)
        rbx_23[1].d -= 1
        
        if (rbx_23[1].d == 1)
            result = (**rbx_23)(rbx_23)
            int32_t temp27_1 = *(rbx_23 + 0xc)
            *(rbx_23 + 0xc) -= 1
            
            if (temp27_1 == 1)
                result = (*(*rbx_23 + 8))(rbx_23, 1)

__security_check_cookie(rax_1 ^ &var_8c8)
return result
