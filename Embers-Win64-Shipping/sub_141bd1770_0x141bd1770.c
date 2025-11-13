// 函数: sub_141bd1770
// 地址: 0x141bd1770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_458
int64_t rax_1 = __security_cookie ^ &var_458
int128_t zmm0 = *(arg1 + 0x658)
int64_t var_3a8 = *(arg1 + 0x5e8)
int64_t var_3a0 = *(arg1 + 0x5f0)
int64_t* rax_4 = *(arg1 + 0x5f8)
char var_360 = 1
int64_t var_358 = 0
int32_t var_350 = 0

if (rax_4 != 0)
    rax_4[1].d += 1

char var_388 = 1
int32_t var_390
int32_t rax_6 = var_390 ^ ((*(arg1 + 0x600) ^ var_390) & 0xf)
int64_t var_380 = 0
int32_t var_378 = 0
void*** rax_7 = sub_140a84c80(0, 0x30, 0)
void*** var_410 = rax_7
void*** rsi = rax_7

if (rax_7 != 0)
    *rsi = &data_142d57800
    sub_140d3a3a0(&rsi[1], arg1)
    rsi[2] = sub_141bb3ff0
    rsi[4] = sub_140a387b0()
    *rsi = &data_142d57858

void*** rax_9 = sub_140a84c80(0, 0x30, 0)
void*** var_420 = rax_9
void*** rdi = rax_9

if (rax_9 != 0)
    *rdi = &data_142dc0378
    sub_140d3a3a0(&rdi[1], arg1)
    rdi[2] = sub_141b8baf8
    rdi[4] = sub_140a387b0()
    *rdi = &data_142dc03d0

int32_t i_1 = *(arg1 + 0x6b8)
int64_t r15 = *(arg1 + 0x6b0)
void* var_400 = nullptr
int32_t i_2 = i_1

if (i_1 != 0)
    sub_140808f70(&var_400, i_1, 0)
    void* rax_11 = var_400
    int64_t* r15_1 = r15 - rax_11
    void* rcx_6 = rax_11 + 8
    int32_t i
    
    do
        *(rcx_6 - 8) = *(r15_1 + rcx_6 - 8)
        *rcx_6 = *(r15_1 + rcx_6)
        void* rax_14 = *(r15_1 + rcx_6 + 8)
        *(rcx_6 + 8) = rax_14
        
        if (rax_14 != 0)
            *(rax_14 + 8) += 1
        
        rcx_6 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    int32_t var_3f4_1 = 0

int64_t var_3d8 = *(arg1 + 0x690)
int64_t* rax_16 = *(arg1 + 0x698)

if (rax_16 != 0)
    rax_16[1].d += 1
    rdi = var_420
    rsi = var_410

int32_t var_3c8 = *(arg1 + 0x6a0)
int64_t var_3f0 = *(arg1 + 0x678)
int64_t* rax_19 = *(arg1 + 0x680)

if (rax_19 != 0)
    rax_19[1].d += 1
    rdi = var_420
    rsi = var_410

int32_t var_3e0 = *(arg1 + 0x688)
void var_328
int64_t* rax_21 = sub_141b7a100(&var_328)
sub_140627710(&rax_21[0x34], &var_3a8)
rax_21[0x37].d &= 0xfffffff0
rax_21[0x37].d |= rax_6 & 0xf
rax_21[0x38].b = var_388
sub_1407473e0(&rax_21[0x39], &var_380)
rax_21[0x4a].b = 1
*(rax_21 + 0x240) = zmm0
sub_140692f90(&rax_21[0x4b], &var_358)
rax_21[0x4d] = arg1 + 0x108
rax_21[0x4e] = arg1 + 0x380
sub_14065da90(&rax_21[0x4f], &var_3f0)

if (rax_19 != 0)
    rax_19[1].d -= 1
    
    if (rax_19[1].d == 1)
        (**rax_19)(rax_19)
        int32_t rax_29 = *(rax_19 + 0xc)
        *(rax_19 + 0xc) -= 1
        
        if (rax_29 == 1)
            (*(*rax_19 + 8))(rax_19, 1)
    
    rsi = var_410
    rdi = var_420

sub_14065da90(&rax_21[0x52], &var_3d8)

if (rax_16 != 0)
    rax_16[1].d -= 1
    
    if (rax_16[1].d == 1)
        (**rax_16)(rax_16)
        int32_t r15_2 = *(rax_16 + 0xc)
        *(rax_16 + 0xc) -= 1
        
        if (r15_2 == 1)
            (*(*rax_16 + 8))(rax_16, zx.q(r15_2))
    
    rsi = var_410
    rdi = var_420

