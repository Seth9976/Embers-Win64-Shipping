// 函数: sub_140eab520
// 地址: 0x140eab520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x17b0)
void var_17e8
int64_t rax_1 = __security_cookie ^ &var_17e8
uint32_t var_1718 = 0
int64_t* r12 = *(arg3 + 0x18)
void* r13 = arg3
void* r14 = *(arg3 + 0x10)
void* rdi = arg1
int64_t* var_14f0 = r12

if (r12 != 0)
    r12[1].d += 1

int64_t* r15 = *(arg3 + 8)
int64_t* var_1500 = r15

if (r15 != 0)
    r15[1].d += 1

void* rax_3 = *(arg3 + 0x20)
int128_t var_1738
void* var_1728
int128_t* rax_5

if (rax_3 == 0)
    rax_5 = sub_140dda8f0(&var_1738)
else
    var_1738 = *(rax_3 + 0x50)
    var_1728 = *(rax_3 + 0x60)
    int32_t var_1720_1 = *(rax_3 + 0x68)
    rax_5 = &var_1738

int128_t var_13d8
int128_t* rcx_1 = &var_13d8
var_13d8 = *rax_5
void* var_13c8 = rax_5[1].q
int32_t var_13c0 = *(rax_5 + 0x18)

if (*(r14 + 0x110) != 0)
    rcx_1 = r14 + 0xf8

int64_t* rax_7 = *(r13 + 0x90)
uint64_t (* var_1708)(void* arg1, int512_t arg2 @ zmm1) = data_143e244b0
int64_t* rax_9 = data_143e244b8
int64_t* var_1700 = rax_9

if (rax_9 != 0)
    rax_9[1].d += 1

int64_t* (* var_17b8)(void* arg1, int64_t* arg2)
int64_t* var_17b0
void var_17a8
uint64_t (* var_1788)(void* arg1, int512_t arg2 @ zmm1)
int64_t* var_1780
void* var_16f8
void*** var_16f0
void* var_16e8
void var_13b8

if (*(rcx_1 + 0x18) != 0)
    void* rax_10 = sub_140e14f50(rcx_1)
    int32_t rcx_2
    rcx_2.b = sub_140b5b8a0(*(rax_10 + 0x50), 0) == 0
    void* rbx_1
    
    if ((*(rax_10 + 0x54) != 0 | rcx_2.b) == 0)
        rbx_1 = *(rax_10 + 0x48)
    
    int64_t rbx_2
    
    if ((*(rax_10 + 0x54) != 0 | rcx_2.b) != 0 || rbx_1 == 0)
        rbx_2 = *(rax_10 + 0x50)
    else
        rbx_2 = *(rbx_1 + 0x18)
    
    int32_t rcx_3
    rcx_3.b = sub_140b5b8a0(rbx_2.d, 0) == 0
    rcx_3.b |= (rbx_2 u>> 0x20).d != 0
    
    if (rcx_3.b != 0)
        var_1738.q = rax_10
        var_1728 = nullptr
        int32_t var_1720_2 = 0
        var_1738:8.b = 1
        int64_t* rax_13 = sub_140e4fb70(&var_13b8)
        rax_13[0x34] = rax_10
        rax_13[0x35].b = 1
        sub_140692f90(&rax_13[0x36], &var_1728)
        void*** rax_14 = sub_140e48c50()
        var_16f0 = rax_14
        var_16f8 = &rax_14[2]
        sub_140918950(&var_16f8, &rax_14[2])
        int64_t var_17c8_1 = 0x3a8
        var_16e8 = &var_17a8
        void** rax_15 =
            sub_140e56930(&var_16f8, &var_17b8, rax_13, sub_140e23ed0(&rax_14[2], "SImage"))
        uint64_t (* rdx_3)(void* arg1, int512_t arg2 @ zmm1) = *rax_15
        var_1788 = rdx_3
        int64_t* rcx_9 = rax_15[1]
        var_1780 = rcx_9
        
        if (rcx_9 != 0)
            rcx_9[1].d += 1
            rcx_9 = var_1780
            rdx_3 = var_1788
        
        int64_t* rbx_5 = var_1700
        uint64_t (* rax_16)(void* arg1, int512_t arg2 @ zmm1) = var_1708
        var_1708 = rdx_3
        var_1788 = rax_16
        var_1700 = rcx_9
        var_1780 = rbx_5
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp2_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        if (var_17b0 != 0)
            var_17b0[1].d -= 1
            
            if (var_17b0[1].d == 1)
                (**var_17b0)(var_17b0)
                int32_t temp5_1 = *(var_17b0 + 0xc)
                *(var_17b0 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_17b0 + 8))(var_17b0, 1)
        
        void*** rbx_7 = var_16f0
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp8_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*rbx_7)[1](rbx_7, 1)
        
        void var_11b0
        sub_140745b20(&var_11b0)
        void var_11c8
        sub_140745b20(&var_11c8)
        int64_t* var_11d8
        
        if (var_11d8 != 0)
            var_11d8[1].d -= 1
            
            if (var_11d8[1].d == 1)
                (**var_11d8)(var_11d8)
                int32_t temp9_1 = *(var_11d8 + 0xc)
                *(var_11d8 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*var_11d8 + 8))(var_11d8, 1)
        
        void var_1208
        sub_140745b20(&var_1208)
        sub_140ddea30(&var_13b8)
        sub_140745b20(&var_1728)
        rdi = arg1

