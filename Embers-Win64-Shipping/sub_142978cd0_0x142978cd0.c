// 函数: sub_142978cd0
// 地址: 0x142978cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t result_1 = 0
int32_t var_88 = 0
int128_t var_68 = data_143702ea0
char var_78 = 0
int32_t var_88_1 = 4
sub_14058c000(&var_78, arg2[2] + 1)
void** r9 = arg2

if (arg2[3] u>= 0x10)
    r9 = *arg2

int64_t rsi = arg2[2]
int64_t rcx_1 = var_68.q
int64_t rdx_2 = var_68:8.q

if (rsi u> rdx_2 - rcx_1)
    sub_1409093f0(&var_78, rsi, 0, r9, rsi)
else
    var_68.q = rcx_1 + rsi
    char* rbx_1 = &var_78
    
    if (rdx_2 u>= 0x10)
        rbx_1 = var_78.q
    
    void* rbx_2 = &rbx_1[rcx_1]
    memmove(rbx_2, r9, rsi.d)
    *(rbx_2 + rsi) = 0

int64_t rcx_4 = var_68.q
int64_t rdx_5 = var_68:8.q
char rsi_1 = 1

if (rdx_5 - rcx_4 u< 1)
    sub_1409093f0(&var_78, 1, 0, &data_142d93d38, 1)
else
    var_68.q = rcx_4 + 1
    char* rbx_3 = &var_78
    
    if (rdx_5 u>= 0x10)
        rbx_3 = var_78.q
    
    void* rbx_4 = &rbx_3[rcx_4]
    memmove(rbx_4, &data_142d93d38, 1)
    *(rbx_4 + 1) = 0

void* rax_8 = sub_14297be70(arg1, &var_78)
int64_t rdx_7 = var_68:8.q

if (rdx_7 u>= 0x10)
    void* rcx_8 = var_78.q
    void* rax_9 = rcx_8
    
    if (rdx_7 + 1 u>= 0x1000)
        rcx_8 = *(rcx_8 - 8)
        
        if (rax_9 - rcx_8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_8)

if (rax_8 != 0)
    result_1 = 1

int128_t var_68_1 = data_143702ea0
var_78 = 0
int32_t var_88_2 = 8
sub_14058c000(&var_78, arg2[2] + 1)
void** r9_1 = arg2

if (arg2[3] u>= 0x10)
    r9_1 = *arg2

int64_t r15 = arg2[2]
int64_t rcx_10 = var_68_1.q
int64_t rdx_11 = var_68_1:8.q

if (r15 u> rdx_11 - rcx_10)
    sub_1409093f0(&var_78, r15, 0, r9_1, r15)
else
    var_68_1.q = rcx_10 + r15
    char* rbx_6 = &var_78
    
    if (rdx_11 u>= 0x10)
        rbx_6 = var_78.q
    
    void* rbx_7 = &rbx_6[rcx_10]
    memmove(rbx_7, r9_1, r15.d)
    *(rbx_7 + r15) = 0

int64_t rcx_13 = var_68_1.q
int64_t rdx_14 = var_68_1:8.q

if (rdx_14 - rcx_13 u< 1)
    sub_1409093f0(&var_78, 1, 0, &(*U"DEFGAB")[3], 1)
else
    var_68_1.q = rcx_13 + 1
    char* rbx_8 = &var_78
    
    if (rdx_14 u>= 0x10)
        rbx_8 = var_78.q
    
    void* rbx_9 = &rbx_8[rcx_13]
    memmove(rbx_9, &(*U"DEFGAB")[3], 1)
    *(rbx_9 + 1) = 0

void* rax_18 = sub_14297be70(arg1, &var_78)
int64_t rdx_16 = var_68_1:8.q

if (rdx_16 u>= 0x10)
    void* rcx_17 = var_78.q
    void* rax_19 = rcx_17
    
    if (rdx_16 + 1 u>= 0x1000)
        rcx_17 = *(rcx_17 - 8)
        
        if (rax_19 - rcx_17 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_17)

if (rax_18 != 0)
    result_1 |= 2

int128_t var_68_2 = data_143702ea0
var_78 = 0
int32_t var_88_3 = 0x10
sub_14058c000(&var_78, arg2[2] + 1)
void** r9_2 = arg2

if (arg2[3] u>= 0x10)
    r9_2 = *arg2

int64_t r15_1 = arg2[2]
int64_t rcx_19 = var_68_2.q
int64_t rdx_20 = var_68_2:8.q

if (r15_1 u> rdx_20 - rcx_19)
    sub_1409093f0(&var_78, r15_1, 0, r9_2, r15_1)
else
    var_68_2.q = rcx_19 + r15_1
    char* rbx_11 = &var_78
    
    if (rdx_20 u>= 0x10)
        rbx_11 = var_78.q
    
    void* rbx_12 = &rbx_11[rcx_19]
    memmove(rbx_12, r9_2, r15_1.d)
    *(rbx_12 + r15_1) = 0

int64_t rcx_22 = var_68_2.q
int64_t rdx_23 = var_68_2:8.q

if (rdx_23 - rcx_22 u< 1)
    sub_1409093f0(&var_78, 1, 0, &(*U"DEFGAB")[5], 1)
else
    var_68_2.q = rcx_22 + 1
    char* rbx_13 = &var_78
    
    if (rdx_23 u>= 0x10)
        rbx_13 = var_78.q
    
    void* rbx_14 = &rbx_13[rcx_22]
    memmove(rbx_14, &(*U"DEFGAB")[5], 1)
    *(rbx_14 + 1) = 0

void* rax_28 = sub_14297be70(arg1, &var_78)
int64_t rdx_25 = var_68_2:8.q

