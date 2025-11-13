// 函数: sub_140f36360
// 地址: 0x140f36360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1490)
void var_14c8
int64_t rax_1 = __security_cookie ^ &var_14c8
arg1[0xde] = *(arg2 + 0x1a0)
int64_t rax_4 = *(arg2 + 0x1a0) + 8
int64_t* var_1398 = arg1
arg1[0xdf] = rax_4
arg1[0xe0] = *(arg2 + 0x1a0) + 0x90
arg1[0xe1] = *(arg2 + 0x1a0) + 0x118
arg1[0xe2] = *(arg2 + 0x1a0) + 0x1a0
*(arg1 + 0x4c8) = *(arg2 + 0x5f0)
arg1[0x9b].b = *(arg2 + 0x600)
sub_140692f90(&arg1[0x9c], arg2 + 0x608)
*(arg1 + 0x4f0) = *(arg2 + 0x450)
arg1[0xa0].b = *(arg2 + 0x460)
sub_140692f90(&arg1[0xa1], arg2 + 0x468)
*(arg1 + 0x518) = *(arg2 + 0x478)
arg1[0xa5].b = *(arg2 + 0x488)
sub_140692f90(&arg1[0xa6], arg2 + 0x490)
sub_140d962e0(&arg1[0xa8], arg2 + 0x250)
arg1[0xb2].b = *(arg2 + 0x2a0)
sub_140692f90(&arg1[0xb3], arg2 + 0x2a8)
sub_140693390(&arg1[0xb5], arg2 + 0x2b8)
arg1[0xba].b = *(arg2 + 0x2e0)
sub_140692f90(&arg1[0xbb], arg2 + 0x2e8)
sub_140693390(&arg1[0xbd], arg2 + 0x5b0)
arg1[0xc2].b = *(arg2 + 0x5d8)
sub_140692f90(&arg1[0xc3], arg2 + 0x5e0)
sub_140693390(&arg1[0xc5], arg2 + 0x2f8)
arg1[0xca].b = *(arg2 + 0x320)
sub_140692f90(&arg1[0xcb], arg2 + 0x328)
arg1[0xd2].b = *(arg2 + 0x430) != 0
int64_t* rbx = *(arg2 + 0x438)
int64_t* var_1478 = *(arg2 + 0x430)

if (rbx != 0)
    rbx[1].d += 1

if (&var_1478 != &arg1[0xd3])
    var_1478.o = *(arg1 + 0x698)
    *(arg1 + 0x698) = var_1478.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

char var_1498
void* var_1418
int32_t var_13d8
int32_t var_13d4
char var_13d0
int64_t var_13c8
int64_t* var_1388
int64_t* var_1380
void* var_1348
void var_1198
void var_ff0
void var_fc0
void var_f98

if (arg1[0xd3] == 0)
    int64_t rbx_2 = *(arg2 + 0x1a0) + 0x320
    var_13d8 = 0x41100000
    var_13d4 = 0x41100000
    var_13d0 = 1
    var_13c8 = 0
    int32_t var_13c0_1 = 0
    int64_t* rax_23 = sub_140f1fc10(&var_1198)
    rax_23[0x34] = rbx_2
    *(rax_23 + 0x1bc) = 0
    rax_23[0x37].b = *(arg2 + 0x428)
    rax_23[0x39].d = 0x41100000
    *(rax_23 + 0x1cc) = 0x41100000
    rax_23[0x3a].b = 1
    sub_140692f90(&rax_23[0x3b], &var_13c8)
    void*** rax_24 = sub_140f1cf80()
    var_1418 = &rax_24[2]
    sub_140918950(&var_1418, &rax_24[2])
    int64_t var_14a8_1 = 0x560
    char* var_1408_1 = &var_1498
    int64_t** rax_25 =
        sub_140f27db0(&var_1418, &var_1388, rax_23, sub_140e23ed0(&rax_24[2], "SScrollBar"))
    int64_t* rbx_4 = rax_25[1]
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    if (&arg1[0xd3] == &var_1348)
    label_140f3670d:
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp6_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
    else
        arg1[0xd3] = *rax_25
        int64_t* rdi_2 = arg1[0xd4]
        
        if (rbx_4 == rdi_2)
            goto label_140f3670d
        
        arg1[0xd4] = rbx_4
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp10_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (var_1380 != 0)
        var_1380[1].d -= 1
        
        if (var_1380[1].d == 1)
            (**var_1380)(var_1380)
            int32_t temp9_1 = *(var_1380 + 0xc)
            *(var_1380 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_1380 + 8))(var_1380, 1)
    
    if (rax_24 != 0)
        rax_24[1].d -= 1
        
        if (rax_24[1].d == 1)
            (**rax_24)(rax_24)
            int32_t temp11_1 = *(rax_24 + 0xc)
            *(rax_24 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*rax_24)[1](rax_24, 1)
    
    sub_140745b20(&var_f98)
    sub_140745b20(&var_fc0)
    sub_140745b20(&var_ff0)
    sub_140ddea30(&var_1198)
    sub_140745b20(&var_13c8)

arg1[0xd7].b = *(arg2 + 0x440) != 0
int64_t* rbx_7 = *(arg2 + 0x448)
var_1478 = *(arg2 + 0x440)

if (rbx_7 != 0)
    rbx_7[1].d += 1

