// 函数: sub_14069a8f0
// 地址: 0x14069a8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1db0)
void var_1de8
int64_t rax_1 = __security_cookie ^ &var_1de8
int32_t var_1d78 = 0
int64_t var_18e8
sub_14068dfc0(&var_18e8)
int32_t rdi = arg5[1].d
int64_t var_1db0 = 0
int64_t var_1da8 = 0
int32_t var_1db4_1
void* const var_1d98
int32_t var_1d90
void* const var_1d70
void* const var_1d68
int32_t rsi_2
int32_t rdi_2
int32_t r12
void* const r14

if (rdi s> 1)
    int64_t rbx_2 = *arg5
    rsi_2 = 0
    var_1d68 = nullptr
    sub_1405a4c70(&var_1d68, rdi, 0)
    r14 = var_1d68
    var_1d70 = r14
    memcpy(r14, rbx_2, rdi * 2)
    rdi_2 = rdi
    r12 = rdi_2
    var_1d68 = nullptr
    var_1db4_1 = rdi_2
else
    int32_t rax_2 = arg3[1].d
    int32_t rbx_1 = *(arg1 + 0x110)
    int32_t rdi_1 = rax_2 - 1
    
    if (rax_2 == 0)
        rdi_1 = 0
    
    int32_t var_1d8c_1
    int32_t rax_4
    int64_t rsi_1
    
    if (rbx_1 != 0 || rdi_1 == 0xffffffff)
        rsi_1 = *(arg1 + 0x108)
        rax_4 = rdi_1 + 1
        var_1d98 = nullptr
        var_1d90 = rbx_1
        
        if (rbx_1 != 0 || rax_4 != 0)
        label_14069a9d5:
            sub_1405a4c70(&var_1d98, rbx_1 + rax_4, 0)
            memcpy(var_1d98, rsi_1, rbx_1 * 2)
            rsi_2 = 0
        else
            rsi_2 = 0
            var_1d8c_1 = 0
    else
        rsi_1 = *(arg1 + 0x108)
        rax_4 = rdi_1 + 2
        var_1d98 = nullptr
        var_1d90 = rbx_1
        
        if (rax_4 != 0)
            goto label_14069a9d5
        
        rsi_2 = 0
        var_1d8c_1 = 0
    sub_140a2cf70(&var_1d98, *arg3, rdi_1)
    rdi_2 = var_1d90
    r14 = var_1d98
    r12 = rdi_2
    var_1d70 = r14
    var_1d98 = nullptr
    var_1d90.q = 0
    var_1db4_1 = rdi_2

int64_t* var_1ce8
int64_t var_1cc0
int64_t var_18d8
int64_t var_1868

if (arg4 == 0)
    void var_1ca0
    int32_t* rax_6 = sub_14062d6e0(&data_143cdd1e0, &var_1ca0, sub_140b19c30(&var_1ce8, arg3, 0))
    int64_t* rcx_8 = var_1ce8
    int32_t rbx_4 = *rax_6
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    if (rbx_4 == 0xffffffff)
        int32_t r8_11 = var_1da8:4.d
        int32_t var_18d0
        var_1da8.d = var_18d0
        
        if (var_18d0 != 0 || r8_11 != 0)
            sub_1405a4c70(&var_1db0, var_18d0, r8_11)
            memcpy(var_1db0, var_18d8, var_18d0 * 2)
        else
            var_1da8:4.d = 0
    else
        int32_t var_1d38
        sub_14062d6e0(&data_143cdd1e0, &var_1d38, sub_140b19c30(&var_1cc0, arg3, 0))
        int64_t rax_8 = sx.q(var_1d38)
        int64_t* rax_10
        
        if (rax_8.d == 0xffffffff)
            rax_10 = nullptr
        label_14069ab4e:
            int32_t rbx_5 = rax_10[1].d
            int64_t rsi_3 = *rax_10
            int32_t r8_8 = var_1da8:4.d
            var_1da8.d = rbx_5
            
            if (rbx_5 != 0 || r8_8 != 0)
                sub_1405a4c70(&var_1db0, rbx_5, r8_8)
                memcpy(var_1db0, rsi_3, rbx_5 * 2)
                rsi_2 = 0
            else
                rsi_2 = 0
                var_1da8:4.d = 0
        else
            void* rcx_10 = data_143cdd1e0 + rax_8 * 0x28
            rax_10 = rcx_10 + 0x10
            
            if (rcx_10 == 0)
                rax_10 = nullptr
            
            if (&var_1db0 != rax_10)
                goto label_14069ab4e
        int64_t rcx_13 = var_1cc0
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
else
    int32_t r8_5 = var_1da8:4.d
    int32_t var_1860
    var_1da8.d = var_1860
    
    if (var_1860 != 0 || r8_5 != 0)
        sub_1405a4c70(&var_1db0, var_1860, r8_5)
        memcpy(var_1db0, var_1868, var_1860 * 2)
    else
        var_1da8:4.d = 0

