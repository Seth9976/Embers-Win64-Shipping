// 函数: sub_140eeb5a0
// 地址: 0x140eeb5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a78
int64_t rax_1 = __security_cookie ^ &var_a78
int64_t* rdi = arg1[0x76]
void* r13 = arg1[0x75]

if (rdi != 0)
    rdi[1].d += 1
    
    if (rdi != 0)
        rdi[1].d += 1
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp2_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi + 8))(rdi, 1)

char rax_4 = sub_140ab3dc0(r13 + 0xa8)
char const* const r8 = ".Block.Padding"

if (*(r13 + 0xc0) == 0)
    r8 = ".Block.IndentedPadding"

*(*(*arg2 + 0x40))(arg2, *arg3, r8, &data_143e244f0)

if (sub_140ebfa20(arg1[0x75]) != 0)
    int64_t var_8f0 = *(r13 + 0xa8)
    void* rax_9 = *(r13 + 0xb0)
    void* var_8e8_1 = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    int32_t var_8e0_1 = *(r13 + 0xb8)
    void var_878
    int64_t* rax_12 = (*(*arg1 + 8))(arg1, &var_878)
    int64_t var_920 = *rax_12
    void* rcx_7 = rax_12[1]
    void* var_918_1 = rcx_7
    
    if (rcx_7 != 0)
        *(rcx_7 + 8) += 1
    
    int64_t* rbx_1 = arg1[0x74]
    void* rcx_8 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_13 = rbx_1[1].d
        
        if (rax_13 != 0)
            rbx_1[1].d = rax_13 + 1
            rax_13.b = 1
        
        if (rax_13.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rcx_8 = arg1[0x73]
    
    sub_140ea2410(rcx_8, &var_920, &var_8f0)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_870
    
    if (var_870 != 0)
        var_870[1].d -= 1
        
        if (var_870[1].d == 1)
            (**var_870)(var_870)
            int32_t temp9_1 = *(var_870 + 0xc)
            *(var_870 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_870 + 8))(var_870, 1)

int64_t* rbx_3 = arg1[0x74]
void* rcx_13 = nullptr
int64_t* rax_18 = rbx_3

if (rbx_3 == 0)
    goto label_140eeb793

int32_t rax_19 = rbx_3[1].d

if (rax_19 == 0)
    rbx_3 = nullptr
else
    rbx_3[1].d = rax_19 + 1
    rax_18 = rbx_3
label_140eeb793:
    
    if (rax_18 != 0)
        rcx_13 = arg1[0x73]

void var_868
int64_t rcx_14 = *sub_140ebf9f0(rcx_13, &var_868)
int64_t r15

if (rcx_14 == 0 || rcx_14 != *(r13 + 0x98))
    r15.b = 0
else
    r15.b = 1

int64_t* var_860

if (var_860 != 0)
    var_860[1].d -= 1
    
    if (var_860[1].d == 1)
        (**var_860)(var_860)
        int32_t temp8_1 = *(var_860 + 0xc)
        *(var_860 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_860 + 8))(var_860, 1)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp10_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

if (r15.b != 0)
    void var_858
    int64_t* rax_27 = (*(*arg1 + 8))(arg1, &var_858)
    int64_t var_910 = *rax_27
    void* rcx_21 = rax_27[1]
    void* var_908_1 = rcx_21
    
    if (rcx_21 != 0)
        *(rcx_21 + 8) += 1
    
    int64_t* rbx_4 = arg1[0x74]
    void* rcx_22 = nullptr
    
    if (rbx_4 != 0)
        int32_t rax_28 = rbx_4[1].d
        
        if (rax_28 != 0)
            rbx_4[1].d = rax_28 + 1
            rax_28.b = 1
        
        if (rax_28.b == 0)
            rbx_4 = nullptr
        
        if (rbx_4 != 0)
            rcx_22 = arg1[0x73]
    
    sub_140edad10(rcx_22, &var_910)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp13_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* var_850
    
    if (var_850 != 0)
        var_850[1].d -= 1
        
        if (var_850[1].d == 1)
            (**var_850)(var_850)
            int32_t temp15_1 = *(var_850 + 0xc)
            *(var_850 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_850 + 8))(var_850, 1)
    
    void var_848
    int64_t* rcx_28 = *(*(*arg1 + 8))(arg1, &var_848)
    char var_968 = data_1439ae51d
    char var_967_1 = 1
    int64_t var_960_1 = 0
    int32_t var_958_1 = 0
    (*(*rcx_28 + 0x1d8))(rcx_28, &var_968)
    int64_t* var_840
    
    if (var_840 != 0)
        var_840[1].d -= 1
        
        if (var_840[1].d == 1)
            (**var_840)(var_840)
            int32_t temp16_1 = *(var_840 + 0xc)
            *(var_840 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*var_840 + 8))(var_840, 1)