if (&var_1478 != &arg1[0xd8])
    var_1478.o = *(arg1 + 0x6c0)
    *(arg1 + 0x6c0) = var_1478.o

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp4_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

if (arg1[0xd8] == 0)
    int64_t rbx_9 = *(arg2 + 0x1a0) + 0x320
    var_13d8 = 0x41100000
    var_13d4 = 0x41100000
    var_13d0 = 1
    var_13c8 = 0
    int32_t var_13c0_2 = 0
    int64_t* rax_36 = sub_140f1fc10(&var_1198)
    rax_36[0x34] = rbx_9
    *(rax_36 + 0x1bc) = 1
    rax_36[0x37].b = *(arg2 + 0x428)
    rax_36[0x39].d = 0x41100000
    *(rax_36 + 0x1cc) = 0x41100000
    rax_36[0x3a].b = 1
    sub_140692f90(&rax_36[0x3b], &var_13c8)
    void*** rax_37 = sub_140f1cf80()
    var_1418 = &rax_37[2]
    sub_140918950(&var_1418, &rax_37[2])
    int64_t var_14a8_2 = 0x560
    char* var_1408_2 = &var_1498
    int64_t** rax_38 =
        sub_140f27db0(&var_1418, &var_1388, rax_36, sub_140e23ed0(&rax_37[2], "SScrollBar"))
    int64_t* rbx_11 = rax_38[1]
    
    if (rbx_11 != 0)
        rbx_11[1].d += 1
    
    if (&arg1[0xd8] == &var_1348)
    label_140f36979:
        
        if (rbx_11 != 0)
            rbx_11[1].d -= 1
            
            if (rbx_11[1].d == 1)
                (**rbx_11)(rbx_11)
                int32_t temp14_1 = *(rbx_11 + 0xc)
                *(rbx_11 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rbx_11 + 8))(rbx_11, 1)
    else
        arg1[0xd8] = *rax_38
        int64_t* rdi_4 = arg1[0xd9]
        
        if (rbx_11 == rdi_4)
            goto label_140f36979
        
        arg1[0xd9] = rbx_11
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t temp18_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
    
    if (var_1380 != 0)
        var_1380[1].d -= 1
        
        if (var_1380[1].d == 1)
            (**var_1380)(var_1380)
            int32_t temp17_1 = *(var_1380 + 0xc)
            *(var_1380 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*var_1380 + 8))(var_1380, 1)
    
    if (rax_37 != 0)
        rax_37[1].d -= 1
        
        if (rax_37[1].d == 1)
            (**rax_37)(rax_37)
            int32_t temp19_1 = *(rax_37 + 0xc)
            *(rax_37 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*rax_37)[1](rax_37, 1)
    
    sub_140745b20(&var_f98)
    sub_140745b20(&var_fc0)
    sub_140745b20(&var_ff0)
    sub_140ddea30(&var_1198)
    sub_140745b20(&var_13c8)

int64_t* rax_47 = arg1[0xd9]
int128_t* (* rcx_53)(void* arg1, int128_t* arg2) = arg1[0xd8]
var_1478 = rax_47

if (rax_47 != 0)
    rax_47[1].d += 1

int64_t* r14 = arg1[0xd4]
int128_t* (* var_1448)(void* arg1, int128_t* arg2) = sub_140f438e0
int128_t* (* var_13b8)(void* arg1, int128_t* arg2) = arg1[0xd3]
int32_t var_1440 = 0

if (r14 != 0)
    r14[1].d += 1

int128_t zmm0_3 = var_1448.o
int128_t* (* var_1488)(void* arg1, int128_t* arg2) = sub_140f437e0
int64_t* (* var_1428)(void* arg1, int64_t* arg2) = sub_140f43630
var_1388 = sub_140f43860
int128_t* (* var_1378)(void* arg1, int128_t* arg2, int128_t arg3 @ zmm1) = sub_140f436c0
int128_t* (* var_1368)(void* arg1, int128_t* arg2, int128_t arg3 @ zmm1) = sub_140f435d0
int32_t var_1480 = 0
int128_t zmm1_1 = var_1488.o
int64_t (* var_1358)(void* arg1) = sub_140f46bd0
int32_t var_1420 = 0
var_13d8 = 0x3f800000
var_13d4.b = 1
var_13d0.q = 0
var_13c8.d = 0
int32_t var_1308 = 0x3f800000
char var_1304 = 1
int64_t var_1300 = 0
int32_t var_12f8 = 0
var_1380.d = 0
int32_t var_1370 = 0
int32_t var_1360 = 0
int32_t var_1350 = 0
int128_t var_1468 = zmm0_3
int128_t var_13f8 = zmm1_1

if (rcx_53 == 0)
    var_1448 = data_143e244b0
    rax_47 = data_143e244b8
else
    var_1448 = rcx_53

var_1440.q = rax_47

if (rax_47 != 0)
    rax_47[1].d += 1

void*** rbx_14 = j_sub_140a82f30(0x3d8)

if (rbx_14 == 0)
    rbx_14 = nullptr
else
    rbx_14[1].d = 1
    *(rbx_14 + 0xc) = 1
    *rbx_14 = &data_142d8c570
    
    if (rbx_14 != -0x10)
        sub_140f20750(&rbx_14[2])

