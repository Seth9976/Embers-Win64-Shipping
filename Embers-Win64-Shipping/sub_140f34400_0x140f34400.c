// 函数: sub_140f34400
// 地址: 0x140f34400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14
int64_t* var_30 = r14
__chkstk(0x13d0)
int128_t zmm7
int128_t var_58 = zmm7
void var_1408
int64_t rax_1 = __security_cookie ^ &var_1408
int32_t var_1308 = 0
arg1[0x83].b = *(arg2 + 0x2a0)
arg1[0x82].d = *(arg2 + 0x2a4)
*(arg1 + 0x414) = *(arg2 + 0x2a8)
sub_1407473e0(&arg1[0x80], arg2 + 0x328)
arg1[0x84] = *(arg2 + 0x1a0) + 8
arg1[0x85] = *(arg2 + 0x1a0) + 0x90
int128_t var_1300
sub_140de1590(&arg1[0x74], sub_140d91e10(&var_1300, (zx.o(0)).d, *(*(arg2 + 0x1a0) + 0x118), 5))
double zmm0 = sub_140d952d0(&var_1300)

if (arg1[0x83].b == 0)
    sub_140db3540(&arg1[0x74], zmm0)

int64_t* rax_11 = *(arg2 + 0x258)
int64_t* rcx_5 = *(arg2 + 0x250)
int64_t* var_1328 = rcx_5
int64_t* var_1320 = rax_11

if (rax_11 != 0)
    rax_11[1].d += 1
    rcx_5 = var_1328

void var_13d8
int64_t* var_13c8
int64_t* var_13c0
char* (* var_13b8)(int64_t* arg1, char* arg2)
int64_t* var_13b0
int32_t var_13a0
int32_t var_139c
int64_t var_1390
void* var_1348
void*** var_1340
void* var_1338
void var_e80

if (rcx_5 == data_143e244b0)
    var_13a0 = 0x3f800000
    var_139c = 0x3f800000
    char var_1398_1 = 1
    var_1390 = 0
    int32_t var_1388_1 = 0
    int64_t* rax_12 = sub_14068d9d0(&var_e80)
    sub_14065da90(&rax_12[0x34], arg2 + 0x270)
    rax_12[0x37].b = *(arg2 + 0x288)
    sub_140692f90(&rax_12[0x38], arg2 + 0x290)
    sub_140d962e0(&rax_12[0x3b], arg2 + 0x338)
    rax_12[0x45].b = *(arg2 + 0x388)
    sub_140692f90(&rax_12[0x46], arg2 + 0x390)
    rax_12[0x54].d = 0x3f800000
    *(rax_12 + 0x2a4) = 0x3f800000
    rax_12[0x55].b = 1
    sub_140692f90(&rax_12[0x56], &var_1390)
    void*** rax_14 = j_sub_140a82f30(0x7a8)
    void*** rdi_1 = rax_14
    
    if (rax_14 == 0)
        rdi_1 = nullptr
    else
        rax_14[1].d = 1
        *(rax_14 + 0xc) = 1
        *rdi_1 = &data_142d8b060
        
        if (rdi_1 != -0x10)
            sub_140f66da0(&rdi_1[2])
    
    var_1340 = rdi_1
    var_1348 = &rdi_1[2]
    sub_14065fa30(&var_1348, &rdi_1[2])
    int64_t var_13e8_1 = 0x798
    var_1338 = &var_13d8
    void** rax_15 =
        sub_140697520(&var_1348, &var_13b8, rax_12, sub_140e23ed0(&rdi_1[2], "STextBlock"))
    int64_t* rdx_9 = *rax_15
    var_13c8 = rdx_9
    int64_t* rcx_17 = rax_15[1]
    
    if (rcx_17 != 0)
        rcx_17[1].d += 1
        rdx_9 = var_13c8
    
    int64_t* rbx_2 = var_1320
    int64_t* rax_16 = var_1328
    var_1328 = rdx_9
    var_13c8 = rax_16
    var_1320 = rcx_17
    var_13c0 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (var_13b0 != 0)
        var_13b0[1].d -= 1
        
        if (var_13b0[1].d == 1)
            (**var_13b0)(var_13b0)
            int32_t temp4_1 = *(var_13b0 + 0xc)
            *(var_13b0 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_13b0 + 8))(var_13b0, 1)
    
    void*** rbx_4 = var_1340
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp5_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rbx_4)[1](rbx_4, 1)
    
    sub_1406913d0(&var_e80)
    sub_140745b20(&var_1390)