int64_t var_a20 = *(r13 + 0xa8)
int64_t* rax_40 = *(r13 + 0xb0)
int32_t var_980 = 0x3f800000
char var_97c = 1
int64_t var_978 = 0
int32_t var_970 = 0

if (rax_40 != 0)
    rax_40[1].d += 1

int64_t* rbx_7 = *(r13 + 0xa0)
char rcx_31 = data_1439ae51d
int32_t var_a10 = *(r13 + 0xb8)

if (rax_4 == 0)
    rcx_31 = data_1439ae51c

char var_a08 = 1
int64_t var_900 = *(r13 + 0x98)
int64_t var_a00 = 0
int32_t var_9f8 = 0
char var_998 = rcx_31
char var_997 = 1
int64_t var_990 = 0
int32_t var_988 = 0
int64_t* var_8f8 = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d += 1

void*** rax_44 = j_sub_140a82f30(0x88)
void*** r15_1 = rax_44

if (rax_44 == 0)
    r15_1 = nullptr
else
    sub_14068e490(rax_44)
    *r15_1 = &data_142d8add0

*(r15_1 + 0x21) = 3
int32_t var_a40 = 1
int32_t var_a38 = 0x3f800000
char var_a34 = 1
int64_t var_a30 = 0
int32_t var_a28 = 0
sub_140692f90(&var_a30, &var_978)
r15_1[5].d = var_a40
*(r15_1 + 0x34) = var_a34
r15_1[6].d = var_a38
sub_140692f90(&r15_1[7], &var_a30)
sub_140745b20(&var_a30)
sub_140693600(r15_1, &var_900)

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp18_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

void var_808
int64_t* rax_49 = sub_140e1ad30(&var_808, *arg3, ".Label")
void var_4a0
int64_t* rax_50 = sub_14068d9d0(&var_4a0)
int64_t r8_2 = *rax_49
int64_t var_888 = r8_2
int64_t var_880 = r8_2
int64_t r9 = *arg2
int64_t rax_51 = (*(r9 + 0x88))(arg2, data_143e243e0, r8_2, r9)

if (rax_51 == 0)
    rax_51 = sub_140e13900()

rax_50[0x3a] = rax_51
sub_14065da90(&rax_50[0x34], &var_a20)
rax_50[0x37].b = var_a08
sub_140692f90(&rax_50[0x38], &var_a00)
void*** rax_53 = j_sub_140a82f30(0x7a8)
void*** rsi_2 = rax_53

if (rax_53 == 0)
    rsi_2 = nullptr
else
    rax_53[1].d = 1
    *(rax_53 + 0xc) = 1
    *rsi_2 = &data_142d8b060
    
    if (rsi_2 != -0x10)
        sub_140f66da0(&rsi_2[2])

void* var_9b0 = &rsi_2[2]
sub_14065fa30(&var_9b0, &rsi_2[2])
int64_t var_a58 = 0x798
void var_a47
void* var_9a0 = &var_a47
void* var_818
void** rax_54 = sub_140697520(&var_9b0, &var_818, rax_50, sub_140e23ed0(&rsi_2[2], "STextBlock"))
int64_t* rbx_10 = rax_54[1]
void* var_950 = *rax_54
int64_t* var_948 = rbx_10

if (rbx_10 != 0)
    rbx_10[1].d += 1

