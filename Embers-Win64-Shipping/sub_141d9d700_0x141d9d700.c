// 函数: sub_141d9d700
// 地址: 0x141d9d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t var_d0
sub_140596d10(&var_d0, arg2)
int32_t rax_2 = arg2[2].d
int32_t rax_3 = *(arg2 + 0x14)
void*** rax_4 = sub_140a82f30(0x28, 8)
*rax_4 = &data_1432396d0
rax_4[1] = arg1
sub_140596d10(&rax_4[2], &var_d0)
rax_4[4].d = rax_2
*(rax_4 + 0x24) = rax_3
*rax_4 = &data_1432396f0
int64_t (* var_78)(int64_t* arg1, void* arg2)
int64_t (* rax_5)(int64_t* arg1, void* arg2) = var_78

if (rax_4 != -8)
    rax_5 = j_sub_141d973f0

var_78 = rax_5
int64_t* var_e8 = nullptr
int64_t* rcx_5 = nullptr
int32_t var_e0 = 0
int32_t rax_6 = 0

if (arg3 != &var_e8 && arg3[1].d != 0)
    int64_t* r8_1 = *arg3
    
    if (r8_1 != 0)
        (*(*r8_1 + 0x40))(r8_1, &var_e8)
        rax_6 = var_e0
        rcx_5 = var_e8

void*** var_a8 = nullptr
void** const var_98 = &data_143239910
int64_t var_90 = 0
int32_t var_88 = 0

if (rax_6 != 0 && rcx_5 != 0)
    (*(*rcx_5 + 0x40))(rcx_5, &var_90)

var_98 = &data_143239930
int64_t (* var_b8)(int64_t* arg1) = j_sub_140926420
sub_141d92c70(arg1, 8, &var_78, &var_b8)

if (var_b8 != 0)
    void** const* rcx_8 = &var_98
    
    if (var_a8 != 0)
        rcx_8 = var_a8
    
    (*rcx_8)[2](rcx_8)

uint64_t result = sub_140745b20(&var_e8)

if (var_78 != 0)
    void var_58
    void*** rcx_10 = &var_58
    
    if (rax_4 != 0)
        rcx_10 = rax_4
    
    result = (*rcx_10)[2](rcx_10)

int64_t rcx_11 = var_d0

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

__security_check_cookie(rax_1 ^ &var_108)
return result
