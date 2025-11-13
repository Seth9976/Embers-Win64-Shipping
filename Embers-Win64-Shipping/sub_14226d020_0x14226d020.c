// 函数: sub_14226d020
// 地址: 0x14226d020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg1[0x69]
uint64_t rdi
rdi.b = 0

if (r10 == 0 || arg2 s>= 0xb)
label_14226d09d:
    int128_t var_98
    memset(&var_98, 0, 0x88)
    int32_t var_90_1 = 0x3f800000
    *arg5 = var_98
    int128_t var_88
    arg5[1] = var_88
    int128_t var_78
    arg5[2] = var_78
    int128_t var_68
    arg5[3] = var_68
    int128_t var_58
    arg5[4] = var_58
    int128_t var_48
    arg5[5] = var_48
    int128_t var_38
    arg5[6] = var_38
    int128_t var_28
    arg5[7] = var_28
    int64_t var_18
    arg5[8].q = var_18
else
    int64_t rdx = sx.q(arg2)
    int64_t rax_1 = rdx * 3
    int32_t arg_c = (*(r10 + (rax_1 << 2) + 0x2c)).d
    
    if (0f f== *(r10 + rdx * 0xc + 0x30))
        goto label_14226d09d
    
    char rax_3 = sub_14226ca40(arg1, (*(r10 + (rax_1 << 2) + 0x28)).q, arg3, arg4, arg5)
    rdi = zx.q(rax_3)
    
    if (rax_3 == 0)
        goto label_14226d09d

return zx.q(rdi.b)
