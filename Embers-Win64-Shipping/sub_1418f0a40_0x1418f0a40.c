// 函数: sub_1418f0a40
// 地址: 0x1418f0a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1406a4e00(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rsi * 0xa0 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0xa0 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rsi.b & 0x1f)
int64_t r14 = sx.q(*(arg2 + 0x80))
void* rdi_2 = sx.q(rsi.d) * 0xa0 + *arg1
*(rdi_2 + 0x80) = r14.d

if (r14.d != 0)
    sub_14119a530(rdi_2, r14.d, 0)
    memcpy(rdi_2, arg2, (r14 << 3).d)
else
    *(rdi_2 + 0x84) = 0x10

*(rdi_2 + 0x88) = *(arg2 + 0x88)
*(rdi_2 + 0x90) = *arg3
*arg3 = 0
*(rdi_2 + 0x98) = 0xffffffff
int32_t arg_8
sub_1418f95d0(arg1, &arg_8, *(rdi_2 + 0x88), rdi_2, rsi.d, nullptr)
return *arg1 + 0x90 + sx.q(arg_8) * 0xa0
