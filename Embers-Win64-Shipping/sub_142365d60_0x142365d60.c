// 函数: sub_142365d60
// 地址: 0x142365d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_78
sub_140b63b70(sub_140d21d80(arg1) + 0x5c, &var_78)
int16_t* const rdx_1 = &data_142d40450
int32_t var_70

if (var_70 != 0)
    rdx_1 = var_78

int64_t arg_18 = 0
int64_t arg_8 = 0
void arg_20
int64_t rax_2 = *sub_140b58260(&arg_20, rdx_1, 1)
uint64_t var_68 = 0
int64_t var_60 = 0
int64_t var_58 = rax_2
void var_50
sub_140be09b0(&var_50, 0x40, &var_68)
uint64_t var_98 = 0
int64_t var_90 = 0
int64_t var_88
void var_40
int64_t* rax_4 = sub_140ba9d00(&var_88, sub_140b63b70(&var_40, &var_68))

if (&var_98 != rax_4)
    uint64_t rcx_5 = var_98
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    var_98 = *rax_4
    *rax_4 = 0
    var_90.d = rax_4[1].d
    var_90:4.d = *(rax_4 + 0xc)
    rax_4[1] = 0

int64_t rcx_7 = var_88

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

uint64_t rcx_8 = var_68

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

uint64_t* rax_7 = sub_140baa220(&var_68, &var_98)

if (&var_98 != rax_7)
    uint64_t rcx_10 = var_98
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    var_98 = *rax_7
    *rax_7 = 0
    var_90.d = rax_7[1].d
    var_90:4.d = *(rax_7 + 0xc)
    rax_7[1] = 0

uint64_t rcx_12 = var_68

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_140ba1330(&var_98, 0, arg3, 1)
bool cond:1 = arg2 s< *(arg1 + 0x60)
wchar16 const* const rdi = u".ubulk"
var_88 = 0

if (cond:1)
    rdi = u".uptnl"

int32_t rdx_5 = 0
int32_t rcx_14 = 0
int32_t var_80 = 0
int32_t var_7c = 0

if (*rdi != 0)
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (rdi[rbx_2] != 0)
    
    if (rbx_2.d + 1 s> 0)
        sub_1405947f0(&var_88, rbx_2.d + 1)
        rcx_14 = var_7c
        rdx_5 = var_80
    
    int32_t rax_10 = rbx_2.d + 1 + rdx_5
    int32_t var_80_1 = rax_10
    
    if (rax_10 s> rcx_14)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, rdi, (rbx_2.d + 1) * 2)

uint64_t result = sub_140b0f020(&var_68, arg3, &var_88)
void** result_1 = result

if (arg3 != result)
    void* rcx_19 = *arg3
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    *arg3 = *result_1
    *result_1 = nullptr
    arg3[1].d = result_1[1].d
    *(arg3 + 0xc) = *(result_1 + 0xc)
    result_1[1] = 0

uint64_t rcx_21 = var_68

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = var_88

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

uint64_t rcx_23 = var_98

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int16_t* rcx_24 = var_78

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

result.b = 1
return result
