// 函数: sub_1409fc430
// 地址: 0x1409fc430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t var_18 = 1
int64_t* rcx_1 = *(arg1 + 8) + 0x388
void* var_30 = nullptr
int32_t i_2 = 0
int64_t var_20 = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x14)
sub_14081daa0(rcx_1, &var_48)
int64_t* rcx_3 = *(arg1 + 8) + 0x350
(*(*rcx_3 + 0x28))(rcx_3)
void* rdx_1 = *(arg1 + 8)
sub_14081d930(rdx_1 + 0x388, *(rdx_1 + 0x120))
void* rcx_5 = *(arg1 + 8)
void* var_68 = nullptr
int64_t var_60 = 3
int64_t var_58 = 0xc
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, *(rcx_5 + 0x130))
int32_t var_50 = 0
int16_t var_4c = 0x100
char var_4a = 1
*(rcx_5 + 0x398) = temp0 + (temp0 u>> 0x1f)
sub_1405d16e0(&var_68, *(*(arg1 + 8) + 0xa0))
void* rax_3 = *(arg1 + 8)
int32_t rsi = *(rax_3 + 0x398)
int64_t rdi = sx.q(*(rax_3 + 0x3a8))
int32_t rax_4 = (rdi + 1).d
*(rax_3 + 0x3a8) = rax_4

if (rax_4 s> *(rax_3 + 0x3ac))
    sub_1405e4030(rax_3 + 0x3a0, rdi.d)

void* rcx_9 = *(rax_3 + 0x3a0)

if ((rcx_9.b & 1) != 0)
    rcx_9 = (rcx_9 s>> 1) + rax_3 + 0x3a0

void* rax_5 = var_68
void* rdx_10 = (rdi << 5) + rcx_9
*rdx_10 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

*(rdx_10 + 8) = var_60.d
*(rdx_10 + 0xc) = var_60:4.d
*(rdx_10 + 0x10) = var_58.d
*(rdx_10 + 0x14) = var_58:4.d
*(rdx_10 + 0x1c) = var_4c.b
*(rdx_10 + 0x1d) = var_4c:1.b
*(rdx_10 + 0x1e) = var_4a
*(rdx_10 + 0x18) = rsi
sub_1419ba620(*(arg1 + 8) + 0x350)
sub_1405d1550(&var_68)
void* rbx_1

if ((var_30.b & 1) == 0)
    rbx_1 = var_30
else
    rbx_1 = &var_30 + (var_30 s>> 1)

int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        sub_1405d1550(rbx_1)
        rbx_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_140a1d5c0(&var_30)
return sub_14081c9d0(&var_48)