void* rax_25 = *(r13 + 0x20)
char rsi_2 = *(r14 + 0x14a)

if (rax_25 != 0)
    rsi_2 = *(rax_25 + 0x84)

char rdx_4 = data_1439ae51c
char rax_26 = data_1439ae51e
int128_t var_1458 = data_142d8c9c0

if (rsi_2 - 2 u> 2)
    rdx_4 = rax_26

char var_1448 = 2
int64_t rdx_5 = *(r13 + 0x98)
int64_t var_1440 = 0
int64_t var_1438 = 0
char var_1430 = 1
int64_t var_1428 = 0
int32_t var_1420 = 0
char* (* var_1710)(void* arg1, char* arg2, uint128_t arg3 @ zmm0)
sub_140e1ad30(&var_1710, rdx_5, ".CheckBox")
int64_t (* var_1798)(void* arg1, int64_t arg2)
int32_t var_1790
int128_t var_1608
int128_t var_15f0

if (rsi_2 == 4)
    var_1710 = *sub_140e1ad30(&var_1718, *(r13 + 0x98), ".Check")
else if (rsi_2 == 3)
    char* (** rax_28)(void* arg1, char* arg2, uint128_t arg3 @ zmm0) =
        sub_140e1ad30(&var_1718, *(r13 + 0x98), ".RadioButton")
    var_1790 = 0
    var_1710 = *rax_28
    var_1798 = sub_140edd2b0
    int64_t* rax_29 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_29 != 0)
        int128_t zmm0_2 = var_1798.o
        rax_29[1] = rdi
        *rax_29 = &data_142eded78
        *(rax_29 + 0x10) = zmm0_2
        rax_29[5] = sub_140a387b0()
    
    char var_15e0_1 = 1
    int64_t var_15d8 = 0
    int32_t var_15d0_1 = 0
    __builtin_memcpy(&var_1608, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    var_15f0 = zx.o(0)
    
    if (rax_29 != 0)
        (*(*rax_29 + 0x40))(rax_29, &var_15d8)
    
    sub_140693390(&var_1458, &var_1608)
    var_1430 = var_15e0_1
    sub_1407473e0(&var_1428, &var_15d8)
    sub_140745b20(&var_15d8)
    int64_t* rdi_2 = var_15f0:8.q
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp6_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (rax_29 != 0)
        (*(*rax_29 + 0x38))(rax_29, 0)
        int64_t rax_36 = sub_140a84c80(rax_29, 0, 0)
        
        if (rax_36 != 0)
            sub_140a74f90(rax_36)

int64_t* (* rax_37)(void* arg1, int64_t* arg2) = *(r14 + 0x138)
int64_t* r14_1 = *(r14 + 0x140)
int64_t* (* var_1748)(void* arg1, int64_t* arg2) = rax_37
int64_t* var_1740 = r14_1

if (r14_1 != 0)
    r14_1[1].d += 1

void var_17a7
void var_17a6
void var_17a5
void var_17a4
void var_17a3
void* var_16d8
void*** var_16d0
void* var_16c0
int32_t var_16a8
void*** var_16a0
char* (* var_1688)(void* arg1, char* arg2, uint128_t arg3 @ zmm0)
int32_t var_1678
int64_t var_1670
int128_t var_1658
void* var_1640
void* var_1630
void* var_1620
int128_t var_15c8
int128_t var_15a0
void var_14d8
void* var_14d0
int64_t* var_14c8
void var_14c0
int64_t* var_14b8
void* var_14b0
int64_t* var_14a8
void var_1488
void var_1478
int128_t var_1468
void var_11a0
int64_t var_1000
void var_ff0
void var_d50
void var_ab0

if (rax_37 == 0)
    uint32_t rdx_11 = zx.d(data_1439ae51d)
    uint32_t rcx_38 = zx.d(data_1439ae51c)
    var_17b8 = sub_140ebf9c0
    int32_t var_1548_1 = 0x41900000
    
    if (var_1708 != data_143e244b0)
        rdx_11 = rcx_38
    
    var_17b0.d = 0
    var_1718 = rdx_11
    var_16d8.b = rdx_11.b
    var_1738.d = 0x3f800000
    var_1738:4.b = 1
    var_1738:8.q = 0
    var_1728.d = 0
    var_16f8.d = 0x41800000
    var_16f8:4.b = 1
    var_16f0 = nullptr
    var_16e8.d = 0
    int32_t var_1578_1 = 0x41800000
    char var_1574_1 = 1
    int64_t var_1570 = 0
    int32_t var_1568_1 = 0
    int32_t var_1560_1 = 0x41800000
    char var_155c_1 = 1
    int64_t var_1558 = 0
    int32_t var_1550_1 = 0
    char var_1544_1 = 1
    int64_t var_1540 = 0
    int32_t var_1538_1 = 0
    var_16d8:1.b = 1
    var_16d0 = nullptr
    int64_t var_16c8
    var_16c8.d = 0
    var_1790 = 0
    void var_810
    int64_t* r12_1
    int64_t* r13_1
    int32_t r14_2
    
    if (rsi_2 != 4)
        var_1780.d = 0
        var_1788 = sub_140ec6650
        var_1798 = sub_140ec1d60
        var_1798.o = var_1798.o
        int64_t* rax_46 = sub_140e93090(&var_810)
        sub_140693390(&rax_46[0x46], &var_1458)
        rax_46[0x4b].b = var_1430
        sub_140692f90(&rax_46[0x4c], &var_1428)
        void* rax_48 = sub_140e91110(rax_46, arg1, &var_1798)
        int64_t rdx_19 = data_143e243d8
        var_1688 = var_1710
        int64_t rax_50 = (*(*rax_7 + 0x88))(rax_7, rdx_19)
        
        if (rax_50 == 0)
            rax_50 = sub_140e13090()
        
        var_1798.o = var_1788.o
        *(rax_48 + 0x1b0) = rax_50
        sub_1407473e0(rax_48 + 0x1c0, sub_140e8f390(&var_1788, arg1, &var_1798))
        uint64_t (* rax_53)(void* arg1, int512_t arg2 @ zmm1)
        
        if (var_1780.d == 0)
            rax_53 = var_1788
        label_140eabd60:
            
            if (rax_53 != 0)
                sub_140a74f90(rax_53)
        else
            uint64_t (* rcx_52)(void* arg1, int512_t arg2 @ zmm1) = var_1788
            
            if (rcx_52 != 0)
                (*(*rcx_52 + 0x38))(rcx_52, 0)
                rax_53 = var_1788
                
                if (rax_53 != 0)
                    rax_53 = sub_140a84c80(rax_53, 0, 0)
                    var_1788 = rax_53
                
                var_1780.d = 0
                goto label_140eabd60
        void*** rax_54 = j_sub_140a82f30(0x548)
        void*** rdi_5 = rax_54
        
        if (rax_54 == 0)
            rdi_5 = nullptr
        else
            rax_54[1].d = 1
            *(rax_54 + 0xc) = 1
            *rdi_5 = &data_142edf190
            
            if (rdi_5 != -0x10)
                sub_140ee2e20(&rdi_5[2])
        
        var_16a0 = rdi_5
        var_16a8.q = &rdi_5[2]
        sub_140918950(&var_16a8, &rdi_5[2])
        int64_t var_17c8_3 = 0x538
        void var_1768
        int32_t var_1698
        var_1698.q = &var_1768
        int64_t* rax_55 =
            sub_140e9ac90(&var_16a8, &var_1488, rax_48, sub_140e23ed0(&rdi_5[2], "SCheckBox"))
        r12_1 = rax_55[1]
        var_1798 = *rax_55
        var_1790.q = r12_1
        
        if (r12_1 != 0)
            r12_1[1].d += 1
        
        r13_1 = var_1790.q
        r14_2 = 0xf0
    else
        char* (* r8_2)(void* arg1, char* arg2, uint128_t arg3 @ zmm0) = var_1710
        int64_t rdx_12 = data_143e243d8
        var_1798 = sub_140ebde90
        int64_t rax_39 = *rax_7
        var_1798.o = var_1798.o
        var_1688 = r8_2
        void* rax_40 = (*(rax_39 + 0x88))(rax_7, rdx_12, r8_2)
        void* rdi_3 = rax_40
        
        if (rax_40 == 0)
            sub_140e13090()
            rdi_3 = &data_143e24590
        
        void*** rax_41 = sub_140e48c50()
        void*** var_16b8_1 = rax_41
        var_16c0 = &rax_41[2]
        sub_140918950(&var_16c0, &rax_41[2])
        int64_t var_17c8_2 = 0x3a8
        void* var_16b0_1 = &var_17a8
        sub_140e23ed0(&rax_41[2], "SImage")
        void* rax_43
        int128_t zmm1_2
        rax_43, zmm1_2 = sub_140e90e00(sub_140e4fb70(&var_13b8), arg1, &var_1798, rdi_3)
        void** rax_44 = sub_140e56930(&var_16c0, &var_1658, rax_43, zmm1_2)
        r13_1 = rax_44[1]
        var_1798 = *rax_44
        var_1790.q = r13_1
        
        if (r13_1 != 0)
            r13_1[1].d += 1
        
        r12_1 = var_1790.q
        r14_2 = 0xf
    
    void* rdi_6 = nullptr
    int128_t zmm0_3 = var_17b8.o
    int64_t var_1528 = 0
    int32_t var_1520_1 = 0
    int64_t var_1510 = 0
    int32_t var_1508_1 = 0
    var_1670 = 0
    int32_t var_1668_1 = 0
    int64_t* r15_1 = *(arg1 + 0x3a0)
    var_1678.b = rdx_4
    int64_t* rax_58 = r15_1
    int32_t var_1530_1 = 0x41800000
    char var_152c_1 = 1
    int32_t var_1518_1 = 0x41800000
    char var_1514_1 = 1
    var_1678:1.b = 1
    var_17b8.o = zmm0_3
    
    if (r15_1 == 0)
        goto label_140eabeb6
    
    int32_t rax_59 = r15_1[1].d
    
    if (rax_59 == 0)
        r15_1 = nullptr
    else
        r15_1[1].d = rax_59 + 1
        rax_58 = r15_1
    label_140eabeb6:
        
        if (rax_58 != 0)
            rdi_6 = *(arg1 + 0x398)
    
    void*** rax_61 = sub_140688ae0()
    void*** var_1618_1 = rax_61
    var_1620 = &rax_61[2]
    sub_14065fa30(&var_1620, &rax_61[2])
    int64_t var_17c8_4 = 0x798
    void* var_1610_1 = &var_17a7
    sub_140e23ed0(&rax_61[2], "STextBlock")
    int64_t* rax_62 = sub_140e1ad30(&var_14d8, *(arg3 + 0x98), ".Label")
    void var_4a0
    void* rax_66
    int128_t zmm1_4
    rax_66, zmm1_4 = sub_140e90ca0(
        sub_1406a5080(sub_140edd090(sub_14068d9d0(&var_4a0), rax_7, rax_62, nullptr), arg3 + 0x30), 
        rdi_6, &var_17b8)
    void** rax_67 = sub_140697520(&var_1620, &var_1478, rax_66, zmm1_4)
    var_1788 = *rax_67
    int64_t* rax_69 = rax_67[1]
    var_1780 = rax_69
    
    if (rax_69 != 0)
        rax_69[1].d += 1
    
    int64_t var_15b0_1 = 0
    __builtin_memcpy(&var_15c8, 
        "\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\xc0\x40\x00\x00\x00\x00\x01", 0x11)
    int32_t var_15a8_1 = 0
    void*** rax_70 = j_sub_140a82f30(0x88)
    void*** rbx_15 = rax_70
    
    if (rax_70 == 0)
        rbx_15 = nullptr
    else
        sub_14068e490(rax_70)
        *rbx_15 = &data_142d8add0
    
    void* rax_72 = sub_140ed19f0(sub_140eb9be0(rbx_15, &var_1738), &var_15c8)
    *(rax_72 + 0x21) = 2
    uint128_t zmm0_5 = var_1708.o
    var_17b8.o = zmm0_5
    void* rcx_72 = _mm_bsrli_si128(zmm0_5, 8).q
    
    if (rcx_72 != 0)
        *(rcx_72 + 8) += 1
    
    int64_t* rax_73 = sub_14068c940(&var_ab0)
    rax_73[0x3c].d = var_1578_1
    *(rax_73 + 0x1e4) = 1
    sub_1407473e0(&rax_73[0x3d], &var_1570)
    rax_73[0x3f].d = var_16f8.d
    *(rax_73 + 0x1fc) = 1
    sub_1407473e0(&rax_73[0x40], &var_16f0)
    void*** rax_74 = sub_140688920()
    var_15c8:8.q = rax_74
    var_15c8.q = &rax_74[2]
    sub_14065fa30(&var_15c8, &rax_74[2])
    int64_t var_17c8_5 = 0x3c8
    char var_15b8
    var_15b8.q = &var_17a6
    void* rax_75
    int128_t zmm1_6
    rax_75, zmm1_6 = sub_1406937a0(rax_73, &var_17b8, sub_140e23ed0(&rax_74[2], "SBox"))
    void** rax_76 = sub_140695d20(&var_15c8, &var_1468, rax_75, zmm1_6)
    var_17b8 = *rax_76
    void* rax_78 = rax_76[1]
    void* var_17b0_1 = rax_78
    
    if (rax_78 != 0)
        *(rax_78 + 8) += 1
    
    int64_t* rax_79 = sub_14068c940(&var_ff0)
    rax_79[0xf].b = var_1718.b
    *(rax_79 + 0x79) = 1
    sub_1407473e0(&rax_79[0x10], &var_16d0)
    rax_79[0x3c].d = var_1548_1
    *(rax_79 + 0x1e4) = 1
    sub_1407473e0(&rax_79[0x3d], &var_1540)
    rax_79[0x3f].d = var_1560_1
    *(rax_79 + 0x1fc) = 1
    sub_1407473e0(&rax_79[0x40], &var_1558)
    rax_79[0x34].d = 2
    *(rax_79 + 0x1a4) = 2
    void*** rax_81 = sub_140688920()
    char var_1638
    var_1638.q = rax_81
    var_1640 = &rax_81[2]
    sub_14065fa30(&var_1640, &rax_81[2])
    int64_t var_17c8_6 = 0x3c8
    var_1630 = &var_17a5
    void* rax_82
    int128_t zmm1_8
    rax_82, zmm1_8 = sub_1406937a0(rax_79, &var_17b8, sub_140e23ed0(&rax_81[2], "SBox"))
    void** rax_83 = sub_140695d20(&var_1640, &var_14b0, rax_82, zmm1_8)
    var_1688 = *rax_83
    void* rax_85 = rax_83[1]
    int32_t var_1680
    var_1680.q = rax_85
    
    if (rax_85 != 0)
        *(rax_85 + 8) += 1
    
    var_15f0.q = 0
    var_15f0:8.d = 0
    var_17b8 = var_1798
    void* rax_87 = var_1790.q
    void* var_17b0_2 = rax_87
    __builtin_memcpy(&var_1608, 
        "\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x01", 0x11)
    
    if (rax_87 != 0)
        *(rax_87 + 8) += 1
    
    int64_t* rax_88 = sub_14068c940(&var_d50)
    rax_88[0xf].b = rdx_4
    *(rax_88 + 0x79) = 1
    sub_1407473e0(&rax_88[0x10], &var_1670)
    rax_88[0x3c].d = var_1518_1
    *(rax_88 + 0x1e4) = 1
    sub_1407473e0(&rax_88[0x3d], &var_1510)
    rax_88[0x3f].d = var_1530_1
    *(rax_88 + 0x1fc) = 1
    sub_1407473e0(&rax_88[0x40], &var_1528)
    rax_88[0x34].d = 2
    *(rax_88 + 0x1a4) = 2
    void*** rax_90 = sub_140688920()
    var_15a0:8.q = rax_90
    var_15a0.q = &rax_90[2]
    sub_14065fa30(&var_15a0, &rax_90[2])
    int64_t var_17c8_7 = 0x3c8
    char var_1590
    var_1590.q = &var_17a4
    void* rax_91
    int128_t zmm1_10
    rax_91, zmm1_10 = sub_1406937a0(rax_88, &var_17b8, sub_140e23ed0(&rax_90[2], "SBox"))
    int64_t* rax_92 = sub_140695d20(&var_15a0, &var_14c0, rax_91, zmm1_10)
    var_17b8 = *rax_92
    int64_t* rax_94 = rax_92[1]
    var_17b0 = rax_94
    
    if (rax_94 != 0)
        rax_94[1].d += 1
    
    void*** rax_95 = sub_140e91f70()
    void*** var_1498_1 = rax_95
    void* var_14a0 = &rax_95[2]
    sub_14065fa30(&var_14a0, &rax_95[2])
    int64_t var_17c8_8 = 0x2d8
    void* var_1490_1 = &var_17a3
    sub_140e23ed0(&rax_95[2], "SHorizontalBox")
    void* rax_96 = sub_140693860(rax_72, &var_1788)
    void* rax_100 =
        sub_140693860(sub_140ed19f0(sub_140698b50(sub_1406a4fe0()), &var_1608), &var_1688)
    void* rax_103 = sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_17b8)
    int64_t* rax_104
    int128_t zmm1_11
    rax_104, zmm1_11 = sub_14068d420(&var_11a0)
    void** rax_108 = sub_140696920(&var_14a0, &var_14d0, 
        sub_1406938c0(sub_1406938c0(sub_1406938c0(rax_104, rax_103), rax_100), rax_96), zmm1_11)
    void* rcx_112 = rax_108[1]
    int64_t* (* rdx_59)(void* arg1, int64_t* arg2) = *rax_108
    var_1790.q = rcx_112
    
    if (rcx_112 != 0)
        *(rcx_112 + 8) += 1
    
    var_1748 = rdx_59
    var_1798 = nullptr
    sub_14066a200(&var_1740, &var_1790)
    int64_t* rbx_21 = var_1790.q
    
    if (rbx_21 != 0)
        rbx_21[1].d -= 1
        
        if (rbx_21[1].d == 1)
            (**rbx_21)(rbx_21)
            int32_t temp29_1 = *(rbx_21 + 0xc)
            *(rbx_21 + 0xc) -= 1
            
            if (temp29_1 == 1)
                (*(*rbx_21 + 8))(rbx_21, 1)
    
    if (var_14c8 != 0)
        var_14c8[1].d -= 1
        
        if (var_14c8[1].d == 1)
            (**var_14c8)(var_14c8)
            int32_t temp32_1 = *(var_14c8 + 0xc)
            *(var_14c8 + 0xc) -= 1
            
            if (temp32_1 == 1)
                (*(*var_14c8 + 8))(var_14c8, 1)
    
    sub_140669d70(&var_14a0)
    
    if (var_1000 != 0)
        sub_140a74f90(var_1000)
    
    sub_140660250(&var_11a0)
    
    if (var_14b8 != 0)
        var_14b8[1].d -= 1
        
        if (var_14b8[1].d == 1)
            (**var_14b8)(var_14b8)
            int32_t temp38_1 = *(var_14b8 + 0xc)
            *(var_14b8 + 0xc) -= 1
            
            if (temp38_1 == 1)
                (*(*var_14b8 + 8))(var_14b8, 1)
    
    sub_140669d70(&var_15a0)
    sub_140690290(&var_d50)
    
    if (var_14a8 != 0)
        var_14a8[1].d -= 1
        
        if (var_14a8[1].d == 1)
            (**var_14a8)(var_14a8)
            int32_t temp40_1 = *(var_14a8 + 0xc)
            *(var_14a8 + 0xc) -= 1
            
            if (temp40_1 == 1)
                (*(*var_14a8 + 8))(var_14a8, 1)
    
    sub_140669d70(&var_1640)
    sub_140690290(&var_ff0)
    int64_t* rbx_25 = var_1468:8.q
    
    if (rbx_25 != 0)
        rbx_25[1].d -= 1
        
        if (rbx_25[1].d == 1)
            (**rbx_25)(rbx_25)
            int32_t temp42_1 = *(rbx_25 + 0xc)
            *(rbx_25 + 0xc) -= 1
            
            if (temp42_1 == 1)
                (*(*rbx_25 + 8))(rbx_25, 1)
    
    sub_140669d70(&var_15c8)
    sub_140690290(&var_ab0)
    int64_t* var_1470
    
    if (var_1470 != 0)
        var_1470[1].d -= 1
        
        if (var_1470[1].d == 1)
            (**var_1470)(var_1470)
            int32_t temp44_1 = *(var_1470 + 0xc)
            *(var_1470 + 0xc) -= 1
            
            if (temp44_1 == 1)
                (*(*var_1470 + 8))(var_1470, 1)
    
    sub_140669d70(&var_1620)
    sub_1406913d0(&var_4a0)
    
    if (r15_1 != 0)
        r15_1[1].d -= 1
        
        if (r15_1[1].d == 1)
            (**r15_1)(r15_1)
            int32_t temp45_1 = *(r15_1 + 0xc)
            *(r15_1 + 0xc) -= 1
            
            if (temp45_1 == 1)
                (*(*r15_1 + 8))(r15_1, 1)
    
    sub_140745b20(&var_1670)
    sub_140745b20(&var_1510)
    sub_140745b20(&var_1528)
    
    if (r14_2.b s< 0)
        r14_2 &= 0xffffff7f
        
        if (r12_1 != 0)
            r12_1[1].d -= 1
            
            if (r12_1[1].d == 1)
                (**r12_1)(r12_1)
                int32_t temp48_1 = *(r12_1 + 0xc)
                *(r12_1 + 0xc) -= 1
                
                if (temp48_1 == 1)
                    (*(*r12_1 + 8))(r12_1, 1)
    
    if ((r14_2.b & 0x40) != 0)
        r14_2 &= 0xffffffbf
        int64_t* var_1480
        
        if (var_1480 != 0)
            var_1480[1].d -= 1
            
            if (var_1480[1].d == 1)
                (**var_1480)(var_1480)
                int32_t temp49_1 = *(var_1480 + 0xc)
                *(var_1480 + 0xc) -= 1
                
                if (temp49_1 == 1)
                    (*(*var_1480 + 8))(var_1480, 1)
    
    if ((r14_2.b & 0x20) != 0)
        r14_2 &= 0xffffffdf
        sub_140597060(&var_16a8)
    
    if ((r14_2.b & 0x10) != 0)
        r14_2 &= 0xffffffef
        sub_140e978a0(&var_810)
    
    if ((r14_2.b & 8) != 0)
        r14_2 &= 0xfffffff7
        
        if (r13_1 != 0)
            r13_1[1].d -= 1
            
            if (r13_1[1].d == 1)
                (**r13_1)(r13_1)
                int32_t temp52_1 = *(r13_1 + 0xc)
                *(r13_1 + 0xc) -= 1
                
                if (temp52_1 == 1)
                    (*(*r13_1 + 8))(r13_1, 1)
    
    if ((r14_2.b & 4) != 0)
        int64_t* rbx_28 = var_1658:8.q
        r14_2 &= 0xfffffffb
        
        if (rbx_28 != 0)
            rbx_28[1].d -= 1
            
            if (rbx_28[1].d == 1)
                (**rbx_28)(rbx_28)
                int32_t temp53_1 = *(rbx_28 + 0xc)
                *(rbx_28 + 0xc) -= 1
                
                if (temp53_1 == 1)
                    (*(*rbx_28 + 8))(rbx_28, 1)
    
    if ((r14_2.b & 2) != 0)
        r14_2 &= 0xfffffffd
        sub_140597060(&var_16c0)
    
    if ((r14_2.b & 1) != 0)
        sub_140e536f0(&var_13b8)
    
    sub_140745b20(&var_16d0)
    sub_140745b20(&var_1540)
    sub_140745b20(&var_1558)
    sub_140745b20(&var_1570)
    sub_140745b20(&var_16f0)
    sub_140745b20(&var_1738:8)
    r14_1 = var_1740
    r15 = var_1500
    r12 = var_14f0
    r13 = arg3

