// 函数: sub_14226cd80
// 地址: 0x14226cd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg1[0x53]
void* rax_1
int64_t rax_2
void* r9

if (rbx != 0)
    rax_1 = sub_142531230()
    r9 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(r9 + 0x38) || *(*(r9 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

uint64_t rsi
rsi.b = 0

if (rbx == 0)
label_14226ce4e:
    int128_t var_b8
    memset(&var_b8, 0, 0x88)
    int32_t var_b0_1 = 0x3f800000
    *arg4 = var_b8
    int128_t var_a8
    arg4[1] = var_a8
    int128_t var_98
    arg4[2] = var_98
    int128_t var_88
    arg4[3] = var_88
    int128_t var_78
    arg4[4] = var_78
    int128_t var_68
    arg4[5] = var_68
    int128_t var_58
    arg4[6] = var_58
    int128_t var_48
    arg4[7] = var_48
    int64_t var_38
    arg4[8].q = var_38
else
    int64_t* rcx_1 = *(rbx + 0x70)
    
    if (rcx_1 == 0)
        goto label_14226ce4e
    
    int64_t arg_8
    
    if ((*(*rcx_1 + 0x2d8))(rcx_1, &arg_8) == 0)
        goto label_14226ce4e
    
    int32_t rax_6
    int64_t zmm6_1
    rax_6, zmm6_1 = sub_141ffde90(arg2)
    char rax_7 = sub_14226ca40(arg1, zmm6_1, rax_6, arg3, arg4)
    rsi = zx.q(rax_7)
    
    if (rax_7 == 0)
        goto label_14226ce4e

return zx.q(rsi.b)