void*** var_1318 = rbx_14
void* var_1320 = &rbx_14[2]
sub_14065fa30(&var_1320, &rbx_14[2])
int64_t var_14a8_3 = 0x3c8
void var_1438
void* var_1310 = &var_1438
sub_140e23ed0(&rbx_14[2], "SBox")

if (rbx_14 != 0)
    rbx_14[1].d += 1

if (&arg1[0xda] == &var_1488)
label_140f36c0c:
    
    if (rbx_14 != 0)
        rbx_14[1].d -= 1
        
        if (rbx_14[1].d == 1)
            (**rbx_14)(rbx_14)
            int32_t temp21_1 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*rbx_14)[1](rbx_14, 1)
else
    arg1[0xda] = &rbx_14[2]
    void*** rdi_6 = arg1[0xdb]
    
    if (rbx_14 == rdi_6)
        goto label_140f36c0c
    
    arg1[0xdb] = rbx_14
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t temp23_1 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*rdi_6)[1](rdi_6, 1)

void var_b38
void* rax_54
int128_t zmm1_4
rax_54, zmm1_4 = sub_140f1d180(sub_14068c940(&var_b38), arg1, &var_1468)
void* rax_55
int128_t zmm1_5
rax_55, zmm1_5 = sub_1406937a0(rax_54, &var_1448, zmm1_4)
void** rax_56 = sub_140695d20(&var_1320, &var_1348, rax_55, zmm1_5)
int64_t* rbx_15 = rax_56[1]
var_1488 = *rax_56
var_1480.q = rbx_15

if (rbx_15 != 0)
    rbx_15[1].d += 1

void*** rax_57 = j_sub_140a82f30(0x88)
void*** rdi_7 = rax_57

if (rax_57 == 0)
    rdi_7 = nullptr
else
    sub_14068e490(rax_57)
    *rdi_7 = &data_142d8add0

int128_t* (* rax_58)(void* arg1, int128_t* arg2) = sub_140698b50(rdi_7)
var_1448 = rax_58
sub_140693600(rax_58, &var_1488)

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        int64_t rdx_23 = *rbx_15
        (*rdx_23)(rbx_15, rdx_23)
        int32_t temp25_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*rbx_15 + 8))(rbx_15, 1)

int128_t* (* rax_60)(void* arg1, int128_t* arg2) = var_13b8

if (rax_60 == 0)
    var_1488 = data_143e244b0
    void* rax_62 = data_143e244b8
    var_1480.q = rax_62
    
    if (rax_62 != 0)
        *(rax_62 + 8) += 1
else
    var_1488 = rax_60
    var_1480.q = r14
    
    if (r14 != 0)
        r14[1].d += 1

void*** rax_63 = j_sub_140a82f30(0x3d8)
void*** rbx_16 = rax_63

if (rax_63 == 0)
    rbx_16 = nullptr
else
    rax_63[1].d = 1
    *(rax_63 + 0xc) = 1
    *rbx_16 = &data_142d8c570
    
    if (rbx_16 != -0x10)
        sub_140f20750(&rbx_16[2])

void*** var_1330 = rbx_16
void* var_1338 = &rbx_16[2]
sub_14065fa30(&var_1338, &rbx_16[2])
int64_t var_14a8_4 = 0x3c8
void var_1437
void* var_1328 = &var_1437
sub_140e23ed0(&rbx_16[2], "SBox")

if (rbx_16 != 0)
    rbx_16[1].d += 1

if (&arg1[0xd5] == &var_1468)
label_140f36e07:
    
    if (rbx_16 != 0)
        rbx_16[1].d -= 1
        
        if (rbx_16[1].d == 1)
            (**rbx_16)(rbx_16)
            int32_t temp27_1 = *(rbx_16 + 0xc)
            *(rbx_16 + 0xc) -= 1
            
            if (temp27_1 == 1)
                (*rbx_16)[1](rbx_16, 1)
else
    arg1[0xd5] = &rbx_16[2]
    void*** rdi_9 = arg1[0xd6]
    
    if (rbx_16 == rdi_9)
        goto label_140f36e07
    
    arg1[0xd6] = rbx_16
    
    if (rdi_9 != 0)
        rdi_9[1].d -= 1
        
        if (rdi_9[1].d == 1)
            (**rdi_9)(rdi_9)
            int32_t temp29_1 = *(rdi_9 + 0xc)
            *(rdi_9 + 0xc) -= 1
            
            if (temp29_1 == 1)
                (*rdi_9)[1](rdi_9, 1)

void var_dd8
void* rax_69
int128_t zmm1_6
rax_69, zmm1_6 = sub_140f1d180(sub_14068c940(&var_dd8), arg1, &var_13f8)
void* rax_70
int128_t zmm1_7
rax_70, zmm1_7 = sub_1406937a0(rax_69, &var_1488, zmm1_6)
void* var_1230
void** rax_71 = sub_140695d20(&var_1338, &var_1230, rax_70, zmm1_7)
int64_t* rbx_17 = rax_71[1]
var_1468.q = *rax_71
var_1468:8.q = rbx_17

if (rbx_17 != 0)
    rbx_17[1].d += 1

void*** rax_72 = j_sub_140a82f30(0x88)
void*** rdi_10 = rax_72

if (rax_72 == 0)
    rdi_10 = nullptr
else
    sub_14068e490(rax_72)
    *rdi_10 = &data_142d8add0