int64_t* var_1380
char var_1378
int64_t var_1370
int32_t* rdx_11
int32_t rbx_5

if (*(arg2 + 0x248) != 0 || *(arg2 + 0x230) != 0)
    r14.b = 1
    sub_140e15430()
    var_1380 = &data_143e24500
    rdx_11 = &var_1380
    var_1378 = 1
    rbx_5 = 1
    var_1370 = 0
    int32_t var_1368_1 = 0
else
    var_13a0.q = *(arg2 + 0x1e8)
    r14.b = 0
    char var_1398_2 = *(arg2 + 0x1f0)
    var_1390 = 0
    int32_t var_1388_2 = 0
    sub_140692f90(&var_1390, arg2 + 0x1f8)
    rdx_11 = &var_13a0
    rbx_5 = 2

int64_t rax_25 = *rdx_11
char rax_26 = rdx_11[2].b
int64_t var_1278 = 0
int32_t var_1270 = 0
sub_140692f90(&var_1278, &rdx_11[4])

if ((rbx_5.b & 2) != 0)
    rbx_5 &= 0xfffffffd
    sub_140745b20(&var_1390)

if ((rbx_5.b & 1) != 0)
    rbx_5 &= 0xfffffffe
    sub_140745b20(&var_1370)

int128_t var_12e8
int64_t var_12d0
int128_t* rdx_13

if (r14.b == 0)
    rdx_13 = arg2 + 0x1a8
else
    char var_12f0_1 = 0
    rbx_5 |= 4
    char var_12d8_1 = 1
    var_1300 = data_143dbb1e0
    var_12d0 = 0
    rdx_13 = &var_1300
    var_12e8 = zx.o(0)
    int32_t var_12c8_1 = 0

char var_1168 = rdx_13[1].b
int64_t var_1160 = *(rdx_13 + 0x18)
void* rax_29 = rdx_13[2].q
int128_t var_1178 = *rdx_13
void* var_1158 = rax_29

if (rax_29 != 0)
    *(rax_29 + 8) += 1

char rax_30 = *(rdx_13 + 0x28)
int64_t var_1148 = 0
int32_t var_1140 = 0
sub_140692f90(&var_1148, &rdx_13[3])

if ((rbx_5.b & 4) != 0)
    rbx_5 &= 0xfffffffb
    sub_140745b20(&var_12d0)
    int64_t* rdi_2 = var_12e8:8.q
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp7_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

int32_t rax_33
int64_t** rdx_15

if (r14.b != 0)
    var_13a0.q = *(arg2 + 0x1e8)
    char var_1398_3 = *(arg2 + 0x1f0)
    var_1390 = 0
    int32_t var_1388_3 = 0
    sub_140692f90(&var_1390, arg2 + 0x1f8)
    rdx_15 = &var_13a0
    rax_33 = 0x10
else
    sub_140e15430()
    var_1380 = &data_143e24500
    rdx_15 = &var_1380
    rax_33 = 8
    var_1378 = 1
    var_1370 = 0
    int32_t var_1368_2 = 0

int32_t rbx_6 = rbx_5 | rax_33
int64_t var_1258 = 0
int64_t* rax_36 = *rdx_15
char rax_37 = rdx_15[1].b
int32_t var_1250 = 0
sub_140692f90(&var_1258, &rdx_15[2])

if ((rbx_6.b & 0x10) != 0)
    rbx_6 &= 0xffffffef
    sub_140745b20(&var_1390)

if ((rbx_6.b & 8) != 0)
    sub_140745b20(&var_1370)

int128_t* rdx_18
int32_t rbx_7

if (r14.b != 0)
    rdx_18 = arg2 + 0x1a8
    rbx_7 = 0
