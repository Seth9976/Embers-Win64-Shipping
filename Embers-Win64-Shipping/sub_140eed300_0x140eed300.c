// 函数: sub_140eed300
// 地址: 0x140eed300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
*(arg1 + 0x5b3) &= 0xfd
void* (* var_408)(void* arg1) = sub_140f030c0
int16_t var_3c8 = 0x100
int32_t var_400 = 0
int128_t zmm0 = var_408.o
int128_t* (* var_3f8)(int64_t* arg1, int128_t* arg2) = sub_140f00910
char var_3f0 = 0
int64_t (* var_3d8)(int64_t* arg1) = sub_140ee64d4
int32_t var_3d0 = 0
var_408.o = zmm0
void var_3c0
sub_140e8f130(&var_3c0, arg1, &var_408)
char var_3a0 = 1
int128_t var_3b0 = zx.o(0)
var_3f8.o = var_3f8.o
void var_398
sub_140e8eef0(&var_398, arg1, &var_3f8)
void var_378
int64_t* rax_2 = sub_14068c640(&var_378)
rax_2[0x48] = *(arg2 + 0x2a0)
rax_2[0x49].b = *(arg2 + 0x2a8)
sub_140692f90(&rax_2[0x4a], arg2 + 0x2b0)
rax_2[0x4c] = *(arg2 + 0x280)
rax_2[0x4d].b = *(arg2 + 0x288)
sub_140692f90(&rax_2[0x4e], arg2 + 0x290)
sub_140693390(&rax_2[0x55], arg2 + 0x2c0)
rax_2[0x5a].b = *(arg2 + 0x2e8)
sub_140692f90(&rax_2[0x5b], arg2 + 0x2f0)
sub_140693390(&rax_2[0x5d], arg2 + 0x300)
rax_2[0x62].b = *(arg2 + 0x328)
sub_140692f90(&rax_2[0x63], arg2 + 0x330)
var_3d8.o = var_3d8.o
int64_t* rax_5 = sub_140e45b90(&var_408, arg1, &var_3d8)
var_3f8 = nullptr
var_3f0 = 1
int64_t var_3e8 = 0
int32_t var_3e0 = 0
sub_140692f90(&var_3e8, rax_5)
rax_2[0x44] = var_3f8
rax_2[0x45].b = var_3f0
sub_1407473e0(&rax_2[0x46], &var_3e8)
sub_140745b20(&var_3e8)
void* (* rax_9)(void* arg1)

if (var_400 == 0)
    rax_9 = var_408
label_140eed54e:
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)
else
    void* (* rcx_15)(void* arg1) = var_408
    
    if (rcx_15 != 0)
        (*(*rcx_15 + 0x38))(rcx_15, 0)
        rax_9 = var_408
        
        if (rax_9 != 0)
            rax_9 = sub_140a84c80(rax_9, 0, 0)
            var_408 = rax_9
        
        int32_t var_400_1 = 0
        goto label_140eed54e
rax_2[0x36].d = *(arg2 + 0x1c0)
*(rax_2 + 0x1b4) = *(arg2 + 0x1c4)
rax_2[0x39].b = var_3a0
*(rax_2 + 0x1b8) = var_3b0
sub_140692f90(&rax_2[0x3a], &var_398)
rax_2[0x65].b = var_3c8.b
*(rax_2 + 0x329) = var_3c8:1.b
sub_140692f90(&rax_2[0x66], &var_3c0)
void var_418
void* var_388
int64_t* rax_15
int128_t zmm1
rax_15, zmm1 = sub_140ee4e00(&var_418, &var_388, arg2)
sub_140f33710(arg1, sub_1406936e0(rax_2, rax_15, zmm1))
sub_14068fed0(&var_378)
sub_140745b20(&var_398)
sub_140745b20(&var_3c0)

if (*sub_140e179b0(arg1, &var_408) == data_143e2a188)
    *(arg1 + 0x2e) &= 0xfb
    
    if (sub_140db3510(&arg1[3]) != 0)
        sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

*(arg1 + 0x4b8) = *(arg2 + 0x1c8)
arg1[0x99].b = *(arg2 + 0x1d8)
sub_140692f90(&arg1[0x9a], arg2 + 0x1e0)
void* rcx_30 = *(arg2 + 0x1b0)
arg1[0xa1] = rcx_30
arg1[0xa2] = rcx_30 + 8
arg1[0xa3] = rcx_30 + 0x90
arg1[0xa4] = rcx_30 + 0x118
arg1[0xa5] = rcx_30 + 0x1a0
*(arg1 + 0x4e0) = *(rcx_30 + 0x228)
*(arg1 + 0x4f0) = *(rcx_30 + 0x238)
*(arg1 + 0x580) = *(rcx_30 + 0x260)
arg1[0xb2] = *(rcx_30 + 0x270)
*(arg1 + 0x598) = *(rcx_30 + 0x248)
arg1[0xb5] = *(rcx_30 + 0x258)
sub_140e19ef0(arg1, 1)
*(arg1 + 0x5b3) ^= (*(arg2 + 0x340) ^ *(arg1 + 0x5b3)) & 1
sub_1407473e0(&arg1[0xa6], arg2 + 0x220)
sub_1407473e0(&arg1[0xa8], arg2 + 0x230)
sub_1407473e0(&arg1[0xaa], arg2 + 0x240)
sub_1407473e0(&arg1[0xac], arg2 + 0x250)
sub_1407473e0(&arg1[0xae], arg2 + 0x260)
arg1[0xb6].b = *(arg2 + 0x270)
*(arg1 + 0x5b1) = *(arg2 + 0x274)
*(arg1 + 0x5b2) = *(arg2 + 0x278)
void* rax_28 = arg2 + 0x368

if (*(rax_28 + 0x18) == 0)
    rax_28 = arg1[0xa1] + 0x260

*(arg1 + 0x580) = *rax_28
void* result = arg2 + 0x348
arg1[0xb2] = *(rax_28 + 0x10)

if (*(result + 0x18) == 0)
    result = arg1[0xa1] + 0x248

*(arg1 + 0x598) = *result
arg1[0xb5] = *(result + 0x10)
__security_check_cookie(rax_1 ^ &var_438)
return result
