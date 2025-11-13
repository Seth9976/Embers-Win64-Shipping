// 函数: sub_141bec990
// 地址: 0x141bec990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t var_168 = 0
int128_t zmm6 = sub_141beee70(arg1)
int32_t rcx
rcx.b = sub_140b5b8a0(arg1[0x5c].d, 0) == 0
int32_t var_108
int64_t var_100
int32_t var_f8
int128_t var_e8
int64_t var_d8
int32_t var_d0
int32_t var_88
int128_t* rdx_8
void*** rbx
int32_t r14
int32_t r15
int32_t var_160

if ((*(arg1 + 0x2e4) != 0 | rcx.b) == 0)
label_141becb5b:
    int128_t var_38_1 = zmm6
    zmm6 = arg1[0x59].d
    var_108 = zmm6.d
    char var_104_1 = 1
    var_100 = 0
    var_f8 = 0
    sub_140745b20(&var_100)
    r15 = var_160
    rdx_8 = &var_108
    rbx = var_168.q
    r14 = 0xc
    var_108 = zmm6.d
    char var_104_2 = 1
    var_100.b = 1
    var_f8.q = 0
    int32_t var_f0_1 = 0
else
    void* rax_3 = sub_140d3c6e0(&arg1[0x5b])
    
    if (rax_3 == 0)
        goto label_141becb5b
    
    if (sub_140d1fd20(rax_3, arg1[0x5c]) == 0)
        goto label_141becb5b
    
    var_168.q = arg1[0x5c]
    int32_t* rax_7 = sub_141b70000(&var_88, sub_140d3c6e0(&arg1[0x5b]), &var_168)
    var_100 = 0
    var_f8 = 0
    char rcx_5 = rax_7[1].b
    var_108 = *rax_7
    sub_140692f90(&var_100, &rax_7[2])
    void*** rax_8 = sub_140a84c80(0, 0x40, 0)
    r15 = 4
    rbx = rax_8
    
    if (rax_8 != 0)
        var_168 = var_108
        var_160.q = 0
        int32_t var_158_1 = 0
        sub_140692f90(&var_160, &var_100)
        *rbx = &data_143083d90
        sub_140d3a3a0(&rbx[1], arg1)
        rbx[2] = sub_141b9ea40
        rbx[3].d = var_168
        *(rbx + 0x1c) = rcx_5
        rbx[4] = 0
        rbx[5].d = 0
        sub_140692f90(&rbx[4], &var_160)
        rbx[6] = sub_140a387b0()
        sub_140745b20(&var_160)
    
    sub_140745b20(&var_100)
    sub_140745b20(&rax_7[2])
    char var_e4_1 = 0
    char var_e0_1 = 1
    var_d8 = 0
    var_d0 = 0
    
    if (rbx != 0)
        (*rbx)[8](rbx, &var_d8)
    
    rdx_8 = &var_e8
    r14 = 3
char var_a4 = 0
int32_t var_a8

if (*(rdx_8 + 4) != 0)
    var_a8 = *rdx_8
    var_a4 = 1

char rax_12 = *(rdx_8 + 8)
int64_t var_98 = 0
int32_t var_90 = 0
sub_1407473e0(&var_98, &rdx_8[1])

if ((r14.b & 8) != 0)
    r14 &= 0xfffffff7
    sub_140745b20(&var_f8)

int32_t rdi_3 = r14 & 0xfffffffb

if ((r14.b & 4) == 0)
    rdi_3 = r14

if ((rdi_3.b & 2) != 0)
    rdi_3 &= 0xfffffffd
    sub_140745b20(&var_d8)
    char var_e4_2 = 0

if ((rdi_3.b & 1) != 0)
    rdi_3 &= 0xfffffffe
    
    if (r15 == 0)
        goto label_141becc57
    
    if (rbx != 0)
        (*rbx)[7](rbx, 0)
        rbx = sub_140a84c80(rbx, 0, 0)
    label_141becc57:
        
        if (rbx != 0)
            sub_140a74f90(rbx)

int32_t rcx_22
rcx_22.b = sub_140b5b8a0(arg1[0x60].d, 0) == 0
int64_t var_b8
int128_t* rdx_12
int32_t rbx_1

if ((*(arg1 + 0x304) != 0 | rcx_22.b) == 0)
label_141becceb:
    var_d8.b = 0
    rdx_12 = &var_e8
    char var_c0_1 = 1
    var_e8 = *(arg1 + 0x2e8)
    var_b8 = 0
    rbx_1 = 0x20
    var_d0.o = zx.o(0)
    int32_t var_b0_1 = 0