int128_t* (* rax_73)(void* arg1, int128_t* arg2) = sub_140698b50(rdi_10)
var_1488 = rax_73
sub_140693600(rax_73, &var_1468)

if (rbx_17 != 0)
    rbx_17[1].d -= 1
    
    if (rbx_17[1].d == 1)
        int64_t rdx_29 = *rbx_17
        (*rdx_29)(rbx_17, rdx_29)
        int32_t temp31_1 = *(rbx_17 + 0xc)
        *(rbx_17 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*(*rbx_17 + 8))(rbx_17, 1)

char var_1495 = 0
char var_1494
char rax_75

if (*(arg2 + 0x68b) == 0)
    rax_75 = var_1494
else
    rax_75 = *(arg2 + 0x68a)
    var_1495 = 1

bool cond:3 = *(arg2 + 0x689) == 0
var_1498 = rax_75
char var_1497 = 0
char rax_76

if (cond:3)
    rax_76 = var_1494
else
    rax_76 = *(arg2 + 0x688)
    var_1497 = 1

int64_t* r12_1 = arg1[0xd9]
var_1468.q = arg1[0xd8]

if (r12_1 != 0)
    r12_1[1].d += 1

int64_t* r13_1 = arg1[0xd4]
var_13f8.q = arg1[0xd3]

if (r13_1 != 0)
    r13_1[1].d += 1

int64_t* r15_1 = *(arg2 + 0x1b8)
var_13b8 = *(arg2 + 0x1b0)

if (r15_1 != 0)
    r15_1[1].d += 1

void var_550
int64_t* rax_80 = sub_140f1edc0(&var_550)
sub_14065da90(&rax_80[0x34], arg2 + 0x1c0)
rax_80[0x37].b = *(arg2 + 0x1d8)
sub_140692f90(&rax_80[0x38], arg2 + 0x1e0)
sub_14065da90(&rax_80[0x3a], arg2 + 0x1f0)
rax_80[0x3d].b = *(arg2 + 0x208)
sub_140692f90(&rax_80[0x3e], arg2 + 0x210)
sub_14065da90(&rax_80[0x40], arg2 + 0x220)
rax_80[0x43].b = *(arg2 + 0x238)
sub_140692f90(&rax_80[0x44], arg2 + 0x240)
int128_t* (* rcx_94)(void* arg1, int128_t* arg2) = var_13b8
rax_80[0x51] = *(arg2 + 0x1a8)
var_13b8 = rcx_94

if (r15_1 != 0)
    r15_1[1].d += 1

if (&var_13b8 != &rax_80[0x46])
    var_13b8.o = *(rax_80 + 0x230)
    *(rax_80 + 0x230) = var_13b8.o

if (r15_1 != 0)
    r15_1[1].d -= 1
    
    if (r15_1[1].d == 1)
        (**r15_1)(r15_1)
        int32_t temp34_1 = *(r15_1 + 0xc)
        *(r15_1 + 0xc) -= 1
        
        if (temp34_1 == 1)
            (*(*r15_1 + 8))(r15_1, 1)

if (r15_1 != 0)
    r15_1[1].d -= 1
    
    if (r15_1[1].d == 1)
        (**r15_1)(r15_1)
        int32_t temp36_1 = *(r15_1 + 0xc)
        *(r15_1 + 0xc) -= 1
        
        if (temp36_1 == 1)
            (*(*r15_1 + 8))(r15_1, 1)

int64_t* rdi_11 = var_1398
var_1428.o = var_1428.o
int64_t* rax_89 = sub_140edfb20(&var_1398, rdi_11, &var_1428)
void var_1200
sub_140d93b50(&var_1200)
char var_11b0 = 1
int64_t var_11a8 = 0
int32_t var_11a0 = 0
sub_140692f90(&var_11a8, rax_89)
sub_140693420(&rax_80[0x52], &var_1200)
rax_80[0x5c].b = var_11b0
sub_1407473e0(&rax_80[0x5d], &var_11a8)
sub_140745b20(&var_11a8)
int64_t* var_11c8

if (var_11c8 != 0)
    var_11c8[1].d -= 1
    
    if (var_11c8[1].d == 1)
        (**var_11c8)(var_11c8)
        int32_t temp37_1 = *(var_11c8 + 0xc)
        *(var_11c8 + 0xc) -= 1
        
        if (temp37_1 == 1)
            (*(*var_11c8 + 8))(var_11c8, 1)

int32_t var_1390
int64_t* rax_94

if (var_1390 == 0)
    rax_94 = var_1398
label_140f371be:
    
    if (rax_94 != 0)
        sub_140a74f90(rax_94)
else
    int64_t* rcx_107 = var_1398
    
    if (rcx_107 != 0)
        (*(*rcx_107 + 0x38))(rcx_107, 0)
        rax_94 = var_1398
        
        if (rax_94 != 0)
            rax_94 = sub_140a84c80(rax_94, 0, 0)
            var_1398 = rax_94
        
        int32_t var_1390_1 = 0
        goto label_140f371be
rax_80[0x6a].b = *(arg2 + 0x368)
*(rax_80 + 0x351) = *(arg2 + 0x369)
sub_140692f90(&rax_80[0x6b], arg2 + 0x370)
rax_80[0x77].b = *(arg2 + 0x380)
*(rax_80 + 0x3b9) = *(arg2 + 0x381)
sub_140692f90(&rax_80[0x78], arg2 + 0x388)
sub_1407473e0(&rax_80[0x89], arg2 + 0x4a0)

