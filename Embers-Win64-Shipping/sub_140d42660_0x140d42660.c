// 函数: sub_140d42660
// 地址: 0x140d42660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4f50(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rsi * 0x30 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + r8 * 0x30) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rsi.b & 0x1f)
int64_t* rcx_8 = *arg3
int64_t* rdx_6 = arg3[1]
int64_t* r14_2 = sx.q(rsi.d) * 0x30 + *arg1
*r14_2 = *rcx_8
r14_2[1] = rcx_8[1]
void* rax_10 = rcx_8[2]
r14_2[2] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

r14_2[3] = *rdx_6
void* rax_12 = rdx_6[1]
r14_2[4] = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

r14_2[5].d = 0xffffffff
int64_t rbx_1 = *r14_2
sub_140d43cd0(arg1, arg2, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), r14_2, rsi.d, arg4)
return arg2