void* var_1d58 = nullptr
int32_t var_1d50 = r12
int128_t zmm0 = data_14399f5e0
int32_t rbx_6

if (r12 != 0)
    sub_1405a4c70(&var_1d58, r12, 0)
    rbx_6 = r12
    memcpy(var_1d58, r14, rbx_6 * 2)
else
    int32_t var_1d4c_1 = 0
    rbx_6 = rdi_2

int64_t* var_1d88
void* const var_1d48
int32_t var_1d40
int64_t* var_1d08
int64_t var_1cf8
int64_t var_1920
int64_t var_1910
int32_t rax_12
int64_t* rdx_18

if (sub_140699eb0(&var_1920, &var_1d58)[1].d s> 1)
    var_1d48 = nullptr
    var_1d40 = r12
    
    if (r12 != 0)
        sub_1405a4c70(&var_1d48, r12, 0)
        memcpy(var_1d48, r14, rbx_6 * 2)
    else
        int32_t var_1d3c_1 = 0
    
    int64_t* rax_13 = sub_140699eb0(&var_1910, &var_1d48)
    var_1d88 = nullptr
    int32_t rdx_22 = 0
    int32_t var_1d7c_1 = 0
    int64_t* rdi_3 = nullptr
    int32_t var_1d80_1 = 0
    int32_t rcx_22 = rax_13[1].d
    int32_t rbx_7 = rcx_22 - 1
    
    if (rcx_22 == 0)
        rbx_7 = 0
    
    if (rbx_7 + 6 s> 0)
        sub_1405947f0(&var_1d88, rbx_7 + 6)
        rdx_22 = var_1d80_1
        rsi_2 = var_1d7c_1
        rdi_3 = var_1d88
    
    int32_t r14_2 = rdx_22 + 6 + rbx_7
    
    if (r14_2 s> rsi_2)
        sub_140594770(&var_1d88)
        rsi_2 = var_1d7c_1
        rdi_3 = var_1d88
    
    *rdi_3 = 0x20201400200020
    rdi_3[1].w = 0x20
    int64_t rbx_8 = sx.q(rbx_7)
    memcpy(rdi_3 + 0xa, *rax_13, rbx_8.d * 2)
    r12 = var_1db4_1
    rdx_18 = &var_1d08
    *(rdi_3 + (rbx_8 << 1) + 0xa) = 0
    rax_12 = 0x18
    int32_t var_1cfc_1 = rsi_2
    var_1d08 = rdi_3
    int32_t var_1d00_1 = r14_2
else
    var_1cf8 = 0
    rdx_18 = &var_1cf8
    int64_t var_1cf0_1 = 0
    rax_12 = 4

int64_t var_1b28
sub_140a9fca0(&var_1b28, rdx_18)
int64_t var_1c00 = var_1b28
void* var_1b20
void* var_1bf8 = var_1b20

if (var_1b20 != 0)
    *(var_1b20 + 8) += 1

int128_t zmm0_2 = data_143cdda20
int128_t zmm1 = data_143cdda30
int32_t var_1b18
int32_t var_1bf0 = var_1b18
int64_t var_1ad0 = data_143cdda10
int64_t var_1ac8 = data_143cdda18
int64_t var_1aa0 = data_143cdda40
void* rax_22 = data_143cdda48
char var_1be8 = 1
int64_t* var_1be0 = nullptr
int32_t var_1bd8 = 0
void* var_1a98 = rax_22
int128_t var_1ac0 = zmm0_2
int128_t var_1ab0 = zmm1

if (rax_22 != 0)
    *(rax_22 + 8) += 1

zmm0_2 = data_14399f5e0
int64_t var_1a90 = data_143cdda50
int32_t var_1a88 = data_143cdda58
char var_1a84 = data_143cdda5c
char var_1a80 = 1
int64_t var_1a78 = 0
int32_t var_1a70 = 0
int64_t var_1b40
sub_140a9fca0(&var_1b40, arg3)
int64_t var_1c30 = var_1b40
void* var_1b38
void* var_1c28 = var_1b38

if (var_1b38 != 0)
    *(var_1b38 + 8) += 1

int128_t zmm0_3 = data_143cdda20
int128_t zmm1_1 = data_143cdda30
int32_t var_1b30
int32_t var_1c20 = var_1b30
int64_t var_1a00 = data_143cdda10
int64_t var_19f8 = data_143cdda18
int64_t var_19d0 = data_143cdda40
void* rax_32 = data_143cdda48
char var_1c18 = 1
int64_t* var_1c10 = nullptr
int32_t var_1c08 = 0
void* var_19c8 = rax_32
int128_t var_19f0 = zmm0_3
int128_t var_19e0 = zmm1_1

if (rax_32 != 0)
    *(rax_32 + 8) += 1

int64_t var_19c0 = data_143cdda50
int32_t var_19b8 = data_143cdda58
char var_19b4 = data_143cdda5c
char var_19b0 = 1
int64_t var_19a8 = 0
int32_t var_19a0 = 0
int128_t var_1800 = data_14399f5e0
int64_t var_1b58
sub_140a9fca0(&var_1b58, &var_1db0)
int64_t var_1c60 = var_1b58
void* var_1b50
void* var_1c58 = var_1b50