else
    char var_12f0_2 = 0
    rdx_18 = &var_1300
    char var_12d8_2 = 1
    var_1300 = data_143dbb1e0
    var_12d0 = 0
    rbx_7 = 0x20
    var_12e8 = zx.o(0)
    int32_t var_12c8_2 = 0

char var_11a8 = rdx_18[1].b
int64_t var_11a0 = *(rdx_18 + 0x18)
void* rax_40 = rdx_18[2].q
int128_t var_11b8 = *rdx_18
void* var_1198 = rax_40

if (rax_40 != 0)
    *(rax_40 + 8) += 1

char rax_41 = *(rdx_18 + 0x28)
int64_t var_1188 = 0
int32_t var_1180 = 0
sub_140692f90(&var_1188, &rdx_18[3])

if (rbx_7 != 0)
    sub_140745b20(&var_12d0)
    int64_t* rbx_8 = var_12e8:8.q
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp9_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)

int64_t rbx_9 = *(arg2 + 0x248)
int64_t (* var_1358)(int64_t* arg1) = sub_140f28a78
int128_t zmm0_3 = zx.o(0)
int32_t var_1350 = 0
int64_t var_1138 = rbx_9
var_13c8 = sub_140f28a60
char var_1130 = 1
var_13b8 = sub_140f50750
int64_t var_1128 = 0
int32_t var_1120 = 0
var_13c0.d = 0
int32_t var_1220 = 0x3f800000
char var_121c = 1
int64_t var_1218 = 0
int32_t var_1210 = 0
var_13b0.d = 0
int128_t var_1068
__builtin_memcpy(&var_1068, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
int128_t var_1050 = zmm0_3
__builtin_memcpy(&var_1300, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
char var_12d8_3 = 1
int128_t var_12e8_1 = zmm0_3
var_12d0 = 0
int32_t var_12c8_3 = 0
sub_140b58170(&var_1308, "NoBorder", 1)
void* r15 = arg2 + 0x3a0
char var_1108 = 1

if (*(arg2 + 0x3a8) == 0)
    r15 = &arg1[0x47]

int64_t var_1100 = 0
int64_t var_1248 = *(arg2 + 0x260)
void* rax_46 = *(arg2 + 0x268)
int32_t var_10f8 = 0
char var_10e0 = 1
int64_t var_10d8 = 0
int32_t var_10d0 = 0
void* var_1240 = rax_46
int128_t var_1118 = zx.o(0)
int128_t var_10f0 = zx.o(0)

if (rax_46 != 0)
    *(rax_46 + 8) += 1

void var_3a8
int64_t* rax_47 = sub_14068c640(&var_3a8)
var_13c8.o = var_13c8.o
int64_t* var_1318
int64_t* rax_48 = sub_140e45cb0(&var_1318, arg1, &var_13c8)
var_1348.w = 0x119
var_1340 = nullptr
var_1338.d = 0
sub_1407473e0(&var_1340, rax_48)
rax_47[0xf].b = var_1348.b
*(rax_47 + 0x79) = var_1348:1.b
sub_1407473e0(&rax_47[0x10], &var_1340)
sub_140745b20(&var_1340)
int32_t var_1310
int64_t* rax_52

if (var_1310 == 0)
    rax_52 = var_1318
label_140f34c59:
    
    if (rax_52 != 0)
        sub_140a74f90(rax_52)
else
    int64_t* rcx_48 = var_1318
    
    if (rcx_48 != 0)
        (*(*rcx_48 + 0x38))(rcx_48, 0)
        rax_52 = var_1318
        
        if (rax_52 != 0)
            rax_52 = sub_140a84c80(rax_52, 0, 0)
            var_1318 = rax_52
        
        int32_t var_1310_1 = 0
        goto label_140f34c59
rax_47[0x44] = rbx_9
rax_47[0x45].b = 1
sub_140692f90(&rax_47[0x46], &var_1128)
sub_140693390(&rax_47[0x55], arg2 + 0x208)
rax_47[0x5a].b = *(arg2 + 0x230)
sub_140692f90(&rax_47[0x5b], arg2 + 0x238)
*(rax_47 + 0x1b8) = *(arg2 + 0x300)
rax_47[0x39].b = *(arg2 + 0x310)
sub_140692f90(&rax_47[0x3a], arg2 + 0x318)
var_13c8.o = var_1358.o
int64_t* rax_55 = sub_140e8f010(&var_1358, arg1, &var_13c8)
char var_1398_4 = 1
var_1390 = 0
int32_t var_1388_4 = 0
sub_140692f90(&var_1390, rax_55)
rax_47[0x4c].d = var_13a0
*(rax_47 + 0x264) = var_139c
rax_47[0x4d].b = var_1398_4
sub_1407473e0(&rax_47[0x4e], &var_1390)
sub_140745b20(&var_1390)
int64_t (* rax_58)(int64_t* arg1)

if (var_1350 == 0)
    rax_58 = var_1358
label_140f34da2:
    
    if (rax_58 != 0)
        sub_140a74f90(rax_58)
else
    int64_t (* rcx_59)(int64_t* arg1) = var_1358
    
    if (rcx_59 != 0)
        (*(*rcx_59 + 0x38))(rcx_59, 0)
        rax_58 = var_1358
        
        if (rax_58 != 0)
            rax_58 = sub_140a84c80(rax_58, 0, 0)
            var_1358 = rax_58
        
        int32_t var_1350_1 = 0
        goto label_140f34da2
void*** rdi_3 = j_sub_140a82f30(0x4c8)

if (rdi_3 == 0)
    rdi_3 = nullptr
else
    rdi_3[1].d = 1
    *(rdi_3 + 0xc) = 1
    *rdi_3 = &data_142d8c5a0
    
    if (rdi_3 != -0x10)
        sub_140f20640(&rdi_3[2])

void*** var_1230 = rdi_3
void* var_1238 = &rdi_3[2]
sub_14065fa30(&var_1238, &rdi_3[2])
int64_t var_13e8_2 = 0x4b8
void* var_1228 = &var_13d8
void* rax_60
int128_t zmm1_5
rax_60, zmm1_5 = sub_1406936e0(rax_47, &var_1248, sub_140e23ed0(&rdi_3[2], "SBorder"))
void* var_1098
void** rax_61 = sub_140695920(&var_1238, &var_1098, rax_60, zmm1_5)
int64_t* rbx_11 = rax_61[1]
var_13c8 = *rax_61
int32_t var_13c0_2 = rbx_11.d

if (rbx_11 != 0)
    rbx_11[1].d += 1

void*** rax_62 = j_sub_140a82f30(0x88)
void*** r14_2 = rax_62

if (rax_62 == 0)
    r14_2 = nullptr
else
    sub_14068e490(rax_62)
    *r14_2 = &data_142d8add0

var_1380.d = 1
var_1378.d = 0x3f800000
char var_1374 = 1
var_1370 = 0
int32_t var_1368_3 = 0
sub_140692f90(&var_1370, &var_1218)
r14_2[5].d = var_1380.d
*(r14_2 + 0x34) = var_1374
r14_2[6].d = var_1378.d
sub_140692f90(&r14_2[7], &var_1370)
sub_140745b20(&var_1370)
sub_140693600(r14_2, &var_13c8)

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        (**rbx_11)(rbx_11)
        int32_t temp11_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_11 + 8))(rbx_11, 1)

