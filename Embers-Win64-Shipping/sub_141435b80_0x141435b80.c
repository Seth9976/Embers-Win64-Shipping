// 函数: sub_141435b80
// 地址: 0x141435b80
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
    int64_t r8 = sx.q(*(r9_1 + rsi * 0x30 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8 * 0x30) = 0xffffffff

void* rax_2 = arg1[4]
void* r9_2 = &arg1[2]
int64_t var_38 = 0

if (rax_2 != 0)
    r9_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
int64_t var_30
__builtin_memset(&var_30, 0, 0x12)
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9_2 + (r8_1 << 2)) |= 1 << (rsi.b & 0x1f)
int32_t* rbx_2 = sx.q(rsi.d) * 0x30 + *arg1
*rbx_2 = *arg3
__builtin_memset(&rbx_2[2], 0, 0x1a)
sub_1405d1550(&var_30)
rbx_2[0xa] = 0xffffffff
int32_t arg_8
sub_141452d30(arg1, &arg_8, zx.q(arg2), rbx_2, rsi.d, nullptr)
return *arg1 + 8 + sx.q(arg_8) * 0x30
