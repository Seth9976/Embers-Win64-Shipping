// 函数: sub_140eb3be0
// 地址: 0x140eb3be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6f8
int64_t rax_1 = __security_cookie ^ &var_6f8
*(arg1 + 0x4c8) = *(arg2 + 0x1a0)
void* rbx = *(arg2 + 0x1a8)
int64_t* rcx = *(arg1 + 0x4d0)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x4d0)
    
    if (rcx != 0)
        int32_t temp2_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x4d0) = rbx

int32_t rcx_1 = *(arg2 + 0x1b0)
*(arg1 + 0x4d8) = rcx_1
*(arg1 + 0x4dc) = 0
int64_t* rbx_1 = data_143e243c8
int64_t rdi = *rbx_1
void var_6c8
int64_t rax_5
char const* const rdx_1

if (rcx_1 == 0)
    rax_5 = (*(rdi + 0x48))(rbx_1, *sub_140b58170(&var_6c8, "Docking.Cross.DockLeft", 1), 0)
    rdx_1 = "Docking.Cross.DockLeft_Hovered"
else if (rcx_1 == 1)
    rax_5 = (*(rdi + 0x48))(rbx_1, *sub_140b58170(&var_6c8, "Docking.Cross.DockTop", 1), 0)
    rdx_1 = "Docking.Cross.DockTop_Hovered"
else if (rcx_1 == 2)
    rax_5 = (*(rdi + 0x48))(rbx_1, *sub_140b58170(&var_6c8, "Docking.Cross.DockRight", 1), 0)
    rdx_1 = "Docking.Cross.DockRight_Hovered"
else
    void* rcx_4 = &var_6c8
    
    if (rcx_1 == 3)
        rax_5 = (*(rdi + 0x48))(rbx_1, *sub_140b58170(rcx_4, "Docking.Cross.DockBottom", 1), 0)
        rdx_1 = "Docking.Cross.DockBottom_Hovered"
    else
        rax_5 = (*(rdi + 0x48))(rbx_1, *sub_140b58170(rcx_4, "Docking.Cross.DockCenter", 1), 0)
        rdx_1 = "Docking.Cross.DockCenter_Hovered"

*(arg1 + 0x4b8) = rax_5
int64_t* rbx_2 = data_143e243c8
*(arg1 + 0x4c0) = (*(*rbx_2 + 0x48))(rbx_2, *sub_140b58170(&var_6c8, rdx_1, 1), 0)
int32_t r14 = 0
int64_t* rbx_3 = data_143e243c8
int32_t rcx_15 = *(arg2 + 0x1b0)
int64_t (* var_6a8)(void* arg1) = sub_140ec00d0
int32_t var_6a0 = 0
int64_t* var_6b8
int64_t* rcx_18
char const* const rdx_7

if (rcx_15 == 0)
    rdx_7 = "Docking.Cross.BorderLeft"
    rcx_18 = &var_6b8
else if (rcx_15 == 1)
    rdx_7 = "Docking.Cross.BorderTop"
    void var_5c8
    rcx_18 = &var_5c8
else if (rcx_15 == 2)
    rdx_7 = "Docking.Cross.BorderRight"
    void var_5d0
    rcx_18 = &var_5d0
else if (rcx_15 == 3)
    rdx_7 = "Docking.Cross.BorderBottom"
    void var_5d8
    rcx_18 = &var_5d8
else
    rdx_7 = "Docking.Cross.BorderCenter"
    rcx_18 = &var_6c8

int64_t rax_13 = (*(*rbx_3 + 0x48))(rbx_3, *sub_140b58170(rcx_18, rdx_7, 1), 0)
int64_t* rbx_4 = data_143e243c8
int64_t var_660 = rax_13
char var_658 = 1
int64_t var_650 = 0
int32_t var_648 = 0
void var_5c0
int128_t* rax_15 =
    (*(*rbx_4 + 0x30))(rbx_4, *sub_140b58170(&var_5c0, "Docking.Cross.Tint", 1), 0, &data_1439ae6b8)
int64_t* rbx_5 = data_143e243c8
char var_630 = 0
char var_618 = 1
int128_t zmm0 = *rax_15
int64_t rdi_4 = *rbx_5
int128_t var_628 = zx.o(0)
int64_t var_610 = 0
int128_t var_640 = zmm0
int32_t var_608 = 0
void var_5b8
int128_t* rax_17 =
    (*(rdi_4 + 0x30))(rbx_5, *sub_140b58170(&var_5b8, "Docking.Cross.Tint", 1), 0, &data_1439ae6b8)