uint128_t zmm0_9 = var_1328.o
uint128_t var_10c8 = zmm0_9
void* rax_67 = _mm_bsrli_si128(zmm0_9, 8).q

if (rax_67 != 0)
    *(rax_67 + 8) += 1

int64_t* rbx_12 = data_143e243c8
int64_t* rax_68 = sub_14068cc20(&var_e80)

if (r15 != &rax_68[8])
    if (*(rax_68 + 0x44) != 0)
        *(rax_68 + 0x44) = 0
    
    if (*(r15 + 4) != 0)
        rax_68[8].d = *r15
        *(rax_68 + 0x44) = 1

rax_68[9].b = *(r15 + 8)
sub_1407473e0(&rax_68[0xa], r15 + 0x10)
int64_t r8_7 = var_1308.q
int64_t rax_71 = *rbx_12
int64_t rdx_37 = data_143e243e8
var_1248 = r8_7
int64_t rax_72 = (*(rax_71 + 0x88))(rbx_12, rdx_37, r8_7)

if (rax_72 == 0)
    rax_72 = sub_140e13010()

rax_68[0x36] = rax_72
*(rax_68 + 0x1c8) = *(arg2 + 0x2d8)
rax_68[0x3b].b = *(arg2 + 0x2e8)
sub_140692f90(&rax_68[0x3c], arg2 + 0x2f0)
sub_140693390(&rax_68[0x60], &var_1300)
rax_68[0x65].b = var_12d8_3
sub_140692f90(&rax_68[0x66], &var_12d0)
var_13b8.o = var_13b8.o
sub_140692f90(&rax_68[0x44], sub_140e45ef0(&var_13c8, arg1, &var_13b8))
int64_t* rax_77

