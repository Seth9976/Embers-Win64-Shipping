// 函数: sub_141b6dbe0
// 地址: 0x141b6dbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_458
int64_t rax_1 = __security_cookie ^ &var_458
char rbx = *arg4
int32_t rdi = *(arg4 + 4)
int64_t (* var_420)(int64_t* arg1, int64_t arg2) = sub_141bb4040
int32_t var_3d0 = 0
int64_t (* var_3a8)(int64_t* arg1, int64_t arg2) = sub_141bb4000
int64_t var_378 = 0
uint64_t (* var_3b8)(int64_t* arg1, int128_t arg2 @ zmm1, int32_t arg3) = sub_141bb4410
int32_t var_370 = 0
void* (* var_3c8)(int64_t* arg1, int64_t arg2) = sub_141bb4080
int64_t var_390 = 0
int64_t (* var_3d8)(void* arg1, int64_t* arg2) = sub_141bb5190
int64_t (* var_3e8)(int64_t* arg1) = DBIQueryItsmForTi
int64_t (* var_3f8)(int64_t* arg1, int64_t arg2) = sub_141bb5310
int32_t var_388 = 0
void** (* var_408)(int64_t* arg1, void** arg2, int64_t arg3, int64_t arg4) = sub_141bb2c90
int32_t var_418 = 0x218
int32_t var_3a0 = 0x218
int32_t var_3b0 = 0x218
int32_t var_3c0 = 0x218
int32_t var_3e0 = 0x218
int32_t var_3f0 = 0x218
int32_t var_400 = 0x218
int32_t var_380 = rdi
char var_37c = 1
char var_398 = rbx
char var_397 = 1
void var_368
int64_t* rax_2 = sub_140f1e240(&var_368)
*(rax_2 + 0x2dc) = 1
rax_2[0x3e] = arg3
rax_2[0x5c].b = rbx
*(rax_2 + 0x2e1) = 1
sub_140692f90(&rax_2[0x5d], &var_390)
rax_2[0x51].b = arg4[8]
*(rax_2 + 0x2d2) = arg4[9]
rax_2[0x4c].d = rdi
*(rax_2 + 0x264) = 1

if (&var_378 != &rax_2[0x4d] && rax_2[0x4e].d != 0)
    int64_t* rcx_2 = rax_2[0x4d]
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        int64_t rcx_3 = rax_2[0x4d]
        
        if (rcx_3 != 0)
            rax_2[0x4d] = sub_140a84c80(rcx_3, 0, 0)
        
        rax_2[0x4e].d = 0

rax_2[0x5f].b = arg4[0xa]
rax_2[0x54].d = *(arg4 + 0xc)
void*** rax_9 = sub_140a84c80(0, 0x30, 0)

if (rax_9 != 0)
    *rax_9 = &data_1430844d8
    sub_140d3a3a0(&rax_9[1], arg2)
    *(rax_9 + 0x10) = var_408.o
    rax_9[5] = sub_140a387b0()

if (&var_408 != &rax_2[0x34])
    if (rax_9 != 0)
        (*rax_9)[8](rax_9, &rax_2[0x34])
    else if (rax_2[0x35].d != 0)
        int64_t* rcx_6 = rax_2[0x34]
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x38))(rcx_6, 0)
            int64_t rcx_7 = rax_2[0x34]
            
            if (rcx_7 != 0)
                rax_2[0x34] = sub_140a84c80(rcx_7, 0, 0)
            
            rax_2[0x35].d = 0

if (rax_9 != 0)
    (*rax_9)[7](rax_9, 0)
    int64_t rax_15 = sub_140a84c80(rax_9, 0, 0)
    
    if (rax_15 != 0)
        sub_140a74f90(rax_15)

void*** rax_16 = sub_140a84c80(0, 0x30, 0)

if (rax_16 != 0)
    *rax_16 = &data_143084528
    sub_140d3a3a0(&rax_16[1], arg2)
    *(rax_16 + 0x10) = var_3f8.o
    rax_16[5] = sub_140a387b0()
    *rax_16 = &data_143084580

