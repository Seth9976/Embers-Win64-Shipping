// 函数: sub_141b6f540
// 地址: 0x141b6f540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
int32_t rbx = *arg4
int64_t (* var_400)(int64_t* arg1, int64_t arg2, char arg3) = sub_141bb2b60
int32_t var_3f8 = 0x218
int64_t (* var_360)(int64_t* arg1) = sub_141bb3850
int32_t var_358 = 0x218
int64_t (* var_388)(int64_t* arg1, int64_t arg2) = sub_141bb4040
int32_t var_380 = 0x218
int64_t (* var_398)(int64_t* arg1, int64_t arg2) = sub_141bb4000
int32_t var_390 = 0x218
uint64_t (* var_3a8)(int64_t* arg1, int128_t arg2 @ zmm1, int32_t arg3) = sub_141bb4410
int32_t var_3a0 = 0x218
void* (* var_3b8)(int64_t* arg1, int64_t arg2) = sub_141bb4080
int32_t var_3b0 = 0x218
int64_t (* var_3c8)(void* arg1, int64_t* arg2) = sub_141bb5190
int64_t (* var_3d8)(int64_t* arg1) = DBIQueryItsmForTi
int64_t (* var_3e8)(int64_t* arg1, int64_t arg2) = sub_141bb5310
void** (* var_418)(int64_t* arg1, void** arg2, int64_t arg3, int64_t arg4) = sub_141bb2c90
int32_t var_3c0 = 0
int32_t var_3d0 = 0x218
int32_t var_3e0 = 0x218
int32_t var_410 = 0x218
int32_t var_378 = rbx
char var_374 = 1
int64_t var_370 = 0
int32_t var_368 = 0
void var_350
int64_t* rax_2 = sub_141b79c60(&var_350)
rax_2[0x60].b = 1
rax_2[0x40] = arg3
rax_2[0x55].b = arg4[1].b
*(rax_2 + 0x2d9) = *(arg4 + 5)
rax_2[0x50].d = rbx
*(rax_2 + 0x284) = 1

if (&var_370 != &rax_2[0x51] && rax_2[0x52].d != 0)
    int64_t* rcx_1 = rax_2[0x51]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x38))(rcx_1, 0)
        int64_t rcx_2 = rax_2[0x51]
        
        if (rcx_2 != 0)
            rax_2[0x51] = sub_140a84c80(rcx_2, 0, 0)
        
        rax_2[0x52].d = 0

*(rax_2 + 0x304) = *(arg4 + 6)
void*** rax_8 = sub_140a84c80(0, 0x30, 0)

if (rax_8 != 0)
    *rax_8 = &data_1430844d8
    sub_140d3a3a0(&rax_8[1], arg2)
    *(rax_8 + 0x10) = var_418.o
    rax_8[5] = sub_140a387b0()

if (&var_418 != &rax_2[0x34])
    if (rax_8 != 0)
        (*rax_8)[8](rax_8, &rax_2[0x34])
    else if (rax_2[0x35].d != 0)
        int64_t* rcx_5 = rax_2[0x34]
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x38))(rcx_5, 0)
            int64_t rcx_6 = rax_2[0x34]
            
            if (rcx_6 != 0)
                rax_2[0x34] = sub_140a84c80(rcx_6, 0, 0)
            
            rax_2[0x35].d = 0

if (rax_8 != 0)
    (*rax_8)[7](rax_8, 0)
    int64_t rax_14 = sub_140a84c80(rax_8, 0, 0)
    
    if (rax_14 != 0)
        sub_140a74f90(rax_14)

void*** rax_15 = sub_140a84c80(0, 0x30, 0)

if (rax_15 != 0)
    *rax_15 = &data_143084528
    sub_140d3a3a0(&rax_15[1], arg2)
    *(rax_15 + 0x10) = var_3e8.o
    rax_15[5] = sub_140a387b0()
    *rax_15 = &data_143084580

