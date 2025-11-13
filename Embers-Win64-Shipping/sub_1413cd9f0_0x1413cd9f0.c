// 函数: sub_1413cd9f0
// 地址: 0x1413cd9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg2 + 8)

if (*(arg1 + 0x204) == 0 && *(rdi + 0x39) s>= 0)
    return 

uint64_t rax = zx.q(*(rdi + 0x39))

if ((rax.b & 2) == 0 || (rax.b & 8) == 0)
    return 

rax = zx.q(*(rdi + 0x3b))

if ((rax.b & 0x10) != 0)
    int128_t var_c8
    __builtin_memset(&var_c8, 0, 0x20)
    int128_t var_a8_1 = data_14399f6e0
    int64_t rax_1 = *rdi
    int128_t var_88_1 = data_14399f700
    int128_t var_98_1 = data_14399f6f0
    int128_t var_48_1 = zx.o(0)
    int128_t var_78_1 = data_14399f710
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x1c)
    int32_t var_38_1 = 0xffffffff
    int64_t arg_8
    int64_t arg_10
    void arg_18
    (*(rax_1 + 0xa0))(rdi, &arg_8, &arg_18, &arg_10, &var_c8)
    sub_141fd9ca0(&data_143f3d8f0, arg_8, 0)
    int64_t rdx_2 = arg_10
    
    if (rdx_2 != 0)
        sub_141fd9ca0(&data_143f3dad0, rdx_2, var_38_1)
    
    int64_t rsi_1 = sx.q(*(arg1 + 0x1d0))
    int32_t rax_2 = (rsi_1 + 1).d
    *(arg1 + 0x1d0) = rax_2
    
    if (rax_2 s> *(arg1 + 0x1d4))
        sub_1405a4d70(arg1 + 0x1c8)
    
    *(*(arg1 + 0x1c8) + (rsi_1 << 3)) = arg2
    rax = zx.q(*(rdi + 0x3b))

if ((rax.b & 8) == 0)
    return 

int64_t rdi_1 = sx.q(*(arg1 + 0x130))
int32_t rax_4 = (rdi_1 + 1).d
*(arg1 + 0x130) = rax_4

if (rax_4 s> *(arg1 + 0x134))
    sub_1405a4d70(arg1 + 0x128)

*(*(arg1 + 0x128) + (rdi_1 << 3)) = arg2
