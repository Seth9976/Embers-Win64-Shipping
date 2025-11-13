// 函数: sub_140b0d6a0
// 地址: 0x140b0d6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rdi = *arg1
int64_t var_a8 = 0
int64_t var_a0 = 0
void* rbx_1 = sx.q(rdi[1].d) * 0x70 + *rdi
int64_t rsi = sx.q(*(rbx_1 - 4))
sub_140b0c1e0(&var_a8, rbx_1 - 0x70)
int128_t zmm0 = *(rbx_1 - 0x30)
int64_t zmm1 = *(rbx_1 - 0x20)
int32_t rax_3 = *(rbx_1 - 0x18)
char var_48 = 0
int32_t var_40 = *(rbx_1 - 8)
int64_t rbx_2 = sx.q(rdi[1].d)
void* rcx_2 = *rdi + rbx_2 * 0x70 - 0x70

if (*(rcx_2 + 0x60) != 0)
    *(rcx_2 + 0x60) = 0

void* rcx_3 = rcx_2 + 0x10

if ((*(rcx_2 + 0xc) | *(rcx_2 + 8) | *(rcx_2 + 4) | *rcx_2) == 0)
    rcx_3 = nullptr

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 0)

int32_t rcx_6 = rdi[1].d
int32_t rax_11 = rcx_6 - (rbx_2 - 1).d

if (rax_11 != 1)
    int64_t rcx_4 = *rdi
    memmove(rcx_4 + rbx_2 * 0x70 - 0x70, rbx_2 * 0x70 + rcx_4, (rax_11 - 1) * 0x70)
    rcx_6 = rdi[1].d

rdi[1].d = rcx_6 - 1
int64_t var_118 = 0
int64_t var_110 = 0
sub_140b0c1e0(&var_118, &var_a8)
void* rdi_1 = arg1[1]
char var_b8 = 0
int64_t rbx_3 = sx.q(*(rdi_1 + 0x10))
int32_t rax_16 = (rbx_3 + 1).d
*(rdi_1 + 0x10) = rax_16

if (rax_16 s> *(rdi_1 + 0x14))
    sub_1405fde00(rdi_1 + 8)

int32_t* rbx_5 = rbx_3 * 0x68 + *(rdi_1 + 8)
*rbx_5 = 0
*(rbx_5 + 8) = 0
sub_140b0c1e0(rbx_5, &var_118)
void var_108
void* rcx_10 = &var_108
*(rbx_5 + 0x40) = zmm0
*(rbx_5 + 0x50) = zmm1
rbx_5[0x16] = rax_3
rbx_5[0x18].b = 0
char var_b8_1 = 0

if ((var_110:4.d | var_110.d | var_118:4.d | var_118.d) == 0)
    rcx_10 = nullptr

if (rcx_10 != 0)
    (**rcx_10)(rcx_10, 0)

void var_98
void* rcx_11 = &var_98
int32_t result = var_a0:4.d | var_a0.d | var_a8:4.d | var_a8.d
char var_48_1 = 0

if (result == 0)
    rcx_11 = nullptr

if (rcx_11 != 0)
    result = (**rcx_11)(rcx_11, 0)

if (rsi.d != 0xffffffff)
    void* rdx_6 = arg1[1]
    void var_128
    result = &var_128
    int32_t* rdx_9 = *(rdx_6 + 8) + 0x5c + rsi * 0x68
    
    if (&var_128 != rdx_9)
        *rdx_9 = *(rdx_6 + 0x10) - 1
        rdx_9[1].b = 1

__security_check_cookie(rax_1 ^ &var_148)
return result
