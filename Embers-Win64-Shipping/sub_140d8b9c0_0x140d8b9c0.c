// 函数: sub_140d8b9c0
// 地址: 0x140d8b9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*(r10_1 + rdi * 0x10 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + rdx * 0x10) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int64_t* rsi_2 = (sx.q(rdi.d) << 4) + *arg1
int64_t* rax_11 = *arg3
*rsi_2 = rax_11
rsi_2[1].d = 0xffffffff
int16_t* rcx_6

if (rax_11[1].d == 0)
    rcx_6 = &data_142d40450
else
    rcx_6 = *rax_11

sub_140d9d0f0(arg1, arg2, sub_140a5ff80(rcx_6, 0), rsi_2, rdi.d, arg4)
return arg2
