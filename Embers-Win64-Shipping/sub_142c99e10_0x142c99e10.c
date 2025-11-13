// 函数: sub_142c99e10
// 地址: 0x142c99e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
arg1[1] = 0
arg1[2] = 0
int32_t var_78 = 0
*arg1 = &Iex_2_3::BaseExc::`vftable'{for `std::exception'}
int64_t r8 = -1
char* const rax_2 = &data_1437020ab
arg1[5] = 0

if (arg2 != 0)
    rax_2 = arg2

arg1[6] = 0xf
arg1[3].b = 0

do
    r8 += 1
while (rax_2[r8] != 0)

sub_14058ad40(&arg1[3], rax_2, r8)
int64_t rax_3 = data_14401b788
char var_70
int128_t var_60
int128_t var_50
int128_t var_40
void* var_30
int128_t* rax_5
int32_t rbx
int128_t zmm0
int128_t zmm1_1

if (rax_3 == 0)
    zmm0 = data_143702ea0
    var_70 = 0
    var_60 = zmm0
    sub_14058ad40(&var_70, &data_1437020ab, 0)
    rax_5 = &var_70
    rbx = 4
else
    int128_t* rax_4 = rax_3(&var_30)
    rbx = 3
    zmm0 = *rax_4
    zmm1_1 = rax_4[1]
    rax_4[1].q = 0
    *(rax_4 + 0x18) = 0xf
    *rax_4 = 0
    rax_5 = &var_50
    var_50 = zmm0
    var_40 = zmm1_1

zmm0 = *rax_5
zmm1_1 = rax_5[1]
rax_5[1].q = 0
*(rax_5 + 0x18) = 0xf
*rax_5 = 0
*(arg1 + 0x38) = zmm0
*(arg1 + 0x48) = zmm1_1

if ((rbx.b & 4) != 0)
    int64_t rdx_1 = var_60:8.q
    rbx &= 0xfffffffb
    
    if (rdx_1 u>= 0x10)
        void* rcx_3 = var_70.q
        void* rax_6 = rcx_3
        
        if (rdx_1 + 1 u>= 0x1000)
            rcx_3 = *(rcx_3 - 8)
        
        if (rdx_1 + 1 u>= 0x1000 && rax_6 - rcx_3 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        j_sub_140a74f90(rcx_3)

if ((rbx.b & 2) != 0)
    int64_t rdx_3 = var_40:8.q
    rbx &= 0xfffffffd
    
    if (rdx_3 u>= 0x10)
        void* rcx_4 = var_50.q
        void* rax_9 = rcx_4
        
        if (rdx_3 + 1 u>= 0x1000)
            rcx_4 = *(rcx_4 - 8)
        
        if (rdx_3 + 1 u>= 0x1000 && rax_9 - rcx_4 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        j_sub_140a74f90(rcx_4)

int64_t var_18

if ((rbx.b & 1) == 0 || var_18 u< 0x10)
    __security_check_cookie(rax_1 ^ &var_98)
    return arg1

void* rcx_5 = var_30
void* rax_12 = rcx_5

if (var_18 + 1 u>= 0x1000)
    rcx_5 = *(rcx_5 - 8)

if (var_18 + 1 u>= 0x1000 && rax_12 - rcx_5 - 8 u> 0x1f)
    _invalid_parameter_noinfo_noreturn()
    noreturn

j_sub_140a74f90(rcx_5)
__security_check_cookie(rax_1 ^ &var_98)
return arg1