if (&var_3e8 != &rax_2[0x4a])
    if (rax_15 != 0)
        (*rax_15)[8](rax_15, &rax_2[0x4a])
    else if (rax_2[0x4b].d != 0)
        int64_t* rcx_12 = rax_2[0x4a]
        
        if (rcx_12 != 0)
            (*(*rcx_12 + 0x38))(rcx_12, 0)
            int64_t rcx_13 = rax_2[0x4a]
            
            if (rcx_13 != 0)
                rax_2[0x4a] = sub_140a84c80(rcx_13, 0, 0)
            
            rax_2[0x4b].d = 0

if (rax_15 != 0)
    (*rax_15)[7](rax_15, 0)
    int64_t rax_21 = sub_140a84c80(rax_15, 0, 0)
    
    if (rax_21 != 0)
        sub_140a74f90(rax_21)

void*** rax_22 = sub_140a84c80(0, 0x30, 0)

if (rax_22 != 0)
    *rax_22 = &data_1430845d8
    sub_140d3a3a0(&rax_22[1], arg2)
    *(rax_22 + 0x10) = var_3d8.o
    rax_22[5] = sub_140a387b0()

if (&var_3d8 != &rax_2[0x4e])
    if (rax_22 != 0)
        (*rax_22)[8](rax_22, &rax_2[0x4e])
    else if (rax_2[0x4f].d != 0)
        int64_t* rcx_19 = rax_2[0x4e]
        
        if (rcx_19 != 0)
            (*(*rcx_19 + 0x38))(rcx_19, 0)
            int64_t rcx_20 = rax_2[0x4e]
            
            if (rcx_20 != 0)
                rax_2[0x4e] = sub_140a84c80(rcx_20, 0, 0)
            
            rax_2[0x4f].d = 0

if (rax_22 != 0)
    (*rax_22)[7](rax_22, 0)
    int64_t rax_28 = sub_140a84c80(rax_22, 0, 0)
    
    if (rax_28 != 0)
        sub_140a74f90(rax_28)

void*** rax_29 = sub_140a84c80(0, 0x30, 0)

if (rax_29 != 0)
    *rax_29 = &data_142fd1390
    sub_140d3a3a0(&rax_29[1], arg2)
    *(rax_29 + 0x10) = var_3c8.o
    rax_29[5] = sub_140a387b0()
    *rax_29 = &data_142fd13e8

if (&var_3c8 != &rax_2[0x36])
    if (rax_29 != 0)
        (*rax_29)[8](rax_29, &rax_2[0x36])
    else if (rax_2[0x37].d != 0)
        int64_t* rcx_26 = rax_2[0x36]
        
        if (rcx_26 != 0)
            (*(*rcx_26 + 0x38))(rcx_26, 0)
            int64_t rcx_27 = rax_2[0x36]
            
            if (rcx_27 != 0)
                rax_2[0x36] = sub_140a84c80(rcx_27, 0, 0)
            
            rax_2[0x37].d = 0

if (rax_29 != 0)
    (*rax_29)[7](rax_29, 0)
    int64_t rax_35 = sub_140a84c80(rax_29, 0, 0)
    
    if (rax_35 != 0)
        sub_140a74f90(rax_35)

void*** rax_36 = sub_140a84c80(0, 0x30, 0)

if (rax_36 != 0)
    *rax_36 = &data_143084628
    sub_140d3a3a0(&rax_36[1], arg2)
    *(rax_36 + 0x10) = var_3b8.o
    rax_36[5] = sub_140a387b0()
    *rax_36 = &data_143084680

if (&var_3b8 != &rax_2[0x3a])
    if (rax_36 != 0)
        (*rax_36)[8](rax_36, &rax_2[0x3a])
    else if (rax_2[0x3b].d != 0)
        int64_t* rcx_33 = rax_2[0x3a]
        
        if (rcx_33 != 0)
            (*(*rcx_33 + 0x38))(rcx_33, 0)
            int64_t rcx_34 = rax_2[0x3a]
            
            if (rcx_34 != 0)
                rax_2[0x3a] = sub_140a84c80(rcx_34, 0, 0)
            
            rax_2[0x3b].d = 0

