// 函数: sub_141da49c0
// 地址: 0x141da49c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4f50(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rdi * 0x30 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + r8 * 0x30) = 0xffffffff

void* rax_2 = arg1[4]
void* r9 = &arg1[2]

if (rax_2 != 0)
    r9 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9 + (r8_1 << 2)) |= 1 << (rdi.b & 0x1f)
int64_t* rcx_7 = *arg3
int64_t* rdx_6 = arg3[1]
int64_t* rsi_2 = sx.q(rdi.d) * 0x30 + *arg1
*rsi_2 = 0
*rsi_2 = *rcx_7
*rcx_7 = 0
rsi_2[1].d = rcx_7[1].d
*(rsi_2 + 0xc) = *(rcx_7 + 0xc)
rcx_7[1] = 0
rsi_2[2] = *rdx_6
rsi_2[3] = rdx_6[1]
int64_t rax_13 = rdx_6[2]
rdx_6[1] = 0
rsi_2[4] = rax_13
*rdx_6 = 0
rsi_2[5].d = 0xffffffff
int32_t rax_14 = rsi_2[1].d
int16_t* rdx_7

if (rax_14 == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = *rsi_2

int32_t rcx_8 = rax_14 - 1

if (rax_14 == 0)
    rcx_8 = 0

sub_141da7d30(arg1, arg2, sub_1405969c0(rcx_8, rdx_7), rsi_2, rdi.d, arg4)
return arg2
