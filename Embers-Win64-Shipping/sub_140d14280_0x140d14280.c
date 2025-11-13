// 函数: sub_140d14280
// 地址: 0x140d14280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405fdd60(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rsi * 0x70 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x70 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rsi.b & 0x1f)
int64_t* rbx_1 = sx.q(rsi.d) * 0x70 + *arg1
*rbx_1 = *arg2
void* rdx_5 = &rbx_1[5]
rbx_1[1] = *arg3
rbx_1[2] = arg3[1]
rbx_1[3] = 0
rbx_1[4] = 0
*(rdx_5 + 0x10) = 0
*(rdx_5 + 0x18) = 0
*(rdx_5 + 0x1c) = 0x80
void* rax_11 = *(rdx_5 + 0x10)

if (rax_11 != 0)
    rdx_5 = rax_11

*rdx_5 = 0
*(rdx_5 + 8) = 0
rbx_1[9].d = 0xffffffff
*(rbx_1 + 0x4c) = 0
rbx_1[0xb] = 0
rbx_1[0xc].d = 0
sub_1405af100(&rbx_1[3], &arg3[2])
rbx_1[0xd].d = 0xffffffff
int64_t rax_12 = *rbx_1
int64_t arg_8 = rax_12
sub_140d1ee20(arg1, &arg_8, sub_140b5ead0(rax_12.d) + arg_8:4.d, rbx_1, rsi.d, nullptr)
return *arg1 + sx.q(arg_8.d) * 0x70 + 8
