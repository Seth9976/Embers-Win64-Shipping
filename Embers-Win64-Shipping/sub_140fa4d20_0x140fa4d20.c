// 函数: sub_140fa4d20
// 地址: 0x140fa4d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_928
int64_t rax_1 = __security_cookie ^ &var_928
*(arg1 + 0x390) = 0

if (*(arg2 + 0x1b0) != 0)
    int64_t* rcx = *(arg2 + 0x1a8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg2 + 0x1b0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg2 + 0x1a8)
        
        *(arg2 + 0x1a0) = (*(*rcx_1 + 0x48))(rcx_1)

int64_t* rbx_1 = data_143e243c8
int64_t* rcx_2
char const* const rdx

if (*(arg2 + 0x1a0) == 0)
    rdx = "TrashCan"
    void var_7a0
    rcx_2 = &var_7a0
else
    rdx = "TrashCan_Small"
    void var_7a8
    rcx_2 = &var_7a8

int64_t rax_7 = (*(*rbx_1 + 0x48))(rbx_1, *sub_140b58170(rcx_2, rdx, 1), 0)
char var_7c0 = 1
int64_t var_7c8 = rax_7
int64_t var_7b8 = 0
int64_t (* var_7f8)(void* arg1) = sub_140fb2d00
int32_t var_7b0 = 0
int32_t var_828 = 0x3f800000
char var_824 = 1
int64_t var_820 = 0
int32_t var_818 = 0
int32_t var_7f0 = 0
void var_758
int64_t* rax_8 = _vfprintf_p_l(&var_758, u"Delete Color", u"ColorTrashWidget")
int64_t var_858 = *rax_8
int64_t* rcx_6 = rax_8[1]

if (rcx_6 != 0)
    rcx_6[1].d += 1

int32_t var_848 = rax_8[2].d
char var_840 = 1
int64_t var_838 = 0
int32_t var_830 = 0
void var_590
int64_t* rax_10 = sub_140e4fb70(&var_590)
rax_10[0x34] = rax_7
rax_10[0x35].b = 1
sub_140692f90(&rax_10[0x36], &var_7b8)
void*** rax_11 = sub_140e48c50()
void*** var_888 = rax_11
void* var_890 = &rax_11[2]
sub_140918950(&var_890, &rax_11[2])
void var_8f8
void* var_880 = &var_8f8
int64_t var_908 = 0x3a8
void* var_768
void** rax_12 = sub_140e56930(&var_890, &var_768, rax_10, sub_140e23ed0(var_890, "SImage"))
int64_t* rbx_3 = rax_12[1]
void* var_810 = *rax_12
int64_t* var_808 = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1

void*** rax_13 = j_sub_140a82f30(0x88)
void*** rdi_2 = rax_13

if (rax_13 == 0)
    rdi_2 = nullptr
else
    sub_14068e490(rax_13)
    *rdi_2 = &data_142d8add0

rdi_2[4].b = 2
int32_t var_8e0 = 1
int32_t var_8d8 = 0x3f800000
char var_8d4 = 1
int64_t var_8d0 = 0
int32_t var_8c8 = 0
sub_140692f90(&var_8d0, &var_820)
rdi_2[5].d = var_8e0
*(rdi_2 + 0x34) = var_8d4
rdi_2[6].d = var_8d8
sub_140692f90(&rdi_2[7], &var_8d0)
sub_140745b20(&var_8d0)
sub_140693600(rdi_2, &var_810)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

void var_740
int64_t* rax_18 = sub_14068d420(&var_740)
int64_t rsi = sx.q(rax_18[0x35].d)
int32_t rcx_21 = (rsi + 1).d
rax_18[0x35].d = rcx_21

if (rcx_21 s> *(rax_18 + 0x1ac))
    sub_140638870(&rax_18[0x34])

*(rax_18[0x34] + (rsi << 3)) = rdi_2
void*** rax_20 = j_sub_140a82f30(0x2e8)
void*** rbx_4 = rax_20

if (rax_20 == 0)
    rbx_4 = nullptr
else
    rax_20[1].d = 1
    *(rax_20 + 0xc) = 1
    *rbx_4 = &data_142d8c590
    
    if (rbx_4 != -0x10)
        sub_14068e500(&rbx_4[2])