if (arg2 + 0x4b0 != &rax_80[0x71])
    int64_t* rcx_114
    
    if (*(arg2 + 0x4b8) != 0)
        rcx_114 = *(arg2 + 0x4b0)
    
    if (*(arg2 + 0x4b8) != 0 && rcx_114 != 0)
        (*(*rcx_114 + 0x40))(rcx_114, &rax_80[0x71])
    else if (rax_80[0x72].d != 0)
        int64_t* rcx_115 = rax_80[0x71]
        
        if (rcx_115 != 0)
            (*(*rcx_115 + 0x38))(rcx_115, 0)
            int64_t rcx_116 = rax_80[0x71]
            
            if (rcx_116 != 0)
                rax_80[0x71] = sub_140a84c80(rcx_116, 0, 0)
            
            rax_80[0x72].d = 0

sub_1407473e0(&rax_80[0x73], arg2 + 0x4c0)
sub_1407473e0(&rax_80[0x75], arg2 + 0x4d0)

if (arg2 + 0x500 != &rax_80[0x8f])
    int64_t* rcx_120
    
    if (*(arg2 + 0x508) != 0)
        rcx_120 = *(arg2 + 0x500)
    
    if (*(arg2 + 0x508) != 0 && rcx_120 != 0)
        (*(*rcx_120 + 0x40))(rcx_120, &rax_80[0x8f])
    else if (rax_80[0x90].d != 0)
        int64_t* rcx_121 = rax_80[0x8f]
        
        if (rcx_121 != 0)
            (*(*rcx_121 + 0x38))(rcx_121, 0)
            int64_t rcx_122 = rax_80[0x8f]
            
            if (rcx_122 != 0)
                rax_80[0x8f] = sub_140a84c80(rcx_122, 0, 0)
            
            rax_80[0x90].d = 0

sub_1407473e0(&rax_80[0x95], arg2 + 0x530)

if (arg2 + 0x540 != &rax_80[0x97])
    int64_t* rcx_124
    
    if (*(arg2 + 0x548) != 0)
        rcx_124 = *(arg2 + 0x540)
    
    if (*(arg2 + 0x548) != 0 && rcx_124 != 0)
        (*(*rcx_124 + 0x40))(rcx_124, &rax_80[0x97])
    else if (rax_80[0x98].d != 0)
        int64_t* rcx_125 = rax_80[0x97]
        
        if (rcx_125 != 0)
            (*(*rcx_125 + 0x38))(rcx_125, 0)
            int64_t rcx_126 = rax_80[0x97]
            
            if (rcx_126 != 0)
                rax_80[0x97] = sub_140a84c80(rcx_126, 0, 0)
            
            rax_80[0x98].d = 0

rax_80[0x67].d = *(arg2 + 0x338)
*(rax_80 + 0x33c) = *(arg2 + 0x33c)
sub_140692f90(&rax_80[0x68], arg2 + 0x340)
rax_80[0x80].b = *(arg2 + 0x3e0)
*(rax_80 + 0x401) = *(arg2 + 0x3e1)
sub_140692f90(&rax_80[0x81], arg2 + 0x3e8)
rax_80[0x7a].b = *(arg2 + 0x3b0)
*(rax_80 + 0x3d1) = *(arg2 + 0x3b1)
sub_140692f90(&rax_80[0x7b], arg2 + 0x3b8)
rax_80[0x7d].b = *(arg2 + 0x3c8)
*(rax_80 + 0x3e9) = *(arg2 + 0x3c9)
sub_140692f90(&rax_80[0x7e], arg2 + 0x3d0)
rax_80[0x83].b = *(arg2 + 0x3f8)
*(rax_80 + 0x419) = *(arg2 + 0x3f9)
sub_140692f90(&rax_80[0x84], arg2 + 0x400)
rax_80[0x64].d = *(arg2 + 0x350)
*(rax_80 + 0x324) = *(arg2 + 0x354)
sub_140692f90(&rax_80[0x65], arg2 + 0x358)
*(rax_80 + 0x2f8) = *(arg2 + 0x618)
rax_80[0x61].b = *(arg2 + 0x628)
sub_140692f90(&rax_80[0x62], arg2 + 0x630)
rax_80[0x48].d = *(arg2 + 0x550)
*(rax_80 + 0x244) = *(arg2 + 0x554)
sub_140692f90(&rax_80[0x49], arg2 + 0x558)
rax_80[0x4b].b = *(arg2 + 0x568)
*(rax_80 + 0x259) = *(arg2 + 0x569)
sub_140692f90(&rax_80[0x4c], arg2 + 0x570)
rax_80[0x4e].b = *(arg2 + 0x580)
*(rax_80 + 0x271) = *(arg2 + 0x581)
sub_1407473e0(&rax_80[0x4f], arg2 + 0x588)
int64_t* rbx_24 = r13_1
var_13f8.q = var_13f8.q
var_13f8:8.q = rbx_24

if (r13_1 != 0)
    r13_1[1].d += 1

int128_t zmm1_9

if (&var_13f8 != &rax_80[0x6d])
    zmm1_9 = var_13f8
    var_13f8 = *(rax_80 + 0x368)
    rbx_24 = var_13f8:8.q
    *(rax_80 + 0x368) = zmm1_9

