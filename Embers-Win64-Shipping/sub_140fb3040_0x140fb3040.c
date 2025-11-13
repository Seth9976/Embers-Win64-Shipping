// 函数: sub_140fb3040
// 地址: 0x140fb3040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_718
int64_t rax_1 = __security_cookie ^ &var_718
char rsi = *(arg1 + 0x51)
int128_t zmm0 = *(arg1 + 0x40)
char r14 = *(arg1 + 0x50)
char var_658 = r14
int64_t rbx
rbx.b = rsi == 0
char var_657 = 1
char var_688 = rbx.b
int64_t var_650 = 0
int32_t var_648 = 0
char var_670 = rsi
char var_66f = 1
int64_t var_668 = 0
int32_t var_660 = 0
char var_687 = 1
int64_t var_680 = 0
int32_t var_678 = 0
int16_t var_6a0 = 0x101
int64_t var_698 = 0
int32_t var_690 = 0
int128_t var_6e0 = zmm0
char var_630 = 1
int128_t var_640 = zmm0
int64_t var_628 = 0
int32_t var_620 = 0
int32_t var_5f8 = 0xb
char var_5f4 = 1
char var_5f0 = 1
int64_t var_5e8 = 0
int32_t var_5e0 = 0
void var_5d8
int64_t* rax_2 = sub_140e934e0(&var_5d8)
rax_2[0x36].b = 1
*(rax_2 + 0x1a0) = var_6e0
sub_140692f90(&rax_2[0x37], &var_628)
rax_2[0x39].w = 0x101
sub_140692f90(&rax_2[0x3a], &var_698)
rax_2[0x3c].b = rbx.b
*(rax_2 + 0x1e1) = 1
sub_140692f90(&rax_2[0x3d], &var_680)
rax_2[0x3f].b = rsi
*(rax_2 + 0x1f9) = 1
sub_140692f90(&rax_2[0x40], &var_668)
rax_2[0x42].b = r14
*(rax_2 + 0x211) = 1
sub_140692f90(&rax_2[0x43], &var_650)
void*** rax_3 = sub_140e91730()
void*** var_6b0 = rax_3
void* var_6b8 = &rax_3[2]
sub_140918950(&var_6b8, &rax_3[2])
void var_6e8
void* var_6a8 = &var_6e8
int64_t var_6f8 = 0x360
void* var_608
void** rax_4 = sub_140e9b230(&var_6b8, &var_608, rax_2, sub_140e23ed0(var_6b8, "SColorBlock"))
var_6e0.q = *rax_4
void* rax_6 = rax_4[1]
var_6e0:8.q = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

void var_380
int64_t* rax_7 = sub_14068c640(&var_380)

if (&var_5f8 != &rax_7[8])
    rax_7[8].d = 0xb
    *(rax_7 + 0x44) = 1

rax_7[9].b = 1

if (&var_5e8 != &rax_7[0xa] && rax_7[0xb].d != 0)
    int64_t* rcx_11 = rax_7[0xa]
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x38))(rcx_11, 0)
        int64_t rcx_12 = rax_7[0xa]
        
        if (rcx_12 != 0)
            rax_7[0xa] = sub_140a84c80(rcx_12, 0, 0)
        
        rax_7[0xb].d = 0

void*** rax_10 = j_sub_140a82f30(0x4c8)
void*** rbx_3 = rax_10

if (rax_10 == 0)
    rbx_3 = nullptr
else
    rax_10[1].d = 1
    *(rax_10 + 0xc) = 1
    *rbx_3 = &data_142d8c5a0
    
    if (rbx_3 != -0x10)
        sub_140f20640(&rbx_3[2])

void*** var_6c8 = rbx_3
void* var_6d0 = &rbx_3[2]
sub_14065fa30(&var_6d0, &rbx_3[2])
void var_6e7
void* var_6c0 = &var_6e7
int64_t var_6f8_1 = 0x4b8
void* rax_11
int128_t zmm1_2
rax_11, zmm1_2 = sub_1406936e0(rax_7, &var_6e0, sub_140e23ed0(var_6d0, "SBorder"))
void* var_618
void** rax_12 = sub_140695920(&var_6d0, &var_618, rax_11, zmm1_2)
*arg2 = *rax_12
void* rax_14 = rax_12[1]
arg2[1] = rax_14

if (rax_14 != 0)
    *(rax_14 + 8) += 1

sub_140669d70(&var_618)
sub_140669d70(&var_6d0)
sub_14068fed0(&var_380)
sub_140f9a690(&var_608)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_6b8)
sub_140f9a950(&var_5d8)
sub_140745b20(&var_5e8)
sub_140745b20(&var_628)
sub_140745b20(&var_698)
sub_140745b20(&var_680)
sub_140745b20(&var_668)
sub_140745b20(&var_650)
__security_check_cookie(rax_1 ^ &var_718)
return arg2