if (var_1b50 != 0)
    *(var_1b50 + 8) += 1

int128_t zmm0_4 = data_143cddac0
int128_t zmm1_2 = data_143cddad0
int32_t var_1b48
int32_t var_1c50 = var_1b48
int64_t var_1a68 = data_143cddab0
int64_t var_1a60 = data_143cddab8
int64_t var_1a38 = data_143cddae0
void* rax_42 = data_143cddae8
char var_1c48 = 1
int64_t* var_1c40 = nullptr
int32_t var_1c38 = 0
void* var_1a30 = rax_42
int128_t var_1a58 = zmm0_4
int128_t var_1a48 = zmm1_2

if (rax_42 != 0)
    *(rax_42 + 8) += 1

int64_t var_1a28 = data_143cddaf0
int32_t var_1a20 = data_143cddaf8
char var_1a1c = data_143cddafc
int32_t var_1948 = 0x41f00000
char var_1a18 = 1
int64_t var_1a10 = 0
int32_t var_1a08 = 0
sub_140acc920(&var_1cc0, &data_14399f630)
char var_1b00 = 0
char var_1ae8 = 1
int128_t var_1b10 = var_1cc0.o
int64_t* var_1ae0 = nullptr
int32_t var_1cd8 = 0x41a00000
int128_t var_1af8 = zx.o(0)
int32_t var_1ad8 = 0
char var_1cd4 = 1
int64_t* var_1cd0 = nullptr
int32_t var_1cc8 = 0
void var_4a0
int64_t* rax_46 = sub_14068d9d0(&var_4a0)
sub_140692eb0(&rax_46[0x3b], &var_1ad0)
sub_14065da90(&rax_46[0x34], &var_1c00)
rax_46[0x37].b = var_1be8

if (&var_1be0 != &rax_46[0x38])
    int64_t* rcx_34
    
    if (var_1bd8 != 0)
        rcx_34 = var_1be0
    
    if (var_1bd8 != 0 && rcx_34 != 0)
        (*(*rcx_34 + 0x40))(rcx_34, &rax_46[0x38])
    else if (rax_46[0x39].d != 0)
        int64_t* rcx_35 = rax_46[0x38]
        
        if (rcx_35 != 0)
            (*(*rcx_35 + 0x38))(rcx_35, 0)
            int64_t rcx_36 = rax_46[0x38]
            
            if (rcx_36 != 0)
                rax_46[0x38] = sub_140a84c80(rcx_36, 0, 0)
            
            rax_46[0x39].d = 0

rax_46[0x54].d = 0x3f800000
*(rax_46 + 0x2a4) = 0x3f800000
rax_46[0x55].b = 1
void var_1cb0

if (&var_1cb0 != &rax_46[0x56] && rax_46[0x57].d != 0)
    int64_t* rcx_37 = rax_46[0x56]
    
    if (rcx_37 != 0)
        (*(*rcx_37 + 0x38))(rcx_37, 0)
        int64_t rcx_38 = rax_46[0x56]
        
        if (rcx_38 != 0)
            rax_46[0x56] = sub_140a84c80(rcx_38, 0, 0)
        
        rax_46[0x57].d = 0

rax_46[0x12].d = 0x3f000000
rax_46[0x5a].b = 1
*(rax_46 + 0x2c0) = zmm0
void var_1810

if (&var_1810 != &rax_46[0x5b] && rax_46[0x5c].d != 0)
    int64_t* rcx_39 = rax_46[0x5b]
    
    if (rcx_39 != 0)
        (*(*rcx_39 + 0x38))(rcx_39, 0)
        int64_t rcx_40 = rax_46[0x5b]
        
        if (rcx_40 != 0)
            rax_46[0x5b] = sub_140a84c80(rcx_40, 0, 0)
        
        rax_46[0x5c].d = 0

void*** rax_54 = j_sub_140a82f30(0x7a8)
void*** rsi_4 = rax_54

if (rax_54 == 0)
    rsi_4 = nullptr
else
    rax_54[1].d = 1
    *(rax_54 + 0xc) = 1
    *rax_54 = &data_142d8b060
    
    if (rax_54 != -0x10)
        sub_140f66da0(&rax_54[2])

void*** var_1c70 = rsi_4
void* var_1c78 = &rsi_4[2]
sub_14065fa30(&var_1c78, &rsi_4[2])
int64_t var_1dc8 = 0x798
void var_1da0
void* var_1c68 = &var_1da0
void* var_1900
void** rax_55 = sub_140697520(&var_1c78, &var_1900, rax_46, sub_140e23ed0(&rsi_4[2], "STextBlock"))
int64_t* rbx_14 = rax_55[1]
var_1d48 = *rax_55
var_1d40.q = rbx_14

if (rbx_14 != 0)
    rbx_14[1].d += 1

void*** rax_56 = j_sub_140a82f30(0x88)
void*** rdi_5 = rax_56

