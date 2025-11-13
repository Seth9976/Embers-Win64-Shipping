// 函数: sub_141da2520
// 地址: 0x141da2520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t var_e0
sub_140596d10(&var_e0, arg2)
int64_t var_d0
sub_140596d10(&var_d0, arg3)
void*** rax_2 = sub_140a82f30(0x30, 8)
*rax_2 = &data_143239770
rax_2[1] = arg1
sub_140596d10(&rax_2[2], &var_e0)
sub_140596d10(&rax_2[4], &var_d0)
*rax_2 = &data_143239790
void* const var_78
void* const rax_3 = var_78

if (rax_2 != -8)
    rax_3 = &data_141d9be30

var_78 = rax_3
int64_t* var_f8 = nullptr
int64_t* rcx_5 = nullptr
int32_t var_f0 = 0
int32_t rax_4 = 0

if (arg4 != &var_f8 && arg4[1].d != 0)
    int64_t* r8 = *arg4
    
    if (r8 != 0)
        (*(*r8 + 0x40))(r8, &var_f8)
        rax_4 = var_f0
        rcx_5 = var_f8

void*** var_a8 = nullptr
void** const var_98 = &data_143239910
int64_t var_90 = 0
int32_t var_88 = 0

if (rax_4 != 0 && rcx_5 != 0)
    (*(*rcx_5 + 0x40))(rcx_5, &var_90)

var_98 = &data_143239930
void (* var_b8)(int64_t* arg1, int64_t arg2) = sub_141d9ba50
sub_141d93180(arg1, 0xd, &var_78, &var_b8)

if (var_b8 != 0)
    void** const* rcx_8 = &var_98
    
    if (var_a8 != 0)
        rcx_8 = var_a8
    
    (*rcx_8)[2](rcx_8)

uint64_t result = sub_140745b20(&var_f8)

if (var_78 != 0)
    void var_58
    void*** rcx_10 = &var_58
    
    if (rax_2 != 0)
        rcx_10 = rax_2
    
    result = (*rcx_10)[2](rcx_10)

int64_t rcx_11 = var_d0

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_e0

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_118)
return result