char var_5f0 = 1
int64_t var_5e8 = 0
int32_t var_5e0 = 0
int128_t var_600 = *rax_17
void var_5a0
int64_t* rax_18 = sub_140e4fb70(&var_5a0)
var_6a8.o = var_6a8.o
int64_t* rax_19 = sub_140e45b90(&var_6b8, arg1, &var_6a8)
int64_t var_698 = 0
char var_690 = 1
int64_t var_688 = 0
int32_t var_680 = 0
sub_140692f90(&var_688, rax_19)
rax_18[0x34] = var_698
rax_18[0x35].b = var_690
sub_1407473e0(&rax_18[0x36], &var_688)
sub_140745b20(&var_688)
int32_t var_6b0
int64_t* rax_23

if (var_6b0 == 0)
    rax_23 = var_6b8
label_140eb3f86:
    
    if (rax_23 != 0)
        sub_140a74f90(rax_23)
else
    int64_t* rcx_29 = var_6b8
    
    if (rcx_29 != 0)
        (*(*rcx_29 + 0x38))(rcx_29, 0)
        rax_23 = var_6b8
        
        if (rax_23 != 0)
            rax_23 = sub_140a84c80(rax_23, 0, 0)
            var_6b8 = rax_23
        
        int32_t var_6b0_1 = 0
        goto label_140eb3f86
void*** rax_24 = sub_140e48c50()
void* var_678 = &rax_24[2]
sub_140918950(&var_678, &rax_24[2])
int64_t var_6d8 = 0x3a8
void var_6c0
void* var_668 = &var_6c0
void* var_5b0
void** rax_25 = sub_140e56930(&var_678, &var_5b0, rax_18, sub_140e23ed0(&rax_24[2], "SImage"))
var_6a8 = *rax_25
void* rcx_36 = rax_25[1]
var_6a0.q = rcx_36

if (rcx_36 != 0)
    *(rcx_36 + 8) += 1

void var_388
int64_t* rax_26
int128_t zmm6_1
rax_26, zmm6_1 = sub_14068c640(&var_388)
rax_26[0x52].b = 1
*(rax_26 + 0x280) = zmm6_1
sub_140692f90(&rax_26[0x53], &var_5e8)
int128_t zmm1_1 = sub_140693390(&rax_26[0x55], &var_640)
rax_26[0x5a].b = var_618
sub_140692f90(&rax_26[0x5b], &var_610)
rax_26[0x44] = rax_13
rax_26[0x45].b = 1
sub_140692f90(&rax_26[0x46], &var_650)
int32_t rax_27 = 0

if (*(arg1 + 0x4d8) == 4)
    rax_27 = 2

rax_26[0x36].d = rax_27

if (*(arg1 + 0x4d8) == 4)
    r14 = 2

*(rax_26 + 0x1b4) = r14
sub_140f33710(arg1, sub_1406936e0(rax_26, &var_6a8, zmm1_1))
sub_14068fed0(&var_388)
int64_t* var_5a8

if (var_5a8 != 0)
    var_5a8[1].d -= 1
    
    if (var_5a8[1].d == 1)
        (**var_5a8)(var_5a8)
        int32_t temp7_1 = *(var_5a8 + 0xc)
        *(var_5a8 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_5a8 + 8))(var_5a8, 1)

if (rax_24 != 0)
    rax_24[1].d -= 1
    
    if (rax_24[1].d == 1)
        (**rax_24)(rax_24)
        int32_t temp9_1 = *(rax_24 + 0xc)
        *(rax_24 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*rax_24)[1](rax_24, 1)

void var_398
sub_140745b20(&var_398)
void var_3b0
sub_140745b20(&var_3b0)
int64_t* var_3c0

if (var_3c0 != 0)
    var_3c0[1].d -= 1
    
    if (var_3c0[1].d == 1)
        (**var_3c0)(var_3c0)
        int32_t temp11_1 = *(var_3c0 + 0xc)
        *(var_3c0 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_3c0 + 8))(var_3c0, 1)

void var_3f0
sub_140745b20(&var_3f0)
sub_140ddea30(&var_5a0)
sub_140745b20(&var_5e8)
sub_140745b20(&var_610)
int64_t* rbx_10 = var_628:8.q

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t temp12_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rbx_10 + 8))(rbx_10, 1)

uint64_t result = sub_140745b20(&var_650)
__security_check_cookie(rax_1 ^ &var_6f8)
return result