if (rax_56 == 0)
    rdi_5 = nullptr
else
    sub_14068e490(rax_56)
    *rdi_5 = &data_142d8add0

void* rax_57 = sub_140698b50(rdi_5)
sub_140693600(rax_57, &var_1d48)

if (rbx_14 != 0)
    rbx_14[1].d -= 1
    
    if (rbx_14[1].d == 1)
        int64_t rdx_33 = *rbx_14
        (*rdx_33)(rbx_14, rdx_33)
        int32_t temp1_1 = *(rbx_14 + 0xc)
        *(rbx_14 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_14 + 8))(rbx_14, 1)

void var_8e8
int64_t* rax_59 = sub_14068d9d0(&var_8e8)
sub_140692eb0(&rax_59[0x3b], &var_1a00)
sub_14065da90(&rax_59[0x34], &var_1c30)
rax_59[0x37].b = var_1c18

if (&var_1c10 != &rax_59[0x38])
    int64_t* rcx_55
    
    if (var_1c08 != 0)
        rcx_55 = var_1c10
    
    if (var_1c08 != 0 && rcx_55 != 0)
        (*(*rcx_55 + 0x40))(rcx_55, &rax_59[0x38])
    else if (rax_59[0x39].d != 0)
        int64_t* rcx_56 = rax_59[0x38]
        
        if (rcx_56 != 0)
            (*(*rcx_56 + 0x38))(rcx_56, 0)
            int64_t rcx_57 = rax_59[0x38]
            
            if (rcx_57 != 0)
                rax_59[0x38] = sub_140a84c80(rcx_57, 0, 0)
            
            rax_59[0x39].d = 0

rax_59[0x54].d = 0x3f800000
*(rax_59 + 0x2a4) = 0x3f800000
rax_59[0x55].b = 1

if (&var_1cb0 != &rax_59[0x56] && rax_59[0x57].d != 0)
    int64_t* rcx_58 = rax_59[0x56]
    
    if (rcx_58 != 0)
        (*(*rcx_58 + 0x38))(rcx_58, 0)
        int64_t rcx_59 = rax_59[0x56]
        
        if (rcx_59 != 0)
            rax_59[0x56] = sub_140a84c80(rcx_59, 0, 0)
        
        rax_59[0x57].d = 0

rax_59[0x5a].b = 1
*(rax_59 + 0x2c0) = zmm0_2
void var_17c0

if (&var_17c0 != &rax_59[0x5b] && rax_59[0x5c].d != 0)
    int64_t* rcx_60 = rax_59[0x5b]
    
    if (rcx_60 != 0)
        (*(*rcx_60 + 0x38))(rcx_60, 0)
        int64_t rcx_61 = rax_59[0x5b]
        
        if (rcx_61 != 0)
            rax_59[0x5b] = sub_140a84c80(rcx_61, 0, 0)
        
        rax_59[0x5c].d = 0

void*** rax_67 = j_sub_140a82f30(0x7a8)
void*** rdi_6 = rax_67

if (rax_67 == 0)
    rdi_6 = nullptr
else
    rax_67[1].d = 1
    *(rax_67 + 0xc) = 1
    *rax_67 = &data_142d8b060
    
    if (rax_67 != -0x10)
        sub_140f66da0(&rax_67[2])

void*** var_1bc8 = rdi_6
void* var_1bd0 = &rdi_6[2]
sub_14065fa30(&var_1bd0, &rdi_6[2])
int64_t var_1dc8_1 = 0x798
void var_1d9f
void* var_1bc0 = &var_1d9f
void* var_1930
void** rax_68 = sub_140697520(&var_1bd0, &var_1930, rax_59, sub_140e23ed0(&rdi_6[2], "STextBlock"))
int64_t* rbx_20 = rax_68[1]
var_1d58 = *rax_68
var_1d50.q = rbx_20

if (rbx_20 != 0)
    rbx_20[1].d += 1

void*** rax_69 = j_sub_140a82f30(0x88)
void*** rdi_7 = rax_69

if (rax_69 == 0)
    rdi_7 = nullptr
else
    sub_14068e490(rax_69)
    *rdi_7 = &data_142d8add0

void* rax_70 = sub_140698b50(rdi_7)
sub_140693600(rax_70, &var_1d58)

if (rbx_20 != 0)
    rbx_20[1].d -= 1
    
    if (rbx_20[1].d == 1)
        int64_t rdx_40 = *rbx_20
        (*rdx_40)(rbx_20, rdx_40)
        int32_t temp3_1 = *(rbx_20 + 0xc)
        *(rbx_20 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_20 + 8))(rbx_20, 1)

void var_d30
int64_t* rax_72
int128_t zmm6_1
rax_72, zmm6_1 = sub_14068d9d0(&var_d30)
sub_140692eb0(&rax_72[0x3b], &var_1a68)
sub_14065da90(&rax_72[0x34], &var_1c60)
rax_72[0x37].b = var_1c48

