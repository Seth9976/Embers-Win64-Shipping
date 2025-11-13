// 函数: sub_140b2cae0
// 地址: 0x140b2cae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140b45900(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rsi * 0x848 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x848 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r9_2 = &arg1[2]

if (rax_2 != 0)
    r9_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9_2 + (r8_1 << 2)) |= 1 << (rsi.b & 0x1f)
int64_t* r14_1 = sx.q(rsi.d) * 0x848 + *arg1
*r14_1 = 0
*r14_1 = *arg2
*arg2 = 0
r14_1[1].d = arg2[1].d
*(r14_1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
sub_140596d10(&r14_1[2], arg3)
r14_1[4] = arg3[2]
r14_1[5] = arg3[3]
r14_1[6] = arg3[4]
r14_1[7].b = arg3[5].b
*(r14_1 + 0x39) = *(arg3 + 0x29)
memcpy(r14_1 + 0x3a, arg3 + 0x2a, 0x800)
r14_1[0x108].d = 0xffffffff
int32_t rax_16 = r14_1[1].d
int16_t* rdx_7

if (rax_16 == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = *r14_1

int32_t rcx_8 = rax_16 - 1

if (rax_16 == 0)
    rcx_8 = 0

int32_t arg_8
sub_140b37240(arg1, &arg_8, sub_1405969c0(rcx_8, rdx_7), r14_1, rsi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x848 + 0x10
