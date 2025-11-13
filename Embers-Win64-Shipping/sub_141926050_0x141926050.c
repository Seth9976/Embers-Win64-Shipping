// 函数: sub_141926050
// 地址: 0x141926050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_5 = (rsi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*(r10_1 + rsi * 0x10 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + rdx * 0x10) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rsi.b & 0x1f)
int128_t* rax_11 = *arg3
int64_t* rbx_2 = (sx.q(rsi.d) << 4) + *arg1
*rbx_2 = rax_11
rbx_2[1].d = 0xffffffff
int128_t var_98 = *rax_11
uint128_t var_88 = rax_11[1]
int128_t var_78 = rax_11[2]
uint128_t var_68 = rax_11[3]
int128_t var_58 = rax_11[4]
uint128_t var_48 = rax_11[5]
int128_t var_38 = rax_11[6]
uint64_t var_28 = rax_11[7].q
sub_1419367f0(arg1, arg2, sub_140b21160(&var_98, 0x78, 0), rbx_2, rsi.d, arg4)
return arg2
