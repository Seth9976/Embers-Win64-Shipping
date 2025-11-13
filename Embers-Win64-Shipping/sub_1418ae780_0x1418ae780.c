// 函数: sub_1418ae780
// 地址: 0x1418ae780
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
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(r9_1 + rsi * 0x28 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8 * 0x28) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rsi.b & 0x1f)
int64_t rcx_7 = sx.q(rsi.d) * 5
int64_t rdx_5 = *arg1
*(rdx_5 + (rcx_7 << 3)) = *arg2
int64_t* r14 = rdx_5 + (rcx_7 << 3)
r14[1] = *arg3
void* rax_10 = arg3[1]
r14[2] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

r14[3].d = arg3[2].d
r14[4].d = 0xffffffff
int64_t rbx_1 = *r14
int32_t arg_8
sub_1418b2f60(arg1, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), r14, rsi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 8
