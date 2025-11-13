// 函数: sub_1423f60e0
// 地址: 0x1423f60e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rcx = *arg1
char var_dc
char var_dc_1 = var_dc & 0xf8
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x1c)
*arg2 = *rcx
arg2[1] = rcx[1]
void* rax_4 = rcx[2]
char var_db = 0
int64_t var_d8
__builtin_memset(&var_d8, 0, 0xac)
arg2[2] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int64_t zmm0 = var_f8.q
int32_t rax_5 = var_f8:8.d
*(arg2 + 0x34) &= 0xf8
arg2[3] = zmm0
void* rcx_1 = arg2 + 0x44
arg2[4].d = rax_5
int64_t i_3 = 5
int64_t var_d0
int64_t r10 = &var_d0 - &arg2[3]
int64_t rdx = &var_f8 - &arg2[3]
*(arg2 + 0x24) = var_f8:0xc.q
int64_t var_e8
*(arg2 + 0x2c) = var_e8:4.d
int64_t i_4 = 5
arg2[6].d = 0
int64_t r11 = &var_d8 - &arg2[3]
*(arg2 + 0x35) = 0
int64_t i

do
    *(rcx_1 - 0xc) = *(rcx_1 + r11 - 0x2c)
    *(rcx_1 + r11 - 0x2c) = 0
    *(rcx_1 - 4) = *(r10 + rcx_1 - 0x2c)
    *rcx_1 = *(rcx_1 + rdx)
    *(rcx_1 + rdx) = 0
    *(r10 + rcx_1 - 0x2c) = 0
    rcx_1 += 0x10
    i = i_4
    i_4 -= 1
while (i != 1)
int64_t i_5 = 5
int64_t var_80
int64_t r10_1 = &var_80 - &arg2[3]
int64_t var_88
int64_t r11_1 = &var_88 - &arg2[3]
void* rcx_2 = arg2 + 0x94
int64_t i_1

do
    *(rcx_2 - 0xc) = *(r11_1 + rcx_2 - 0x7c)
    *(r11_1 + rcx_2 - 0x7c) = 0
    *(rcx_2 - 4) = *(r10_1 + rcx_2 - 0x7c)
    *rcx_2 = *(rcx_2 + rdx)
    *(rcx_2 + rdx) = 0
    *(r10_1 + rcx_2 - 0x7c) = 0
    rcx_2 += 0x10
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
int64_t var_38
int64_t* rsi = &var_38
int64_t i_2 = 5
arg2[0x1b] = var_38
int32_t var_30
arg2[0x1c].d = var_30

do
    int64_t rcx_3 = rsi[-2]
    rsi = &rsi[-2]
    i_2 -= 1
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
while (i_2 != 0)

int64_t* rbx = &var_88

do
    int64_t rcx_4 = rbx[-2]
    rbx = &rbx[-2]
    i_3 -= 1
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
while (i_3 != 0)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
