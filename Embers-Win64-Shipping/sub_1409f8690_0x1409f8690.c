// 函数: sub_1409f8690
// 地址: 0x1409f8690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_38 = zmm6
void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
int64_t var_260
int64_t* rax_2
int32_t rdx
rax_2, rdx = sub_140b254c0(&var_260)
bool c = rax_2[1].d != 0
int64_t var_3c8 = *rax_2
*rax_2 = 0
int32_t rcx_1 = rax_2[1].d
int32_t rcx_2 = *(rax_2 + 0xc)
rax_2[1] = 0
int32_t rdx_3 = sbb.d(rdx, rdx, c) + 0xe + rcx_1

if (rdx_3 s> rcx_2)
    sub_1405947f0(&var_3c8, rdx_3)

sub_140a2cf70(&var_3c8, u"PatchStaging", 0xc)
int64_t rcx_5 = var_260

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* r13 = data_143cefa40

if (r13 == 0)
    void var_268
    int64_t rbx_1 = *sub_140b58260(&var_268, u"BuildPatchServices", (r13 + 1).d)
    j_sub_140b3db50()
    int64_t* rax_4 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    r13 = rax_4
    data_143cefa40 = rax_4

int64_t* rcx_7 = *(arg1 + 0x78)
zmm6 = zx.o(0)

if (rcx_7 != 0)
    int64_t rax_5 = *(arg1 + 0x38)
    
    if (rax_5 == 0)
        zmm6.q = float.d((*(*rcx_7 + 0x58))(rcx_7))
    else
        int64_t var_318 = rax_5
        int64_t* rax_6 = *(arg1 + 0x40)
        int64_t var_128
        __builtin_memset(&var_128, 0, 0x2c)
        int32_t var_fc_1 = 0x80
        int32_t var_f8_1 = 0xffffffff
        int32_t var_f4_1 = 0
        int64_t var_e8_1 = 0
        int32_t var_e0_1 = 0
        
        if (rax_6 != 0)
            rax_6[1].d += 1
        
        zmm6.q = float.d((*(*rcx_7 + 0x68))(rcx_7, &var_128, &var_318))
        
        if (rax_6 != 0)
            rax_6[1].d -= 1
            
            if (rax_6[1].d == 1)
                (**rax_6)(rax_6)
                int32_t rax_11 = *(rax_6 + 0xc)
                *(rax_6 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*rax_6 + 8))(rax_6, 1)
        
        int32_t var_e0_2 = 0
        
        if (var_e8_1 != 0)
            sub_140a74f90(var_e8_1)
        
        sub_14059ad90(&var_128, 0)
        int64_t var_108
        
        if (var_108 != 0)
            sub_140a74f90(var_108)
        
        int64_t rcx_13 = var_128
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)

sub_1409f5b40(zmm6, 0x22, 0x24)
int64_t* rcx_14 = *(arg1 + 0x78)

if (rcx_14 != 0)
    uint128_t zmm0_1
    zmm0_1.q = float.d((*(*rcx_14 + 0x78))(rcx_14))
    sub_1409f5b40(zmm0_1, 0x22, 0x24)

uint64_t var_330 = 0
uint64_t var_398 = 0

if (sub_140b67990(arg1 + 0x28, &var_330, &var_398) != 0)
    uint64_t rax_18 = var_398
    uint128_t zmm0_2
    zmm0_2.q = float.d(rax_18)
    
    if (rax_18 s< 0)
        zmm0_2.q = zmm0_2.q f+ 1.8446744073709552e+19
    
    sub_1409f5b40(zmm0_2, 0x22, 0x24)

int64_t var_340 = *(arg1 + 0x78)
int64_t* rax_20 = *(arg1 + 0x80)
int64_t* var_3d8 = nullptr
int32_t var_3cc = 0
int64_t var_390
__builtin_memset(&var_390, 0, 0x2c)
int32_t var_364 = 0x80
int32_t var_360 = 0xffffffff
int32_t var_35c = 0
int64_t var_350 = 0
int32_t var_348 = 0

if (rax_20 != 0)
    rax_20[1].d += 1

int64_t rax_21 = *(arg1 + 0x38)
void var_d8
void var_240

if (rax_21 != 0)
    int64_t var_308 = rax_21
    int64_t* rax_23 = *(arg1 + 0x40)
    
    if (rax_23 != 0)
        rax_23[1].d += 1
    
    void var_1f0
    sub_141844130(&var_d8, &var_308, &var_340, sub_1409f5d90(&var_1f0, &var_390))
    
    if (rax_23 != 0)
        rax_23[1].d -= 1
        
        if (rax_23[1].d == 1)
            (**rax_23)(rax_23)
            int32_t rax_27 = *(rax_23 + 0xc)
            *(rax_23 + 0xc) -= 1
            
            if (rax_27 == 1)
                (*(*rax_23 + 8))(rax_23, 1)
else
    sub_141843fc0(&var_d8, &var_340, sub_1409f5d90(&var_240, &var_390))
int32_t var_348_1 = 0

if (var_350 != 0)
    sub_140a74f90(var_350)

sub_14059ad90(&var_390, 0)
int64_t var_370

if (var_370 != 0)
    sub_140a74f90(var_370)

