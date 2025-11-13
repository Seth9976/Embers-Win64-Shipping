// 函数: sub_141b6e830
// 地址: 0x141b6e830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_488
int64_t rax_1 = __security_cookie ^ &var_488
char r13 = arg4[0x10]
char rbx = *arg4
int32_t rdi = *(arg4 + 4)
int64_t (* var_450)(int64_t* arg1, int64_t arg2) = sub_141bb4040
int64_t (* var_3d0)(int64_t* arg1, int64_t arg2) = sub_141bb4000
int32_t var_418 = 0
uint64_t (* var_3e0)(int64_t* arg1, int128_t arg2 @ zmm1, int32_t arg3) = sub_141bb4410
void* (* var_3f0)(int64_t* arg1, int64_t arg2) = sub_141bb4080
int64_t (* var_400)(int64_t* arg1) = DBIQueryItsmForTi
int64_t (* var_410)(int64_t* arg1, int64_t arg2) = sub_141bb5310
int64_t (* var_420)(void* arg1, int64_t* arg2) = sub_141bb5190
int64_t var_388 = 0
int32_t var_380 = 0
int64_t var_3a0 = 0
int32_t var_398 = 0
int64_t var_3b8 = 0
int32_t var_3b0 = 0
void** (* var_430)(int64_t* arg1, void** arg2, int64_t arg3, int64_t arg4) = sub_141bb2c90
int32_t var_448 = 0x218
int32_t var_3c8 = 0x218
int32_t var_3d8 = 0x218
int32_t var_3e8 = 0x218
int32_t var_3f8 = 0x218
int32_t var_408 = 0x218
int32_t var_428 = 0x218
char var_390 = r13
char var_38f = 1
int32_t var_3a8 = rdi
char var_3a4 = 1
char var_3c0 = rbx
char var_3bf = 1
void var_378
int64_t* rax_2 = sub_140e92db0(&var_378)
rax_2[0x5d].b = 1
rax_2[0x3c] = arg3
rax_2[0x5e].b = rbx
*(rax_2 + 0x2f1) = 1
sub_140692f90(&rax_2[0x5f], &var_3b8)
rax_2[0x53].b = arg4[8]
rax_2[0x65].b = arg4[0x48]
*(rax_2 + 0x2e2) = arg4[9]
rax_2[0x50].d = rdi
*(rax_2 + 0x284) = 1

if (&var_3a0 != &rax_2[0x51] && rax_2[0x52].d != 0)
    int64_t* rcx_2 = rax_2[0x51]
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        int64_t rcx_3 = rax_2[0x51]
        
        if (rcx_3 != 0)
            rax_2[0x51] = sub_140a84c80(rcx_3, 0, 0)
        
        rax_2[0x52].d = 0

rax_2[0x3d].d = *(arg4 + 0x18)
*(rax_2 + 0x1ec) = arg4[0x1c]
sub_140692f90(&rax_2[0x3e], &arg4[0x20])
rax_2[0x40].d = *(arg4 + 0x30)
*(rax_2 + 0x204) = arg4[0x34]
sub_140692f90(&rax_2[0x41], &arg4[0x38])
rax_2[0x43].b = r13
*(rax_2 + 0x219) = 1

if (&var_388 != &rax_2[0x44] && rax_2[0x45].d != 0)
    int64_t* rcx_6 = rax_2[0x44]
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x38))(rcx_6, 0)
        int64_t rcx_7 = rax_2[0x44]
        
        if (rcx_7 != 0)
            rax_2[0x44] = sub_140a84c80(rcx_7, 0, 0)
        
        rax_2[0x45].d = 0

rax_2[0x56].d = *(arg4 + 0xc)
void*** rax_15 = sub_140a84c80(0, 0x30, 0)

if (rax_15 != 0)
    *rax_15 = &data_1430844d8
    sub_140d3a3a0(&rax_15[1], arg2)
    *(rax_15 + 0x10) = var_430.o
    rax_15[5] = sub_140a387b0()

if (&var_430 != &rax_2[0x34])
    if (rax_15 != 0)
        (*rax_15)[8](rax_15, &rax_2[0x34])
    else if (rax_2[0x35].d != 0)
        int64_t* rcx_10 = rax_2[0x34]
        
        if (rcx_10 != 0)
            (*(*rcx_10 + 0x38))(rcx_10, 0)
            int64_t rcx_11 = rax_2[0x34]
            
            if (rcx_11 != 0)
                rax_2[0x34] = sub_140a84c80(rcx_11, 0, 0)
            
            rax_2[0x35].d = 0

if (rax_15 != 0)
    (*rax_15)[7](rax_15, 0)
    int64_t rax_21 = sub_140a84c80(rax_15, 0, 0)
    
    if (rax_21 != 0)
        sub_140a74f90(rax_21)

void*** rax_22 = sub_140a84c80(0, 0x30, 0)

if (rax_22 != 0)
    *rax_22 = &data_142fd1390
    sub_140d3a3a0(&rax_22[1], arg2)
    *(rax_22 + 0x10) = var_420.o
    rax_22[5] = sub_140a387b0()
    *rax_22 = &data_142fd13e8