if (&var_1c40 != &rax_72[0x38])
    int64_t* rcx_76
    
    if (var_1c38 != 0)
        rcx_76 = var_1c40
    
    if (var_1c38 != 0 && rcx_76 != 0)
        (*(*rcx_76 + 0x40))(rcx_76, &rax_72[0x38])
    else if (rax_72[0x39].d != 0)
        int64_t* rcx_77 = rax_72[0x38]
        
        if (rcx_77 != 0)
            (*(*rcx_77 + 0x38))(rcx_77, 0)
            int64_t rcx_78 = rax_72[0x38]
            
            if (rcx_78 != 0)
                rax_72[0x38] = sub_140a84c80(rcx_78, 0, 0)
            
            rax_72[0x39].d = 0

rax_72[0x7d].d = 1
*(rax_72 + 0x3ec) = 1
void var_1cb8

if (&var_1cb8 != &rax_72[0x7e] && rax_72[0x7f].d != 0)
    int64_t* rcx_79 = rax_72[0x7e]
    
    if (rcx_79 != 0)
        (*(*rcx_79 + 0x38))(rcx_79, 0)
        int64_t rcx_80 = rax_72[0x7e]
        
        if (rcx_80 != 0)
            rax_72[0x7e] = sub_140a84c80(rcx_80, 0, 0)
        
        rax_72[0x7f].d = 0

rax_72[0x54].d = 0x3f800000
*(rax_72 + 0x2a4) = 0x3f800000
rax_72[0x55].b = 1

if (&var_1cb0 != &rax_72[0x56] && rax_72[0x57].d != 0)
    int64_t* rcx_81 = rax_72[0x56]
    
    if (rcx_81 != 0)
        (*(*rcx_81 + 0x38))(rcx_81, 0)
        int64_t rcx_82 = rax_72[0x56]
        
        if (rcx_82 != 0)
            rax_72[0x56] = sub_140a84c80(rcx_82, 0, 0)
        
        rax_72[0x57].d = 0

rax_72[0x5a].b = 1
*(rax_72 + 0x2c0) = zmm6_1
void var_17e8

if (&var_17e8 != &rax_72[0x5b] && rax_72[0x5c].d != 0)
    int64_t* rcx_83 = rax_72[0x5b]
    
    if (rcx_83 != 0)
        (*(*rcx_83 + 0x38))(rcx_83, 0)
        int64_t rcx_84 = rax_72[0x5b]
        
        if (rcx_84 != 0)
            rax_72[0x5b] = sub_140a84c80(rcx_84, 0, 0)
        
        rax_72[0x5c].d = 0

void*** rax_82 = j_sub_140a82f30(0x7a8)
void*** rdi_8 = rax_82

if (rax_82 == 0)
    rdi_8 = nullptr
else
    rax_82[1].d = 1
    *(rax_82 + 0xc) = 1
    *rdi_8 = &data_142d8b060
    
    if (rdi_8 != -0x10)
        sub_140f66da0(&rdi_8[2])

void*** var_1c88 = rdi_8
void* var_1c90 = &rdi_8[2]
sub_14065fa30(&var_1c90, &rdi_8[2])
int64_t var_1dc8_2 = 0x798
void var_1d9e
void* var_1c80 = &var_1d9e
void* var_1958
void** rax_83 = sub_140697520(&var_1c90, &var_1958, rax_72, sub_140e23ed0(&rdi_8[2], "STextBlock"))
var_1d68 = *rax_83
void* rcx_90 = rax_83[1]
int32_t var_1d60
var_1d60.q = rcx_90

if (rcx_90 != 0)
    *(rcx_90 + 8) += 1

void var_1360
int64_t* rax_84 = sub_14068c940(&var_1360)
rax_84[0x3c].d = var_1948
*(rax_84 + 0x1e4) = 1
void var_1940

if (&var_1940 != &rax_84[0x3d] && rax_84[0x3e].d != 0)
    int64_t* rcx_92 = rax_84[0x3d]
    
    if (rcx_92 != 0)
        (*(*rcx_92 + 0x38))(rcx_92, 0)
        int64_t rcx_93 = rax_84[0x3d]
        
        if (rcx_93 != 0)
            rax_84[0x3d] = sub_140a84c80(rcx_93, 0, 0)
        
        rax_84[0x3e].d = 0

void*** rax_87 = j_sub_140a82f30(0x3d8)
void*** rdi_9 = rax_87

if (rax_87 == 0)
    rdi_9 = nullptr
else
    rax_87[1].d = 1
    *(rax_87 + 0xc) = 1
    *rdi_9 = &data_142d8c570
    
    if (rdi_9 != -0x10)
        sub_140f20750(&rdi_9[2])

void*** var_1b68 = rdi_9
void* var_1b70 = &rdi_9[2]
sub_14065fa30(&var_1b70, &rdi_9[2])
int64_t var_1dc8_3 = 0x3c8
void var_1d9d
void* var_1b60 = &var_1d9d
void* rax_88
int128_t zmm1_7
rax_88, zmm1_7 = sub_1406937a0(rax_84, &var_1d68, sub_140e23ed0(&rdi_9[2], "SBox"))
void* var_1968
void** rax_89 = sub_140695d20(&var_1b70, &var_1968, rax_88, zmm1_7)
int64_t* rbx_29 = rax_89[1]
var_1d88 = *rax_89
int32_t var_1d80
var_1d80.q = rbx_29

