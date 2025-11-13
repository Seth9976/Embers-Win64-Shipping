// 函数: sub_141926ae0
// 地址: 0x141926ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1407c39b0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rsi * 0xe0 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0xe0 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rsi.b & 0x1f)
int128_t* rbx_1 = sx.q(rsi.d) * 0xe0 + *arg1
*rbx_1 = *arg2
rbx_1[1] = arg2[1]
rbx_1[2] = arg2[2]
rbx_1[3] = arg2[3]
rbx_1[4] = arg2[4]
rbx_1[5] = arg2[5]
rbx_1[6] = arg2[6]
rbx_1[7] = arg2[7]
rbx_1[8] = arg2[8]
rbx_1[9] = arg2[9]
rbx_1[0xa] = arg2[0xa]
rbx_1[0xb] = arg2[0xb]
rbx_1[0xc] = arg2[0xc]
rbx_1[0xd].d = *arg3
*(rbx_1 + 0xd8) = 0xffffffff
int32_t arg_8
sub_141938080(arg1, &arg_8, sub_14193dd60(rbx_1), rbx_1, rsi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0xe0 + 0xd0