void*** rax_55 = j_sub_140a82f30(0x88)
void*** rsi_3 = rax_55

if (rax_55 == 0)
    rsi_3 = nullptr
else
    sub_14068e490(rax_55)
    *rsi_3 = &data_142d8add0

void* rax_56 = sub_140698b50(rsi_3)
int128_t var_8d8
__builtin_memcpy(&var_8d8, "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x40\x00\x00\x00\x00\x01", 
    0x11)
int64_t var_8c0 = 0
int32_t var_8b8 = 0
__builtin_memcpy(rax_56 + 0x48, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x40\x00\x00\x00\x00\x01", 0x11)
sub_1407473e0(rax_56 + 0x60, &var_8c0)
sub_140745b20(&var_8c0)
*(rax_56 + 0x21) = 2
sub_140693600(rax_56, &var_950)

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t temp20_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*rbx_10 + 8))(rbx_10, 1)

void var_650
int64_t* rax_59 = sub_14068d420(&var_650)
rax_59[0xf].b = rcx_31
*(rax_59 + 0x79) = 1
sub_1407473e0(&rax_59[0x10], &var_990)
int64_t r13_2 = sx.q(rax_59[0x35].d)
int32_t rcx_58 = (r13_2 + 1).d
rax_59[0x35].d = rcx_58

if (rcx_58 s> *(rax_59 + 0x1ac))
    sub_140638870(&rax_59[0x34])

*(rax_59[0x34] + (r13_2 << 3)) = rax_56
void*** rax_62 = j_sub_140a82f30(0x2e8)

if (rax_62 != 0)
    rax_62[1].d = 1
    *(rax_62 + 0xc) = 1
    *rax_62 = &data_142d8c590
    
    if (rax_62 != -0x10)
        sub_14068e500(&rax_62[2])

void* var_9c8 = &rax_62[2]
sub_14065fa30(&var_9c8, &rax_62[2])
int64_t var_a58_1 = 0x2d8
void var_a46
void* var_9b8 = &var_a46
void* var_828
void** rax_63 =
    sub_140696920(&var_9c8, &var_828, rax_59, sub_140e23ed0(&rax_62[2], "SHorizontalBox"))
int64_t* rbx_12 = rax_63[1]
void* var_940 = *rax_63
int64_t* var_938 = rbx_12

if (rbx_12 != 0)
    rbx_12[1].d += 1

void*** rax_64 = j_sub_140a82f30(0x88)
void*** rsi_6 = rax_64

if (rax_64 == 0)
    rsi_6 = nullptr
else
    sub_14068e490(rax_64)
    *rsi_6 = &data_142d8add0

void* rax_65 = sub_140698b50(rsi_6)
sub_140693600(rax_65, &var_940)

if (rbx_12 != 0)
    rbx_12[1].d -= 1
    
    if (rbx_12[1].d == 1)
        int64_t rdx_26 = *rbx_12
        (*rdx_26)(rbx_12, rdx_26)
        int32_t temp22_1 = *(rbx_12 + 0xc)
        *(rbx_12 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*(*rbx_12 + 8))(rbx_12, 1)

void var_800
int64_t* rax_67 = sub_14068d420(&var_800)
int64_t rsi_7 = sx.q(rax_67[0x35].d)
int32_t rcx_70 = (rsi_7 + 1).d
rax_67[0x35].d = rcx_70

if (rcx_70 s> *(rax_67 + 0x1ac))
    sub_140638870(&rax_67[0x34])

*(rax_67[0x34] + (rsi_7 << 3)) = rax_65
int64_t rsi_8 = sx.q(rax_67[0x35].d)
int32_t rax_69 = (rsi_8 + 1).d
rax_67[0x35].d = rax_69

if (rax_69 s> *(rax_67 + 0x1ac))
    sub_140638870(&rax_67[0x34])

*(rax_67[0x34] + (rsi_8 << 3)) = r15_1
void*** rax_71 = j_sub_140a82f30(0x2e8)
void*** rsi_9 = rax_71

if (rax_71 == 0)
    rsi_9 = nullptr
