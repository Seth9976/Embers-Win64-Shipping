// 函数: sub_140fa53b0
// 地址: 0x140fa53b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f08
int64_t rax_1 = __security_cookie ^ &var_f08
sub_1407473e0(&arg1[0xb7], arg2 + 0x1a0)
sub_1407473e0(&arg1[0xb9], arg2 + 0x1b0)

if (arg2 + 0x1c0 != &arg1[0xbb])
    int64_t* rcx_3
    
    if (*(arg2 + 0x1c8) != 0)
        rcx_3 = *(arg2 + 0x1c0)
    
    if (*(arg2 + 0x1c8) != 0 && rcx_3 != 0)
        (*(*rcx_3 + 0x40))(rcx_3, &arg1[0xbb])
    else if (arg1[0xbc].d != 0)
        int64_t* rcx_4 = arg1[0xbb]
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x38))(rcx_4, 0)
            int64_t rcx_5 = arg1[0xbb]
            
            if (rcx_5 != 0)
                arg1[0xbb] = sub_140a84c80(rcx_5, 0, 0)
            
            arg1[0xbc].d = 0

arg1[0xbd].d = *(arg2 + 0x1d0)
*(arg1 + 0x5ec) = *(arg2 + 0x1d4)
sub_140692f90(&arg1[0xbe], arg2 + 0x1d8)
int32_t var_ec0 = 0
char* (* var_ec8)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = sub_140fb3450
void var_c18
int64_t* rax_7 = _vfprintf_p_l(&var_c18, Hit Escape key to stop the eye dropper", EyeDroppperButton"
    )
int64_t var_db8 = *rax_7
int64_t* rcx_9 = rax_7[1]

if (rcx_9 != 0)
    rcx_9[1].d += 1

int32_t var_da8 = rax_7[2].d
char var_da0 = 1
int64_t var_d98 = 0
int32_t var_d90 = 0
void var_c30
int64_t* rax_9 = _vfprintf_p_l(&var_c30, &data_142eb65e8, u"EyeDroppperButton")
int64_t var_de8 = *rax_9
int64_t* rcx_12 = rax_9[1]

if (rcx_12 != 0)
    rcx_12[1].d += 1

int32_t var_dd8 = rax_9[2].d
char var_dd0 = 1
int64_t var_dc8 = 0
int32_t var_dc0 = 0
void var_4a8
int64_t* rax_11 = sub_14068d9d0(&var_4a8)
sub_14065da90(&rax_11[0x34], &var_de8)
rax_11[0x37].b = var_dd0
sub_140692f90(&rax_11[0x38], &var_dc8)
sub_14065da90(rax_11, &var_db8)
rax_11[3].b = var_da0
sub_140692f90(&rax_11[4], &var_d98)
int128_t var_c98 = var_ec8.o
int64_t* var_e98
int64_t* rax_12 = sub_140f94b80(&var_e98, arg1, &var_c98)
int16_t var_e78 = 0x119
int64_t var_e70 = 0
int32_t var_e68 = 0
sub_1407473e0(&var_e70, rax_12)
rax_11[0xf].b = var_e78.b
*(rax_11 + 0x79) = var_e78:1.b
sub_1407473e0(&rax_11[0x10], &var_e70)
sub_140745b20(&var_e70)
int32_t var_e90
int64_t* rax_16

if (var_e90 == 0)
    rax_16 = var_e98
label_140fa5644:
    
    if (rax_16 != 0)
        sub_140a74f90(rax_16)
else
    int64_t* rcx_24 = var_e98
    
    if (rcx_24 != 0)
        (*(*rcx_24 + 0x38))(rcx_24, 0)
        rax_16 = var_e98
        
        if (rax_16 != 0)
            rax_16 = sub_140a84c80(rax_16, 0, 0)
            var_e98 = rax_16
        
        int32_t var_e90_1 = 0
        goto label_140fa5644
void*** rax_17 = j_sub_140a82f30(0x7a8)
void*** rdi_1 = rax_17

if (rax_17 == 0)
    rdi_1 = nullptr