if (var_13c0_2 == 0)
    rax_77 = var_13c8
label_140f35099:
    
    if (rax_77 != 0)
        sub_140a74f90(rax_77)
else
    int64_t* rcx_84 = var_13c8
    
    if (rcx_84 != 0)
        (*(*rcx_84 + 0x38))(rcx_84, 0)
        rax_77 = var_13c8
        
        if (rax_77 != 0)
            rax_77 = sub_140a84c80(rax_77, 0, 0)
            var_13c8 = rax_77
        
        var_13c0_2 = 0
        goto label_140f35099
void*** rax_78 = j_sub_140a82f30(0x5c8)
void*** rdi_4 = rax_78

if (rax_78 == 0)
    rdi_4 = nullptr
else
    rax_78[1].d = 1
    *(rax_78 + 0xc) = 1
    *rdi_4 = &data_142d8c580
    
    if (rdi_4 != -0x10)
        sub_140ee2d30(&rdi_4[2])

void*** var_11d0 = rdi_4
int64_t* var_11d8 = &rdi_4[2]
sub_14065fa30(&var_11d8, &rdi_4[2])
int64_t var_13e8_3 = 0x5b8
void var_13a8
void* var_11c8 = &var_13a8
int128_t zmm1_6 = sub_140e23ed0(&rdi_4[2], "SButton")
void var_1040
void* rax_81
int128_t zmm1_7
rax_81, zmm1_7 =
    sub_1406936e0(rax_68, (*(*arg1 + 0x260))(arg1, &var_1040, arg2, &var_10c8, var_13e8_3), zmm1_6)
int64_t* var_10a8
int64_t** rax_82
int128_t zmm7_1
rax_82, zmm7_1 = sub_140696120(&var_11d8, &var_10a8, rax_81, zmm1_7)
var_13b8 = *rax_82
void* rcx_94 = rax_82[1]
void* var_13b0_1 = rcx_94

if (rcx_94 != 0)
    *(rcx_94 + 8) += 1

void var_6f0
int64_t* rax_83
int128_t zmm6
rax_83, zmm6 = sub_14068c640(&var_6f0)
rax_83[0x44] = rax_36
rax_83[0x45].b = rax_37
sub_140692f90(&rax_83[0x46], &var_1258)
sub_140693390(&rax_83[0x55], &var_11b8)
rax_83[0x5a].b = rax_41
sub_140692f90(&rax_83[0x5b], &var_1188)
rax_83[0x39].b = 1
*(rax_83 + 0x1b8) = zmm6
sub_140692f90(&rax_83[0x3a], &var_1100)
void*** rax_84 = j_sub_140a82f30(0x4c8)
void*** rbx_14 = rax_84

if (rax_84 == 0)
    rbx_14 = nullptr
else
    rax_84[1].d = 1
    *(rax_84 + 0xc) = 1
    *rbx_14 = &data_142d8c5a0
    
    if (rbx_14 != -0x10)
        sub_140f20640(&rbx_14[2])

void* var_11f0 = &rbx_14[2]
sub_14065fa30(&var_11f0, &rbx_14[2])
int64_t var_13e8_4 = 0x4b8
void var_13a7
void* var_11e0 = &var_13a7
int128_t zmm1_8 = sub_140e23ed0(&rbx_14[2], "SBorder")

if (rbx_14 != 0)
    rbx_14[1].d += 1

void* var_12a0