int64_t rdx_61 = *(r13 + 0x98)
var_1688 = sub_140ecbf20
var_1798.o = zx.o(0)
int32_t var_1680_1 = 0
void* rax_132 = (*(*rax_7 + 0x48))(rax_7, rdx_61, ".SubMenuIndicator")
int128_t zmm0_1 = zx.o(0)
var_1640 = rax_132
var_17b0.d = 0
var_1788 = sub_140edb040
var_17b8 = sub_140ec4000
var_15f0 = zmm0_1
char var_1638_1 = 1
int128_t var_1400 = zmm0_1
var_1630 = nullptr
var_1468 = var_17b8.o
int32_t var_1628 = 0
__builtin_memcpy(&var_1608, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
int128_t var_1418
__builtin_memcpy(&var_1418, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
char var_13f0 = 1
int64_t var_13e8 = 0
int32_t var_13e0 = 0
__builtin_memcpy(&var_15a0, "\x00\x00\xe0\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01", 
    0x11)
int64_t var_1588 = 0
int32_t var_1580 = 0
var_1678 = 0x3f800000
char var_1674 = 1
var_1670 = 0
int32_t var_1668_2 = 0
var_1780.d = 0
var_16a8 = 5
char var_16a4 = 1
var_16a0 = nullptr
int32_t var_1698_1 = 0
int64_t* rax_133 = sub_140e4fb70(&var_d50)
sub_140693390(&rax_133[0x38], &var_1418)
rax_133[0x3d].b = var_13f0
sub_140692f90(&rax_133[0x3e], &var_13e8)
rax_133[0x34] = rax_132
rax_133[0x35].b = 1
sub_140692f90(&rax_133[0x36], &var_1630)
void*** rax_135 = sub_140e48c50()
void*** var_16b8_2 = rax_135
var_16c0 = &rax_135[2]
sub_140918950(&var_16c0, &rax_135[2])
int64_t var_17c8_9 = 0x3a8
void* var_16b0_2 = &var_17a3
int128_t zmm1_12
int128_t zmm6
zmm1_12, zmm6 = sub_140e23ed0(&rax_135[2], "SImage")
void** rax_136 = sub_140e56930(&var_16c0, &var_1500, rax_133, zmm1_12)
var_17b8 = *rax_136
void* rax_138 = rax_136[1]
void* var_17b0_3 = rax_138

if (rax_138 != 0)
    *(rax_138 + 8) += 1

int64_t* rax_139 = sub_14068c940(&var_ab0)
rax_139[0x37].b = 1
*(rax_139 + 0x1a8) = zmm6
sub_140692f90(&rax_139[0x38], &var_1588)
void*** rax_140 = sub_140688920()
var_16d0 = rax_140
var_16d8 = &rax_140[2]
sub_14065fa30(&var_16d8, &rax_140[2])
int64_t var_17c8_10 = 0x3c8
void* var_16c8_1 = &var_17a4
void* rax_141
int128_t zmm1_14
rax_141, zmm1_14 = sub_1406937a0(rax_139, &var_17b8, sub_140e23ed0(&rax_140[2], "SBox"))
void** rax_142 = sub_140695d20(&var_16d8, &var_14f0, rax_141, zmm1_14)
var_17b8 = *rax_142
void* rax_144 = rax_142[1]
void* var_17b0_4 = rax_144

if (rax_144 != 0)
    *(rax_144 + 8) += 1

void* rax_146 = sub_140698b50(sub_1406a4fe0())
var_1658 = var_1748.o
*(rax_146 + 0x20) = 0x203

if (r14_1 != 0)
    r14_1[1].d += 1

void* rax_147 = sub_140693860(rax_146, &var_17b8)
void* rax_150 = sub_140693860(sub_140eb9be0(sub_1406a4fe0(), &var_1678), &var_1658)
void* rax_153 = sub_1406938c0(sub_1406938c0(sub_14068d420(&var_11a0), rax_150), rax_147)
int64_t* rax_154
int128_t zmm1_15
rax_154, zmm1_15 = sub_140688620(&var_15c8, "SHorizontalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp", 
    0x337, &var_17a5)
int64_t* (** rax_155)(void* arg1, int64_t* arg2) =
    sub_140696920(rax_154, &var_14d0, rax_153, zmm1_15)
int64_t* rbx_33 = rax_155[1]
int64_t* (* rsi_6)(void* arg1, int64_t* arg2) = *rax_155
var_17b8 = rsi_6
int64_t* var_17b0_5 = rbx_33

if (rbx_33 != 0)
    rbx_33[1].d += 1

int64_t* rax_156 = sub_140e952f0(&var_ff0)
sub_14065da90(rax_156, r13 + 0x60)
rax_156[3].b = *(r13 + 0x78)
sub_140692f90(&rax_156[4], r13 + 0x80)
int64_t rax_159 = sub_140e90c00(rax_7, *sub_140e1ad30(&var_14d8, *(r13 + 0x98), ".Button"), nullptr)
var_1658 = var_1788.o
rax_156[0x41] = rax_159
int64_t* rax_160 = sub_140e8f8a0(&var_1488, arg1, &var_1658)
var_1788.w = 0x100
var_1780 = nullptr
int32_t var_1778 = 0
sub_140692f90(&var_1780, rax_160)
rax_156[0x3e].b = var_1788.b
*(rax_156 + 0x1f1) = var_1788:1.b
sub_1407473e0(&rax_156[0x3f], &var_1780)
sub_140745b20(&var_1780)
sub_140745b20(&var_1488)
var_1748 = rsi_6
var_1740 = rbx_33

if (rbx_33 != 0)
    rbx_33[1].d += 1

if (&var_1748 != &rax_156[0x3c])
    var_1748.o = *(rax_156 + 0x1e0)
    rbx_33 = var_1740
    *(rax_156 + 0x1e0) = var_1748.o

if (rbx_33 != 0)
    rbx_33[1].d -= 1
    
    if (rbx_33[1].d == 1)
        (**rbx_33)(rbx_33)
        int32_t temp11_1 = *(rbx_33 + 0xc)
        *(rbx_33 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_33 + 8))(rbx_33, 1)

sub_140669d70(&var_17b8)
var_1658 = var_1688.o
sub_140692f90(&rax_156[0x3a], sub_140e8f760(&var_1478, arg1, &var_1658))
sub_140745b20(&var_1478)
void*** rax_167 = sub_140e922f0()
var_1738:8.q = rax_167
var_1738.q = &rax_167[2]
sub_140918950(&var_1738, &rax_167[2])
int64_t var_17c8_12 = 0x5d0
var_1728 = &var_17a6
int64_t** rax_168 =
    sub_140e9e5a0(&var_1738, &var_14c0, rax_156, sub_140e23ed0(&rax_167[2], "SSubMenuButton"))
var_17b8 = *rax_168
void* rax_170 = rax_168[1]
void* var_17b0_6 = rax_170

if (rax_170 != 0)
    *(rax_170 + 8) += 1

int64_t* rax_171 = sub_140e94a50(&var_13b8)
rax_171[0x3e].d = 5
*(rax_171 + 0x1f4) = 1
sub_1407473e0(&rax_171[0x3f], &var_16a0)
void* rax_172
int128_t zmm1_18
rax_172, zmm1_18 = sub_140e92470(rax_171, arg1, &var_1468)
void* rax_173 = sub_140e99c30(rax_172, &var_17b8, zmm1_18)
void** rax_174
int128_t zmm1_19
rax_174, zmm1_19 = sub_140e91470(&var_1620, "SMenuAnchor", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp", 
    0x329, &var_17a7)
void** rax_176 = sub_140e9d6e0(sub_140dd3250(rax_174, &var_1798), &var_14b0, rax_173, zmm1_19)
*arg2 = *rax_176
void* rax_178 = rax_176[1]
arg2[1] = rax_178

if (rax_178 != 0)
    *(rax_178 + 8) += 1

if (var_14a8 != 0)
    var_14a8[1].d -= 1
    
    if (var_14a8[1].d == 1)
        (**var_14a8)(var_14a8)
        int32_t temp14_1 = *(var_14a8 + 0xc)
        *(var_14a8 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_14a8 + 8))(var_14a8, 1)