void*** var_8a0 = rbx_4
void* var_8a8 = &rbx_4[2]
sub_14065fa30(&var_8a8, &rbx_4[2])
void var_8f7
void* var_898 = &var_8f7
int64_t var_908_1 = 0x2d8
void* var_778
void** rax_21 = sub_140696920(&var_8a8, &var_778, rax_18, sub_140e23ed0(var_8a8, "SHorizontalBox"))
void* var_7e8 = *rax_21
void* rcx_28 = rax_21[1]
void* var_7e0 = rcx_28

if (rcx_28 != 0)
    *(rcx_28 + 8) += 1

void var_378
int64_t* rax_22 = sub_14068c640(&var_378)
sub_14065da90(rax_22, &var_858)
rax_22[3].b = var_840
sub_140692f90(&rax_22[4], &var_838)
int128_t var_798 = var_7f8.o
int64_t* var_8f0
int64_t* rax_23 = sub_140f95950(&var_8f0, arg1, &var_798)
int64_t var_878 = 0
char var_870 = 1
int64_t var_868 = 0
int32_t var_860 = 0
sub_140692f90(&var_868, rax_23)
rax_22[0x44] = var_878
rax_22[0x45].b = var_870
sub_1407473e0(&rax_22[0x46], &var_868)
sub_140745b20(&var_868)
int32_t var_8e8
int64_t* rax_27

if (var_8e8 == 0)
    rax_27 = var_8f0
label_140fa518e:
    
    if (rax_27 != 0)
        sub_140a74f90(rax_27)
else
    int64_t* rcx_37 = var_8f0
    
    if (rcx_37 != 0)
        (*(*rcx_37 + 0x38))(rcx_37, 0)
        rax_27 = var_8f0
        
        if (rax_27 != 0)
            rax_27 = sub_140a84c80(rax_27, 0, 0)
            var_8f0 = rax_27
        
        int32_t var_8e8_1 = 0
        goto label_140fa518e
void*** rax_28 = j_sub_140a82f30(0x4c8)
void*** rbx_5 = rax_28

if (rax_28 == 0)
    rbx_5 = nullptr
else
    rax_28[1].d = 1
    *(rax_28 + 0xc) = 1
    *rbx_5 = &data_142d8c5a0
    
    if (rbx_5 != -0x10)
        sub_140f20640(&rbx_5[2])

void*** var_8b8 = rbx_5
void* var_8c0 = &rbx_5[2]
sub_14065fa30(&var_8c0, &rbx_5[2])
void var_8f6
void* var_8b0 = &var_8f6
int64_t var_908_2 = 0x4b8
void* rax_29
int128_t zmm1_3
rax_29, zmm1_3 = sub_1406936e0(rax_22, &var_7e8, sub_140e23ed0(var_8c0, "SBorder"))
void* var_788
void** rax_30 = sub_140695920(&var_8c0, &var_788, rax_29, zmm1_3)
int64_t* rbx_6 = rax_30[1]
void* var_7d8 = *rax_30
int64_t* var_7d0 = rbx_6

if (rbx_6 != 0)
    rbx_6[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_7d8)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp4_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

sub_140669d70(&var_788)
sub_140669d70(&var_8c0)
sub_14068fed0(&var_378)
sub_140669d70(&var_778)
sub_140669d70(&var_8a8)
sub_140f9acc0(&var_740)
sub_140597060(&var_768)
Concurrency::task_completion_event<uint8_t>::~task_completion_event<uint8_t>(&var_890)
sub_140e536f0(&var_590)
sub_140745b20(&var_838)

if (rcx_6 != 0)
    rcx_6[1].d -= 1
    
    if (rcx_6[1].d == 1)
        (**rcx_6)(rcx_6)
        int32_t rax_35 = *(rcx_6 + 0xc)
        *(rcx_6 + 0xc) -= 1
        
        if (rax_35 == 1)
            (*(*rcx_6 + 8))(rcx_6, 1)

int64_t* var_750

if (var_750 != 0)
    var_750[1].d -= 1
    
    if (var_750[1].d == 1)
        (**var_750)(var_750)
        int32_t rdi_4 = *(var_750 + 0xc)
        *(var_750 + 0xc) -= 1
        
        if (rdi_4 == 1)
            (*(*var_750 + 8))(var_750, zx.q(rdi_4))

sub_140745b20(&var_820)
uint64_t result = sub_140745b20(&var_7b8)
__security_check_cookie(rax_1 ^ &var_928)
return result