if (rbx_24 != 0)
    rbx_24[1].d -= 1
    
    if (rbx_24[1].d == 1)
        (**rbx_24)(rbx_24)
        int32_t temp40_1 = *(rbx_24 + 0xc)
        *(rbx_24 + 0xc) -= 1
        
        if (temp40_1 == 1)
            (*(*rbx_24 + 8))(rbx_24, 1)

if (r13_1 != 0)
    r13_1[1].d -= 1
    
    if (r13_1[1].d == 1)
        (**r13_1)(r13_1)
        int32_t temp41_1 = *(r13_1 + 0xc)
        *(r13_1 + 0xc) -= 1
        
        if (temp41_1 == 1)
            (*(*r13_1 + 8))(r13_1, 1)

int64_t* rbx_25 = r12_1
var_1468.q = var_1468.q
var_1468:8.q = rbx_25

if (r12_1 != 0)
    r12_1[1].d += 1

if (&var_1468 != &rax_80[0x6f])
    zmm1_9 = var_1468
    var_1468 = *(rax_80 + 0x378)
    rbx_25 = var_1468:8.q
    *(rax_80 + 0x378) = zmm1_9

if (rbx_25 != 0)
    rbx_25[1].d -= 1
    
    if (rbx_25[1].d == 1)
        (**rbx_25)(rbx_25)
        int32_t temp44_1 = *(rbx_25 + 0xc)
        *(rbx_25 + 0xc) -= 1
        
        if (temp44_1 == 1)
            (*(*rbx_25 + 8))(rbx_25, 1)

if (r12_1 != 0)
    r12_1[1].d -= 1
    
    if (r12_1[1].d == 1)
        (**r12_1)(r12_1)
        int32_t temp45_1 = *(r12_1 + 0xc)
        *(r12_1 + 0xc) -= 1
        
        if (temp45_1 == 1)
            (*(*r12_1 + 8))(r12_1, 1)

sub_1407473e0(&rax_80[0x8b], arg2 + 0x4e0)
sub_1407473e0(&rax_80[0x8d], arg2 + 0x4f0)
sub_1407473e0(&rax_80[0x91], arg2 + 0x510)
sub_1407473e0(&rax_80[0x93], arg2 + 0x520)
rax_80[0x99].b = *(arg2 + 0x650)
*(rax_80 + 0x4c9) = *(arg2 + 0x651)
rax_80[0x9a].b = *(arg2 + 0x658)
*(rax_80 + 0x4d1) = *(arg2 + 0x659)
sub_1407473e0(&rax_80[0x9b], arg2 + 0x660)
rax_80[0x9d].b = *(arg2 + 0x670)
*(rax_80 + 0x4e9) = *(arg2 + 0x671)
sub_1407473e0(&rax_80[0x9e], arg2 + 0x678)

if (&var_1494 != &rax_80[0xa0])
    if (*(rax_80 + 0x501) != 0)
        *(rax_80 + 0x501) = 0
    
    if (var_1497 != 0)
        rax_80[0xa0].b = rax_76
        *(rax_80 + 0x501) = 1

if (&var_1494 != rax_80 + 0x502)
    if (*(rax_80 + 0x503) != 0)
        *(rax_80 + 0x503) = 0
    
    if (var_1495 != 0)
        *(rax_80 + 0x502) = var_1498
        *(rax_80 + 0x503) = 1

rax_80[0x86].b = *(arg2 + 0x410)
*(rax_80 + 0x431) = *(arg2 + 0x411)
sub_140692f90(&rax_80[0x87], arg2 + 0x418)
void*** rax_148 = sub_140f1ce30()
var_13f8:8.q = rax_148
void*** rbx_26 = rax_148
var_13f8.q = &rax_148[2]
sub_140918950(&var_13f8, &rax_148[2])
int64_t var_14a8_5 = 0x480
void var_1436
void* var_13e8 = &var_1436
int128_t zmm1_10 = sub_140e23ed0(&rax_148[2], "SMultiLineEditableText")
var_1468.q = &rax_148[2]
var_1468:8.q = rbx_26

if (rbx_26 != 0)
    rbx_26[1].d += 1

if (&rdi_11[0x97] != &var_1468)
    rdi_11[0x97] = &rax_148[2]
    var_1468.q = 0
    sub_14066a200(&rdi_11[0x98], &var_1468:8)
    rbx_26 = var_1468:8.q

if (rbx_26 != 0)
    rbx_26[1].d -= 1
    
    if (rbx_26[1].d == 1)
        (**rbx_26)(rbx_26)
        int32_t temp47_1 = *(rbx_26 + 0xc)
        *(rbx_26 + 0xc) -= 1
        
        if (temp47_1 == 1)
            (*rbx_26)[1](rbx_26, 1)

void* var_1240
void** rax_151 = sub_140f275a0(&var_13f8, &var_1240, rax_80, zmm1_10)
var_1428 = *rax_151
void* rcx_164 = rax_151[1]
var_1420.q = rcx_164

if (rcx_164 != 0)
    *(rcx_164 + 8) += 1

void*** rax_152 = j_sub_140a82f30(0x88)
void*** r14_2 = rax_152

if (rax_152 == 0)
    r14_2 = nullptr
else
    sub_14068e490(rax_152)
    *r14_2 = &data_142d8add0

