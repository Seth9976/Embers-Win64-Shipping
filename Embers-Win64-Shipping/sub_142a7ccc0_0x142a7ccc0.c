// 函数: sub_142a7ccc0
// 地址: 0x142a7ccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t var_b8 = 0x345ad82c
int32_t var_b0 = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x80)
void* r14 = arg3
int32_t var_ac = 0x90
uint64_t i_2 = zx.q(arg4)
int512_t zmm1 = sub_142aea9e0(&var_b8, arg2, arg5)

if (*arg5 s> 0)
    return 0

int64_t rbp = sx.q(i_2.d)
int32_t** result = sub_142a7dd00(rbp << 3)

if (result == 0)
    *arg5 = 7
    return result

if (i_2.d s> 0)
    int32_t** result_1 = result
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int32_t* rax_1
        rax_1, zmm1 = sub_142aeabd0(nullptr, r14, arg5)
        r14 += 0x40
        *result_1 = rax_1
        result_1 = &result_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rax_2 = sub_142a7ce50(arg1, &var_b8, result, i_2.d, zmm1, arg5)

if (i_2.d s> 0)
    do
        sub_142aea470(result[rbx])
        rbx += 1
    while (rbx s< rbp)

sub_142a7dcd0(result)
sub_142aea470(&var_b8)
return zx.q(rax_2)