if (rdx_25 u>= 0x10)
    void* rcx_26 = var_78.q
    void* rax_29 = rcx_26
    
    if (rdx_25 + 1 u>= 0x1000)
        rcx_26 = *(rcx_26 - 8)
        
        if (rax_29 - rcx_26 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_26)

if (rax_28 != 0)
    result_1 |= 4

int128_t var_68_3 = data_143702ea0
var_78 = 0
int32_t var_88_4 = 0x20
sub_14058c000(&var_78, arg2[2] + 1)
void** r9_3 = arg2

if (arg2[3] u>= 0x10)
    r9_3 = *arg2

int64_t r15_2 = arg2[2]
int64_t rcx_28 = var_68_3.q
int64_t rdx_29 = var_68_3:8.q

if (r15_2 u> rdx_29 - rcx_28)
    sub_1409093f0(&var_78, r15_2, 0, r9_3, r15_2)
else
    var_68_3.q = rcx_28 + r15_2
    char* rbx_16 = &var_78
    
    if (rdx_29 u>= 0x10)
        rbx_16 = var_78.q
    
    void* rbx_17 = &rbx_16[rcx_28]
    memmove(rbx_17, r9_3, r15_2.d)
    *(rbx_17 + r15_2) = 0

int64_t rcx_31 = var_68_3.q
int64_t rdx_32 = var_68_3:8.q

if (rdx_32 - rcx_31 u< 1)
    sub_1409093f0(&var_78, 1, 0, &(*U"DEFGAB")[4], 1)
else
    var_68_3.q = rcx_31 + 1
    char* rbx_18 = &var_78
    
    if (rdx_32 u>= 0x10)
        rbx_18 = var_78.q
    
    void* rbx_19 = &rbx_18[rcx_31]
    memmove(rbx_19, &(*U"DEFGAB")[4], 1)
    *(rbx_19 + 1) = 0

void* rax_38 = sub_14297be70(arg1, &var_78)
int64_t rdx_34 = var_68_3:8.q

if (rdx_34 u>= 0x10)
    void* rcx_35 = var_78.q
    void* rax_39 = rcx_35
    
    if (rdx_34 + 1 u>= 0x1000)
        rcx_35 = *(rcx_35 - 8)
        
        if (rax_39 - rcx_35 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_35)

if (rax_38 != 0)
    result_1 |= 8

int128_t var_68_4 = data_143702ea0
var_78 = 0
int32_t var_88_5 = 0x40
sub_14058c000(&var_78, arg2[2] + 1)
void** r9_4 = arg2

if (arg2[3] u>= 0x10)
    r9_4 = *arg2

int64_t r15_3 = arg2[2]
int64_t rcx_37 = var_68_4.q
int64_t rdx_38 = var_68_4:8.q

if (r15_3 u> rdx_38 - rcx_37)
    sub_1409093f0(&var_78, r15_3, 0, r9_4, r15_3)
else
    var_68_4.q = r15_3 + rcx_37
    char* rbx_21 = &var_78
    
    if (rdx_38 u>= 0x10)
        rbx_21 = var_78.q
    
    void* rbx_22 = &rbx_21[rcx_37]
    memmove(rbx_22, r9_4, r15_3.d)
    *(rbx_22 + r15_3) = 0

int64_t rcx_40 = var_68_4.q
int64_t rdx_41 = var_68_4:8.q

if (rdx_41 - rcx_40 u< 1)
    sub_1409093f0(&var_78, 1, 0, &data_142d75054, 1)
else
    var_68_4.q = rcx_40 + 1
    char* rbx_23 = &var_78
    
    if (rdx_41 u>= 0x10)
        rbx_23 = var_78.q
    
    void* rbx_24 = &rbx_23[rcx_40]
    memmove(rbx_24, &data_142d75054, 1)
    *(rbx_24 + 1) = 0

void* rax_48
char r9_5
rax_48, r9_5 = sub_14297be70(arg1, &var_78)
int64_t rdx_43 = var_68_4:8.q

if (rdx_43 u>= 0x10)
    void* rcx_44 = var_78.q
    void* rax_49 = rcx_44
    
    if (rdx_43 + 1 u>= 0x1000)
        rcx_44 = *(rcx_44 - 8)
        
        if (rax_49 - rcx_44 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    r9_5 = j_sub_140a74f90(rcx_44)

if (rax_48 != 0)
    result_1 |= 0x10

int32_t var_88_6 = 1
void* var_58
void* rax_53
char r9_6
rax_53, r9_6 = sub_14297be70(arg1, sub_140687be0(&var_58, arg2, "RY", r9_5))
void* rax_55

if (rax_53 == 0)
    rsi_1 = 3
    int32_t var_88_7 = 3
    rax_55 = sub_14297be70(arg1, sub_140687be0(&var_78, arg2, "BY", r9_6))

void* rbx_25

if (rax_53 != 0 || rax_55 != 0)
    rbx_25.b = 1
else
    rbx_25.b = 0

if ((rsi_1 & 2) != 0)
    int64_t rdx_49 = var_68_4:8.q
    
    if (rdx_49 u>= 0x10)
        void* rcx_49 = var_78.q
        void* rax_56 = rcx_49
        
        if (rdx_49 + 1 u>= 0x1000)
            rcx_49 = *(rcx_49 - 8)
            
            if (rax_56 - rcx_49 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_49)
    
    int128_t var_68_5 = data_143702ea0
    var_78 = 0

int64_t var_40

if (var_40 u>= 0x10)
    void* rcx_50 = var_58
    void* rax_59 = rcx_50
    
    if (var_40 + 1 u>= 0x1000)
        rcx_50 = *(rcx_50 - 8)
        
        if (rax_59 - rcx_50 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_50)

uint64_t result = zx.q(result_1) | 0x20

if (rbx_25.b == 0)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
