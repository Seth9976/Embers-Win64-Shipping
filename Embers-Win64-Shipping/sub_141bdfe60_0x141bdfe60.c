// 函数: sub_141bdfe60
// 地址: 0x141bdfe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t var_f0
sub_140d3a3a0(&var_f0, arg1)
int64_t rax_2 = var_f0
int64_t var_b8
sub_141b79880(&var_b8, arg2)
void*** rax_3 = sub_140a82f30(0x40, 8)
int64_t var_f8 = 0
*rax_3 = &data_143084458
rax_3[1] = rax_2
rax_3[6] = 0
rax_3[2].d = 0xffffffff
*(rax_3 + 0x14) = 0
__builtin_memset(&rax_3[4], 0, 0x14)

if (*(rax_3 + 0x34) s<= 0xffffffff)
    sub_1405947f0(&rax_3[5], 0)

int16_t* rax_4 = rax_3[5]

if (rax_4 != 0)
    *rax_4 = 0

rax_3[2] = var_b8
int32_t var_b0
rax_3[3].d = var_b0
int64_t var_a8
rax_3[4] = var_a8
int64_t var_a0
sub_140597df0(&rax_3[5], &var_a0)
rax_3[7].b = arg3
uint64_t var_d0 = 0
*rax_3 = &data_143084478
int64_t* (* var_88)(int32_t* arg1)
int64_t* (* rax_9)(int32_t* arg1) = var_88

if (rax_3 != -8)
    rax_9 = j_sub_141b872d0

var_88 = rax_9
int64_t var_e8 = *arg2
int32_t var_e0 = arg2[1].d
int64_t var_d8 = arg2[2]
int64_t var_c8 = 0
sub_140597df0(&var_d0, &arg2[3])
int64_t result = sub_141bdbe20(arg1, &var_e8, &var_88)

if (var_88 != 0)
    void var_68
    void*** rcx_7 = &var_68
    
    if (rax_3 != 0)
        rcx_7 = rax_3
    
    result = (*rcx_7)[2](rcx_7)

int64_t rcx_8 = var_a0

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = arg2[3]

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_118)
return result