rax_21[0x55].b = *(arg1 + 0x6a8)
*(rax_21 + 0x2a9) = *(arg1 + 0x6a9)
sub_141b85bc0(&rax_21[0x56], &var_400)
sub_14094b310(&var_400)

if (&var_420 != &rax_21[0x58])
    if (rdi != 0)
        (*rdi)[8](rdi, &rax_21[0x58])
    else if (rax_21[0x59].d != 0)
        int64_t* rcx_22 = rax_21[0x58]
        
        if (rcx_22 != 0)
            (*(*rcx_22 + 0x38))(rcx_22, 0)
            int64_t rcx_23 = rax_21[0x58]
            
            if (rcx_23 != 0)
                rax_21[0x58] = sub_140a84c80(rcx_23, 0, 0)
            
            rax_21[0x59].d = 0

if (&var_410 != &rax_21[0x5a])
    if (rsi != 0)
        (*rsi)[8](rsi, &rax_21[0x5a])
    else if (rax_21[0x5b].d != 0)
        int64_t* rcx_25 = rax_21[0x5a]
        
        if (rcx_25 != 0)
            (*(*rcx_25 + 0x38))(rcx_25, 0)
            int64_t rcx_26 = rax_21[0x5a]
            
            if (rcx_26 != 0)
                rax_21[0x5a] = sub_140a84c80(rcx_26, 0, 0)
            
            rax_21[0x5b].d = 0

void*** rax_42 = sub_141b77350()
void* var_3c0 = &rax_42[2]
sub_140918950(&var_3c0, &rax_42[2])
int64_t var_438 = 0x488
void var_428
void* var_3b0 = &var_428
void* var_348
void** rax_43 =
    sub_141b899d0(&var_3c0, &var_348, rax_21, sub_140e23ed0(&rax_42[2], "SInputKeySelector"))
int64_t* rbx_6 = rax_43[1]

if (rbx_6 != 0)
    rbx_6[1].d += 1

void var_338

if (arg1 + 0x6e0 == &var_338)
label_141bd1c4b:
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp4_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
else
    *(arg1 + 0x6e0) = *rax_43
    int64_t* r14_1 = *(arg1 + 0x6e8)
    
    if (rbx_6 == r14_1)
        goto label_141bd1c4b
    
    *(arg1 + 0x6e8) = rbx_6
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp8_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*r14_1 + 8))(r14_1, 1)

int64_t* var_340

if (var_340 != 0)
    var_340[1].d -= 1
    
    if (var_340[1].d == 1)
        (**var_340)(var_340)
        int32_t temp7_1 = *(var_340 + 0xc)
        *(var_340 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_340 + 8))(var_340, 1)

if (rax_42 != 0)
    rax_42[1].d -= 1
    
    if (rax_42[1].d == 1)
        (**rax_42)(rax_42)
        int32_t temp9_1 = *(rax_42 + 0xc)
        *(rax_42 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*rax_42)[1](rax_42, 1)

sub_141b84060(&var_328)

if (rdi != 0)
    (*rdi)[7](rdi, 0)
    int64_t rax_52 = sub_140a84c80(rdi, 0, 0)
    
    if (rax_52 != 0)
        sub_140a74f90(rax_52)

if (rsi != 0)
    (*rsi)[7](rsi, 0)
    int64_t rax_54 = sub_140a84c80(rsi, 0, 0)
    
    if (rax_54 != 0)
        sub_140a74f90(rax_54)

sub_140745b20(&var_380)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp11_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rax_4 + 8))(rax_4, 1)

sub_140745b20(&var_358)
int64_t* rbx_10 = *(arg1 + 0x6e8)

if (rbx_10 != 0)
    rbx_10[1].d += 1

*arg2 = *(arg1 + 0x6e0)
arg2[1] = rbx_10

if (rbx_10 != 0)
    rbx_10[1].d += 1
    
    if (rbx_10 != 0)
        rbx_10[1].d -= 1
        
        if (rbx_10[1].d == 1)
            (**rbx_10)(rbx_10)
            int32_t temp13_1 = *(rbx_10 + 0xc)
            *(rbx_10 + 0xc) -= 1
            
            if (temp13_1 == 1)
                int64_t r8_3 = *rbx_10
                (*(r8_3 + 8))(rbx_10, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_458)
return arg2
