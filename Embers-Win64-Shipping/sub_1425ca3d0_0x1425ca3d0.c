// 函数: sub_1425ca3d0
// 地址: 0x1425ca3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140775640(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0xa0 + r10_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0xa0 + r10_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int32_t* rsi_2 = sx.q(rdi.d) * 0xa0 + *arg1
sub_1425ca9e0(rsi_2, arg3)
rsi_2[0x24] = 0xffffffff
int32_t rax_8 = rsi_2[8]
int16_t* rdx_7

if (rax_8 == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = *(rsi_2 + 0x18)

int32_t rcx_9 = rax_8 - 1

if (rax_8 == 0)
    rcx_9 = 0

sub_1425cd8f0(arg1, arg2, sub_1405969c0(rcx_9, rdx_7), rsi_2, rdi.d, arg4)
return arg2