else
    rax_71[1].d = 1
    *(rax_71 + 0xc) = 1
    *rsi_9 = &data_142d8c590
    
    if (rsi_9 != -0x10)
        sub_14068e500(&rsi_9[2])

void* var_9e0 = &rsi_9[2]
sub_14065fa30(&var_9e0, &rsi_9[2])
int64_t var_a58_2 = 0x2d8
void var_a45
void* var_9d0 = &var_a45
int128_t zmm1_2
int128_t zmm6_1
zmm1_2, zmm6_1 = sub_140e23ed0(&rsi_9[2], "SHorizontalBox")
void* var_838
void** rax_72 = sub_140696920(&var_9e0, &var_838, rax_67, zmm1_2)
int64_t* rbx_15 = rax_72[1]
void* var_930 = *rax_72
int64_t* var_928 = rbx_15

if (rbx_15 != 0)
    rbx_15[1].d += 1

char var_8a0 = 1
int64_t var_898 = 0
int128_t var_8b0 = zmm6_1
int32_t var_890 = 0
*(arg1 + 0x2e8) = zmm6_1
arg1[0x5f].b = 1
sub_140692f90(&arg1[0x60], &var_898)
sub_140745b20(&var_898)
sub_140de1b90(&arg1[0x58], &var_930)

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        (**rbx_15)(rbx_15)
        int32_t temp25_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*rbx_15 + 8))(rbx_15, 1)

int64_t* var_830

if (var_830 != 0)
    var_830[1].d -= 1
    
    if (var_830[1].d == 1)
        (**var_830)(var_830)
        int32_t temp27_1 = *(var_830 + 0xc)
        *(var_830 + 0xc) -= 1
        
        if (temp27_1 == 1)
            (*(*var_830 + 8))(var_830, 1)

if (rsi_9 != 0)
    rsi_9[1].d -= 1
    
    if (rsi_9[1].d == 1)
        (**rsi_9)(rsi_9)
        int32_t temp28_1 = *(rsi_9 + 0xc)
        *(rsi_9 + 0xc) -= 1
        
        if (temp28_1 == 1)
            (*rsi_9)[1](rsi_9, 1)

int64_t var_660

if (var_660 != 0)
    sub_140a74f90(var_660)

sub_140660250(&var_800)
int64_t* var_820

if (var_820 != 0)
    var_820[1].d -= 1
    
    if (var_820[1].d == 1)
        (**var_820)(var_820)
        int32_t temp31_1 = *(var_820 + 0xc)
        *(var_820 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*(*var_820 + 8))(var_820, 1)

if (rax_62 != 0)
    rax_62[1].d -= 1
    
    if (rax_62[1].d == 1)
        (**rax_62)(rax_62)
        int32_t temp32_1 = *(rax_62 + 0xc)
        *(rax_62 + 0xc) -= 1
        
        if (temp32_1 == 1)
            (*rax_62)[1](rax_62, 1)

int64_t var_4b0

if (var_4b0 != 0)
    sub_140a74f90(var_4b0)

sub_140660250(&var_650)
int64_t* var_810

if (var_810 != 0)
    var_810[1].d -= 1
    
    if (var_810[1].d == 1)
        (**var_810)(var_810)
        int32_t temp35_1 = *(var_810 + 0xc)
        *(var_810 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*(*var_810 + 8))(var_810, 1)

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t temp36_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp36_1 == 1)
            (*rsi_2)[1](rsi_2, 1)

sub_1406913d0(&var_4a0)
sub_140745b20(&var_990)
sub_140745b20(&var_a00)

if (rax_40 != 0)
    rax_40[1].d -= 1
    
    if (rax_40[1].d == 1)
        (**rax_40)(rax_40)
        int32_t rsi_10 = *(rax_40 + 0xc)
        *(rax_40 + 0xc) -= 1
        
        if (rsi_10 == 1)
            (*(*rax_40 + 8))(rax_40, zx.q(rsi_10))

uint64_t result = sub_140745b20(&var_978)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp38_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp38_1 == 1)
            result = (*(*rdi + 8))(rdi, 1)

__security_check_cookie(rax_1 ^ &var_a78)
return result