r14_2[4].w = 0
void*** rax_153 = sub_140e92390()
var_1468:8.q = rax_153
var_1468.q = &rax_153[2]
sub_14065fa30(&var_1468, &rax_153[2])
int64_t var_14a8_6 = 0x2d8
void var_1435
void* var_1458 = &var_1435
sub_140e23ed0(&rax_153[2], "SVerticalBox")
void* rax_155 = sub_140693860(sub_140eb9be0(r14_2, &var_13d8), &var_1428)
int64_t* rax_156
int128_t zmm1_11
rax_156, zmm1_11 = sub_14068d420(&var_1198)
void* var_1210
void** rax_159 = sub_140696920(&var_1468, &var_1210, 
    sub_1406938c0(sub_1406938c0(rax_156, rax_155), var_1488), zmm1_11)
var_1428 = *rax_159
void* rdx_76 = rax_159[1]
var_1420.q = rdx_76

if (rdx_76 != 0)
    *(rdx_76 + 8) += 1

void*** rax_160 = j_sub_140a82f30(0x88)
void*** rbx_29 = rax_160

if (rax_160 == 0)
    rbx_29 = nullptr
else
    sub_14068e490(rax_160)
    *rbx_29 = &data_142d8add0

rbx_29[4].w = 0
void*** rax_161 = sub_140e91f70()
void*** var_1410_3 = rax_161
var_1418 = &rax_161[2]
sub_14065fa30(&var_1418, &rax_161[2])
void var_1434
void* var_1408_3 = &var_1434
int64_t var_14a8_7 = 0x2d8
sub_140e23ed0(var_1418, "SHorizontalBox")
void* rax_163 = sub_140693860(sub_140eb9be0(rbx_29, &var_1308), &var_1428)
void var_f88
int64_t* rax_164
int128_t zmm1_12
rax_164, zmm1_12 = sub_14068d420(&var_f88)
void* rax_166 = sub_1406938c0(sub_1406938c0(rax_164, rax_163), var_1448)
void* var_1220
void** rax_168 = sub_140696920(sub_140dd3250(&var_1418, &rdi_11[0xd0]), &var_1220, rax_166, zmm1_12)
var_1428 = *rax_168
void* rcx_185 = rax_168[1]
var_1420.q = rcx_185

if (rcx_185 != 0)
    *(rcx_185 + 8) += 1

void var_898
int64_t* rax_169 = sub_14068c640(&var_898)
var_1358.o = var_1358.o
int64_t* rax_170 = sub_140e45b90(&var_1448, rdi_11, &var_1358)
var_13b8 = nullptr
int64_t* var_13b0
var_13b0.b = 1
int64_t var_13a8 = 0
int32_t var_13a0 = 0
sub_140692f90(&var_13a8, rax_170)
rax_169[0x44] = var_13b8
rax_169[0x45].b = var_13b0.b
sub_1407473e0(&rax_169[0x46], &var_13a8)
sub_140745b20(&var_13a8)
int128_t* (* rax_174)(void* arg1, int128_t* arg2)

if (var_1440 == 0)
    rax_174 = var_1448
label_140f37b37:
    
    if (rax_174 != 0)
        sub_140a74f90(rax_174)
else
    int128_t* (* rcx_191)(void* arg1, int128_t* arg2) = var_1448
    
    if (rcx_191 != 0)
        (*(*rcx_191 + 0x38))(rcx_191, 0)
        rax_174 = var_1448
        
        if (rax_174 != 0)
            rax_174 = sub_140a84c80(rax_174, 0, 0)
            var_1448 = rax_174
        
        int32_t var_1440_1 = 0
        goto label_140f37b37
