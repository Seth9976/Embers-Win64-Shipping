// 函数: sub_141d88760
// 地址: 0x141d88760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1370)
void var_1398
int64_t result = __security_cookie ^ &var_1398
int64_t result_1 = result
int32_t var_1360 = 0

if (*(arg1 + 0x138) == 0)
    if (sub_140a80f40() != 0)
        sub_1417f3710(arg1 - 0x10)
    else if (data_143f138f4 != 0)
    label_141d88867:
        void var_f58
        int64_t* rax_5 = sub_141d87700(&var_f58, nullptr, 0xff)
        *(*rax_5 + 0x10) = arg1 - 0x10
        void* rcx_4 = *rax_5
        int32_t r8 = rax_5[2].d
        int64_t* rdx = rax_5[1]
        int64_t* rbx_2 = *(rcx_4 + 0x20)
        int64_t* var_1290_1 = rbx_2
        int32_t* rsi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rsi_1 += 1
            rbx_2 = var_1290_1
        
        sub_1405a5630(rcx_4, rdx, r8, 1)
        
        if (rbx_2 != 0)
            int32_t rax_6 = *rsi_1
            *rsi_1 -= 1
            
            if (rax_6 == 1)
                sub_140a2f6e0(var_1290_1)
    else if (data_143de5480 == 0)
        sub_1417f3710(arg1 - 0x10)
    else
        uint32_t rax_4
        rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_4.b == 0)
            goto label_141d88867
        
        sub_1417f3710(arg1 - 0x10)
    
    *(arg1 + 0x138) = 1
    int32_t var_1350 = 0
    void** (* var_1358)(void* arg1) = sub_141d8a020
    void*** rax_7 = sub_140a84c80(0, 0x30, 0)
    void*** var_f78_1 = rax_7
    
    if (rax_7 != 0)
        int128_t zmm0_1 = var_1358.o
        rax_7[1] = arg1 - 0x10
        *rax_7 = &data_142da2598
        *(rax_7 + 0x10) = zmm0_1
        rax_7[5] = sub_140a387b0()
        *rax_7 = &data_142da25f0
    
    if (rax_7 != 0)
        sub_140599630(&data_1439aa958, 1)
        void var_1048
        (*rax_7)[6](rax_7, &var_1048)
        int64_t rsi_2 = sx.q(data_1439aa960)
        int32_t rax_10 = (rsi_2 + 1).d
        bool cond:0_1 = rax_10 s<= data_1439aa964
        data_1439aa960 = rax_10
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_1439aa958)
        
        void** rax_13 = (rsi_2 << 4) + data_1439aa958
        *rax_13 = rax_7
        rax_13[1].d = 3
    
    var_1350 = 0x10
    var_1358 = sub_141d867d8
    void*** rax_14
    uint128_t zmm0_2
    rax_14, zmm0_2 = sub_140a84c80(0, 0x30, 0)
    void*** var_f68_1 = rax_14
    
    if (rax_14 != 0)
        zmm0_2 = var_1358.o
        rax_14[1] = arg1 - 0x10
        *rax_14 = &data_142e22de8
        *(rax_14 + 0x10) = zmm0_2
        rax_14[5] = sub_140a387b0()
        *rax_14 = &data_142e22e40
    
    if (rax_14 != 0)
        zmm0_2 = sub_140599630(&data_14399fce8, 1)
        void var_1040
        (*rax_14)[6](rax_14, &var_1040)
        int64_t rsi_3 = sx.q(data_14399fcf0)
        int32_t rax_17 = (rsi_3 + 1).d
        bool cond:1_1 = rax_17 s<= data_14399fcf4
        data_14399fcf0 = rax_17
        
        if (not(cond:1_1))
            zmm0_2 = sub_1405a4f90(&data_14399fce8)
        
        void** rax_20 = (rsi_3 << 4) + data_14399fce8
        *rax_20 = rax_14
        rax_20[1].d = 3
    
    sub_140d7dfe0()
    int64_t rcx_9 = *arg3
    var_1360.q = rcx_9
    int64_t* rax_21
    int64_t* rbx_5
    int32_t r15_1
    
    if (rcx_9 == 0)
        int64_t* var_1020
        rax_21, zmm0_2 = sub_141fff880(&var_1020)
        int64_t* var_1228
        rbx_5 = var_1228
        r15_1 = 2
        var_1360.q = *rax_21
    else
        rbx_5 = arg3[1]
        int64_t var_1230 = rcx_9
        int64_t* var_1228_1 = rbx_5
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        rax_21 = &var_1230
        r15_1 = 1
    
    int64_t* r12_1 = rax_21[1]
    
    if (r12_1 != 0)
        r12_1[1].d += 1
    
    if ((r15_1.b & 2) != 0)
        r15_1 &= 0xfffffffd
        int64_t* var_1018
        
        if (var_1018 != 0)
            var_1018[1].d -= 1
            
            if (var_1018[1].d == 1)
                (**var_1018)(var_1018)
                int32_t temp5_1 = *(var_1018 + 0xc)
                *(var_1018 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_1018 + 8))(var_1018, 1)
    
    if ((r15_1.b & 1) != 0 && rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp6_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* var_1240 = nullptr
    float var_1038
    float* rax_26 = sub_140e12930(var_1360.q, &var_1038, zmm0_2)
    float zmm6_1 = *rax_26
    int32_t zmm7_1 = rax_26[1]
    void var_558
    int64_t* rax_27 = sub_1418aefd0(&var_558)
    rax_27[0x34].d = zmm6_1
    *(rax_27 + 0x1a4) = zmm7_1
    void*** rax_28 = sub_1418aed60()
    int64_t* var_11f0 = &rax_28[2]
    sub_140918950(&var_11f0, &rax_28[2])
    int64_t var_1378_1 = 0xa90
    void var_1368
    void* var_11e0_1 = &var_1368
    int64_t* var_1010
    int64_t** rax_29 =
        sub_1418aff10(&var_11f0, &var_1010, rax_27, sub_140e23ed0(&rax_28[2], "SVirtualWindow"))
    int64_t* rbx_7 = rax_29[1]
    
    if (rbx_7 != 0)
        rbx_7[1].d += 1
    
    void var_fa8
    
    if (arg1 + 0x68 == &var_fa8)
    label_141d88c0f:
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp9_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
    else
        *(arg1 + 0x68) = *rax_29
        int64_t* rsi_6 = *(arg1 + 0x70)
        
        if (rbx_7 == rsi_6)
            goto label_141d88c0f
        
        *(arg1 + 0x70) = rbx_7
        
        if (rsi_6 != 0)
            rsi_6[1].d -= 1
            
            if (rsi_6[1].d == 1)
                (**rsi_6)(rsi_6)
                int32_t temp13_1 = *(rsi_6 + 0xc)
                *(rsi_6 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rsi_6 + 8))(rsi_6, 1)
    
    int64_t* var_1008
    
    if (var_1008 != 0)
        var_1008[1].d -= 1
        
        if (var_1008[1].d == 1)
            (**var_1008)(var_1008)
            int32_t temp12_1 = *(var_1008 + 0xc)
            *(var_1008 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_1008 + 8))(var_1008, 1)
    
    if (rax_28 != 0)
        rax_28[1].d -= 1
        
        if (rax_28[1].d == 1)
            (**rax_28)(rax_28)
            int32_t temp14_1 = *(rax_28 + 0xc)
            *(rax_28 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*rax_28)[1](rax_28, 1)
    
    sub_140ddea30(&var_558)
    void*** rax_37 = j_sub_140a82f30(0x48)
    void*** rbx_10 = rax_37
    float* (* var_1348)(void* arg1, float* arg2, uint128_t arg3 @ zmm0)
    void* var_1340
    char* (* var_1338)(void* arg1, char* arg2)
    int64_t* var_1330
    
    if (rax_37 == 0)
        rbx_10 = nullptr
    else
        rax_37[1].d = 1
        *(rax_37 + 0xc) = 1
        *rbx_10 = &data_142feada8
        void* rax_38 = *(arg1 + 0x70)
        var_1348 = *(arg1 + 0x68)
        var_1340 = rax_38
        
        if (rax_38 != 0)
            *(rax_38 + 8) += 1
        
        var_1338 = var_1360.q
        var_1330 = r12_1
        
        if (r12_1 != 0)
            r12_1[1].d += 1
        
        sub_1418af340(&rbx_10[2], &var_1338, &var_1348, arg2)
    
    uint128_t zmm0_3 = (&rbx_10[2]).o
    var_1358.o = zmm0_3
    void*** rbx_11 = _mm_bsrli_si128(zmm0_3, 8).q
    
    if (rbx_11 != 0)
        rbx_11[1].d += 1
        rbx_11 = rbx_10
    
    if (arg1 + 0x168 != &var_1358)
        *(arg1 + 0x168) = var_1358
        var_1358 = nullptr
        sub_1405aeff0(arg1 + 0x170, &var_1350)
        rbx_11 = rbx_10
    
    void* rcx_34 = var_1350.q
    
    if (rcx_34 != 0)
        int32_t rax_41 = *(rcx_34 + 8)
        *(rcx_34 + 8) -= 1
        
        if (rax_41 == 1)
            int64_t* rbx_12 = var_1350.q
            (**rbx_12)(rbx_12)
            int32_t rax_43 = *(rbx_12 + 0xc)
            *(rbx_12 + 0xc) -= 1
            
            if (rax_43 == 1)
                int64_t* rcx_36 = var_1350.q
                (*(*rcx_36 + 8))(rcx_36, 1)
        
        rbx_11 = rbx_10
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t r14_1 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (r14_1 == 1)
                (*rbx_11)[1](rbx_11, zx.q(r14_1))
    
    int64_t* rbx_13 = data_143e243c8
    char var_10f8_1 = 1
    int64_t var_10f0 = 0
    int32_t var_10e8_1 = 0
    int128_t var_1108_1 = zx.o(0)
    void var_1030
    int64_t rax_49 = (*(*rbx_13 + 0x48))(rbx_13, *sub_140b58260(&var_1030, u"NoBorder", 1), 0)
    char var_1120_1 = 1
    int64_t var_1128_1 = rax_49
    int64_t var_1118 = 0
    int32_t var_1110_1 = 0
    void var_3b0
    int64_t* rax_50
    int128_t zmm6_2
    rax_50, zmm6_2 = sub_14068c640(&var_3b0)
    rax_50[0x44] = rax_49
    rax_50[0x45].b = 1
    
    if (&var_1118 != &rax_50[0x46] && rax_50[0x47].d != 0)
        int64_t* rcx_42 = rax_50[0x46]
        
        if (rcx_42 != 0)
            (*(*rcx_42 + 0x38))(rcx_42, 0)
            int64_t rcx_43 = rax_50[0x46]
            
            if (rcx_43 != 0)
                rax_50[0x46] = sub_140a84c80(rcx_43, 0, 0)
            
            rax_50[0x47].d = 0
    
    rax_50[0x39].b = 1
    *(rax_50 + 0x1b8) = zmm6_2
    
    if (&var_10f0 != &rax_50[0x3a] && rax_50[0x3b].d != 0)
        int64_t* rcx_44 = rax_50[0x3a]
        
        if (rcx_44 != 0)
            (*(*rcx_44 + 0x38))(rcx_44, 0)
            int64_t rcx_45 = rax_50[0x3a]
            
            if (rcx_45 != 0)
                rax_50[0x3a] = sub_140a84c80(rcx_45, 0, 0)
            
            rax_50[0x3b].d = 0
    
    void*** rax_55 = j_sub_140a82f30(0x4c8)
    void*** rbx_17 = rax_55
    
    if (rax_55 == 0)
        rbx_17 = nullptr
    else
        rax_55[1].d = 1
        *(rax_55 + 0xc) = 1
        *rbx_17 = &data_142d8c5a0
        
        if (rbx_17 != -0x10)
            sub_140f20640(&rbx_17[2])
    
    void*** var_1158_1 = rbx_17
    void* var_1160 = &rbx_17[2]
    sub_14065fa30(&var_1160, &rbx_17[2])
    int64_t var_1378_2 = 0x4b8
    void var_1367
    void* var_1150_1 = &var_1367
    int128_t zmm1_2 = sub_140e23ed0(&rbx_17[2], "SBorder")
    
    if (rbx_17 != 0)
        rbx_17[1].d += 1
    
    void var_f98
    
    if (arg1 + 0x58 == &var_f98)
    label_141d89004:
        
        if (rbx_17 != 0)
            rbx_17[1].d -= 1
            
            if (rbx_17[1].d == 1)
                (**rbx_17)(rbx_17)
                int32_t temp16_1 = *(rbx_17 + 0xc)
                *(rbx_17 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*rbx_17)[1](rbx_17, 1)
    else
        *(arg1 + 0x58) = &rbx_17[2]
        void*** rsi_9 = *(arg1 + 0x60)
        
        if (rbx_17 == rsi_9)
            goto label_141d89004
        
        *(arg1 + 0x60) = rbx_17
        
        if (rsi_9 != 0)
            rsi_9[1].d -= 1
            
            if (rsi_9[1].d == 1)
                (**rsi_9)(rsi_9)
                int32_t temp18_1 = *(rsi_9 + 0xc)
                *(rsi_9 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*rsi_9)[1](rsi_9, 1)
    
    void* var_1058
    void** rax_60 = sub_140695920(&var_1160, &var_1058, rax_50, zmm1_2)
    int64_t* rbx_18 = rax_60[1]
    void* rsi_10 = *rax_60
    
    if (rbx_18 != 0)
        rbx_18[1].d += 1
    
    void var_8d0
    int64_t* rax_61 = sub_1418aee00(&var_8d0)
    void* var_1268 = rsi_10
    int64_t* rsi_11 = rbx_18
    
    if (rbx_18 != 0)
        rbx_18[1].d += 1
    
    if (&var_1268 != &rax_61[0x37])
        var_1268.o = *(rax_61 + 0x1b8)
        rsi_11 = rbx_18
        *(rax_61 + 0x1b8) = var_1268.o
    
    if (rsi_11 != 0)
        rsi_11[1].d -= 1
        
        if (rsi_11[1].d == 1)
            (**rsi_11)(rsi_11)
            int32_t temp21_1 = *(rsi_11 + 0xc)
            *(rsi_11 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*rsi_11 + 8))(rsi_11, 1)
    
    if (rbx_18 != 0)
        rbx_18[1].d -= 1
        
        if (rbx_18[1].d == 1)
            (**rbx_18)(rbx_18)
            int32_t temp22_1 = *(rbx_18 + 0xc)
            *(rbx_18 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*(*rbx_18 + 8))(rbx_18, 1)
    
    void*** rax_66 = j_sub_140a82f30(0x330)
    void*** rbx_19 = rax_66
    
    if (rax_66 == 0)
        rbx_19 = nullptr
    else
        rax_66[1].d = 1
        *(rax_66 + 0xc) = 1
        *rbx_19 = &data_142feae18
        
        if (rbx_19 != -0x10)
            sub_140f209b0(&rbx_19[2])
    
    void*** var_1170_1 = rbx_19
    void* var_1178 = &rbx_19[2]
    sub_140918950(&var_1178, &rbx_19[2])
    int64_t var_1378_3 = 0x320
    void var_1366
    void* var_1168_1 = &var_1366
    int128_t zmm1_4 = sub_140e23ed0(&rbx_19[2], "SDPIScaler")
    
    if (rbx_19 != 0)
        rbx_19[1].d += 1
    
    void var_f88
    
    if (arg1 + 0x178 == &var_f88)
    label_141d891bd:
        
        if (rbx_19 != 0)
            rbx_19[1].d -= 1
            
            if (rbx_19[1].d == 1)
                (**rbx_19)(rbx_19)
                int32_t temp24_1 = *(rbx_19 + 0xc)
                *(rbx_19 + 0xc) -= 1
                
                if (temp24_1 == 1)
                    (*rbx_19)[1](rbx_19, 1)
    else
        *(arg1 + 0x178) = &rbx_19[2]
        void*** rsi_13 = *(arg1 + 0x180)
        
        if (rbx_19 == rsi_13)
            goto label_141d891bd
        
        *(arg1 + 0x180) = rbx_19
        
        if (rsi_13 != 0)
            rsi_13[1].d -= 1
            
            if (rsi_13[1].d == 1)
                (**rsi_13)(rsi_13)
                int32_t temp26_1 = *(rsi_13 + 0xc)
                *(rsi_13 + 0xc) -= 1
                
                if (temp26_1 == 1)
                    (*rsi_13)[1](rsi_13, 1)
    
    void* var_1068
    void** rax_71 = sub_1418afba0(&var_1178, &var_1068, rax_61, zmm1_4)
    int64_t* r13_1 = rax_71[1]
    void* var_1138 = *rax_71
    int64_t* var_1130_1 = r13_1
    
    if (r13_1 != 0)
        r13_1[1].d += 1
    
    var_1330.d = 0
    var_1338 = sub_141d88710
    int32_t var_12e0_1 = 0
    int32_t* (* var_12e8)(void* arg1, int32_t* arg2, uint128_t arg3 @ zmm0) = sub_141d884b0
    var_1348 = sub_141d886f0
    var_1340.d = 0
    void var_ca0
    int64_t* rax_72 = sub_141b7aa70(&var_ca0)
    int128_t var_ff8 = var_1338.o
    *(rax_72 + 0x1c9) = 0
    int64_t* var_1318
    int64_t* rax_73 = sub_141d85130(&var_1318, arg1 - 0x10, &var_ff8)
    int64_t var_12a0 = 0
    int32_t var_1298_1 = 0
    char rdx_21 = 0x19
    char var_12a8_1 = 0x19
    char r8_9 = 1
    char var_12a7_1 = 1
    
    if (rax_73 != &var_12a0 && rax_73[1].d != 0)
        int64_t* rcx_69 = *rax_73
        
        if (rcx_69 != 0)
            (*(*rcx_69 + 0x40))(rcx_69, &var_12a0)
            r8_9 = var_12a7_1
            rdx_21 = var_12a8_1
    
    rax_72[0xf].b = rdx_21
    *(rax_72 + 0x79) = r8_9
    sub_1407473e0(&rax_72[0x10], &var_12a0)
    sub_140745b20(&var_12a0)
    int32_t var_1310
    int64_t* rax_76
    
    if (var_1310 == 0)
        rax_76 = var_1318
    label_141d89318:
        
        if (rax_76 != 0)
            sub_140a74f90(rax_76)
    else
        int64_t* rcx_72 = var_1318
        
        if (rcx_72 != 0)
            (*(*rcx_72 + 0x38))(rcx_72, 0)
            rax_76 = var_1318
            
            if (rax_76 != 0)
                rax_76 = sub_140a84c80(rax_76, 0, 0)
                var_1318 = rax_76
            
            int32_t var_1310_1 = 0
            goto label_141d89318
    void*** rax_77 = sub_141d85520()
    void*** var_1188_1 = rax_77
    void* var_1190 = &rax_77[2]
    sub_140918950(&var_1190, &rax_77[2])
    int64_t var_1378_4 = 0x400
    void var_1365
    void* var_1180_1 = &var_1365
    int128_t zmm1_5 = sub_140e23ed0(&rax_77[2], "SViewport")
    void*** var_1218 = rax_77
    
    if (rax_77 != 0)
        rax_77[1].d += 1
    
    int64_t var_1220_1 = 0
    sub_14066a200(&var_1240, &var_1218)
    void*** rbx_21 = var_1218
    
    if (rbx_21 != 0)
        rbx_21[1].d -= 1
        
        if (rbx_21[1].d == 1)
            (**rbx_21)(rbx_21)
            int32_t temp28_1 = *(rbx_21 + 0xc)
            *(rbx_21 + 0xc) -= 1
            
            if (temp28_1 == 1)
                (*rbx_21)[1](rbx_21, 1)
    
    void* var_1078
    void** rax_80 = sub_141d86480(&var_1190, &var_1078, rax_72, zmm1_5)
    void* rbx_22 = rax_80[1]
    void* var_1208 = *rax_80
    void* var_1200_1 = rbx_22
    
    if (rbx_22 != 0)
        *(rbx_22 + 8) += 1
    
    void var_f40
    int64_t* rax_81 = sub_14068c940(&var_f40)
    int128_t var_fe8 = var_1348.o
    int64_t* var_1308
    int64_t* rax_82 = sub_141d85250(&var_1308, arg1 - 0x10, &var_fe8)
    int32_t var_12c0_1 = 0xbf800000
    char rdx_28 = 1
    char var_12bc_1 = 1
    int64_t var_12b8 = 0
    int32_t var_12b0_1 = 0
    
    if (rax_82 != &var_12b8 && rax_82[1].d != 0)
        int64_t* rcx_84 = *rax_82
        
        if (rcx_84 != 0)
            (*(*rcx_84 + 0x40))(rcx_84, &var_12b8)
            rdx_28 = var_12bc_1
    
    *(rax_81 + 0x1e4) = rdx_28
    rax_81[0x3c].d = var_12c0_1
    sub_1407473e0(&rax_81[0x3d], &var_12b8)
    sub_140745b20(&var_12b8)
    int32_t var_1300
    int64_t* rax_85
    
    if (var_1300 == 0)
        rax_85 = var_1308
    label_141d894dc:
        
        if (rax_85 != 0)
            sub_140a74f90(rax_85)
    else
        int64_t* rcx_87 = var_1308
        
        if (rcx_87 != 0)
            (*(*rcx_87 + 0x38))(rcx_87, 0)
            rax_85 = var_1308
            
            if (rax_85 != 0)
                rax_85 = sub_140a84c80(rax_85, 0, 0)
                var_1308 = rax_85
            
            int32_t var_1300_1 = 0
            goto label_141d894dc
    int128_t var_fd8 = var_12e8.o
    void var_fc8
    int64_t* rax_86 = sub_141d85250(&var_fc8, arg1 - 0x10, &var_fd8)
    int32_t var_12d8_1 = 0xbf800000
    char rdx_32 = 1
    char var_12d4_1 = 1
    int64_t var_12d0 = 0
    int32_t var_12c8_1 = 0
    
    if (rax_86 != &var_12d0 && rax_86[1].d != 0)
        int64_t* rcx_91 = *rax_86
        
        if (rcx_91 != 0)
            (*(*rcx_91 + 0x40))(rcx_91, &var_12d0)
            rdx_32 = var_12d4_1
    
    *(rax_81 + 0x1fc) = rdx_32
    rax_81[0x3f].d = var_12d8_1
    sub_1407473e0(&rax_81[0x40], &var_12d0)
    sub_140745b20(&var_12d0)
    sub_140745b20(&var_fc8)
    int128_t zmm1_6 = var_1208.o
    var_12e8.o = zmm1_6
    
    if (rbx_22 != 0)
        *(rbx_22 + 8) += 1
    
    if (&var_12e8 != &rax_81[0x3a])
        int128_t zmm0_10 = *(rax_81 + 0x1d0)
        *(rax_81 + 0x1d0) = zmm1_6
        var_12e8.o = zmm0_10
    
    int64_t* rbx_23 = var_12e0_1.q
    
    if (rbx_23 != 0)
        rbx_23[1].d -= 1
        
        if (rbx_23[1].d == 1)
            (**rbx_23)(rbx_23)
            int32_t temp30_1 = *(rbx_23 + 0xc)
            *(rbx_23 + 0xc) -= 1
            
            if (temp30_1 == 1)
                (*(*rbx_23 + 8))(rbx_23, 1)
    
    sub_140669d70(&var_1208)
    void*** rax_91 = sub_140688920()
    void*** var_11a0_1 = rax_91
    void* var_11a8 = &rax_91[2]
    sub_14065fa30(&var_11a8, &rax_91[2])
    int64_t var_1378_5 = 0x3c8
    void var_1364
    void* var_1198_1 = &var_1364
    void* var_1088
    void** rax_92 = sub_140695d20(&var_11a8, &var_1088, rax_81, sub_140e23ed0(&rax_91[2], "SBox"))
    int64_t* r15_3 = rax_92[1]
    void* var_1148 = *rax_92
    int64_t* var_1140_1 = r15_3
    
    if (r15_3 != 0)
        r15_3[1].d += 1
    
    var_1348 = sub_141d89fb0
    var_1338 = sub_141d89fb0
    var_1340.d = 0
    var_1330.d = 0
    void*** rax_93 = sub_140e258e0()
    *(rax_93 + 0x24) = 0x202
    void*** rax_94 = sub_140dd3900()
    void*** var_11b8_1 = rax_94
    void* var_11c0 = &rax_94[2]
    sub_140918950(&var_11c0, &rax_94[2])
    int64_t var_1378_6 = 0x2d0
    void var_1363
    void* var_11b0_1 = &var_1363
    sub_140e23ed0(&rax_94[2], "SOverlay")
    void* rax_96 = sub_140de1aa0(sub_140e258e0(), &var_1138)
    void* rax_97 = sub_140de1aa0(rax_93, &var_1148)
    void var_708
    int64_t* rax_98
    int128_t zmm1_8
    rax_98, zmm1_8 = sub_140dd5d30(&var_708)
    void* var_1098
    void** rax_101 = sub_140de49c0(&var_11c0, &var_1098, 
        sub_140de1c90(sub_140de1c90(rax_98, rax_97), rax_96), zmm1_8)
    int64_t* rbx_27 = rax_101[1]
    int64_t (* r14_6)(void* arg1) = *rax_101
    int64_t (* var_1278)(void* arg1) = r14_6
    int64_t* var_1270_1 = rbx_27
    
    if (rbx_27 != 0)
        rbx_27[1].d += 1
    
    void var_aa0
    int64_t* rax_102 = sub_141d85570(&var_aa0)
    int128_t var_fb8 = var_1338.o
    void var_10e0
    sub_1407473e0(&rax_102[0x36], sub_141d85370(&var_10e0, arg1 - 0x10, &var_fb8))
    sub_140745b20(&var_10e0)
    int128_t var_10c8 = var_1348.o
    void var_10b8
    sub_1407473e0(&rax_102[0x34], sub_141d85370(&var_10b8, arg1 - 0x10, &var_10c8))
    sub_140745b20(&var_10b8)
    int64_t (* var_1258)(void* arg1) = r14_6
    
    if (rbx_27 != 0)
        rbx_27[1].d += 1
    
    if (&var_1258 != &rax_102[0x38])
        var_1258.o = *(rax_102 + 0x1c0)
        *(rax_102 + 0x1c0) = var_1258.o
    
    if (rbx_27 != 0)
        rbx_27[1].d -= 1
        
        if (rbx_27[1].d == 1)
            (**rbx_27)(rbx_27)
            int32_t temp32_1 = *(rbx_27 + 0xc)
            *(rbx_27 + 0xc) -= 1
            
            if (temp32_1 == 1)
                (*(*rbx_27 + 8))(rbx_27, 1)
    
    sub_140669d70(&var_1278)
    void*** rax_108 = sub_141d85490()
    void*** var_11d0_1 = rax_108
    void* var_11d8 = &rax_108[2]
    sub_140918950(&var_11d8, &rax_108[2])
    int64_t var_1378_7 = 0x4c8
    void var_1362
    void* var_11c8_1 = &var_1362
    void* var_10a8
    void** rax_109 = sub_141d86130(&var_11d8, &var_10a8, rax_102, 
        sub_140e23ed0(&rax_108[2], "SDefaultMovieBorder"))
    int64_t* rbx_29 = rax_109[1]
    void* rdx_49 = *rax_109
    void* const var_1288 = rdx_49
    int64_t* var_1280 = rbx_29
    
    if (rbx_29 != 0)
        rbx_29[1].d += 1
    
    if (arg1 + 0x48 != &var_1288)
        *(arg1 + 0x48) = rdx_49
        var_1288 = nullptr
        sub_14066a200(arg1 + 0x50, &var_1280)
        rbx_29 = var_1280
    
    if (rbx_29 != 0)
        rbx_29[1].d -= 1
        
        if (rbx_29[1].d == 1)
            (**rbx_29)(rbx_29)
            int32_t temp35_1 = *(rbx_29 + 0xc)
            *(rbx_29 + 0xc) -= 1
            
            if (temp35_1 == 1)
                (*(*rbx_29 + 8))(rbx_29, 1)
    
    int64_t* var_10a0
    
    if (var_10a0 != 0)
        var_10a0[1].d -= 1
        
        if (var_10a0[1].d == 1)
            (**var_10a0)(var_10a0)
            int32_t temp37_1 = *(var_10a0 + 0xc)
            *(var_10a0 + 0xc) -= 1
            
            if (temp37_1 == 1)
                (*(*var_10a0 + 8))(var_10a0, 1)
    
    sub_140597060(&var_11d8)
    void var_8e0
    sub_140597060(&var_8e0)
    void var_8f0
    sub_140745b20(&var_8f0)
    void var_900
    sub_140745b20(&var_900)
    sub_140ddea30(&var_aa0)
    int64_t* var_1090
    
    if (var_1090 != 0)
        var_1090[1].d -= 1
        
        if (var_1090[1].d == 1)
            (**var_1090)(var_1090)
            int32_t temp38_1 = *(var_1090 + 0xc)
            *(var_1090 + 0xc) -= 1
            
            if (temp38_1 == 1)
                (*(*var_1090 + 8))(var_1090, 1)
    
    sub_140597060(&var_11c0)
    int64_t var_568
    
    if (var_568 != 0)
        sub_140a74f90(var_568)
    
    sub_140ddea30(&var_708)
    
    if (r15_3 != 0)
        r15_3[1].d -= 1
        
        if (r15_3[1].d == 1)
            (**r15_3)(r15_3)
            int32_t temp41_1 = *(r15_3 + 0xc)
            *(r15_3 + 0xc) -= 1
            
            if (temp41_1 == 1)
                (*(*r15_3 + 8))(r15_3, 1)
    
    int64_t* var_1080
    
    if (var_1080 != 0)
        var_1080[1].d -= 1
        
        if (var_1080[1].d == 1)
            (**var_1080)(var_1080)
            int32_t temp43_1 = *(var_1080 + 0xc)
            *(var_1080 + 0xc) -= 1
            
            if (temp43_1 == 1)
                (*(*var_1080 + 8))(var_1080, 1)
    
    sub_140669d70(&var_11a8)
    void var_cb0
    sub_140745b20(&var_cb0)
    void var_cc8
    sub_140745b20(&var_cc8)
    void var_ce0
    sub_140745b20(&var_ce0)
    void var_cf8
    sub_140745b20(&var_cf8)
    void var_d10
    sub_140745b20(&var_d10)
    void var_d28
    sub_140745b20(&var_d28)
    void var_d40
    sub_140745b20(&var_d40)
    void var_d58
    sub_140745b20(&var_d58)
    void var_d70
    sub_140597060(&var_d70)
    void var_d80
    sub_140745b20(&var_d80)
    sub_140660250(&var_f40)
    int64_t* var_1070
    
    if (var_1070 != 0)
        var_1070[1].d -= 1
        
        if (var_1070[1].d == 1)
            (**var_1070)(var_1070)
            int32_t temp45_1 = *(var_1070 + 0xc)
            *(var_1070 + 0xc) -= 1
            
            if (temp45_1 == 1)
                (*(*var_1070 + 8))(var_1070, 1)
    
    sub_140597060(&var_1190)
    void var_ab0
    sub_140745b20(&var_ab0)
    void var_ad0
    sub_140597060(&var_ad0)
    void var_ae8
    sub_140745b20(&var_ae8)
    void var_b00
    sub_140597060(&var_b00)
    sub_140ddea30(&var_ca0)
    
    if (r13_1 != 0)
        r13_1[1].d -= 1
        
        if (r13_1[1].d == 1)
            (**r13_1)(r13_1)
            int32_t temp47_1 = *(r13_1 + 0xc)
            *(r13_1 + 0xc) -= 1
            
            if (temp47_1 == 1)
                (*(*r13_1 + 8))(r13_1, 1)
    
    int64_t* var_1060
    
    if (var_1060 != 0)
        var_1060[1].d -= 1
        
        if (var_1060[1].d == 1)
            (**var_1060)(var_1060)
            int32_t temp49_1 = *(var_1060 + 0xc)
            *(var_1060 + 0xc) -= 1
            
            if (temp49_1 == 1)
                (*(*var_1060 + 8))(var_1060, 1)
    
    sub_140597060(&var_1178)
    void var_718
    sub_140597060(&var_718)
    void var_728
    sub_140745b20(&var_728)
    sub_140ddea30(&var_8d0)
    int64_t* var_1050
    
    if (var_1050 != 0)
        var_1050[1].d -= 1
        
        if (var_1050[1].d == 1)
            (**var_1050)(var_1050)
            int32_t temp50_1 = *(var_1050 + 0xc)
            *(var_1050 + 0xc) -= 1
            
            if (temp50_1 == 1)
                (*(*var_1050 + 8))(var_1050, 1)
    
    sub_140669d70(&var_1160)
    sub_14068fed0(&var_3b0)
    sub_140745b20(&var_1118)
    sub_140745b20(&var_10f0)
    int64_t* rsi_18 = var_1240
    *(arg1 + 0x78) = &rax_77[2]
    sub_140ea4170(arg1 + 0x80, rsi_18)
    int64_t rdx_52
    rdx_52.b = 1
    void* r15_4 = var_1360.q
    *(arg1 + 0x38) = r15_4
    sub_140ea4170(arg1 + 0x40, r12_1)
    var_1278 = sub_141d89fd0
    var_1270_1.d = 0
    int64_t var_12f8 = 0
    int32_t var_12f0_1 = 0
    void*** rax_128 = sub_1405978f0(0x30, &var_12f8)
    
    if (rax_128 != 0)
        int128_t zmm0_14 = var_1278.o
        rax_128[1] = arg1 - 0x10
        *rax_128 = &data_142da2598
        *(rax_128 + 0x10) = zmm0_14
        rax_128[5] = sub_140a387b0()
        *rax_128 = &data_142da25f0
    
    void var_1028
    
    if (var_12f0_1 != 0 && var_12f8 != 0)
        sub_1408d6c30(r15_4 + 0x988, &var_1028, &var_12f8)
    sub_140745b20(&var_12f8)
    
    if (rsi_18 != 0)
        rsi_18[1].d -= 1
        
        if (rsi_18[1].d == 1)
            (**rsi_18)(rsi_18)
            int32_t temp53_1 = *(rsi_18 + 0xc)
            *(rsi_18 + 0xc) -= 1
            
            if (temp53_1 == 1)
                (*(*rsi_18 + 8))(rsi_18, 1)
    
    if (r12_1 != 0)
        r12_1[1].d -= 1
        
        if (r12_1[1].d == 1)
            (**r12_1)(r12_1)
            int32_t temp54_1 = *(r12_1 + 0xc)
            *(r12_1 + 0xc) -= 1
            
            if (temp54_1 == 1)
                (*(*r12_1 + 8))(r12_1, 1)
    
    result = sub_140597060(arg3)
else
    int64_t* rbx_1 = arg3[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(result_1 ^ &var_1398)
return result