if (&var_420 != &rax_2[0x36])
    if (rax_22 != 0)
        (*rax_22)[8](rax_22, &rax_2[0x36])
    else if (rax_2[0x37].d != 0)
        int64_t* rcx_17 = rax_2[0x36]
        
        if (rcx_17 != 0)
            (*(*rcx_17 + 0x38))(rcx_17, 0)
            int64_t rcx_18 = rax_2[0x36]
            
            if (rcx_18 != 0)
                rax_2[0x36] = sub_140a84c80(rcx_18, 0, 0)
            
            rax_2[0x37].d = 0

if (rax_22 != 0)
    (*rax_22)[7](rax_22, 0)
    int64_t rax_28 = sub_140a84c80(rax_22, 0, 0)
    
    if (rax_28 != 0)
        sub_140a74f90(rax_28)

void*** rax_29 = sub_140a84c80(0, 0x30, 0)

if (rax_29 != 0)
    *rax_29 = &data_143084528
    sub_140d3a3a0(&rax_29[1], arg2)
    *(rax_29 + 0x10) = var_410.o
    rax_29[5] = sub_140a387b0()
    *rax_29 = &data_143084580

if (&var_410 != &rax_2[0x4c])
    if (rax_29 != 0)
        (*rax_29)[8](rax_29, &rax_2[0x4c])
    else if (rax_2[0x4d].d != 0)
        int64_t* rcx_24 = rax_2[0x4c]
        
        if (rcx_24 != 0)
            (*(*rcx_24 + 0x38))(rcx_24, 0)
            int64_t rcx_25 = rax_2[0x4c]
            
            if (rcx_25 != 0)
                rax_2[0x4c] = sub_140a84c80(rcx_25, 0, 0)
            
            rax_2[0x4d].d = 0

if (rax_29 != 0)
    (*rax_29)[7](rax_29, 0)
    int64_t rax_35 = sub_140a84c80(rax_29, 0, 0)
    
    if (rax_35 != 0)
        sub_140a74f90(rax_35)

void*** rax_36 = sub_140a84c80(0, 0x30, 0)

if (rax_36 != 0)
    *rax_36 = &data_1430845d8
    sub_140d3a3a0(&rax_36[1], arg2)
    *(rax_36 + 0x10) = var_400.o
    rax_36[5] = sub_140a387b0()

if (&var_400 != &rax_2[0x4e])
    if (rax_36 != 0)
        (*rax_36)[8](rax_36, &rax_2[0x4e])
    else if (rax_2[0x4f].d != 0)
        int64_t* rcx_31 = rax_2[0x4e]
        
        if (rcx_31 != 0)
            (*(*rcx_31 + 0x38))(rcx_31, 0)
            int64_t rcx_32 = rax_2[0x4e]
            
            if (rcx_32 != 0)
                rax_2[0x4e] = sub_140a84c80(rcx_32, 0, 0)
            
            rax_2[0x4f].d = 0

if (rax_36 != 0)
    (*rax_36)[7](rax_36, 0)
    int64_t rax_42 = sub_140a84c80(rax_36, 0, 0)
    
    if (rax_42 != 0)
        sub_140a74f90(rax_42)

int64_t* rax_43 = sub_140a84c80(0, 0x30, 0)

if (rax_43 != 0)
    *rax_43 = &data_143084628
    sub_140d3a3a0(&rax_43[1], arg2)
    *(rax_43 + 0x10) = var_3f0.o
    rax_43[5] = sub_140a387b0()
    *rax_43 = &data_143084680

if (&var_3f0 != &rax_2[0x3a])
    if (rax_43 != 0)
        (*(*rax_43 + 0x40))(rax_43, &rax_2[0x3a])
    else if (rax_2[0x3b].d != 0)
        int64_t* rcx_38 = rax_2[0x3a]
        
        if (rcx_38 != 0)
            (*(*rcx_38 + 0x38))(rcx_38, 0)
            int64_t rcx_39 = rax_2[0x3a]
            
            if (rcx_39 != 0)
                rax_2[0x3a] = sub_140a84c80(rcx_39, 0, 0)
            
            rax_2[0x3b].d = 0

if (rax_43 != 0)
    (*(*rax_43 + 0x38))(rax_43, 0)
    int64_t rax_49 = sub_140a84c80(rax_43, 0, 0)
    
    if (rax_49 != 0)
        sub_140a74f90(rax_49)

int64_t* rax_50 = sub_140a84c80(0, 0x30, 0)

if (rax_50 != 0)
    *rax_50 = &data_1430846d8
    sub_140d3a3a0(&rax_50[1], arg2)
    *(rax_50 + 0x10) = var_3e0.o
    rax_50[5] = sub_140a387b0()
    *rax_50 = &data_143084730