if (&var_3f8 != &rax_2[0x48])
    if (rax_16 != 0)
        (*rax_16)[8](rax_16, &rax_2[0x48])
    else if (rax_2[0x49].d != 0)
        int64_t* rcx_13 = rax_2[0x48]
        
        if (rcx_13 != 0)
            (*(*rcx_13 + 0x38))(rcx_13, 0)
            int64_t rcx_14 = rax_2[0x48]
            
            if (rcx_14 != 0)
                rax_2[0x48] = sub_140a84c80(rcx_14, 0, 0)
            
            rax_2[0x49].d = 0

if (rax_16 != 0)
    (*rax_16)[7](rax_16, 0)
    int64_t rax_22 = sub_140a84c80(rax_16, 0, 0)
    
    if (rax_22 != 0)
        sub_140a74f90(rax_22)

void*** rax_23 = sub_140a84c80(0, 0x30, 0)

if (rax_23 != 0)
    *rax_23 = &data_1430845d8
    sub_140d3a3a0(&rax_23[1], arg2)
    *(rax_23 + 0x10) = var_3e8.o
    rax_23[5] = sub_140a387b0()

if (&var_3e8 != &rax_2[0x4a])
    if (rax_23 != 0)
        (*rax_23)[8](rax_23, &rax_2[0x4a])
    else if (rax_2[0x4b].d != 0)
        int64_t* rcx_20 = rax_2[0x4a]
        
        if (rcx_20 != 0)
            (*(*rcx_20 + 0x38))(rcx_20, 0)
            int64_t rcx_21 = rax_2[0x4a]
            
            if (rcx_21 != 0)
                rax_2[0x4a] = sub_140a84c80(rcx_21, 0, 0)
            
            rax_2[0x4b].d = 0

if (rax_23 != 0)
    (*rax_23)[7](rax_23, 0)
    int64_t rax_29 = sub_140a84c80(rax_23, 0, 0)
    
    if (rax_29 != 0)
        sub_140a74f90(rax_29)

void*** rax_30 = sub_140a84c80(0, 0x30, 0)

if (rax_30 != 0)
    *rax_30 = &data_142fd1390
    sub_140d3a3a0(&rax_30[1], arg2)
    *(rax_30 + 0x10) = var_3d8.o
    rax_30[5] = sub_140a387b0()
    *rax_30 = &data_142fd13e8

if (&var_3d8 != &rax_2[0x38])
    if (rax_30 != 0)
        (*rax_30)[8](rax_30, &rax_2[0x38])
    else if (rax_2[0x39].d != 0)
        int64_t* rcx_27 = rax_2[0x38]
        
        if (rcx_27 != 0)
            (*(*rcx_27 + 0x38))(rcx_27, 0)
            int64_t rcx_28 = rax_2[0x38]
            
            if (rcx_28 != 0)
                rax_2[0x38] = sub_140a84c80(rcx_28, 0, 0)
            
            rax_2[0x39].d = 0

if (rax_30 != 0)
    (*rax_30)[7](rax_30, 0)
    int64_t rax_36 = sub_140a84c80(rax_30, 0, 0)
    
    if (rax_36 != 0)
        sub_140a74f90(rax_36)

void*** rax_37 = sub_140a84c80(0, 0x30, 0)

if (rax_37 != 0)
    *rax_37 = &data_143084628
    sub_140d3a3a0(&rax_37[1], arg2)
    *(rax_37 + 0x10) = var_3c8.o
    rax_37[5] = sub_140a387b0()
    *rax_37 = &data_143084680

if (&var_3c8 != &rax_2[0x3c])
    if (rax_37 != 0)
        (*rax_37)[8](rax_37, &rax_2[0x3c])
    else if (rax_2[0x3d].d != 0)
        int64_t* rcx_34 = rax_2[0x3c]
        
        if (rcx_34 != 0)
            (*(*rcx_34 + 0x38))(rcx_34, 0)
            int64_t rcx_35 = rax_2[0x3c]
            
            if (rcx_35 != 0)
                rax_2[0x3c] = sub_140a84c80(rcx_35, 0, 0)
            
            rax_2[0x3d].d = 0

if (rax_37 != 0)
    (*rax_37)[7](rax_37, 0)
    int64_t rax_43 = sub_140a84c80(rax_37, 0, 0)
    
    if (rax_43 != 0)
        sub_140a74f90(rax_43)

int64_t* rax_44 = sub_140a84c80(0, 0x30, 0)