if (rax_36 != 0)
    (*rax_36)[7](rax_36, 0)
    int64_t rax_42 = sub_140a84c80(rax_36, 0, 0)
    
    if (rax_42 != 0)
        sub_140a74f90(rax_42)

void*** rax_43 = sub_140a84c80(0, 0x30, 0)

if (rax_43 != 0)
    *rax_43 = &data_1430846d8
    sub_140d3a3a0(&rax_43[1], arg2)
    *(rax_43 + 0x10) = var_3a8.o
    rax_43[5] = sub_140a387b0()
    *rax_43 = &data_143084730

if (&var_3a8 != &rax_2[0x38])
    if (rax_43 != 0)
        (*rax_43)[8](rax_43, &rax_2[0x38])
    else if (rax_2[0x39].d != 0)
        int64_t* rcx_40 = rax_2[0x38]
        
        if (rcx_40 != 0)
            (*(*rcx_40 + 0x38))(rcx_40, 0)
            int64_t rcx_41 = rax_2[0x38]
            
            if (rcx_41 != 0)
                rax_2[0x38] = sub_140a84c80(rcx_41, 0, 0)
            
            rax_2[0x39].d = 0

if (rax_43 != 0)
    (*rax_43)[7](rax_43, 0)
    int64_t rax_49 = sub_140a84c80(rax_43, 0, 0)
    
    if (rax_49 != 0)
        sub_140a74f90(rax_49)

void*** rax_50 = sub_140a84c80(0, 0x30, 0)

if (rax_50 != 0)
    *rax_50 = &data_142fd1390
    sub_140d3a3a0(&rax_50[1], arg2)
    *(rax_50 + 0x10) = var_398.o
    rax_50[5] = sub_140a387b0()
    *rax_50 = &data_142fd13e8

if (&var_398 != &rax_2[0x46])
    if (rax_50 != 0)
        (*rax_50)[8](rax_50, &rax_2[0x46])
    else if (rax_2[0x47].d != 0)
        int64_t* rcx_47 = rax_2[0x46]
        
        if (rcx_47 != 0)
            (*(*rcx_47 + 0x38))(rcx_47, 0)
            int64_t rcx_48 = rax_2[0x46]
            
            if (rcx_48 != 0)
                rax_2[0x46] = sub_140a84c80(rcx_48, 0, 0)
            
            rax_2[0x47].d = 0

if (rax_50 != 0)
    (*rax_50)[7](rax_50, 0)
    int64_t rax_56 = sub_140a84c80(rax_50, 0, 0)
    
    if (rax_56 != 0)
        sub_140a74f90(rax_56)

void*** rax_57 = sub_140a84c80(0, 0x30, 0)

if (rax_57 != 0)
    *rax_57 = &data_142fd1390
    sub_140d3a3a0(&rax_57[1], arg2)
    *(rax_57 + 0x10) = var_388.o
    rax_57[5] = sub_140a387b0()
    *rax_57 = &data_142fd13e8

if (&var_388 != &rax_2[0x48])
    if (rax_57 != 0)
        (*rax_57)[8](rax_57, &rax_2[0x48])
    else if (rax_2[0x49].d != 0)
        int64_t* rcx_54 = rax_2[0x48]
        
        if (rcx_54 != 0)
            (*(*rcx_54 + 0x38))(rcx_54, 0)
            int64_t rcx_55 = rax_2[0x48]
            
            if (rcx_55 != 0)
                rax_2[0x48] = sub_140a84c80(rcx_55, 0, 0)
            
            rax_2[0x49].d = 0

if (rax_57 != 0)
    (*rax_57)[7](rax_57, 0)
    int64_t rax_63 = sub_140a84c80(rax_57, 0, 0)
    
    if (rax_63 != 0)
        sub_140a74f90(rax_63)

var_418 = nullptr
int32_t var_410_1 = 0
void*** rax_64 = sub_1405978f0(0x30, &var_418)