if (&var_3e0 != &rax_2[0x38])
    if (rax_50 != 0)
        (*(*rax_50 + 0x40))(rax_50, &rax_2[0x38])
    else if (rax_2[0x39].d != 0)
        int64_t* rcx_45 = rax_2[0x38]
        
        if (rcx_45 != 0)
            (*(*rcx_45 + 0x38))(rcx_45, 0)
            int64_t rcx_46 = rax_2[0x38]
            
            if (rcx_46 != 0)
                rax_2[0x38] = sub_140a84c80(rcx_46, 0, 0)
            
            rax_2[0x39].d = 0

if (rax_50 != 0)
    (*(*rax_50 + 0x38))(rax_50, 0)
    int64_t rax_56 = sub_140a84c80(rax_50, 0, 0)
    
    if (rax_56 != 0)
        sub_140a74f90(rax_56)

void*** rax_57 = sub_140a84c80(0, 0x30, 0)

if (rax_57 != 0)
    *rax_57 = &data_142fd1390
    sub_140d3a3a0(&rax_57[1], arg2)
    *(rax_57 + 0x10) = var_3d0.o
    rax_57[5] = sub_140a387b0()
    *rax_57 = &data_142fd13e8

if (&var_3d0 != &rax_2[0x48])
    if (rax_57 != 0)
        (*rax_57)[8](rax_57, &rax_2[0x48])
    else if (rax_2[0x49].d != 0)
        int64_t* rcx_52 = rax_2[0x48]
        
        if (rcx_52 != 0)
            (*(*rcx_52 + 0x38))(rcx_52, 0)
            int64_t rcx_53 = rax_2[0x48]
            
            if (rcx_53 != 0)
                rax_2[0x48] = sub_140a84c80(rcx_53, 0, 0)
            
            rax_2[0x49].d = 0

if (rax_57 != 0)
    (*rax_57)[7](rax_57, 0)
    int64_t rax_63 = sub_140a84c80(rax_57, 0, 0)
    
    if (rax_63 != 0)
        sub_140a74f90(rax_63)

void*** rax_64 = sub_140a84c80(0, 0x30, 0)

if (rax_64 != 0)
    *rax_64 = &data_142fd1390
    sub_140d3a3a0(&rax_64[1], arg2)
    *(rax_64 + 0x10) = var_450.o
    rax_64[5] = sub_140a387b0()
    *rax_64 = &data_142fd13e8

if (&var_450 != &rax_2[0x4a])
    if (rax_64 != 0)
        (*rax_64)[8](rax_64, &rax_2[0x4a])
    else if (rax_2[0x4b].d != 0)
        int64_t* rcx_59 = rax_2[0x4a]
        
        if (rcx_59 != 0)
            (*(*rcx_59 + 0x38))(rcx_59, 0)
            int64_t rcx_60 = rax_2[0x4a]
            
            if (rcx_60 != 0)
                rax_2[0x4a] = sub_140a84c80(rcx_60, 0, 0)
            
            rax_2[0x4b].d = 0

if (rax_64 != 0)
    (*rax_64)[7](rax_64, 0)
    int64_t rax_70 = sub_140a84c80(rax_64, 0, 0)
    
    if (rax_70 != 0)
        sub_140a74f90(rax_70)

void*** rax_71 = sub_141b76fb0()
var_448.q = rax_71
var_450 = &rax_71[2]
sub_140918950(&var_450, &rax_71[2])
int64_t var_468 = 0x770
void var_458
void* var_440 = &var_458
sub_141b88600(&var_450, arg1, rax_2, sub_140e23ed0(&rax_71[2], "TileViewT<ItemType>"))
int64_t* rbx_12 = var_448.q

if (rbx_12 != 0)
    rbx_12[1].d -= 1
    
    if (rbx_12[1].d == 1)
        (**rbx_12)(rbx_12)
        int32_t temp2_1 = *(rbx_12 + 0xc)
        *(rbx_12 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_12 + 8))(rbx_12, 1)

void var_60
sub_140745b20(&var_60)
void var_70
sub_140745b20(&var_70)
void var_80
sub_140745b20(&var_80)
void var_a8
sub_140745b20(&var_a8)
char var_b8 = 0
int64_t* var_d0

if (var_d0 != 0)
    var_d0[1].d -= 1
    
    if (var_d0[1].d == 1)
        (**var_d0)(var_d0)
        int32_t temp3_1 = *(var_d0 + 0xc)
        *(var_d0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_d0 + 8))(var_d0, 1)

void var_f0
sub_140745b20(&var_f0)
void var_108
sub_140745b20(&var_108)
void var_118
sub_140745b20(&var_118)
void var_128
sub_140745b20(&var_128)
void var_138
sub_140745b20(&var_138)
void var_148
sub_140745b20(&var_148)
void var_158
sub_140745b20(&var_158)
void var_170
sub_140745b20(&var_170)
void var_188
sub_140745b20(&var_188)
void var_1a8
sub_140745b20(&var_1a8)
void var_1b8
sub_140745b20(&var_1b8)
void var_1c8
sub_140745b20(&var_1c8)
void var_1d8
sub_140745b20(&var_1d8)
sub_140ddea30(&var_378)
sub_140745b20(&var_3b8)
sub_140745b20(&var_3a0)
sub_140745b20(&var_388)
__security_check_cookie(rax_1 ^ &var_488)
return arg1
