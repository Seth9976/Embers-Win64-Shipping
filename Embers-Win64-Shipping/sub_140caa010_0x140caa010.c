// 函数: sub_140caa010
// 地址: 0x140caa010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4ec0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rdi * 0x28 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + r8 * 0x28) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* rsi = *arg1 + sx.q(rdi.d) * 0x28
int64_t* rcx_8 = *arg3
int64_t* rdx_6 = arg3[1]
*rsi = 0
*rsi = *rcx_8
*rcx_8 = 0
rsi[1].d = rcx_8[1].d
*(rsi + 0xc) = *(rcx_8 + 0xc)
rcx_8[1] = 0
rsi[2] = 0
rsi[2] = *rdx_6
*rdx_6 = 0
rsi[3].d = rdx_6[1].d
*(rsi + 0x1c) = *(rdx_6 + 0xc)
rdx_6[1] = 0
rsi[4].d = 0xffffffff
int32_t rax_14 = rsi[1].d
int16_t* rdx_7

if (rax_14 == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = *rsi

int32_t rcx_9 = rax_14 - 1

if (rax_14 == 0)
    rcx_9 = 0

sub_1405d2a60(arg1, arg2, sub_1405969c0(rcx_9, rdx_7), rsi, rdi.d, arg4)
return arg2
