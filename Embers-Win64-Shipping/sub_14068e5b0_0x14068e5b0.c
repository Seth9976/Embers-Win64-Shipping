// 函数: sub_14068e5b0
// 地址: 0x14068e5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_142d8b698
__builtin_memset(arg1 + 0x13c, 0, 0x1d)
__builtin_memset(&arg1[0x21], 0, 0x30)
arg1[0x27].w = 0x101
*(arg1 + 0x13a) = 1
__builtin_memset(&arg1[0x2c], 0, 0x14)
__builtin_memset(&arg1[0x2f], 0, 0x168)
sub_140d3a3a0(&arg1[0x5c], nullptr)
__builtin_memset(&arg1[0x5d], 0, 0x28)
int64_t var_b8 = 0
int32_t var_b0 = 0
sub_1405947f0(&var_b8, 0x12)
int32_t rax = var_b0 + 0x12
var_b0 = rax

if (rax s> 0)
    sub_140594770(&var_b8)

int16_t var_d8 = 0x3f
sub_1405a7220(var_b8, 0x12, "LyricFileExplorer", 0x12, 0x3f)
sub_140b7c510()
int64_t r9 = data_143e19eb0
int32_t var_a8
int64_t* rcx_4 = *(*(r9 + 0x38))(&data_143e19eb0, &var_a8, &var_b8, r9)
int64_t var_78
int64_t* rax_3 = (*(*rcx_4 + 0x18))(rcx_4, &var_78)
int32_t rdx_3 = rax_3[1].d
int32_t rdx_4 = neg.d(rdx_3)
int16_t* var_c8 = *rax_3
*rax_3 = 0
int32_t rcx_6 = rax_3[1].d
int32_t rcx_7 = *(rax_3 + 0xc)
rax_3[1] = 0
int32_t rdx_7 = sbb.d(rdx_4, rdx_4, rdx_3 != 0) + 0x24 + rcx_6

if (rdx_7 s> rcx_7)
    sub_1405947f0(&var_c8, rdx_7)

sub_140a2cf70(&var_c8, u"Source/LyricFileExplorer/Resources", 0x22)
int64_t var_88
int64_t* rax_4 = sub_140b11a30(&var_88, &var_c8)

if (&data_143cdd9f8 != rax_4)
    int64_t rcx_11 = data_143cdd9f8
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    data_143cdd9f8 = *rax_4
    *rax_4 = 0
    data_143cdda00 = rax_4[1].d
    data_143cdda04 = *(rax_4 + 0xc)
    rax_4[1] = 0

int64_t rcx_13 = var_88

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int16_t* rcx_14 = var_c8

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = var_78

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t* var_a0

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t temp3_1 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_a0 + 8))(var_a0, 1)

int64_t rcx_18 = var_b8

if (rcx_18 != 0)
    rcx_18 = sub_140a74f90(rcx_18)

int32_t rdi = data_143cdda00
int128_t zmm0 = data_14399f5e0
int64_t rbx_2 = data_143cdd9f8
var_a8 = 0
int16_t var_a4 = 0
int64_t var_a0_1 = 0
var_c8 = nullptr
int128_t var_98 = zmm0
int32_t var_c0_1 = rdi
sub_1405a4c70(&var_c8, sbb.d(rcx_18.d, rcx_18.d, rdi != 0) + 0x19 + rdi, 0)
memcpy(var_c8, rbx_2, rdi * 2)
sub_140a2cf70(&var_c8, u"Fonts/Rubik-Regular.ttf", 0x17)
var_d8.q = &var_a8
void var_68
sub_140693420(&data_143cdda10, sub_140d939b0(&var_68, &var_c8, 9, 0, var_d8))
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp6_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int16_t* rcx_26 = var_c8

if (rcx_26 != 0)
    rcx_26 = sub_140a74f90(rcx_26)

