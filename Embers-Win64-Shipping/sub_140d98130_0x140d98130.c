// 函数: sub_140d98130
// 地址: 0x140d98130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_5 = (rsi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r8_1 = *arg1
    int64_t rdx = sx.q(*((rsi << 6) + r8_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 6) + r8_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r8_2 = &arg1[2]

if (rax_6 != 0)
    r8_2 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (rsi.b & 0x1f)
int64_t* rdx_7 = (sx.q(rsi.d) << 6) + *arg1
*rdx_7 = *arg2
void* rax_12 = arg2[1]
rdx_7[1] = rax_12

if (rax_12 != 0)
    *(rax_12 + 0xc) += 1

rdx_7[2] = arg2[2]
void* rax_14 = arg2[3]
rdx_7[3] = rax_14

if (rax_14 != 0)
    *(rax_14 + 0xc) += 1

rdx_7[4] = arg2[4]
rdx_7[5] = arg2[5]
rdx_7[6] = arg2[6]
rdx_7[7].d = arg2[7].d
*(rdx_7 + 0x3c) = *(arg2 + 0x3c)
return zx.q(rsi.d)