else
    rax_17[1].d = 1
    *(rax_17 + 0xc) = 1
    *rdi_1 = &data_142d8b060
    
    if (rdi_1 != -0x10)
        sub_140f66da0(&rdi_1[2])

void* var_d88 = &rdi_1[2]
sub_14065fa30(&var_d88, &rdi_1[2])
int64_t var_ee8 = 0x798
void var_ed8
void* var_d78 = &var_ed8
void* var_c58
void** rax_18 = sub_140697520(&var_d88, &var_c58, rax_11, sub_140e23ed0(&rdi_1[2], "STextBlock"))
int64_t* rsi_1 = rax_18[1]
void* var_eb8 = *rax_18
int64_t* var_eb0 = rsi_1

if (rsi_1 != 0)
    rsi_1[1].d += 1

int32_t var_ec0_1 = 0
void* (* var_ec8_1)(void* arg1, void* arg2, int512_t arg3 @ zmm1) = sub_140fb33e0
void var_c48
int64_t* rax_19 = _vfprintf_p_l(&var_c48, 
    Activates the eye-dropper for selecting a colored pixel from any window.", EyeDroppperButton")
int64_t var_e18 = *rax_19
int64_t* rcx_34 = rax_19[1]

if (rcx_34 != 0)
    rcx_34[1].d += 1
    rsi_1 = var_eb0

