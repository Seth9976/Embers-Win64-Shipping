// 函数: sub_14092ff00
// 地址: 0x14092ff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t var_48 = 0
int32_t var_3c = 0
int32_t rdx = 0
int32_t var_40 = 0
int32_t r9 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_1.d + 1)
        r9 = var_3c
        rdx = var_40
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_40_1 = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, arg2, (rbx_1.d + 1) * 2)

int64_t* rbx_3 = *(arg1 + 8)
int128_t zmm6 = *arg3
int32_t rcx_3 = rbx_3[4].d
int16_t arg_8

if (((rcx_3 - 2) & 0xfffffff5) != 0 || rcx_3 == 0xa)
    int64_t* rcx_4 = rbx_3[1]
    arg_8 = 0x2c
    (*(*rcx_4 + 0x150))(rcx_4, &arg_8, 2)

(*(*rbx_3 + 0x10))(rbx_3, &var_48)
int64_t* rcx_6 = rbx_3[1]
arg_8 = 0x3a
(*(*rcx_6 + 0x150))(rcx_6, &arg_8, 2)
int16_t* var_38
sub_140a2e390(&var_38, u"%g", _mm_cvtps_pd(zmm6.q))
int64_t* rcx_8 = rbx_3[1]
int32_t var_30
int16_t* const rdx_6

if (var_30 == 0)
    rdx_6 = &data_142d40450
else
    rdx_6 = var_38
    rsi = var_30 - 1

int64_t result = (*(*rcx_8 + 0x150))(rcx_8, rdx_6, sx.q(rsi) * 2)
int16_t* rcx_9 = var_38

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

rbx_3[4].d = 8
int64_t rcx_10 = var_48

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
