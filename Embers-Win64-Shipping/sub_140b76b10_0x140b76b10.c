// 函数: sub_140b76b10
// 地址: 0x140b76b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4ec0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rsi * 0x28 + 4))
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
temp0:temp1 = sx.q(rsi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rsi.b & 0x1f)
int64_t* rbx = arg3[1]
int64_t* r14 = *arg1 + sx.q(rsi.d) * 0x28
sub_140596d10(r14, *arg3)
r14[2] = *rbx
void* rax_9 = rbx[1]
r14[3] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

r14[4].d = 0xffffffff
int32_t rax_10 = r14[1].d
int16_t* rdx_7

if (rax_10 == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = *r14

int32_t rcx_9 = rax_10 - 1

if (rax_10 == 0)
    rcx_9 = 0

sub_140b7c130(arg1, arg2, sub_1405969c0(rcx_9, rdx_7), r14, rsi.d, arg4)
return arg2