if (rax_44 != 0)
    *rax_44 = &data_1430846d8
    sub_140d3a3a0(&rax_44[1], arg2)
    *(rax_44 + 0x10) = var_3b8.o
    rax_44[5] = sub_140a387b0()
    *rax_44 = &data_143084730

if (&var_3b8 != &rax_2[0x3a])
    if (rax_44 != 0)
        (*(*rax_44 + 0x40))(rax_44, &rax_2[0x3a])
    else if (rax_2[0x3b].d != 0)
        int64_t* rcx_41 = rax_2[0x3a]
        
        if (rcx_41 != 0)
            (*(*rcx_41 + 0x38))(rcx_41, 0)
            int64_t rcx_42 = rax_2[0x3a]
            
            if (rcx_42 != 0)
                rax_2[0x3a] = sub_140a84c80(rcx_42, 0, 0)
            
            rax_2[0x3b].d = 0

if (rax_44 != 0)
    (*(*rax_44 + 0x38))(rax_44, 0)
    int64_t rax_50 = sub_140a84c80(rax_44, 0, 0)
    
    if (rax_50 != 0)
        sub_140a74f90(rax_50)

void*** rax_51 = sub_140a84c80(0, 0x30, 0)

if (rax_51 != 0)
    *rax_51 = &data_142fd1390
    sub_140d3a3a0(&rax_51[1], arg2)
    *(rax_51 + 0x10) = var_3a8.o
    rax_51[5] = sub_140a387b0()
    *rax_51 = &data_142fd13e8

if (&var_3a8 != &rax_2[0x44])
    if (rax_51 != 0)
        (*rax_51)[8](rax_51, &rax_2[0x44])
    else if (rax_2[0x45].d != 0)
        int64_t* rcx_48 = rax_2[0x44]
        
        if (rcx_48 != 0)
            (*(*rcx_48 + 0x38))(rcx_48, 0)
            int64_t rcx_49 = rax_2[0x44]
            
            if (rcx_49 != 0)
                rax_2[0x44] = sub_140a84c80(rcx_49, 0, 0)
            
            rax_2[0x45].d = 0

if (rax_51 != 0)
    (*rax_51)[7](rax_51, 0)
    int64_t rax_57 = sub_140a84c80(rax_51, 0, 0)
    
    if (rax_57 != 0)
        sub_140a74f90(rax_57)

void*** rax_58 = sub_140a84c80(0, 0x30, 0)

if (rax_58 != 0)
    *rax_58 = &data_142fd1390
    sub_140d3a3a0(&rax_58[1], arg2)
    *(rax_58 + 0x10) = var_420.o
    rax_58[5] = sub_140a387b0()
    *rax_58 = &data_142fd13e8

if (&var_420 != &rax_2[0x46])
    if (rax_58 != 0)
        (*rax_58)[8](rax_58, &rax_2[0x46])
    else if (rax_2[0x47].d != 0)
        int64_t* rcx_55 = rax_2[0x46]
        
        if (rcx_55 != 0)
            (*(*rcx_55 + 0x38))(rcx_55, 0)
            int64_t rcx_56 = rax_2[0x46]
            
            if (rcx_56 != 0)
                rax_2[0x46] = sub_140a84c80(rcx_56, 0, 0)
            
            rax_2[0x47].d = 0

if (rax_58 != 0)
    (*rax_58)[7](rax_58, 0)
    int64_t rax_64 = sub_140a84c80(rax_58, 0, 0)
    
    if (rax_64 != 0)
        sub_140a74f90(rax_64)

void*** rax_65 = sub_141b76e60()
var_418.q = rax_65
var_420 = &rax_65[2]
sub_140918950(&var_420, &rax_65[2])
int64_t var_438 = 0x768
void var_428
void* var_410 = &var_428
sub_141b87ba0(&var_420, arg1, rax_2, sub_140e23ed0(&rax_65[2], "ListViewT<ItemType>"))
int64_t* rbx_11 = var_418.q

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        (**rbx_11)(rbx_11)
        int32_t temp1_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rbx_11
            (*(r8_2 + 8))(rbx_11, 1, r8_2)

sub_140f24060(&var_368)
sub_140745b20(&var_390)
sub_140745b20(&var_378)
__security_check_cookie(rax_1 ^ &var_458)
return arg1
