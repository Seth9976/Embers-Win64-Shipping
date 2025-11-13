// 函数: sub_1426c4500
// 地址: 0x1426c4500
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
int64_t* rdx_6 = arg3[1]
int64_t* rbx_2 = sx.q(rsi.d) * 0x30 + *arg1
*rbx_2 = **arg3
sub_1426c5650(&rbx_2[1], rdx_6)
rbx_2[5].d = 0xffffffff
uint32_t rcx_11 = (*rbx_2 u>> 4).d
int32_t rdx_8 = (0x9e3779b9 - rcx_11) ^ rcx_11 << 8
int32_t r8_5 = neg.d(rcx_11 + rdx_8) ^ rdx_8 u>> 0xd
int32_t rcx_14 = (rcx_11 - r8_5 - rdx_8) ^ r8_5 u>> 0xc
int32_t rdx_11 = (rdx_8 - rcx_14 - r8_5) ^ rcx_14 << 0x10
int32_t r8_8 = (r8_5 - rcx_14 - rdx_11) ^ rdx_11 u>> 5
int32_t rcx_17 = (rcx_14 - r8_8 - rdx_11) ^ r8_8 u>> 3
int32_t rdx_14 = (rdx_11 - rcx_17 - r8_8) ^ rcx_17 << 0xa
sub_1426d4e60(arg1, arg2, (r8_8 - rcx_17 - rdx_14) ^ rdx_14 u>> 0xf, rbx_2, rsi.d, arg4)
return arg2