var_1368.o = var_1368.o
int64_t* rax_175 = sub_140e45dd0(&var_1488, rdi_11, &var_1368)
char var_1298 = 1
int128_t var_12c0
__builtin_memcpy(&var_12c0, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
int64_t var_1290 = 0
int128_t var_12a8 = zx.o(0)
int32_t var_1288 = 0
sub_140692f90(&var_1290, rax_175)
sub_140693390(&rax_169[0x55], &var_12c0)
rax_169[0x5a].b = var_1298
sub_1407473e0(&rax_169[0x5b], &var_1290)
sub_140745b20(&var_1290)
sub_140ddfb70(&var_12c0)
int128_t* (* rax_178)(void* arg1, int128_t* arg2)

if (var_1480 == 0)
    rax_178 = var_1488
label_140f37c2f:
    
    if (rax_178 != 0)
        sub_140a74f90(rax_178)
else
    int128_t* (* rcx_200)(void* arg1, int128_t* arg2) = var_1488
    
    if (rcx_200 != 0)
        (*(*rcx_200 + 0x38))(rcx_200, 0)
        rax_178 = var_1488
        
        if (rax_178 != 0)
            rax_178 = sub_140a84c80(rax_178, 0, 0)
            var_1488 = rax_178
        
        int32_t var_1480_1 = 0
        goto label_140f37c2f
var_1378.o = var_1378.o
int64_t* rax_179 = sub_140e45dd0(&var_1368, rdi_11, &var_1378)
char var_1258 = 1
int128_t var_1280
__builtin_memcpy(&var_1280, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
int64_t var_1250 = 0
int128_t var_1268 = zx.o(0)
int32_t var_1248 = 0
sub_140692f90(&var_1250, rax_179)
sub_140693390(&rax_169[0x5d], &var_1280)
rax_169[0x62].b = var_1258
sub_1407473e0(&rax_169[0x63], &var_1250)
sub_140745b20(&var_1250)
sub_140ddfb70(&var_1280)
sub_140745b20(&var_1368)
var_1388.o = var_1388.o
int64_t* rax_181 = sub_140e8eef0(&var_1378, rdi_11, &var_1388)
char var_12d8 = 1
int64_t var_12d0 = 0
int32_t var_12c8 = 0
int128_t var_12e8 = zx.o(0)
sub_140692f90(&var_12d0, rax_181)
rax_169[0x39].b = var_12d8
*(rax_169 + 0x1b8) = var_12e8
sub_1407473e0(&rax_169[0x3a], &var_12d0)
sub_140745b20(&var_12d0)
sub_140f33710(rdi_11, sub_1406936e0(rax_169, &var_1428, sub_140745b20(&var_1378)))
sub_14068fed0(&var_898)
int64_t* var_1218

if (var_1218 != 0)
    var_1218[1].d -= 1
    
    if (var_1218[1].d == 1)
        (**var_1218)(var_1218)
        int32_t temp49_1 = *(var_1218 + 0xc)
        *(var_1218 + 0xc) -= 1
        
        if (temp49_1 == 1)
            (*(*var_1218 + 8))(var_1218, 1)

sub_140669d70(&var_1418)
int64_t var_de8

if (var_de8 != 0)
    sub_140a74f90(var_de8)

sub_140660250(&var_f88)
int64_t* var_1208

if (var_1208 != 0)
    var_1208[1].d -= 1
    
    if (var_1208[1].d == 1)
        (**var_1208)(var_1208)
        int32_t temp51_1 = *(var_1208 + 0xc)
        *(var_1208 + 0xc) -= 1
        
        if (temp51_1 == 1)
            (*(*var_1208 + 8))(var_1208, 1)

sub_140669d70(&var_1468)
int64_t var_ff8

if (var_ff8 != 0)
    sub_140a74f90(var_ff8)

sub_140660250(&var_1198)
int64_t* var_1238

if (var_1238 != 0)
    var_1238[1].d -= 1
    
    if (var_1238[1].d == 1)
        (**var_1238)(var_1238)
        int32_t temp54_1 = *(var_1238 + 0xc)
        *(var_1238 + 0xc) -= 1
        
        if (temp54_1 == 1)
            (*(*var_1238 + 8))(var_1238, 1)

sub_140597060(&var_13f8)
sub_140f243e0(&var_550)
int64_t* var_1228

if (var_1228 != 0)
    var_1228[1].d -= 1
    
    if (var_1228[1].d == 1)
        (**var_1228)(var_1228)
        int32_t temp56_1 = *(var_1228 + 0xc)
        *(var_1228 + 0xc) -= 1
        
        if (temp56_1 == 1)
            (*(*var_1228 + 8))(var_1228, 1)

sub_140669d70(&var_1338)
sub_140690290(&var_dd8)
int64_t* var_1340

if (var_1340 != 0)
    var_1340[1].d -= 1
    
    if (var_1340[1].d == 1)
        (**var_1340)(var_1340)
        int32_t temp58_1 = *(var_1340 + 0xc)
        *(var_1340 + 0xc) -= 1
        
        if (temp58_1 == 1)
            (*(*var_1340 + 8))(var_1340, 1)

sub_140669d70(&var_1320)
sub_140690290(&var_b38)
sub_140745b20(&var_1300)
sub_140745b20(&var_13d0)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp60_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp60_1 == 1)
            (*(*r14 + 8))(r14, 1)

int64_t* rbx_38 = var_1478

if (rbx_38 != 0)
    rbx_38[1].d -= 1
    
    if (rbx_38[1].d == 1)
        (**rbx_38)(rbx_38)
        int32_t temp61_1 = *(rbx_38 + 0xc)
        *(rbx_38 + 0xc) -= 1
        
        if (temp61_1 == 1)
            (*(*rbx_38 + 8))(rbx_38, 1)

int64_t* rbx_39 = *(arg2 + 0x648)
var_1478 = *(arg2 + 0x640)

if (rbx_39 != 0)
    rbx_39[1].d += 1

int64_t** result = &var_1478

if (&var_1478 != &rdi_11[0xdc])
    var_1478.o = *(rdi_11 + 0x6e0)
    *(rdi_11 + 0x6e0) = var_1478.o

if (rbx_39 != 0)
    rbx_39[1].d -= 1
    
    if (rbx_39[1].d == 1)
        result = (**rbx_39)(rbx_39)
        int32_t temp63_1 = *(rbx_39 + 0xc)
        *(rbx_39 + 0xc) -= 1
        
        if (temp63_1 == 1)
            result = (*(*rbx_39 + 8))(rbx_39, 1)

int64_t* rcx_248 = rdi_11[0xdc]

if (rcx_248 != 0)
    int64_t* rbx_40 = rdi_11[0xd0]
    int64_t* rax_202 = (*(*rcx_248 + 0x18))(rcx_248, &var_1348)
    result = sub_140693860(
        sub_140f12c60(sub_140698b50(sub_140ea2880(rbx_40)), 0x40400000, (zx.o(0)).d), rax_202)

__security_check_cookie(rax_1 ^ &var_14c8)
return result
