// 函数: sub_14225e5e0
// 地址: 0x14225e5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
char* rdi = arg2
int64_t* (* var_b8)(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int128_t* arg5, 
    int32_t* arg6) = arg2
int64_t* var_b0 = &arg_18
int64_t rax = *arg1
int128_t zmm1 = var_b8.o
int64_t var_80 = rax
int64_t var_68 = rax
int128_t var_90 = zmm1
int128_t var_78 = zmm1
void var_58
sub_142239bc0(&var_58, arg2 + 0x3c, arg2 + 0x60, *rdi)
int32_t result = *(rdi + 0x38)

if (result != 3)
    int64_t* rbx_1 = *(rdi + 0xc0)
    var_b8 = *rbx_1
    var_b0.d = rbx_1[1].d
    int128_t* var_98_1 = &var_90
    int64_t* (* var_a0)(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int128_t* arg5, 
        int32_t* arg6) = sub_142261fd0
    sub_142237e10(&var_58, &var_b8, &var_a0)
    var_a0 = rbx_1[4]
    var_98_1.d = rbx_1[5].d
    int128_t* var_b0_1 = &var_90
    var_b8 = sub_142261fd0
    sub_142237fa0(&var_58, &var_a0, &var_b8)
    var_a0 = rbx_1[2]
    var_98_1.d = rbx_1[3].d
    int128_t* var_b0_2 = &var_90
    var_b8 = sub_142261fd0
    sub_1422378d0(&var_58, &var_a0, &var_b8)
    var_a0 = rbx_1[6]
    var_98_1.d = rbx_1[7].d
    int128_t* var_b0_3 = &var_90
    var_b8 = sub_142261fd0
    sub_142237c50(&var_58, &var_a0, &var_b8)
    result = *(rdi + 0x38)

if (result == 2)
    return result

int128_t* var_b0_4 = &var_78
var_b8 = sub_142261f60
return sub_1422377c0(&var_58, &rdi[0xc8], &var_b8)