sub_140597060(&var_1620)
sub_140e98090(&var_13b8)

if (var_14b8 != 0)
    var_14b8[1].d -= 1
    
    if (var_14b8[1].d == 1)
        (**var_14b8)(var_14b8)
        int32_t temp16_1 = *(var_14b8 + 0xc)
        *(var_14b8 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_14b8 + 8))(var_14b8, 1)

sub_140597060(&var_1738)
void var_df8
sub_140745b20(&var_df8)
void var_e10
sub_140597060(&var_e10)
void var_e20
sub_140745b20(&var_e20)
void var_e50
sub_1406601b0(&var_e50)
sub_140ddea30(&var_ff0)

if (var_14c8 != 0)
    var_14c8[1].d -= 1
    
    if (var_14c8[1].d == 1)
        (**var_14c8)(var_14c8)
        int32_t temp17_1 = *(var_14c8 + 0xc)
        *(var_14c8 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_14c8 + 8))(var_14c8, 1)

sub_140669d70(&var_15c8)

if (var_1000 != 0)
    sub_140a74f90(var_1000)

sub_140660250(&var_11a0)
int64_t* var_14e8

if (var_14e8 != 0)
    var_14e8[1].d -= 1
    
    if (var_14e8[1].d == 1)
        (**var_14e8)(var_14e8)
        int32_t temp20_1 = *(var_14e8 + 0xc)
        *(var_14e8 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*var_14e8 + 8))(var_14e8, 1)

