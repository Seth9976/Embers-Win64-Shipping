// 函数: sub_140dbddb0
// 地址: 0x140dbddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x38)
uint32_t* var_68 = nullptr
int64_t* rcx = *(rsi + 0x30)
int32_t var_60 = 0
(*(*rcx + 8))(rcx, arg3, zx.q(arg4), zx.q(arg5), arg8, &var_68)
uint32_t* rbx = var_68
int64_t rdx_1 = 0
int32_t r8_1 = 0
int128_t zmm6 = arg7
int32_t r9_1 = 0
int64_t var_78 = 0
int64_t var_70 = 0
void* r13 = &rbx[sx.q(var_60) * 3]
char var_a8

if (rbx != r13)
    do
        int64_t* var_88_1 = &var_78
        int64_t* var_a0
        var_a0.d = zmm6.d
        var_a8.q = arg6
        zmm6 = sub_140db7910(rsi, arg3, *rbx, rbx[1], var_a8, var_a0.d, rbx[2].b, arg9)
        rbx = &rbx[3]
    while (rbx != r13)
    
    r9_1 = var_70:4.d
    r8_1 = var_70.d
    rdx_1 = var_78

int32_t arg_8 = arg4
int32_t arg_c = arg5
int64_t var_58 = rdx_1
int32_t var_50 = r8_1
int32_t var_4c = r9_1
var_a8.d = zmm6.d
var_78 = 0
int64_t var_70_1 = 0
sub_140d9f870(rsi, arg2, &var_58, arg6, var_a8, &arg_8)
sub_140d949f0(&var_78)
uint32_t* rcx_5 = var_68

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