int64_t* rbx_2 = data_143e243c8
int32_t var_e08 = rax_19[2].d
char var_e00 = 1
int64_t rdi_2 = *rbx_2
int64_t var_df8 = 0
int32_t var_df0 = 0
void var_ca0
int64_t rax_22 = (*(rdi_2 + 0x48))(rbx_2, *sub_140b58170(&var_ca0, "ColorPicker.EyeDropper", 1), 0)
char var_d48 = 1
int64_t var_d50 = rax_22
int64_t var_d40 = 0
int32_t var_d38 = 0
void var_a50
int64_t* rax_23 = sub_140e4fb70(&var_a50)
rax_23[0x34] = rax_22
rax_23[0x35].b = 1
sub_140692f90(&rax_23[0x36], &var_d40)
sub_14065da90(rax_23, &var_e18)
rax_23[3].b = var_e00
sub_140692f90(&rax_23[4], &var_df8)
int128_t var_c88 = var_ec8_1.o
int64_t* var_e88
int64_t* rax_24 = sub_140f95a90(&var_e88, arg1, &var_c88)
char var_d08 = 1
int128_t var_d30
__builtin_memcpy(&var_d30, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
int64_t var_d00 = 0
int128_t var_d18 = zx.o(0)
int32_t var_cf8 = 0
sub_140692f90(&var_d00, rax_24)
sub_140693390(&rax_23[0x38], &var_d30)
rax_23[0x3d].b = var_d08
sub_1407473e0(&rax_23[0x3e], &var_d00)
sub_140745b20(&var_d00)
int64_t* rbx_4 = var_d18:8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp2_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int32_t var_e80
int64_t* rax_29

if (var_e80 == 0)
    rax_29 = var_e88
label_140fa591a:
    
    if (rax_29 != 0)
        sub_140a74f90(rax_29)
else
    int64_t* rcx_49 = var_e88
    
    if (rcx_49 != 0)
        (*(*rcx_49 + 0x38))(rcx_49, 0)
        rax_29 = var_e88
        
        if (rax_29 != 0)
            rax_29 = sub_140a84c80(rax_29, 0, 0)
            var_e88 = rax_29
        
        int32_t var_e80_1 = 0
        goto label_140fa591a
void*** rax_30 = sub_140e48c50()
void*** var_e28 = rax_30
void* var_e30 = &rax_30[2]
sub_140918950(&var_e30, &rax_30[2])
void var_ed7
void* var_e20 = &var_ed7
int64_t var_ee8_1 = 0x3a8
void* var_c68
void** rax_31 = sub_140e56930(&var_e30, &var_c68, rax_23, sub_140e23ed0(var_e30, "SImage"))
int64_t* r14 = rax_31[1]
void* var_d70 = *rax_31
int64_t* var_d68 = r14

if (r14 != 0)
    r14[1].d += 1

char* (* var_e58)(void* arg1, char* arg2) = sub_140fbd370
int128_t var_cc8
__builtin_memcpy(&var_cc8, "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 
    0x11)
int32_t var_e50 = 0
int64_t var_cb0 = 0
int32_t var_ca8 = 0
void*** rax_32 = j_sub_140a82f30(0x50)
void*** rdi_4 = rax_32

if (rax_32 == 0)
    rdi_4 = nullptr
else
    sub_140ddb700(rax_32)
    *rdi_4 = &data_142ec8fc8
    rdi_4[4].d = 0
    *(rdi_4 + 0x24) = 0
    rdi_4[5] = 0
    rdi_4[6] = 0
    rdi_4[7].b = 1
    rdi_4[8] = 0
    rdi_4[9].d = 0

int128_t zmm6 = data_142ef1850
int128_t var_cf0
__builtin_memcpy(&var_cf0, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x01", 
    0x11)
int64_t var_cd8 = 0
int32_t var_cd0 = 0
void*** rax_33 = j_sub_140a82f30(0x50)
void*** rbx_5 = rax_33

if (rax_33 == 0)
    rbx_5 = nullptr
else
    sub_140ddb700(rax_33)
    *rbx_5 = &data_142ec8fc8
    rbx_5[4].d = 0
    *(rbx_5 + 0x24) = 0
    *(rbx_5 + 0x2c) = 0
    *(rbx_5 + 0x34) = 0
    rbx_5[7].b = 1
    rbx_5[8] = 0
    rbx_5[9].d = 0

rbx_5[7].b = 1
*(rbx_5 + 0x28) = zmm6
sub_140692f90(&rbx_5[8], &var_cd8)
sub_140745b20(&var_cd8)
void* rax_34 = sub_140de1aa0(rbx_5, &var_d70)
void var_c00
int64_t* rax_35 = sub_140dd5d30(&var_c00)
int64_t r13 = sx.q(rax_35[0x35].d)
int32_t rcx_62 = (r13 + 1).d
rax_35[0x35].d = rcx_62

if (rcx_62 s> *(rax_35 + 0x1ac))
    sub_1405a4d70(&rax_35[0x34])

*(rax_35[0x34] + (r13 << 3)) = rax_34
void* rax_37 = sub_140de1aa0(rdi_4, &var_eb8)
int64_t rdi_5 = sx.q(rax_35[0x35].d)
int32_t rcx_65 = (rdi_5 + 1).d
rax_35[0x35].d = rcx_65

if (rcx_65 s> *(rax_35 + 0x1ac))
    sub_1405a4d70(&rax_35[0x34])

*(rax_35[0x34] + (rdi_5 << 3)) = rax_37
void*** rax_39 = j_sub_140a82f30(0x2e0)
void*** rbx_7 = rax_39

if (rax_39 == 0)
    rbx_7 = nullptr
else
    rax_39[1].d = 1
    *(rax_39 + 0xc) = 1
    *rbx_7 = &data_142ecd308
    
    if (rbx_7 != -0x10)
        sub_140dde040(&rbx_7[2])

void*** var_e40 = rbx_7
void* var_e48 = &rbx_7[2]
sub_140918950(&var_e48, &rbx_7[2])
void var_ed6
void* var_e38 = &var_ed6
int64_t var_ee8_2 = 0x2d0
void* var_c78
void** rax_40 = sub_140de49c0(&var_e48, &var_c78, rax_35, sub_140e23ed0(var_e48, "SOverlay"))
void* var_d60 = *rax_40
void* rcx_72 = rax_40[1]
void* var_d58 = rcx_72

if (rcx_72 != 0)
    *(rcx_72 + 8) += 1

void var_838
int64_t* rax_41
int128_t zmm1_3
int128_t zmm7
rax_41, zmm1_3, zmm7 = sub_14068cc20(&var_838)
rax_41[0x3b].b = 1
*(rax_41 + 0x1c8) = zmm7
sub_140692f90(&rax_41[0x3c], &var_cb0)
var_e58.o = var_e58.o
int64_t* var_ea8
sub_140692f90(&rax_41[0x44], sub_140f94e00(&var_ea8, arg1, &var_e58))
int32_t var_ea0
int64_t* rax_44

if (var_ea0 == 0)
    rax_44 = var_ea8
label_140fa5c74:
    
    if (rax_44 != 0)
        zmm1_3 = sub_140a74f90(rax_44)
else
    int64_t* rcx_77 = var_ea8
    
    if (rcx_77 != 0)
        (*(*rcx_77 + 0x38))(rcx_77, 0)
        rax_44 = var_ea8
        
        if (rax_44 != 0)
            rax_44 = sub_140a84c80(rax_44, 0, 0)
            var_ea8 = rax_44
        
        int32_t var_ea0_1 = 0
        goto label_140fa5c74
sub_140eed300(arg1, sub_1406936e0(rax_41, &var_d60, zmm1_3))
sub_1406905f0(&var_838)
sub_140597060(&var_c78)
Concurrency::task_completion_event<uint8_t>::~task_completion_event<uint8_t>(&var_e48)
sub_140f9acf0(&var_c00)
sub_140745b20(&var_cb0)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp4_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*r14 + 8))(r14, 1)

