// 函数: sub_14150d650
// 地址: 0x14150d650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int128_t zmm7 = zx.o(0)
int128_t zmm8 = zx.o(0)
int128_t zmm6 = zx.o(0)
char var_54 = arg3
int64_t rax_4 = *arg5
int128_t var_b8 = zx.o(0)
int128_t var_98 = zx.o(0)
int128_t var_78 = zx.o(0)
int32_t var_a8

if (rax_4 != 0)
    var_b8.q = rax_4
    var_b8:8.q = arg5[1]
    zmm7 = var_b8
    var_a8 = arg5[2].d
    int32_t var_a4_1 = *(arg5 + 0x14)
    int32_t var_a0_1 = arg5[3].d

int64_t rax_9 = arg5[4]
int32_t var_88

if (rax_9 != 0)
    var_98.q = rax_9
    var_98:8.q = arg5[5]
    zmm8 = var_98
    var_88 = arg5[6].d
    int32_t var_84_1 = *(arg5 + 0x34)
    int32_t var_80_1 = arg5[7].d

int64_t rax_14 = arg5[8]
int32_t var_68

if (rax_14 != 0)
    var_78.q = rax_14
    var_78:8.q = arg5[9]
    zmm6 = var_78
    var_68 = arg5[0xa].d
    int32_t var_64_1 = *(arg5 + 0x54)
    int32_t var_60_1 = arg5[0xb].d

if (*(arg1 + 0x54) == 0)
    int64_t* rcx = *(arg1 + 0x60)
    void* rax_20 = (*(*rcx + 0x248))(rcx)
    int64_t rcx_2 = sx.q(sub_1413e9d90(rax_20, *(arg1 + 0x50)))
    *(arg1 + 0x54) = 1 << rcx_2.b
    *(*(*(rax_20 + 0x62e0) + (rcx_2 << 3)) + 8) = *arg2

int64_t rdi_1 = sx.q(*(arg1 + 0xc8))
int32_t rax_25 = (rdi_1 + 1).d
*(arg1 + 0xc8) = rax_25

if (rax_25 s> *(arg1 + 0xcc))
    sub_1405fde00(arg1 + 0xc0)

int64_t rax_26 = *(arg1 + 0xc0)
int128_t* rcx_5 = rdi_1 * 0x68
*(rcx_5 + rax_26) = zmm7
*(rcx_5 + rax_26 + 0x10) = var_a8.o
*(rcx_5 + rax_26 + 0x20) = zmm8
*(rcx_5 + rax_26 + 0x30) = var_88.o
*(rcx_5 + rax_26 + 0x40) = zmm6
*(rcx_5 + rax_26 + 0x50) = var_68.o
*(rcx_5 + rax_26 + 0x60) = arg4.q
__security_check_cookie(rax_1 ^ &var_d8)
return arg1 + 0x10