if (rbx_29 != 0)
    rbx_29[1].d += 1

void*** rax_90 = j_sub_140a82f30(0x88)
void*** rdi_10 = rax_90

if (rax_90 == 0)
    rdi_10 = nullptr
else
    sub_14068e490(rax_90)
    *rdi_10 = &data_142d8add0

void* rax_91 = sub_140698b50(rdi_10)
sub_140693600(rax_91, &var_1d88)

if (rbx_29 != 0)
    rbx_29[1].d -= 1
    
    if (rbx_29[1].d == 1)
        int64_t rdx_50 = *rbx_29
        (*rdx_50)(rbx_29, rdx_50)
        int32_t temp5_1 = *(rbx_29 + 0xc)
        *(rbx_29 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_29 + 8))(rbx_29, 1)

void var_17b0
int64_t* rax_93 = sub_14068d420(&var_17b0)
int64_t rdi_11 = sx.q(rax_93[0x35].d)
int32_t rcx_106 = (rdi_11 + 1).d
rax_93[0x35].d = rcx_106

if (rcx_106 s> *(rax_93 + 0x1ac))
    sub_140638870(&rax_93[0x34])

*(rax_93[0x34] + (rdi_11 << 3)) = rax_91
int64_t rdi_12 = sx.q(rax_93[0x35].d)
int32_t rax_95 = (rdi_12 + 1).d
rax_93[0x35].d = rax_95

if (rax_95 s> *(rax_93 + 0x1ac))
    sub_140638870(&rax_93[0x34])

*(rax_93[0x34] + (rdi_12 << 3)) = rax_70
int64_t rdi_13 = sx.q(rax_93[0x35].d)
int32_t rax_97 = (rdi_13 + 1).d
rax_93[0x35].d = rax_97

if (rax_97 s> *(rax_93 + 0x1ac))
    sub_140638870(&rax_93[0x34])

*(rax_93[0x34] + (rdi_13 << 3)) = rax_57
void*** rax_99 = j_sub_140a82f30(0x2e8)
void*** rdi_14 = rax_99

if (rax_99 == 0)
    rdi_14 = nullptr
else
    rax_99[1].d = 1
    *(rax_99 + 0xc) = 1
    *rdi_14 = &data_142d8c590
    
    if (rdi_14 != -0x10)
        sub_14068e500(&rdi_14[2])

void*** var_1b80 = rdi_14
void* var_1b88 = &rdi_14[2]
sub_14065fa30(&var_1b88, &rdi_14[2])
int64_t var_1dc8_4 = 0x2d8
void var_1d9c
void* var_1b78 = &var_1d9c
void* var_1978
void** rax_100 =
    sub_140696920(&var_1b88, &var_1978, rax_93, sub_140e23ed0(&rdi_14[2], "SHorizontalBox"))
var_1d98 = *rax_100
void* rcx_115 = rax_100[1]
var_1d90.q = rcx_115

if (rcx_115 != 0)
    *(rcx_115 + 8) += 1

uint64_t r14_4 = 0
uint64_t var_1d18 = 0
int32_t rdi_15
int32_t r13_1

if (r12 != 0)
    sub_1405a4c70(&var_1d18, r12, 0)
    r14_4 = var_1d18
    memcpy(r14_4, var_1d70, r12 * 2)
    int32_t var_1d0c
    rdi_15 = var_1d0c
    r13_1 = r12
else
    r13_1 = var_1db4_1
    rdi_15 = 0

void var_10c0
int64_t* rax_105 = sub_14068cc20(&var_10c0)
rax_105[0x36] = &data_143cdd500
sub_140693390(&rax_105[0x60], &var_1b10)
int64_t* rsi_9 = var_1ae0
rax_105[0x65].b = var_1ae8

if (&var_1ae0 != &rax_105[0x66])
    if (var_1ad8 != 0 && rsi_9 != 0)
        (*(*rsi_9 + 0x40))(rsi_9, &rax_105[0x66])
    else if (rax_105[0x67].d != 0)
        int64_t* rcx_122 = rax_105[0x66]
        
        if (rcx_122 != 0)
            (*(*rcx_122 + 0x38))(rcx_122, 0)
            int64_t rcx_123 = rax_105[0x66]
            
            if (rcx_123 != 0)
                rax_105[0x66] = sub_140a84c80(rcx_123, 0, 0)
            
            rax_105[0x67].d = 0

int64_t* rax_109 = sub_140a84c80(0, 0x40, 0)
int64_t* rbx_34 = rax_109

if (rax_109 != 0)
    rbx_34[3] = r14_4
    *rbx_34 = &data_142d8bfc0
    rbx_34[1].b = arg4
    rbx_34[2] = arg1
    r14_4 = 0
    rbx_34[4].d = r13_1
    *(rbx_34 + 0x24) = rdi_15
    rbx_34[6] = sub_140a387b0()