sub_140669d70(&var_16d8)
sub_140690290(&var_ab0)
int64_t* var_14f8

if (var_14f8 != 0)
    var_14f8[1].d -= 1
    
    if (var_14f8[1].d == 1)
        (**var_14f8)(var_14f8)
        int32_t temp22_1 = *(var_14f8 + 0xc)
        *(var_14f8 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*(*var_14f8 + 8))(var_14f8, 1)

sub_140597060(&var_16c0)
sub_140e536f0(&var_d50)
sub_140745b20(&var_16a0)
sub_140745b20(&var_1670)
sub_140745b20(&var_1588)
sub_140745b20(&var_13e8)
sub_140ddfb70(&var_1418)
sub_140597060(&var_15f0)
sub_140745b20(&var_1630)
int64_t* rbx_42 = var_1790.q
*(arg1 + 0x3e0) = var_1798
sub_140ea4170(arg1 + 0x3e8, rbx_42)

if (rbx_42 != 0)
    rbx_42[1].d -= 1
    
    if (rbx_42[1].d == 1)
        (**rbx_42)(rbx_42)
        int32_t temp24_1 = *(rbx_42 + 0xc)
        *(rbx_42 + 0xc) -= 1
        
        if (temp24_1 == 1)
            (*(*rbx_42 + 8))(rbx_42, 1)