if (&arg1[0x72] == &var_12a0)
label_140f352f5:
    
    if (rbx_14 != 0)
        rbx_14[1].d -= 1
        
        if (rbx_14[1].d == 1)
            (**rbx_14)(rbx_14)
            int32_t temp13_1 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*rbx_14)[1](rbx_14, 1)
else
    arg1[0x72] = &rbx_14[2]
    void*** rdi_6 = arg1[0x73]
    
    if (rbx_14 == rdi_6)
        goto label_140f352f5
    
    arg1[0x73] = rbx_14
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t temp15_1 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*rdi_6)[1](rdi_6, 1)

void* rax_89
int128_t zmm1_9
rax_89, zmm1_9 = sub_1406936e0(rax_83, &var_13b8, zmm1_8)
void* var_1088
void** rax_90 = sub_140695920(&var_11f0, &var_1088, rax_89, zmm1_9)
int64_t* rbx_15 = rax_90[1]
var_13b8 = *rax_90
int64_t* var_13b0_2 = rbx_15

if (rbx_15 != 0)
    rbx_15[1].d += 1

void*** rax_91 = j_sub_140a82f30(0x88)
void*** rdi_7 = rax_91

if (rax_91 == 0)
    rdi_7 = nullptr
else
    sub_14068e490(rax_91)
    *rdi_7 = &data_142d8add0

void* rax_92 = sub_140698b50(rdi_7)
sub_140693600(rax_92, &var_13b8)

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        int64_t rdx_57 = *rbx_15
        (*rdx_57)(rbx_15, rdx_57)
        int32_t temp17_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*rbx_15 + 8))(rbx_15, 1)

void*** rax_94 = sub_140e92390()
void* var_1208 = &rax_94[2]
sub_14065fa30(&var_1208, &rax_94[2])
int64_t var_13e8_5 = 0x2d8
void var_13a6
void* var_11f8 = &var_13a6
sub_140e23ed0(&rax_94[2], "SVerticalBox")
void var_1030
int64_t* rax_95
int128_t zmm1_10
rax_95, zmm1_10 = sub_14068d420(&var_1030)
void* var_1078
void** rax_98 = sub_140696920(&var_1208, &var_1078, 
    sub_1406938c0(sub_1406938c0(rax_95, rax_92), r14_2), zmm1_10)
var_13b8 = *rax_98
void* rcx_122 = rax_98[1]
void* var_13b0_3 = rcx_122

if (rcx_122 != 0)
    *(rcx_122 + 8) += 1

void var_a38
int64_t* rax_99 = sub_14068c640(&var_a38)
rax_99[0x44] = rax_25
rax_99[0x45].b = rax_26
sub_140692f90(&rax_99[0x46], &var_1278)
sub_140693390(&rax_99[0x55], &var_1178)
rax_99[0x5a].b = rax_30
sub_140692f90(&rax_99[0x5b], &var_1148)
rax_99[0x39].b = 1
*(rax_99 + 0x1b8) = zmm7_1
sub_140692f90(&rax_99[0x3a], &var_10d8)
void*** rax_100 = sub_140e916e0()
var_12a0 = &rax_100[2]
sub_14065fa30(&var_12a0, &rax_100[2])
int64_t var_13e8_6 = 0x4b8
void var_13a5
void* var_1290 = &var_13a5
void* rax_101
int128_t zmm1_12
rax_101, zmm1_12 = sub_1406936e0(rax_99, &var_13b8, sub_140e23ed0(&rax_100[2], "SBorder"))
void* var_10b8
void** rax_102 = sub_140695920(&var_12a0, &var_10b8, rax_101, zmm1_12)
int64_t* rbx_18 = rax_102[1]
var_13b8 = *rax_102
int64_t* var_13b0_4 = rbx_18

if (rbx_18 != 0)
    rbx_18[1].d += 1

sub_140de1b90(&arg1[0x57], &var_13b8)

if (rbx_18 != 0)
    rbx_18[1].d -= 1
    
    if (rbx_18[1].d == 1)
        (**rbx_18)(rbx_18)
        int32_t temp20_1 = *(rbx_18 + 0xc)
        *(rbx_18 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*rbx_18 + 8))(rbx_18, 1)

int64_t* var_10b0