if (&var_1cc0 == &rax_105[0x44])
    goto label_14069bc15

if (rbx_34 == 0)
    if (rax_105[0x45].d != 0)
        int64_t* rcx_173 = rax_105[0x44]
        
        if (rcx_173 != 0)
            (*(*rcx_173 + 0x38))(rcx_173, 0)
            int64_t rcx_174 = rax_105[0x44]
            
            if (rcx_174 != 0)
                rax_105[0x44] = sub_140a84c80(rcx_174, 0, 0)
            
            rax_105[0x45].d = 0
    
    goto label_14069bc35

(*(*rbx_34 + 0x40))(rbx_34, &rax_105[0x44])
label_14069bc15:

if (rbx_34 != 0)
    (*(*rbx_34 + 0x38))(rbx_34, 0)
    rbx_34 = sub_140a84c80(rbx_34, 0, 0)
label_14069bc35:
    
    if (rbx_34 != 0)
        sub_140a74f90(rbx_34)

void*** rax_116 = sub_140688970()
void*** var_1b98 = rax_116
int64_t* var_1ba0 = &rax_116[2]
sub_14065fa30(&var_1ba0, &rax_116[2])
int64_t var_1dc8_5 = 0x5b8
void var_1d9b
void* var_1b90 = &var_1d9b
void* rax_117
int128_t zmm1_10
rax_117, zmm1_10 = sub_1406936e0(rax_105, &var_1d98, sub_140e23ed0(&rax_116[2], "SButton"))
int64_t* var_1988
int64_t** rax_118 = sub_140696120(&var_1ba0, &var_1988, rax_117, zmm1_10)
var_1ce8 = *rax_118
void* rcx_133 = rax_118[1]
void* var_1ce0 = rcx_133

if (rcx_133 != 0)
    *(rcx_133 + 8) += 1

void var_1600
int64_t* rax_119 = sub_14068c940(&var_1600)
sub_140692e20(&rax_119[0x3f], &var_1cd8)
void*** rax_120 = sub_140688920()
void*** var_1bb0 = rax_120
void* var_1bb8 = &rax_120[2]
sub_14065fa30(&var_1bb8, &rax_120[2])
int64_t var_1dc8_6 = 0x3c8
void var_1d9a
void* var_1ba8 = &var_1d9a
void* rax_121
int128_t zmm1_12
rax_121, zmm1_12 = sub_1406937a0(rax_119, &var_1ce8, sub_140e23ed0(&rax_120[2], "SBox"))
void* var_1998
void** rax_122 = sub_140695d20(&var_1bb8, &var_1998, rax_121, zmm1_12)
*arg2 = *rax_122
void* rcx_141 = rax_122[1]
arg2[1] = rcx_141

if (rcx_141 != 0)
    *(rcx_141 + 8) += 1

int64_t* var_1990

if (var_1990 != 0)
    var_1990[1].d -= 1
    
    if (var_1990[1].d == 1)
        (**var_1990)(var_1990)
        int32_t temp8_1 = *(var_1990 + 0xc)
        *(var_1990 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_1990 + 8))(var_1990, 1)

sub_140669d70(&var_1bb8)
sub_140690290(&var_1600)
int64_t* var_1980

if (var_1980 != 0)
    var_1980[1].d -= 1
    
    if (var_1980[1].d == 1)
        (**var_1980)(var_1980)
        int32_t temp9_1 = *(var_1980 + 0xc)
        *(var_1980 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_1980 + 8))(var_1980, 1)

sub_140669d70(&var_1ba0)
sub_1406905f0(&var_10c0)

if (r14_4 != 0)
    sub_140a74f90(r14_4)

int64_t* var_1970

if (var_1970 != 0)
    var_1970[1].d -= 1
    
    if (var_1970[1].d == 1)
        (**var_1970)(var_1970)
        int32_t temp11_1 = *(var_1970 + 0xc)
        *(var_1970 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_1970 + 8))(var_1970, 1)

sub_140669d70(&var_1b88)
int64_t var_1610

if (var_1610 != 0)
    sub_140a74f90(var_1610)

sub_140660250(&var_17b0)
int64_t* var_1960

if (var_1960 != 0)
    var_1960[1].d -= 1
    
    if (var_1960[1].d == 1)
        (**var_1960)(var_1960)
        int32_t temp14_1 = *(var_1960 + 0xc)
        *(var_1960 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_1960 + 8))(var_1960, 1)

sub_140669d70(&var_1b70)
sub_140690290(&var_1360)
int64_t* var_1950

if (var_1950 != 0)
    var_1950[1].d -= 1
    
    if (var_1950[1].d == 1)
        (**var_1950)(var_1950)
        int32_t temp16_1 = *(var_1950 + 0xc)
        *(var_1950 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_1950 + 8))(var_1950, 1)

sub_140669d70(&var_1c90)
sub_1406913d0(&var_d30)
int64_t* var_1928