if (rax_64 != 0)
    *rax_64 = &data_143084628
    sub_140d3a3a0(&rax_64[1], arg2)
    *(rax_64 + 0x10) = var_360.o
    rax_64[5] = sub_140a387b0()
    *rax_64 = &data_143084680

void** (* rbx_11)(int64_t* arg1, void** arg2, int64_t arg3, int64_t arg4) = var_418

if (&var_418 != &rax_2[0x3c])
    if (var_410_1 != 0 && rbx_11 != 0)
        (*(*rbx_11 + 0x40))(rbx_11, &rax_2[0x3c])
    else if (rax_2[0x3d].d != 0)
        int64_t* rcx_61 = rax_2[0x3c]
        
        if (rcx_61 != 0)
            (*(*rcx_61 + 0x38))(rcx_61, 0)
            int64_t rcx_62 = rax_2[0x3c]
            
            if (rcx_62 != 0)
                rax_2[0x3c] = sub_140a84c80(rcx_62, 0, 0)
            
            rax_2[0x3d].d = 0

if (var_410_1 == 0)
    goto label_141b6fdad

if (rbx_11 != 0)
    (*(*rbx_11 + 0x38))(rbx_11, 0)
    rbx_11 = sub_140a84c80(rbx_11, 0, 0)
label_141b6fdad:
    
    if (rbx_11 != 0)
        sub_140a74f90(rbx_11)

var_418 = nullptr
int32_t var_410_2 = 0
void*** rax_71 = sub_1405978f0(0x30, &var_418)

if (rax_71 != 0)
    *rax_71 = &data_1430847b8
    sub_140d3a3a0(&rax_71[1], arg2)
    *(rax_71 + 0x10) = var_400.o
    rax_71[5] = sub_140a387b0()
    *rax_71 = &data_143084810

if (&var_418 != &rax_2[0x4c])
    void** (* rcx_67)(int64_t* arg1, void** arg2, int64_t arg3, int64_t arg4)
    
    if (var_410_2 != 0)
        rcx_67 = var_418
    
    if (var_410_2 != 0 && rcx_67 != 0)
        (*(*rcx_67 + 0x40))(rcx_67, &rax_2[0x4c])
    else if (rax_2[0x4d].d != 0)
        int64_t* rcx_68 = rax_2[0x4c]
        
        if (rcx_68 != 0)
            (*(*rcx_68 + 0x38))(rcx_68, 0)
            int64_t rcx_69 = rax_2[0x4c]
            
            if (rcx_69 != 0)
                rax_2[0x4c] = sub_140a84c80(rcx_69, 0, 0)
            
            rax_2[0x4d].d = 0

sub_140745b20(&var_418)
void*** rax_76 = sub_141b77050()
var_3f8.q = rax_76
var_400 = &rax_76[2]
sub_140918950(&var_400, &rax_76[2])
int64_t var_428 = 0x818
void var_408
void* var_3f0 = &var_408
sub_141b88940(&var_400, arg1, rax_2, sub_140e23ed0(&rax_76[2], "TreeViewT<ItemType>"))
sub_140597060(&var_400)
void var_60
sub_140745b20(&var_60)
void var_70
sub_140745b20(&var_70)
char var_80 = 0
void var_a0
sub_140597060(&var_a0)
void var_b8
sub_140f9a690(&var_b8)
void var_c8
sub_140745b20(&var_c8)
void var_e0
sub_140745b20(&var_e0)
void var_f0
sub_140745b20(&var_f0)
void var_100
sub_140745b20(&var_100)
void var_110
sub_140745b20(&var_110)
void var_120
sub_140745b20(&var_120)
void var_130
sub_140745b20(&var_130)
void var_140
sub_140745b20(&var_140)
void var_160
sub_140745b20(&var_160)
void var_170
sub_140745b20(&var_170)
void var_180
sub_140745b20(&var_180)
void var_190
sub_140745b20(&var_190)
void var_1a0
sub_140745b20(&var_1a0)
void var_1b0
sub_140745b20(&var_1b0)
sub_140ddea30(&var_350)
sub_140745b20(&var_370)
__security_check_cookie(rax_1 ^ &var_448)
return arg1