if (var_10b0 != 0)
    var_10b0[1].d -= 1
    
    if (var_10b0[1].d == 1)
        (**var_10b0)(var_10b0)
        int32_t temp22_1 = *(var_10b0 + 0xc)
        *(var_10b0 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*(*var_10b0 + 8))(var_10b0, 1)

if (rax_100 != 0)
    rax_100[1].d -= 1
    
    if (rax_100[1].d == 1)
        (**rax_100)(rax_100)
        int32_t temp24_1 = *(rax_100 + 0xc)
        *(rax_100 + 0xc) -= 1
        
        if (temp24_1 == 1)
            (*rax_100)[1](rax_100, 1)

sub_14068fed0(&var_a38)
int64_t* var_1070

if (var_1070 != 0)
    var_1070[1].d -= 1
    
    if (var_1070[1].d == 1)
        (**var_1070)(var_1070)
        int32_t temp26_1 = *(var_1070 + 0xc)
        *(var_1070 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*(*var_1070 + 8))(var_1070, 1)

if (rax_94 != 0)
    rax_94[1].d -= 1
    
    if (rax_94[1].d == 1)
        (**rax_94)(rax_94)
        int32_t temp27_1 = *(rax_94 + 0xc)
        *(rax_94 + 0xc) -= 1
        
        if (temp27_1 == 1)
            (*rax_94)[1](rax_94, 1)

int64_t var_e90

if (var_e90 != 0)
    sub_140a74f90(var_e90)

sub_140660250(&var_1030)
int64_t* var_1080

if (var_1080 != 0)
    var_1080[1].d -= 1
    
    if (var_1080[1].d == 1)
        (**var_1080)(var_1080)
        int32_t temp30_1 = *(var_1080 + 0xc)
        *(var_1080 + 0xc) -= 1
        
        if (temp30_1 == 1)
            (*(*var_1080 + 8))(var_1080, 1)

if (rbx_14 != 0)
    rbx_14[1].d -= 1
    
    if (rbx_14[1].d == 1)
        (**rbx_14)(rbx_14)
        int32_t temp32_1 = *(rbx_14 + 0xc)
        *(rbx_14 + 0xc) -= 1
        
        if (temp32_1 == 1)
            (*rbx_14)[1](rbx_14, 1)

sub_14068fed0(&var_6f0)
int64_t* var_10a0

if (var_10a0 != 0)
    var_10a0[1].d -= 1
    
    if (var_10a0[1].d == 1)
        (**var_10a0)(var_10a0)
        int32_t temp34_1 = *(var_10a0 + 0xc)
        *(var_10a0 + 0xc) -= 1
        
        if (temp34_1 == 1)
            (*(*var_10a0 + 8))(var_10a0, 1)

sub_140669d70(&var_11d8)
sub_1406905f0(&var_e80)
int64_t* var_1090

if (var_1090 != 0)
    var_1090[1].d -= 1
    
    if (var_1090[1].d == 1)
        (**var_1090)(var_1090)
        int32_t temp36_1 = *(var_1090 + 0xc)
        *(var_1090 + 0xc) -= 1
        
        if (temp36_1 == 1)
            (*(*var_1090 + 8))(var_1090, 1)

sub_140669d70(&var_1238)
sub_14068fed0(&var_3a8)
sub_140745b20(&var_10d8)
sub_140745b20(&var_1100)
sub_140745b20(&var_12d0)
sub_140ddfb70(&var_1300)
sub_140597060(&var_1050)
sub_140745b20(&var_1218)
sub_140745b20(&var_1128)
sub_140745b20(&var_1188)
sub_140ddfb70(&var_11b8)
sub_140745b20(&var_1258)
sub_140745b20(&var_1148)
sub_140ddfb70(&var_1178)
uint64_t result = sub_140745b20(&var_1278)

if (var_1320 != 0)
    var_1320[1].d -= 1
    
    if (var_1320[1].d == 1)
        result = (**var_1320)(var_1320)
        int32_t temp37_1 = *(var_1320 + 0xc)
        *(var_1320 + 0xc) -= 1
        
        if (temp37_1 == 1)
            result = (*(*var_1320 + 8))(var_1320, 1)

__security_check_cookie(rax_1 ^ &var_1408)
return result