sub_140597060(&var_c68)
Concurrency::task_completion_event<uint8_t>::~task_completion_event<uint8_t>(&var_e30)
sub_140e536f0(&var_a50)
sub_140745b20(&var_d40)
sub_140745b20(&var_df8)

if (rcx_34 != 0)
    rcx_34[1].d -= 1
    
    if (rcx_34[1].d == 1)
        (**rcx_34)(rcx_34)
        int32_t rax_50 = *(rcx_34 + 0xc)
        *(rcx_34 + 0xc) -= 1
        
        if (rax_50 == 1)
            (*(*rcx_34 + 8))(rcx_34, 1)
    
    rsi_1 = var_eb0

int64_t* var_c40

if (var_c40 != 0)
    var_c40[1].d -= 1
    
    if (var_c40[1].d == 1)
        (**var_c40)(var_c40)
        int32_t rax_54 = *(var_c40 + 0xc)
        *(var_c40 + 0xc) -= 1
        
        if (rax_54 == 1)
            (*(*var_c40 + 8))(var_c40, 1)
    
    rsi_1 = var_eb0

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp7_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* var_c50

if (var_c50 != 0)
    var_c50[1].d -= 1
    
    if (var_c50[1].d == 1)
        (**var_c50)(var_c50)
        int32_t temp9_1 = *(var_c50 + 0xc)
        *(var_c50 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_c50 + 8))(var_c50, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp10_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_1406913d0(&var_4a8)
sub_140745b20(&var_dc8)

if (rcx_12 != 0)
    rcx_12[1].d -= 1
    
    if (rcx_12[1].d == 1)
        (**rcx_12)(rcx_12)
        int32_t rax_64 = *(rcx_12 + 0xc)
        *(rcx_12 + 0xc) -= 1
        
        if (rax_64 == 1)
            (*(*rcx_12 + 8))(rcx_12, 1)

int64_t* var_c28

if (var_c28 != 0)
    var_c28[1].d -= 1
    
    if (var_c28[1].d == 1)
        (**var_c28)(var_c28)
        int32_t rax_68 = *(var_c28 + 0xc)
        *(var_c28 + 0xc) -= 1
        
        if (rax_68 == 1)
            (*(*var_c28 + 8))(var_c28, 1)

int32_t result = sub_140745b20(&var_d98)

if (rcx_9 != 0)
    result = rcx_9[1].d
    rcx_9[1].d -= 1
    
    if (result == 1)
        (**rcx_9)(rcx_9)
        result = *(rcx_9 + 0xc)
        *(rcx_9 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rcx_9 + 8))(rcx_9, 1)

int64_t* var_c10

if (var_c10 != 0)
    result = var_c10[1].d
    var_c10[1].d -= 1
    
    if (result == 1)
        result = (**var_c10)(var_c10)
        int32_t rdi_6 = *(var_c10 + 0xc)
        *(var_c10 + 0xc) -= 1
        
        if (rdi_6 == 1)
            result = (*(*var_c10 + 8))(var_c10, zx.q(rdi_6))

__security_check_cookie(rax_1 ^ &var_f08)
return result
