// 函数: sub_140d427b0
// 地址: 0x140d427b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg3
int32_t r8 = *(arg1 + 0x34)
int64_t rsi

if (r8 == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4f50(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*(r9_1 + rsi * 0x30 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r8 - 1
    
    if (r8 != 1)
        *(r9_1 + rdx * 0x30) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rsi.b & 0x1f)
int64_t* rbx_2 = sx.q(rsi.d) * 0x30 + *arg1
sub_140d42130(&arg_8, rbx_2)
rbx_2[5].d = 0xffffffff
sub_140d43ec0(arg1, &arg_8, arg2, rbx_2, rsi.d, nullptr)
return *arg1 + 8 + sx.q(arg_8.d) * 0x30