if (var_1928 != 0)
    var_1928[1].d -= 1
    
    if (var_1928[1].d == 1)
        (**var_1928)(var_1928)
        int32_t temp18_1 = *(var_1928 + 0xc)
        *(var_1928 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_1928 + 8))(var_1928, 1)

sub_140669d70(&var_1bd0)
sub_1406913d0(&var_8e8)
int64_t* var_18f8

if (var_18f8 != 0)
    var_18f8[1].d -= 1
    
    if (var_18f8[1].d == 1)
        (**var_18f8)(var_18f8)
        int32_t temp19_1 = *(var_18f8 + 0xc)
        *(var_18f8 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*var_18f8 + 8))(var_18f8, 1)

sub_140669d70(&var_1c78)
sub_1406913d0(&var_4a0)
int64_t* rbx_44 = var_1cd0

if (var_1cc8 == 0)
    goto label_14069c00a

if (rbx_44 == 0)
    if (var_1cc8 == 0)
        goto label_14069c00a
    
    if (rbx_44 != 0)
        (*(*rbx_44 + 0x38))(rbx_44, 0)
    label_14069c007:
        rbx_44 = sub_140a84c80(rbx_44, 0, 0)
    label_14069c00a:
        
        if (rbx_44 != 0)
            sub_140a74f90(rbx_44)
else
    (*(*rbx_44 + 0x38))(rbx_44, 0)
    
    if (rbx_44 != 0)
        goto label_14069c007

if (var_1ad8 == 0)
    goto label_14069c058

if (rsi_9 == 0)
    if (var_1ad8 == 0)
        goto label_14069c058
    
    if (rsi_9 != 0)
        (*(*rsi_9 + 0x38))(rsi_9, 0)
    label_14069c055:
        rsi_9 = sub_140a84c80(rsi_9, 0, 0)
    label_14069c058:
        
        if (rsi_9 != 0)
            sub_140a74f90(rsi_9)
else
    (*(*rsi_9 + 0x38))(rsi_9, 0)
    
    if (rsi_9 != 0)
        goto label_14069c055

int64_t* rbx_45 = var_1af8:8.q

if (rbx_45 != 0)
    rbx_45[1].d -= 1
    
    if (rbx_45[1].d == 1)
        (**rbx_45)(rbx_45)
        int32_t temp21_1 = *(rbx_45 + 0xc)
        *(rbx_45 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*rbx_45 + 8))(rbx_45, 1)

sub_14068fb40(&var_1a68)
sub_1406601b0(&var_1c60)
sub_1405970a0(&var_1b58)
sub_14068fb40(&var_1a00)
sub_1406601b0(&var_1c30)
sub_1405970a0(&var_1b40)
sub_14068fb40(&var_1ad0)
sub_1406601b0(&var_1c00)
sub_1405970a0(&var_1b28)
int32_t rbx_46 = rax_12

if ((rbx_46.b & 0x10) != 0)
    int64_t* rcx_193 = var_1d08
    rbx_46 &= 0xffffffef
    
    if (rcx_193 != 0)
        sub_140a74f90(rcx_193)

if ((rbx_46.b & 8) != 0)
    int64_t rcx_194 = var_1910
    rbx_46 &= 0xfffffff7
    
    if (rcx_194 != 0)
        sub_140a74f90(rcx_194)

if ((rbx_46.b & 4) != 0)
    int64_t rcx_195 = var_1cf8
    
    if (rcx_195 != 0)
        sub_140a74f90(rcx_195)

int64_t rcx_196 = var_1920

if (rcx_196 != 0)
    sub_140a74f90(rcx_196)

if (var_1d70 != 0)
    sub_140a74f90(var_1d70)

int64_t rcx_198 = var_1db0

if (rcx_198 != 0)
    sub_140a74f90(rcx_198)

int64_t var_1838

if (var_1838 != 0)
    sub_140a74f90(var_1838)

int64_t var_1848

if (var_1848 != 0)
    sub_140a74f90(var_1848)

int64_t var_1858

if (var_1858 != 0)
    sub_140a74f90(var_1858)

if (var_1868 != 0)
    sub_140a74f90(var_1868)

int64_t var_1878

if (var_1878 != 0)
    sub_140a74f90(var_1878)

int64_t var_1888

if (var_1888 != 0)
    sub_140a74f90(var_1888)

int64_t var_1898

if (var_1898 != 0)
    sub_140a74f90(var_1898)

int64_t var_18a8

if (var_18a8 != 0)
    sub_140a74f90(var_18a8)

int64_t var_18b8

if (var_18b8 != 0)
    sub_140a74f90(var_18b8)

int64_t var_18c8

if (var_18c8 != 0)
    sub_140a74f90(var_18c8)

if (var_18d8 != 0)
    sub_140a74f90(var_18d8)

int64_t rcx_210 = var_18e8

if (rcx_210 != 0)
    sub_140a74f90(rcx_210)

__security_check_cookie(rax_1 ^ &var_1de8)
return arg2