int64_t rcx_25 = var_390

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int32_t var_3d0 = 1
sub_1407c3920(&var_3d8)
sub_141820970(var_3d8, &var_d8)
sub_1409f6120(&var_d8)

if (rax_20 != 0)
    rax_20[1].d -= 1
    
    if (rax_20[1].d == 1)
        (**rax_20)(rax_20)
        int32_t rax_31 = *(rax_20 + 0xc)
        *(rax_20 + 0xc) -= 1
        
        if (rax_31 == 1)
            (*(*rax_20 + 8))(rax_20, 1)

int64_t* var_2f8 = var_3d8
int32_t var_2f0 = var_3d0
int32_t var_2ec = var_3cc
var_3d0.q = 0
var_3d8 = nullptr
void var_2d8
sub_14181ddb0(&var_2d8, &var_2f8)
int64_t rdi = var_3c8
int32_t var_2b0 = rcx_1
int32_t var_2ac

if (rcx_1 != 0 || var_2ac != 0)
    uint64_t var_2b8
    sub_1405a4c70(&var_2b8, rcx_1, var_2ac)
    memcpy(var_2b8, rdi, rcx_1 * 2)
else
    int32_t var_2ac_1 = 0

int32_t rbx_6 = *(arg1 + 0x60)
int64_t rdi_1 = *(arg1 + 0x58)
uint64_t var_3a8 = 0

if (rbx_6 != 0)
    sub_1405a4c70(&var_3a8, rbx_6, 0)
    memcpy(var_3a8, rdi_1, rbx_6 * 2)
else
    int32_t var_39c_1 = 0

int32_t i_2
int32_t i_1 = i_2
uint64_t var_288
uint64_t rbx_7 = var_288

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_36 = *rbx_7
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        rbx_7 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_280 = 1
int32_t var_27c
sub_1405a4be0(&var_288, 1, var_27c)
uint64_t rbx_8 = var_288
*rbx_8 = 0
uint64_t r15 = var_3a8
*(rbx_8 + 8) = rbx_6

if (rbx_6 != 0)
    sub_1405a4c70(rbx_8, rbx_6, 0)
    memcpy(*rbx_8, r15, rbx_6 * 2)
else
    *(rbx_8 + 0xc) = 0

uint64_t rcx_40 = var_3a8

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

uint64_t var_2c8

if (&var_2c8 != arg1 + 0x28)
    int32_t rbx_9 = *(arg1 + 0x30)
    int64_t rdi_3 = *(arg1 + 0x28)
    int32_t var_2c0_1 = rbx_9
    int32_t var_2bc
    
    if (rbx_9 != 0 || var_2bc != 0)
        sub_1405a4c70(&var_2c8, rbx_9, var_2bc)
        memcpy(var_2c8, rdi_3, rbx_9 * 2)
    else
        int32_t var_2bc_1 = 0

int64_t var_2e8 = 0
int32_t var_2e0 = 0
uint128_t zmm6_1 = *arg3
int128_t zmm7 = *arg2
void*** rax_38 = sub_1405978f0(0x40, &var_2e8)

if (rax_38 != 0)
    *rax_38 = &data_142e49a10
    rax_38[1] = sub_1409f7aa0
    rax_38[2] = arg1
    *(rax_38 + 0x18) = zmm7
    *(rax_38 + 0x28) = zmm6_1
    rax_38[7] = sub_140a387b0()
    *rax_38 = &data_142e49a68

void var_250
void var_1a0
int64_t* rax_41 = (*(*r13 + 0x40))(r13, &var_250, sub_14181dbf0(&var_1a0, &var_2d8), &var_2e8)
int64_t* rcx_45 = rax_41[1]
int64_t rdx_28 = *rax_41
int64_t var_3b8 = rdx_28
int64_t* var_3b0 = rcx_45

if (rcx_45 != 0)
    rcx_45[1].d += 1
    rcx_45 = var_3b0

if (arg1 + 0x68 != &var_3b8)
    *(arg1 + 0x68) = rdx_28
    var_3b8 = 0
    sub_1405aeff0(arg1 + 0x70, &var_3b0)
    rcx_45 = var_3b0

if (rcx_45 != 0)
    rcx_45[1].d -= 1
    
    if (rcx_45[1].d == 1)
        int64_t* rbx_12 = var_3b0
        (**rbx_12)(rbx_12)
        int32_t rax_44 = *(rbx_12 + 0xc)
        *(rbx_12 + 0xc) -= 1
        
        if (rax_44 == 1)
            int64_t* rcx_48 = var_3b0
            (*(*rcx_48 + 8))(rcx_48, 1)

int64_t* var_248

if (var_248 != 0)
    var_248[1].d -= 1
    
    if (var_248[1].d == 1)
        (**var_248)(var_248)
        int32_t rsi_1 = *(var_248 + 0xc)
        *(var_248 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_248 + 8))(var_248, zx.q(rsi_1))

int64_t* rcx_51 = *(arg1 + 0x68)
(*(*rcx_51 + 8))(rcx_51)
sub_1409f6060(&var_2d8)
int64_t result = sub_1409f5e60(&var_3d8)
int64_t rcx_54 = var_3c8

if (rcx_54 != 0)
    result = sub_140a74f90(rcx_54)

__security_check_cookie(rax_1 ^ &var_3f8)
return result