if (r14_1 != 0)
    r14_1[1].d -= 1
    
    if (r14_1[1].d == 1)
        (**r14_1)(r14_1)
        int32_t temp27_1 = *(r14_1 + 0xc)
        *(r14_1 + 0xc) -= 1
        
        if (temp27_1 == 1)
            (*(*r14_1 + 8))(r14_1, 1)

sub_140745b20(&var_1428)
sub_140ddfb70(&var_1458)

if (var_1700 != 0)
    var_1700[1].d -= 1
    
    if (var_1700[1].d == 1)
        (**var_1700)(var_1700)
        int32_t temp31_1 = *(var_1700 + 0xc)
        *(var_1700 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*(*var_1700 + 8))(var_1700, 1)

if (r15 != 0)
    r15[1].d -= 1
    
    if (r15[1].d == 1)
        (**r15)(r15)
        int32_t temp34_1 = *(r15 + 0xc)
        *(r15 + 0xc) -= 1
        
        if (temp34_1 == 1)
            (*(*r15 + 8))(r15, 1)

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        (**r12)(r12)
        int32_t temp36_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp36_1 == 1)
            int64_t r8_35 = *r12
            (*(r8_35 + 8))(r12, 1, r8_35)

__security_check_cookie(rax_1 ^ &var_17e8)
return arg2
