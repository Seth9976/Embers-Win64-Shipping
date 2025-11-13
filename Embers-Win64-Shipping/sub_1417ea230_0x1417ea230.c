// 函数: sub_1417ea230
// 地址: 0x1417ea230
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
    int64_t r9_1 = *arg1
    int64_t r8_1 = sx.q(*(r9_1 + rsi * 0x30 + 4))
    arg1[6].d = r8_1.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8_1 * 0x30) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_2 = &arg1[2]

if (rax_2 != 0)
    r8_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (rsi.b & 0x1f)
int32_t* rbx_2 = sx.q(rsi.d) * 0x30 + *arg1
*rbx_2 = *arg2
rbx_2[2] = arg2[1].d
__builtin_memset(&rbx_2[4], 0, 0x15)
rbx_2[0xa] = 0xffffffff
int32_t arg_8
sub_1417ef260(arg1, &arg_8, sub_1417f1300(rbx_2), rbx_2, rsi.d, nullptr)
return *arg1 + 0x10 + sx.q(arg_8) * 0x30
