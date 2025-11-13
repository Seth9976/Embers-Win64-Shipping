// 函数: sub_140ee00f0
// 地址: 0x140ee00f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_5 = (rsi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*((rsi << 5) + r9_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r9_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rsi.b & 0x1f)
int64_t* r14_2 = (sx.q(rsi.d) << 5) + *arg1
*r14_2 = *arg2
r14_2[1] = 0
int64_t rbp = sx.q(arg3[1].d)
int64_t r15_1 = *arg3
r14_2[2].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a00(&r14_2[1], rbp.d, 0)
    memcpy(r14_2[1], r15_1, (rbp << 3).d)
else
    *(r14_2 + 0x14) = rbp.d

r14_2[3].d = 0xffffffff
int64_t rbx_1 = *r14_2
int32_t arg_8
sub_14090fbf0(arg1, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), r14_2, rsi.d, nullptr)
return *arg1 + (sx.q(arg_8) << 5) + 8