int32_t rdi_1 = data_143cdda00
int128_t zmm0_1 = data_14399f5e0
int64_t rbx_4 = data_143cdd9f8
var_a8 = 0
int16_t var_a4_1 = 0
int64_t var_a0_2 = 0
var_c8 = nullptr
int128_t var_98_1 = zmm0_1
int32_t var_c0_2 = rdi_1
sub_1405a4c70(&var_c8, sbb.d(rcx_26.d, rcx_26.d, rdi_1 != 0) + 0x18 + rdi_1, 0)
memcpy(var_c8, rbx_4, rdi_1 * 2)
sub_140a2cf70(&var_c8, u"Fonts/Rubik-Medium.ttf", 0x16)
var_d8.q = &var_a8
sub_140693420(&data_143cdda60, sub_140d939b0(&var_68, &var_c8, 9, 0, var_d8))

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp9_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int16_t* rcx_34 = var_c8

if (rcx_34 != 0)
    rcx_34 = sub_140a74f90(rcx_34)

int32_t rdi_2 = data_143cdda00
int128_t zmm0_2 = data_14399f5e0
int64_t rbx_6 = data_143cdd9f8
var_a8 = 0
int16_t var_a4_2 = 0
int64_t var_a0_3 = 0
var_c8 = nullptr
int128_t var_98_2 = zmm0_2
int32_t var_c0_3 = rdi_2
sub_1405a4c70(&var_c8, sbb.d(rcx_34.d, rcx_34.d, rdi_2 != 0) + 0x13 + rdi_2, 0)
memcpy(var_c8, rbx_6, rdi_2 * 2)
sub_140a2cf70(&var_c8, u"Fonts/icomoon.ttf", 0x11)
var_d8.q = &var_a8
sub_140693420(&data_143cddab0, sub_140d939b0(&var_68, &var_c8, 0xa, 0, var_d8))

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp12_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int16_t* rcx_42 = var_c8

if (rcx_42 != 0)
    sub_140a74f90(rcx_42)

int64_t* rax_24
int32_t rdx_24
rax_24, rdx_24 = sub_140b257f0()
bool c_4 = rax_24[1].d != 0
var_c8 = nullptr
int32_t i_4 = rax_24[1].d
int64_t rdi_3 = *rax_24
sub_1405a4c70(&var_c8, sbb.d(rdx_24, rdx_24, c_4) + 0x24 + i_4, 0)
memcpy(var_c8, rdi_3, i_4 * 2)
sub_140a2cf70(&var_c8, u"LyricFileExplorerFavoritePaths.txt", 0x22)
int64_t rcx_47 = data_143cddfd0

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

int16_t* r8_9 = var_c8
int16_t* const rdx_29 = &data_142d40450

if (i_4 != 0)
    rdx_29 = r8_9

data_143cddfd0 = r8_9
data_143cddfd8 = i_4
data_143cddfdc = rcx_7
sub_140b1f3f0(&data_143cddfe0, rdx_29, 0)
int64_t* rax_26 = sub_1406a93a0(&var_c8)

if (&arg1[0x33] != rax_26)
    int32_t i_2 = arg1[0x34].d
    int64_t* rbx_8 = arg1[0x33]
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_50 = *rbx_8
            
            if (rcx_50 != 0)
                sub_140a74f90(rcx_50)
            
            rbx_8 = &rbx_8[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_8 = arg1[0x33]
    
    if (rbx_8 != 0)
        sub_140a74f90(rbx_8)
    
    arg1[0x33] = *rax_26
    *rax_26 = 0
    arg1[0x34].d = rax_26[1].d
    *(arg1 + 0x1a4) = *(rax_26 + 0xc)
    rax_26[1] = 0

int32_t i_3 = i_4
int16_t* rbx_9 = var_c8

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_52 = *rbx_9
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
        
        rbx_9 = &rbx_9[8]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_9 = var_c8

if (rbx_9 != 0)
    sub_140a74f90(rbx_9)

return arg1
