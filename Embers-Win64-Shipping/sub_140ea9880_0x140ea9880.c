// 函数: sub_140ea9880
// 地址: 0x140ea9880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_938
void* result = __security_cookie ^ &var_938
void* result_1 = result
void* r13 = *(arg1 + 0x3a0)
void* r12 = arg1

if (*(r13 + 0x58) != 0)
    int64_t* rdi_1 = *(r13 + 0x60)
    void* rax_2 = (*(*rdi_1 + 0x48))(rdi_1, *(r13 + 0x68), ".Background")
    void* rcx_1 = *(r12 + 0x3a0)
    int128_t zmm8 = zx.o(0)
    void* var_770 = rax_2
    int128_t var_8d8
    __builtin_memset(&var_8d8, 0, 0x20)
    uint32_t rdx_2 = zx.d(*(rcx_1 + 0x70))
    void* var_780_1 = nullptr
    int64_t* r14_1 = nullptr
    int64_t* var_7c8_1 = nullptr
    void** rsi_1 = nullptr
    void** var_778_1 = nullptr
    void* var_918
    void var_907
    void* var_8f8
    int128_t var_8c8
    int128_t var_8a8
    void* var_888
    int32_t var_868
    void*** var_860
    int32_t var_858
    void*** var_848
    int32_t var_820
    int64_t* var_818
    int32_t var_810
    void* var_7f8
    char var_7f0
    int64_t* var_7b8
    void var_728
    void*** r15_1
    int128_t zmm1
    void var_908
    int32_t var_8f0
    int64_t* var_880
    int64_t var_840
    int64_t var_588
    void var_4f8
    void var_4e8
    void var_3e0
    void var_218
    int64_t var_78
    
    if (rdx_2 u> 6)
        r15_1 = var_8c8:8.q
        var_848 = r15_1
    else
        switch (rdx_2)
            case 0, 1, 6
                var_8f0 = 0
                var_8f8 = sub_140ed1110
                var_8a8 = var_8f8.o
                int64_t* rax_4 = sub_140e93390(&var_3e0)
                rax_4[0x34] = rax_2
                int64_t* rax_5 = sub_140e90290(&var_888, r12, &var_8a8)
                sub_1407473e0(&rax_4[0x35], rax_5)
                sub_140745b20(rax_5)
                rax_4[0x37] = rdi_1
                rax_4[0x38] = *(r13 + 0x68)
                int64_t* rax_6 = j_sub_140a82f30(0x328)
                int64_t* rdi_2 = rax_6
                
                if (rax_6 == 0)
                    rdi_2 = nullptr
                else
                    rax_6[1].d = 1
                    *(rax_6 + 0xc) = 1
                    *rdi_2 = &data_142edf150
                    
                    if (rdi_2 != -0x10)
                        sub_140e96fd0(&rdi_2[2])
                
                var_818 = rdi_2
                var_820.q = &rdi_2[2]
                sub_140918950(&var_820, &rdi_2[2])
                var_918 = 0x318
                var_810.q = &var_908
                void** rax_7 = sub_140e9af40(&var_820, &var_7f8, rax_4, 
                    sub_140e23ed0(&rdi_2[2], "SClippingHorizontalBox"))
                rdi_1 = rax_7[1]
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                if (r12 + 0x3c0 != &var_8a8)
                    *(r12 + 0x3c0) = *rax_7
                    int64_t* rbx_4 = *(r12 + 0x3c8)
                    
                    if (rdi_1 != rbx_4)
                        *(r12 + 0x3c8) = rdi_1
                        rdi_1 = nullptr
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t temp11_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp11_1 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)
                
                int64_t* rbx_5 = *(r12 + 0x3c8)
                void* rcx_16 = *(r12 + 0x3c0)
                var_780_1 = rcx_16
                
                if (rbx_5 != 0)
                    rbx_5[1].d += 1
                
                int64_t* rax_11 = rbx_5
                
                if (rbx_5 != 0)
                    rax_11[1].d += 1
                    rbx_5 = nullptr
                    r14_1 = rax_11
                    var_7c8_1 = rax_11
                
                var_8d8.q = rcx_16
                int64_t* rcx_17 = var_8d8:8.q
                
                if (r14_1 != 0)
                    rcx_17 = r14_1
                
                var_8d8:8.q = rcx_17
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp21_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp21_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp28_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp28_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                
                int64_t* rbx_6 = var_7f0.q
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp37_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp37_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
                
                int64_t* rbx_7 = var_818
                
                if (rbx_7 != 0)
                    rbx_7[1].d -= 1
                    
                    if (rbx_7[1].d == 1)
                        (**rbx_7)(rbx_7)
                        int32_t temp45_1 = *(rbx_7 + 0xc)
                        *(rbx_7 + 0xc) -= 1
                        
                        if (temp45_1 == 1)
                            (*(*rbx_7 + 8))(rbx_7, 1)
                
                void var_238
                sub_140745b20(&var_238)
                sub_140ddea30(&var_3e0)
                r15_1 = var_8c8:8.q
                var_848 = r15_1
            case 2
                int64_t* rax_20 = j_sub_140a82f30(0x2e8)
                int64_t* rdi_3 = rax_20
                
                if (rax_20 == 0)
                    rdi_3 = nullptr
                else
                    rax_20[1].d = 1
                    *(rax_20 + 0xc) = 1
                    *rdi_3 = &data_142d8c590
                    
                    if (rdi_3 != -0x10)
                        sub_14068e550(&rdi_3[2])
                
                var_880 = rdi_3
                var_888 = &rdi_3[2]
                sub_14065fa30(&var_888, &rdi_3[2])
                var_918 = 0x2d8
                void* var_878_1 = &var_908
                sub_140e23ed0(&rdi_3[2], "SVerticalBox")
                int64_t* rax_21
                int128_t zmm1_2
                rax_21, zmm1_2 = sub_14068d420(&var_218)
                void** rax_22 = sub_140696920(&var_888, &var_8a8, rax_21, zmm1_2)
                r15_1 = rax_22[1]
                void* rcx_33 = *rax_22
                void*** rbx_9 = r15_1
                var_848 = r15_1
                
                if (r15_1 != 0)
                    r15_1[1].d += 1
                
                var_8c8.q = rcx_33
                
                if (r15_1 == 0)
                    r15_1 = var_8c8:8.q
                    var_848 = r15_1
                else
                    r15_1[1].d += 1
                    rbx_9 = nullptr
                    var_8c8:8.q = r15_1
                
                var_8d8.q = rcx_33
                void*** rcx_34 = var_8d8:8.q
                
                if (r15_1 != 0)
                    rcx_34 = r15_1
                
                var_8d8:8.q = rcx_34
                
                if (rbx_9 != 0)
                    rbx_9[1].d -= 1
                    
                    if (rbx_9[1].d == 1)
                        (**rbx_9)(rbx_9)
                        int32_t temp17_1 = *(rbx_9 + 0xc)
                        *(rbx_9 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            (*rbx_9)[1](rbx_9, 1)
                
                int64_t* rbx_10 = var_8a8:8.q
                
                if (rbx_10 != 0)
                    rbx_10[1].d -= 1
                    
                    if (rbx_10[1].d == 1)
                        (**rbx_10)(rbx_10)
                        int32_t temp30_1 = *(rbx_10 + 0xc)
                        *(rbx_10 + 0xc) -= 1
                        
                        if (temp30_1 == 1)
                            (*(*rbx_10 + 8))(rbx_10, 1)
                
                int64_t* rbx_11 = var_880
                
                if (rbx_11 != 0)
                    rbx_11[1].d -= 1
                    
                    if (rbx_11[1].d == 1)
                        (**rbx_11)(rbx_11)
                        int32_t temp38_1 = *(rbx_11 + 0xc)
                        *(rbx_11 + 0xc) -= 1
                        
                        if (temp38_1 == 1)
                            (*(*rbx_11 + 8))(rbx_11, 1)
                
                if (var_78 != 0)
                    sub_140a74f90(var_78)
                
                sub_140660250(&var_218)
                zmm8 = var_8c8
            case 3
                int64_t rdx_9 = *(r13 + 0x68)
                var_7b8 = sub_140ed1110
                int512_t zmm3
                zmm3.o = zx.o(0)
                int32_t var_7b0_1 = 0
                (*(*rdi_1 + 0x20))(rdi_1, rdx_9, ".MaxUniformToolbarSize", zmm3)
                int64_t rax_30 = *rdi_1
                int64_t rdx_10 = *(r13 + 0x68)
                zmm3.o = zx.o(0)
                var_848.d = 0
                var_848:4.b = 1
                var_840 = 0
                int32_t var_838_1 = 0
                (*(rax_30 + 0x20))(rdi_1, rdx_10, ".MinUniformToolbarSize", zmm3)
                zmm1 = var_7b8.o
                char var_81c_1 = 1
                var_820 = 0
                var_818 = nullptr
                var_810 = 0
                var_8a8 = zmm1
                int64_t* rax_31 = sub_140e95480(&var_728)
                rax_31[0x38].d = 0
                rax_31[0x36] = rdi_1
                rax_31[0x37] = *(r13 + 0x68)
                rax_31[0x45].d = 0
                *(rax_31 + 0x22c) = 1
                sub_140692f90(&rax_31[0x46], &var_818)
                rax_31[0x42].d = 0
                *(rax_31 + 0x214) = 1
                sub_140692f90(&rax_31[0x43], &var_840)
                sub_1407473e0(&rax_31[0x48], sub_140e90290(&var_8f8, r12, &var_8a8))
                int64_t* rax_33 = j_sub_140a82f30(0x388)
                int64_t* rbx_12 = rax_33
                
                if (rax_33 == 0)
                    rbx_12 = nullptr
                else
                    rax_33[1].d = 1
                    *(rax_33 + 0xc) = 1
                    *rbx_12 = &data_142edf160
                    
                    if (rbx_12 != -0x10)
                        sub_140ee3820(&rbx_12[2])
                
                var_8a8:8.q = rbx_12
                var_8a8.q = &rbx_12[2]
                sub_140918950(&var_8a8, &rbx_12[2])
                var_918 = 0x378
                void* var_898_1 = &var_908
                int128_t zmm1_3 = sub_140e23ed0(&rbx_12[2], "SUniformToolbarPanel")
                
                if (rbx_12 != 0)
                    rbx_12[1].d += 1
                
                if (r12 + 0x3d0 == &var_888)
                label_140ea9f10:
                    
                    if (rbx_12 != 0)
                        rbx_12[1].d -= 1
                        
                        if (rbx_12[1].d == 1)
                            (**rbx_12)(rbx_12)
                            int32_t temp7_1 = *(rbx_12 + 0xc)
                            *(rbx_12 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rbx_12 + 8))(rbx_12, 1)
                else
                    *(r12 + 0x3d0) = &rbx_12[2]
                    rdi_1 = *(r12 + 0x3d8)
                    
                    if (rbx_12 == rdi_1)
                        goto label_140ea9f10
                    
                    *(r12 + 0x3d8) = rbx_12
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp13_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp13_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
                
                void** rax_37
                rax_37, zmm8 = sub_140e9e850(&var_8a8, &var_7f8, rax_31, zmm1_3)
                int64_t* rbx_13 = rax_37[1]
                
                if (rbx_13 != 0)
                    rbx_13[1].d += 1
                
                if (r12 + 0x3d0 != &var_888)
                    *(r12 + 0x3d0) = *rax_37
                    rdi_1 = *(r12 + 0x3d8)
                    
                    if (rbx_13 != rdi_1)
                        *(r12 + 0x3d8) = rbx_13
                        rbx_13 = nullptr
                        
                        if (rdi_1 != 0)
                            rdi_1[1].d -= 1
                            
                            if (rdi_1[1].d == 1)
                                (**rdi_1)(rdi_1)
                                int32_t temp32_1 = *(rdi_1 + 0xc)
                                *(rdi_1 + 0xc) -= 1
                                
                                if (temp32_1 == 1)
                                    (*(*rdi_1 + 8))(rdi_1, 1)
                
                void* rax_41 = *(r12 + 0x3d8)
                void* rcx_61 = *(r12 + 0x3d0)
                
                if (rax_41 != 0)
                    *(rax_41 + 8) += 1
                
                var_8d8.q = rcx_61
                void* rcx_62 = var_8d8:8.q
                
                if (rax_41 != 0)
                    rcx_62 = rax_41
                
                var_8d8:8.q = rcx_62
                
                if (rbx_13 != 0)
                    rbx_13[1].d -= 1
                    
                    if (rbx_13[1].d == 1)
                        (**rbx_13)(rbx_13)
                        int32_t temp40_1 = *(rbx_13 + 0xc)
                        *(rbx_13 + 0xc) -= 1
                        
                        if (temp40_1 == 1)
                            (*(*rbx_13 + 8))(rbx_13, 1)
                
                int64_t* rbx_14 = var_7f0.q
                
                if (rbx_14 != 0)
                    rbx_14[1].d -= 1
                    
                    if (rbx_14[1].d == 1)
                        (**rbx_14)(rbx_14)
                        int32_t temp47_1 = *(rbx_14 + 0xc)
                        *(rbx_14 + 0xc) -= 1
                        
                        if (temp47_1 == 1)
                            (*(*rbx_14 + 8))(rbx_14, 1)
                
                int64_t* rbx_15 = var_8a8:8.q
                
                if (rbx_15 != 0)
                    rbx_15[1].d -= 1
                    
                    if (rbx_15[1].d == 1)
                        (**rbx_15)(rbx_15)
                        int32_t temp53_1 = *(rbx_15 + 0xc)
                        *(rbx_15 + 0xc) -= 1
                        
                        if (temp53_1 == 1)
                            (*(*rbx_15 + 8))(rbx_15, 1)
                
                sub_140745b20(&var_4e8)
                sub_140745b20(&var_4f8)
                void var_510
                sub_140745b20(&var_510)
                void var_528
                sub_140745b20(&var_528)
                void var_548
                sub_140745b20(&var_548)
                int64_t rcx_74 = var_588
                
                if (rcx_74 != 0)
                    sub_140a74f90(rcx_74)
                
                sub_140ddea30(&var_728)
                void* rax_49
                
                if (var_8f0 == 0)
                    rax_49 = var_8f8
                label_140eaa0d1:
                    
                    if (rax_49 != 0)
                        sub_140a74f90(rax_49)
                else
                    void* rcx_76 = var_8f8
                    
                    if (rcx_76 != 0)
                        (*(*rcx_76 + 0x38))(rcx_76, 0)
                        rax_49 = var_8f8
                        
                        if (rax_49 != 0)
                            rax_49 = sub_140a84c80(rax_49, 0, 0)
                            var_8f8 = rax_49
                        
                        var_8f0 = 0
                        goto label_140eaa0d1
                sub_140745b20(&var_818)
                sub_140745b20(&var_840)
                r15_1 = var_8c8:8.q
                var_848 = r15_1
            case 4
                void var_8e8
                int64_t var_240
                
                if (*(r12 + 0x49c) == 0)
                    int64_t* rax_107 = sub_14068d420(&var_3e0)
                    int64_t* rax_108
                    int128_t zmm1_8
                    rax_108, zmm1_8 = sub_140688860(&var_888, "SVerticalBox", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/MultiBox/MultiBox."
                    "cpp", 
                        0x31a, &var_907)
                    void** rax_110 =
                        sub_140696920(sub_140dd3250(rax_108, &var_8c8), &var_7f8, rax_107, zmm1_8)
                    rdi_1 = rax_110[1]
                    var_8f8 = *rax_110
                    var_8f0.q = rdi_1
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d += 1
                    
                    void* rax_112 = sub_140693600(sub_140f619e0(), &var_8f8)
                    void* rax_114 = sub_1406938c0(sub_14068d760(&var_728), rax_112)
                    void** rax_115
                    int128_t zmm1_9
                    rax_115, zmm1_9 = sub_1406886e0(&var_868, "SScrollBox", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/MultiBox/MultiBox."
                    "cpp", 
                        0x317, &var_8e8)
                    void** rax_116 = sub_140697120(rax_115, &var_8a8, rax_114, zmm1_9)
                    void* rcx_189 = rax_116[1]
                    void* rdx_43 = *rax_116
                    var_8f0.q = rcx_189
                    
                    if (rcx_189 != 0)
                        *(rcx_189 + 8) += 1
                    
                    var_8d8.q = rdx_43
                    var_8f8 = nullptr
                    sub_14066a200(&var_8d8:8, &var_8f0)
                    int64_t* rbx_38 = var_8f0.q
                    
                    if (rbx_38 != 0)
                        rbx_38[1].d -= 1
                        
                        if (rbx_38[1].d == 1)
                            (**rbx_38)(rbx_38)
                            int32_t temp5_1 = *(rbx_38 + 0xc)
                            *(rbx_38 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rbx_38 + 8))(rbx_38, 1)
                    
                    int64_t* rbx_39 = var_8a8:8.q
                    
                    if (rbx_39 != 0)
                        rbx_39[1].d -= 1
                        
                        if (rbx_39[1].d == 1)
                            (**rbx_39)(rbx_39)
                            int32_t temp10_1 = *(rbx_39 + 0xc)
                            *(rbx_39 + 0xc) -= 1
                            
                            if (temp10_1 == 1)
                                (*(*rbx_39 + 8))(rbx_39, 1)
                    
                    sub_140669d70(&var_868)
                    sub_140691310(&var_728)
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp15_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp15_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
                    
                    int64_t* rbx_40 = var_7f0.q
                    
                    if (rbx_40 != 0)
                        rbx_40[1].d -= 1
                        
                        if (rbx_40[1].d == 1)
                            (**rbx_40)(rbx_40)
                            int32_t temp18_1 = *(rbx_40 + 0xc)
                            *(rbx_40 + 0xc) -= 1
                            
                            if (temp18_1 == 1)
                                (*(*rbx_40 + 8))(rbx_40, 1)
                    
                    sub_140669d70(&var_888)
                    
                    if (var_240 != 0)
                        sub_140a74f90(var_240)
                    
                    sub_140660250(&var_3e0)
                    zmm8 = var_8c8
                    r15_1 = var_8c8:8.q
                    var_848 = r15_1
                else
                    void*** rax_76 = j_sub_140a82f30(0x2e8)
                    void*** rbx_22 = rax_76
                    
                    if (rax_76 == 0)
                        rbx_22 = nullptr
                    else
                        rax_76[1].d = 1
                        *(rax_76 + 0xc) = 1
                        *rbx_22 = &data_142d8c590
                        
                        if (rbx_22 != -0x10)
                            sub_14068e550(&rbx_22[2])
                    
                    var_860 = rbx_22
                    var_868.q = &rbx_22[2]
                    sub_14065fa30(&var_868, &rbx_22[2])
                    int64_t var_918_1 = 0x2d8
                    var_858.q = &var_908
                    sub_140e23ed0(&rbx_22[2], "SVerticalBox")
                    
                    if (rbx_22 != 0)
                        rbx_22[1].d += 1
                    
                    r15_1 = var_8c8:8.q
                    var_8c8.q = &rbx_22[2]
                    
                    if (rbx_22 != 0)
                        r15_1 = rbx_22
                    
                    var_848 = r15_1
                    var_8c8:8.q = r15_1
                    int64_t* rax_77
                    int128_t zmm1_5
                    rax_77, zmm1_5 = sub_14068d420(&var_3e0)
                    void** rax_78 = sub_140696920(&var_868, &var_820, rax_77, zmm1_5)
                    rdi_1 = rax_78[1]
                    var_8f8 = *rax_78
                    var_8f0.q = rdi_1
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d += 1
                    
                    void* rax_80 = sub_140693600(sub_140f619e0(), &var_8f8)
                    void* rax_82 = sub_1406938c0(sub_14068d760(&var_728), rax_80)
                    int64_t* rax_83
                    int128_t zmm1_6
                    rax_83, zmm1_6 = sub_1406886e0(&var_7b8, "SScrollBox", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/MultiBox/MultiBox."
                    "cpp", 
                        0x30d, &var_8e8)
                    void** rax_84 = sub_140697120(rax_83, &var_7f8, rax_82, zmm1_6)
                    var_8f8 = *rax_84
                    void* rcx_147 = rax_84[1]
                    var_8f0.q = rcx_147
                    
                    if (rcx_147 != 0)
                        *(rcx_147 + 8) += 1
                    
                    void*** rax_85 = sub_1406a4fe0()
                    rax_85[0xe].d = *(r12 + 0x498)
                    *(rax_85 + 0x74) = *(r12 + 0x49c)
                    sub_140692f90(&rax_85[0xf], r12 + 0x4a0)
                    void* rax_86 = sub_140693860(rax_85, &var_8f8)
                    void* rax_88 = sub_1406938c0(sub_14068d420(&var_218), rax_86)
                    int64_t* rax_89
                    int128_t zmm1_7
                    rax_89, zmm1_7 = sub_140688860(&var_888, "SVerticalBox", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/MultiBox/MultiBox."
                    "cpp", 
                        0x308, &var_907)
                    void** rax_90 = sub_140696920(rax_89, &var_8a8, rax_88, zmm1_7)
                    void* rcx_156 = rax_90[1]
                    void* rdx_36 = *rax_90
                    var_8f0.q = rcx_156
                    
                    if (rcx_156 != 0)
                        *(rcx_156 + 8) += 1
                    
                    var_8d8.q = rdx_36
                    var_8f8 = nullptr
                    sub_14066a200(&var_8d8:8, &var_8f0)
                    int64_t* rbx_28 = var_8f0.q
                    
                    if (rbx_28 != 0)
                        rbx_28[1].d -= 1
                        
                        if (rbx_28[1].d == 1)
                            (**rbx_28)(rbx_28)
                            int32_t temp33_1 = *(rbx_28 + 0xc)
                            *(rbx_28 + 0xc) -= 1
                            
                            if (temp33_1 == 1)
                                (*(*rbx_28 + 8))(rbx_28, 1)
                    
                    int64_t* rbx_29 = var_8a8:8.q
                    
                    if (rbx_29 != 0)
                        rbx_29[1].d -= 1
                        
                        if (rbx_29[1].d == 1)
                            (**rbx_29)(rbx_29)
                            int32_t temp51_1 = *(rbx_29 + 0xc)
                            *(rbx_29 + 0xc) -= 1
                            
                            if (temp51_1 == 1)
                                (*(*rbx_29 + 8))(rbx_29, 1)
                    
                    int64_t* rbx_30 = var_880
                    
                    if (rbx_30 != 0)
                        rbx_30[1].d -= 1
                        
                        if (rbx_30[1].d == 1)
                            (**rbx_30)(rbx_30)
                            int32_t temp56_1 = *(rbx_30 + 0xc)
                            *(rbx_30 + 0xc) -= 1
                            
                            if (temp56_1 == 1)
                                (*(*rbx_30 + 8))(rbx_30, 1)
                    
                    if (var_78 != 0)
                        sub_140a74f90(var_78)
                    
                    sub_140660250(&var_218)
                    int64_t* rbx_31 = var_7f0.q
                    
                    if (rbx_31 != 0)
                        rbx_31[1].d -= 1
                        
                        if (rbx_31[1].d == 1)
                            (**rbx_31)(rbx_31)
                            int32_t temp66_1 = *(rbx_31 + 0xc)
                            *(rbx_31 + 0xc) -= 1
                            
                            if (temp66_1 == 1)
                                (*(*rbx_31 + 8))(rbx_31, 1)
                    
                    int32_t var_7b0
                    int64_t* rbx_32 = var_7b0.q
                    
                    if (rbx_32 != 0)
                        rbx_32[1].d -= 1
                        
                        if (rbx_32[1].d == 1)
                            (**rbx_32)(rbx_32)
                            int32_t temp72_1 = *(rbx_32 + 0xc)
                            *(rbx_32 + 0xc) -= 1
                            
                            if (temp72_1 == 1)
                                (*(*rbx_32 + 8))(rbx_32, 1)
                    
                    sub_140691310(&var_728)
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp77_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp77_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
                    
                    int64_t* rbx_33 = var_818
                    
                    if (rbx_33 != 0)
                        rbx_33[1].d -= 1
                        
                        if (rbx_33[1].d == 1)
                            (**rbx_33)(rbx_33)
                            int32_t temp81_1 = *(rbx_33 + 0xc)
                            *(rbx_33 + 0xc) -= 1
                            
                            if (temp81_1 == 1)
                                (*(*rbx_33 + 8))(rbx_33, 1)
                    
                    void*** rbx_34 = var_860
                    
                    if (rbx_34 != 0)
                        rbx_34[1].d -= 1
                        
                        if (rbx_34[1].d == 1)
                            (**rbx_34)(rbx_34)
                            int32_t temp84_1 = *(rbx_34 + 0xc)
                            *(rbx_34 + 0xc) -= 1
                            
                            if (temp84_1 == 1)
                                (*rbx_34)[1](rbx_34, 1)
                    
                    if (var_240 != 0)
                        sub_140a74f90(var_240)
                    
                    sub_140660250(&var_3e0)
                    zmm8 = var_8c8
            case 5
                var_868 = 0
                var_848 = sub_140ebecf0
                char var_864_1 = 1
                var_7b8 = sub_140ebed80
                var_8f8 = sub_140ebcc70
                var_860 = nullptr
                var_858 = 0
                var_840.d = 0
                int32_t var_7b0_2 = 0
                var_8f0 = 0
                int64_t* rax_50 = sub_140e92db0(&var_728)
                var_8a8 = var_8f8.o
                sub_1407473e0(&rax_50[0x34], sub_140e90170(&var_8f8, r12, &var_8a8))
                void* rax_53
                
                if (var_8f0 == 0)
                    rax_53 = var_8f8
                label_140eaa1b3:
                    
                    if (rax_53 != 0)
                        sub_140a74f90(rax_53)
                else
                    void* rcx_84 = var_8f8
                    
                    if (rcx_84 != 0)
                        (*(*rcx_84 + 0x38))(rcx_84, 0)
                        rax_53 = var_8f8
                        
                        if (rax_53 != 0)
                            rax_53 = sub_140a84c80(rax_53, 0, 0)
                            var_8f8 = rax_53
                        
                        var_8f0 = 0
                        goto label_140eaa1b3
                int128_t zmm0_2 = var_7b8.o
                rax_50[0x3c] = r12 + 0x3b0
                var_8a8 = zmm0_2
                int64_t* rax_55 = sub_140e90050(&var_7b8, r12, &var_8a8)
                var_888.d = 0
                var_888:4.b = 1
                var_880 = nullptr
                int64_t var_878
                var_878.d = 0
                sub_140692f90(&var_880, rax_55)
                rax_50[0x40].d = var_888.d
                *(rax_50 + 0x204) = var_888:4.b
                sub_140692f90(&rax_50[0x41], &var_880)
                sub_140745b20(&var_880)
                int64_t* rax_58
                
                if (var_7b0_2 == 0)
                    rax_58 = var_7b8
                label_140eaa285:
                    
                    if (rax_58 != 0)
                        sub_140a74f90(rax_58)
                else
                    int64_t* rcx_91 = var_7b8
                    
                    if (rcx_91 != 0)
                        (*(*rcx_91 + 0x38))(rcx_91, 0)
                        rax_58 = var_7b8
                        
                        if (rax_58 != 0)
                            rax_58 = sub_140a84c80(rax_58, 0, 0)
                            var_7b8 = rax_58
                        
                        int32_t var_7b0_3 = 0
                        goto label_140eaa285
                var_8a8 = var_848.o
                int64_t* rax_59 = sub_140e90050(&var_848, r12, &var_8a8)
                var_820 = 0
                char var_81c_2 = 1
                var_818 = nullptr
                var_810 = 0
                sub_140692f90(&var_818, rax_59)
                rax_50[0x3d].d = var_820
                *(rax_50 + 0x1ec) = var_81c_2
                sub_140692f90(&rax_50[0x3e], &var_818)
                sub_140745b20(&var_818)
                void*** rax_62
                
                if (var_840.d == 0)
                    rax_62 = var_848
                label_140eaa330:
                    
                    if (rax_62 != 0)
                        sub_140a74f90(rax_62)
                else
                    void*** rcx_98 = var_848
                    
                    if (rcx_98 != 0)
                        (*rcx_98)[7](rcx_98, 0)
                        rax_62 = var_848
                        
                        if (rax_62 != 0)
                            rax_62 = sub_140a84c80(rax_62, 0, 0)
                            var_848 = rax_62
                        
                        var_840.d = 0
                        goto label_140eaa330
                rax_50[0x50].d = 0
                *(rax_50 + 0x284) = 1
                
                if (&var_860 != &rax_50[0x51] && rax_50[0x52].d != 0)
                    int64_t* rcx_101 = rax_50[0x51]
                    
                    if (rcx_101 != 0)
                        (*(*rcx_101 + 0x38))(rcx_101, 0)
                        int64_t rcx_102 = rax_50[0x51]
                        
                        if (rcx_102 != 0)
                            rax_50[0x51] = sub_140a84c80(rcx_102, 0, 0)
                        
                        rax_50[0x52].d = 0
                
                void*** rax_65 = sub_140e91650()
                var_8a8:8.q = rax_65
                var_8a8.q = &rax_65[2]
                sub_140918950(&var_8a8, &rax_65[2])
                var_918 = 0x780
                void* var_898_2 = &var_908
                char* (** rax_66)(void* arg1, char* arg2, int512_t arg3 @ zmm1)
                rax_66, zmm8 = sub_140e9a9e0(&var_8a8, &var_7f8, rax_50, 
                    sub_140e23ed0(&rax_65[2], "STileView< TSharedPtr<SWidget> >"))
                void** rbx_18 = rax_66[1]
                
                if (rbx_18 != 0)
                    rbx_18[1].d += 1
                
                void** rax_67 = rbx_18
                
                if (rbx_18 != 0)
                    rax_67[1].d += 1
                    rbx_18 = nullptr
                    rsi_1 = rax_67
                    var_778_1 = rax_67
                
                var_8d8.q = *rax_66
                void** rcx_107 = var_8d8:8.q
                
                if (rsi_1 != 0)
                    rcx_107 = rsi_1
                
                var_8d8:8.q = rcx_107
                
                if (rbx_18 != 0)
                    rbx_18[1].d -= 1
                    
                    if (rbx_18[1].d == 1)
                        (**rbx_18)(rbx_18)
                        int32_t temp49_1 = *(rbx_18 + 0xc)
                        *(rbx_18 + 0xc) -= 1
                        
                        if (temp49_1 == 1)
                            (*(*rbx_18 + 8))(rbx_18, 1)
                
                int64_t* rbx_19 = var_7f0.q
                
                if (rbx_19 != 0)
                    rbx_19[1].d -= 1
                    
                    if (rbx_19[1].d == 1)
                        (**rbx_19)(rbx_19)
                        int32_t temp55_1 = *(rbx_19 + 0xc)
                        *(rbx_19 + 0xc) -= 1
                        
                        if (temp55_1 == 1)
                            (*(*rbx_19 + 8))(rbx_19, 1)
                
                int64_t* rbx_20 = var_8a8:8.q
                
                if (rbx_20 != 0)
                    rbx_20[1].d -= 1
                    
                    if (rbx_20[1].d == 1)
                        (**rbx_20)(rbx_20)
                        int32_t temp59_1 = *(rbx_20 + 0xc)
                        *(rbx_20 + 0xc) -= 1
                        
                        if (temp59_1 == 1)
                            (*(*rbx_20 + 8))(rbx_20, 1)
                
                void var_410
                sub_140745b20(&var_410)
                void var_420
                sub_140745b20(&var_420)
                void var_430
                sub_140745b20(&var_430)
                void var_458
                sub_140745b20(&var_458)
                char var_468_1 = 0
                int64_t* var_480
                
                if (var_480 != 0)
                    var_480[1].d -= 1
                    
                    if (var_480[1].d == 1)
                        (**var_480)(var_480)
                        int32_t temp64_1 = *(var_480 + 0xc)
                        *(var_480 + 0xc) -= 1
                        
                        if (temp64_1 == 1)
                            (*(*var_480 + 8))(var_480, 1)
                
                void var_4a0
                sub_140745b20(&var_4a0)
                void var_4b8
                sub_140745b20(&var_4b8)
                void var_4c8
                sub_140745b20(&var_4c8)
                void var_4d8
                sub_140745b20(&var_4d8)
                sub_140745b20(&var_4e8)
                sub_140745b20(&var_4f8)
                void var_508
                sub_140745b20(&var_508)
                void var_520
                sub_140745b20(&var_520)
                void var_538
                sub_140745b20(&var_538)
                void var_558
                sub_140745b20(&var_558)
                void var_568
                sub_140745b20(&var_568)
                void var_578
                sub_140745b20(&var_578)
                sub_140745b20(&var_588)
                sub_140ddea30(&var_728)
                sub_140745b20(&var_860)
                r15_1 = var_8c8:8.q
                var_848 = r15_1
    void* rcx_204 = *(r12 + 0x3a0)
    rdi_1.b = 0
    rsi_1.b = 0
    int32_t var_8b4_1 = rdi_1.d
    int32_t i = -1
    int64_t* rbx_41 = *(rcx_204 + 0x30)
    var_8c8.q = *(rcx_204 + 0x28)
    var_8c8:8.q = rbx_41
    
    if (rbx_41 != 0)
        rbx_41[1].d += 1
    
    if (&var_8c8 != r12 + 0x458)
        zmm1 = var_8c8
        var_8c8 = *(r12 + 0x458)
        rbx_41 = var_8c8:8.q
        *(r12 + 0x458) = zmm1
    
    if (rbx_41 != 0)
        rbx_41[1].d -= 1
        
        if (rbx_41[1].d == 1)
            (**rbx_41)(rbx_41)
            int32_t temp1_1 = *(rbx_41 + 0xc)
            *(rbx_41 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_41 + 8))(rbx_41, 1)
    
    int32_t rax_128 = *(r13 + 0x58)
    int32_t var_828_1 = 0
    char var_910
    
    if (rax_128 s> 0)
        int64_t r12_1 = -1
        var_8f8 = nullptr
        void* r8_20 = nullptr
        var_7b8 = nullptr
        int64_t* rdx_46 = nullptr
        int32_t rax_138
        
        do
            if (r12_1 s< r8_20)
                rsi_1.b = 0
                i += 1
                r12_1 += 1
                
                if (i s< rax_128)
                    int64_t rbx_43 = r12_1 << 4
                    
                    do
                        int64_t* rdi_5 = *(rbx_43 + *(r13 + 0x50))
                        
                        if (rsi_1.b == 0)
                            rsi_1 = zx.q(rsi_1.b)
                            
                            if ((*(*rdi_5 + 0x20))(rdi_5) != 0)
                                rsi_1 = 1
                        
                        if (rdi_5[0x11].b == 5)
                            break
                        
                        i += 1
                        r12_1 += 1
                        rbx_43 += 0x10
                    while (i s< *(r13 + 0x58))
                    
                    r15_1 = var_848
                    rdx_46 = var_7b8
                    rdi_1 = zx.q(var_8b4_1)
            
            int32_t var_8b8_1 = 0xffffffff
            int64_t* rbx_44 = *(rdx_46 + *(r13 + 0x50))
            var_8c8.q = rbx_44
            
            if ((*(*rbx_44 + 0x10))(rbx_44) == 0)
                rdi_1 = zx.q(rdi_1.b)
                
                if ((*(*rbx_44 + 0x18))(rbx_44) != 0)
                    rdi_1 = nullptr
                
                var_8b4_1 = rdi_1.d
            else
                var_8b4_1.b = 1
            
            rdi_1.b = 0
            rbx_44.b = 0
            rax_138 = var_828_1 + 1
            
            if (rax_138 s< *(r13 + 0x58))
                int64_t* rcx_211 = *(var_7b8 + *(r13 + 0x50) + 0x10)
                rbx_44 = nullptr
                
                if ((*(*rcx_211 + 0x18))(rcx_211) != 0)
                    rbx_44 = 1
            
            if (var_8f8 s> 0)
                int64_t* rcx_213 = *(var_7b8 + *(r13 + 0x50) - 0x10)
                rdi_1 = nullptr
                
                if ((*(*rcx_213 + 0x10))(rcx_213) != 0)
                    rdi_1 = 1
            
            if (var_8b4_1.b != 0)
                var_8b8_1 = 1
                
                if (rdi_1.b == 0)
                    if (rbx_44.b != 0)
                        var_8b8_1 = 2
                else if (rbx_44.b != 0)
                    var_8b8_1 = 0xffffffff
                else
                    var_8b8_1 = 0
            
            int32_t rcx_214
            rcx_214.b = sub_140b5b8a0(*(arg1 + 0x3e0), 0) == 0
            
            if ((*(arg1 + 0x3e4) != 0 | rcx_214.b) != 0 && *(arg1 + 0x3e8) != 0
                    && *(arg1 + 0x3f0) != 0 && *(arg1 + 0x400) != 0xffffffff
                    && *(arg1 + 0x400) == var_828_1)
                var_888.o = zmm8
                
                if (r15_1 != 0)
                    r15_1[1].d += 1
                
                var_820.q = var_780_1
                var_818 = var_7c8_1
                
                if (var_7c8_1 != 0)
                    var_7c8_1[1].d += 1
                
                var_910 = rsi_1.b
                var_918.d = 0xffffffff
                zmm8 = sub_140ea04a0(arg1, *(arg1 + 0x3f0), &var_820, &var_888, var_918.d, var_910)
            
            int64_t rax_149 = *(r13 + 0x50)
            int64_t* rcx_216 = var_7b8
            void* rdx_48 = *(rcx_216 + rax_149)
            void* rcx_217 = *(rcx_216 + rax_149 + 8)
            var_7f8 = rdx_48
            var_7f0.q = rcx_217
            
            if (rcx_217 != 0)
                *(rcx_217 + 8) += 1
            
            void* rbx_46 = *(arg1 + 0x3f0)
            
            if (rbx_46 == 0)
                rdi_1.b = 0
            else
                int64_t* rbx_47 = *(rbx_46 + 0xa0)
                
                if (rbx_47 != 0)
                    rbx_47[1].d += 1
                
                if (rdx_48 == 0 || rdx_48 != *(rbx_46 + 0x98))
                    rdi_1.b = 0
                else
                    rdi_1.b = 1
                
                if (rbx_47 != 0)
                    rbx_47[1].d -= 1
                    
                    if (rbx_47[1].d == 1)
                        (**rbx_47)(rbx_47)
                        int32_t temp85_1 = *(rbx_47 + 0xc)
                        *(rbx_47 + 0xc) -= 1
                        
                        if (temp85_1 == 1)
                            (*(*rbx_47 + 8))(rbx_47, 1)
            
            sub_140597060(&var_7f8)
            
            if (rdi_1.b == 0)
                var_888.o = zmm8
                
                if (r15_1 != 0)
                    r15_1[1].d += 1
                
                var_8a8.q = var_780_1
                var_8a8:8.q = var_7c8_1
                
                if (var_7c8_1 != 0)
                    var_7c8_1[1].d += 1
                
                var_910 = rsi_1.b
                var_918.d = var_8b8_1
                zmm8 = sub_140ea04a0(arg1, var_8c8.q, &var_8a8, &var_888, var_918.d, var_910)
            
            r8_20 = var_8f8 + 1
            rdx_46 = &var_7b8[2]
            rax_128 = *(r13 + 0x58)
            rdi_1 = zx.q(var_8b4_1)
            var_828_1 = rax_138
            var_8f8 = r8_20
            var_7b8 = rdx_46
        while (rax_138 s< rax_128)
        r12 = arg1
    
    int64_t* rcx_223 = *(r12 + 0x3c0)
    
    if (rcx_223 != 0)
        sub_140ea3180(rcx_223)
    
    void* rax_156 = *(r12 + 0x3a0)
    int64_t* var_7d0 = nullptr
    char rcx_224 = *(rax_156 + 0x70)
    void* var_7d8_1
    int64_t* rsi_3
    int64_t var_808
    int64_t var_7e8
    
    if (rcx_224 u<= 1 || rcx_224 == 6)
        int64_t* rbx_53 = data_143e243c8
        void* rax_169 = (*(*rbx_53 + 0x48))(rbx_53, *sub_140b58170(&var_770, "NoBorder", 1), 0)
        rsi_3 = var_8d8:8.q
        var_888.o = var_8d8
        var_7f8 = rax_169
        char var_7f0_2 = 1
        var_7e8 = 0
        int32_t var_7e0_2 = 0
        var_810.b = 1
        var_808 = 0
        int32_t var_800_2 = 0
        var_820.o = zx.o(0)
        
        if (rsi_3 != 0)
            rsi_3[1].d += 1
        
        int64_t* rax_170
        int128_t zmm6_2
        rax_170, zmm6_2 = sub_14068c640(&var_728)
        rax_170[0x39].b = 1
        *(rax_170 + 0x1b8) = zmm6_2
        sub_140692f90(&rax_170[0x3a], &var_808)
        rax_170[0x44] = rax_169
        rax_170[0x45].b = 1
        sub_140692f90(&rax_170[0x46], &var_7e8)
        void*** rax_171 = sub_140e916e0()
        var_860 = rax_171
        var_868.q = &rax_171[2]
        sub_14065fa30(&var_868, &rax_171[2])
        int64_t var_918_6 = 0x4b8
        var_858.q = &var_907
        void* rax_172
        int128_t zmm1_13
        rax_172, zmm1_13 = sub_1406936e0(rax_170, &var_888, sub_140e23ed0(&rax_171[2], "SBorder"))
        void** rax_173 = sub_140695920(&var_868, &var_8a8, rax_172, zmm1_13)
        void* rcx_261 = rax_173[1]
        void* rdx_68 = *rax_173
        var_8d8:8.q = rcx_261
        
        if (rcx_261 != 0)
            *(rcx_261 + 8) += 1
        
        var_7d8_1 = rdx_68
        var_8d8.q = 0
        sub_14066a200(&var_7d0, &var_8d8:8)
        int64_t* rbx_56 = var_8d8:8.q
        
        if (rbx_56 != 0)
            rbx_56[1].d -= 1
            
            if (rbx_56[1].d == 1)
                (**rbx_56)(rbx_56)
                int32_t temp26_1 = *(rbx_56 + 0xc)
                *(rbx_56 + 0xc) -= 1
                
                if (temp26_1 == 1)
                    (*(*rbx_56 + 8))(rbx_56, 1)
        
        int64_t* rbx_57 = var_8a8:8.q
        
        if (rbx_57 != 0)
            rbx_57[1].d -= 1
            
            if (rbx_57[1].d == 1)
                (**rbx_57)(rbx_57)
                int32_t temp34_1 = *(rbx_57 + 0xc)
                *(rbx_57 + 0xc) -= 1
                
                if (temp34_1 == 1)
                    (*(*rbx_57 + 8))(rbx_57, 1)
        
        sub_140669d70(&var_868)
        sub_14068fed0(&var_728)
        sub_140745b20(&var_808)
        sub_140745b20(&var_7e8)
    else
        int64_t* rbx_48 = data_143e243c8
        int128_t* rax_158 = (*(*rbx_48 + 0x38))(rbx_48, &var_7b8, 
            *sub_140b58170(&var_8c8, "DefaultForeground", 1), 0, &data_1439ae6e0, var_910)
        char var_758_1 = rax_158[1].b
        int64_t var_750_1 = *(rax_158 + 0x18)
        void* rcx_229 = rax_158[2].q
        void* var_748_1 = rcx_229
        int128_t var_768 = *rax_158
        
        if (rcx_229 != 0)
            *(rcx_229 + 8) += 1
        
        rsi_3 = var_8d8:8.q
        void* rbx_49 = var_770
        int128_t zmm0_6 = var_8d8
        char var_740_1 = 1
        int64_t var_738 = 0
        int32_t var_730_1 = 0
        var_7f8 = rbx_49
        char var_7f0_1 = 1
        var_7e8 = 0
        int32_t var_7e0_1 = 0
        var_810.b = 1
        var_808 = 0
        int32_t var_800_1 = 0
        var_888.o = zmm0_6
        var_820.o = zx.o(0)
        
        if (rsi_3 != 0)
            rsi_3[1].d += 1
        
        int64_t* rax_159
        int128_t zmm6_1
        rax_159, zmm6_1 = sub_14068c640(&var_728)
        rax_159[0x39].b = 1
        *(rax_159 + 0x1b8) = zmm6_1
        sub_140692f90(&rax_159[0x3a], &var_808)
        rax_159[0x44] = rbx_49
        rax_159[0x45].b = 1
        sub_140692f90(&rax_159[0x46], &var_7e8)
        sub_140693390(&rax_159[0x5d], &var_768)
        rax_159[0x62].b = var_740_1
        sub_140692f90(&rax_159[0x63], &var_738)
        void*** rax_161 = sub_140e916e0()
        var_860 = rax_161
        var_868.q = &rax_161[2]
        sub_14065fa30(&var_868, &rax_161[2])
        int64_t var_918_5 = 0x4b8
        var_858.q = &var_907
        void* rax_162
        int128_t zmm1_11
        rax_162, zmm1_11 = sub_1406936e0(rax_159, &var_888, sub_140e23ed0(&rax_161[2], "SBorder"))
        void** rax_163 = sub_140695920(&var_868, &var_8a8, rax_162, zmm1_11)
        void* rcx_239 = rax_163[1]
        void* rdx_59 = *rax_163
        var_8d8:8.q = rcx_239
        
        if (rcx_239 != 0)
            *(rcx_239 + 8) += 1
        
        var_7d8_1 = rdx_59
        var_8d8.q = 0
        sub_14066a200(&var_7d0, &var_8d8:8)
        int64_t* rbx_51 = var_8d8:8.q
        
        if (rbx_51 != 0)
            rbx_51[1].d -= 1
            
            if (rbx_51[1].d == 1)
                (**rbx_51)(rbx_51)
                int32_t temp44_1 = *(rbx_51 + 0xc)
                *(rbx_51 + 0xc) -= 1
                
                if (temp44_1 == 1)
                    (*(*rbx_51 + 8))(rbx_51, 1)
        
        int64_t* rbx_52 = var_8a8:8.q
        
        if (rbx_52 != 0)
            rbx_52[1].d -= 1
            
            if (rbx_52[1].d == 1)
                (**rbx_52)(rbx_52)
                int32_t temp52_1 = *(rbx_52 + 0xc)
                *(rbx_52 + 0xc) -= 1
                
                if (temp52_1 == 1)
                    (*(*rbx_52 + 8))(rbx_52, 1)
        
        sub_140669d70(&var_868)
        sub_14068fed0(&var_728)
        sub_140745b20(&var_808)
        sub_140745b20(&var_7e8)
        sub_140745b20(&var_738)
        sub_140ddfb70(&var_768)
        void var_7a0
        sub_140597060(&var_7a0)
    sub_140b55650(var_7d8_1, 1)
    int64_t* rbx_58 = var_7d0
    
    if (rbx_58 != 0)
        rbx_58[1].d += 1
    
    var_888.o = var_7d8_1.o
    
    if (rbx_58 != 0)
        rbx_58[1].d += 1
    
    result = sub_140de1b90(r12 + 0x2b8, &var_888)
    
    if (rbx_58 != 0)
        rbx_58[1].d -= 1
        
        if (rbx_58[1].d == 1)
            result = (**rbx_58)(rbx_58)
            int32_t temp63_1 = *(rbx_58 + 0xc)
            *(rbx_58 + 0xc) -= 1
            
            if (temp63_1 == 1)
                result = (*(*rbx_58 + 8))(rbx_58, 1)
        
        rbx_58[1].d -= 1
        
        if (rbx_58[1].d == 1)
            result = (**rbx_58)(rbx_58)
            int32_t temp70_1 = *(rbx_58 + 0xc)
            *(rbx_58 + 0xc) -= 1
            
            if (temp70_1 == 1)
                result = (*(*rbx_58 + 8))(rbx_58, 1)
        
        rbx_58[1].d -= 1
        
        if (rbx_58[1].d == 1)
            result = (**rbx_58)(rbx_58)
            int32_t temp75_1 = *(rbx_58 + 0xc)
            *(rbx_58 + 0xc) -= 1
            
            if (temp75_1 == 1)
                result = (*(*rbx_58 + 8))(rbx_58, 1)
    
    if (var_778_1 != 0)
        var_778_1[1].d -= 1
        
        if (var_778_1[1].d == 1)
            result = (**var_778_1)(var_778_1)
            int32_t temp68_1 = *(var_778_1 + 0xc)
            *(var_778_1 + 0xc) -= 1
            
            if (temp68_1 == 1)
                result = (*(*var_778_1 + 8))(var_778_1, 1)
    
    if (var_7c8_1 != 0)
        var_7c8_1[1].d -= 1
        
        if (var_7c8_1[1].d == 1)
            result = (**var_7c8_1)(var_7c8_1)
            int32_t temp74_1 = *(var_7c8_1 + 0xc)
            *(var_7c8_1 + 0xc) -= 1
            
            if (temp74_1 == 1)
                result = (*(*var_7c8_1 + 8))(var_7c8_1, 1)
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            result = (**rsi_3)(rsi_3)
            int32_t temp79_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp79_1 == 1)
                result = (*(*rsi_3 + 8))(rsi_3, 1)
    
    if (r15_1 != 0)
        r15_1[1].d -= 1
        
        if (r15_1[1].d == 1)
            result = (**r15_1)(r15_1)
            int32_t temp82_1 = *(r15_1 + 0xc)
            *(r15_1 + 0xc) -= 1
            
            if (temp82_1 == 1)
                result = (*r15_1)[1](r15_1, 1)

__security_check_cookie(result_1 ^ &var_938)
return result