else
    void* rax_17 = sub_140d3c6e0(&arg1[0x5f])
    
    if (rax_17 == 0)
        goto label_141becceb
    
    if (sub_140d1fd20(rax_17, arg1[0x60]) == 0)
        goto label_141becceb
    
    var_168.q = arg1[0x60]
    rdx_12 = sub_141b70370(&var_88, sub_140d3c6e0(&arg1[0x5f]), &var_168)
    rbx_1 = 0x10

int128_t zmm0_5 = *rdx_12
int32_t rbx_2 = rbx_1 | rdi_3
char rax_22 = rdx_12[1].b
int64_t rax_23 = *(rdx_12 + 0x18)
int64_t* rax_24 = rdx_12[2].q

if (rax_24 != 0)
    rax_24[1].d += 1

char rax_25 = *(rdx_12 + 0x28)
int64_t var_118 = 0
int32_t var_110 = 0
sub_1407473e0(&var_118, &rdx_12[3])

if ((rbx_2.b & 0x20) != 0)
    rbx_2 &= 0xffffffdf
    sub_140745b20(&var_b8)
    int64_t* var_c8
    
    if (var_c8 != 0)
        var_c8[1].d -= 1
        
        if (var_c8[1].d == 1)
            (**var_c8)(var_c8)
            int32_t temp2_1 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_c8 + 8))(var_c8, 1)

if ((rbx_2.b & 0x10) != 0)
    rbx_2 &= 0xffffffef
    void var_58
    sub_140745b20(&var_58)
    int64_t* var_68
    
    if (var_68 != 0)
        var_68[1].d -= 1
        
        if (var_68[1].d == 1)
            (**var_68)(var_68)
            int32_t temp3_1 = *(var_68 + 0xc)
            *(var_68 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_68 + 8))(var_68, 1)

sub_140f8ced0(arg1[0x61], &arg1[0x21])
sub_140f8a340(arg1[0x61], zx.d(*(arg1 + 0x2cc)))
int64_t var_78
int32_t* rdx_16
int32_t rdi_6

if (*(arg1 + 0x2cd) == 0)
    char var_84_1 = 0
    
    if (var_a4 != 0)
        var_88 = var_a8
        char var_84_2 = 1
    
    char var_80_1 = rax_12
    var_78 = 0
    int32_t var_70_1 = 0
    sub_1407473e0(&var_78, &var_98)
    rdx_16 = &var_88
    rdi_6 = 0x100
else
    char var_104_3 = 0
    rdx_16 = &var_108
    var_100.b = 1
    rdi_6 = 0xc0
    var_f8.q = 0
    int32_t var_f0_2 = 0

int32_t rdi_7 = rdi_6 | rbx_2
char var_e4_3 = 0

if (rdx_16[1].b != 0)
    var_e8.d = *rdx_16
    var_e4_3 = 1

char var_e0_2 = rdx_16[2].b
var_d8 = 0
int32_t var_d0_1 = 0
sub_1407473e0(&var_d8, &rdx_16[4])
sub_140f8c6f0(arg1[0x61], &var_e8)

if (test_bit(rdi_7, 8))
    rdi_7 &= 0xfffffeff
    sub_140745b20(&var_78)
    char var_84_3 = 0

if (rdi_7.b s< 0)
    sub_140745b20(&var_f8)

var_d8.b = rax_22
var_d0_1.q = rax_23
int64_t* var_c8_1 = rax_24
var_e8 = zmm0_5

if (rax_24 != 0)
    rax_24[1].d += 1

char var_c0_2 = rax_25
var_b8 = 0
int32_t var_b0_2 = 0
sub_140692f90(&var_b8, &var_118)
sub_140f8b9e0(arg1[0x61], &var_e8)
int64_t* rcx_43 = arg1[0x61]
var_e8.d = arg1[0x5a].d
var_e4_3.d = *(arg1 + 0x2d4)
char var_e0_3 = 1
var_d8 = 0
int32_t var_d0_2 = 0
sub_140f8a360(rcx_43, &var_e8)
sub_140745b20(&var_118)

if (rax_24 != 0)
    rax_24[1].d -= 1
    
    if (rax_24[1].d == 1)
        (**rax_24)(rax_24)
        int32_t temp5_1 = *(rax_24 + 0xc)
        *(rax_24 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rax_24 + 8))(rax_24, 1)

uint64_t result = sub_140745b20(&var_98)
__security_check_cookie(rax_1 ^ &var_188)
return result
