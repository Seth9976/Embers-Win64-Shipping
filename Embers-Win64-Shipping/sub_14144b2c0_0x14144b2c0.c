// 函数: sub_14144b2c0
// 地址: 0x14144b2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(arg3)
__builtin_memset(arg1, 0, 0x20)
int128_t* rdi = arg4

if (arg3 s<= 0)
    return arg1

void** rbx = arg1
int64_t i

do
    int64_t rbp_1 = *(arg5 - arg1 + rbx)
    int128_t var_b8_1 = *rdi
    int128_t var_a8_1 = rdi[1]
    int128_t var_98_1 = rdi[2]
    int128_t var_88_1 = rdi[3]
    int128_t var_38_1 = rdi[4]
    var_38_1.q = rbp_1
    void*** rax_1 = sub_14081d830(0x88, *(arg2 + 8), 1, 0)
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        rax_1[1] = rbp_1
        rax_1[2] = 0
        rax_1[3].b = 0
        *(rax_1 + 0x1c) = 0
        rax_1[4] = 0
        rax_1[5].w = 0x200
        *(rax_1 + 0x30) = var_b8_1
        *rax_1 = &data_142f11960
        rax_1[0x10] = 0
        *(rax_1 + 0x40) = var_a8_1
        *(rax_1 + 0x50) = var_98_1
        *(rax_1 + 0x60) = var_88_1
        *(rax_1 + 0x70) = var_38_1
    
    *rbx = rax_1
    rdi = &rdi[5]
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
