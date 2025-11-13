// 函数: sub_140917ff0
// 地址: 0x140917ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140775520(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(r9_1 + rdi * 0x48 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8 * 0x48) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t rcx_7 = sx.q(rdi.d) * 9
int64_t rdx_5 = *arg1
*(rdx_5 + (rcx_7 << 3) + 8) = 0
*(rdx_5 + (rcx_7 << 3) + 0x10) = 0
*(rdx_5 + (rcx_7 << 3)) = &data_142e1f860
void*** rsi = rdx_5 + (rcx_7 << 3)
sub_140596d10(&rsi[3], arg2 + 0x18)
rsi[5] = *(arg2 + 0x28)
*rsi = &data_142e1f860
rsi[6] = *arg3
void* rax_10 = arg3[1]
rsi[7] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

rsi[8].d = 0xffffffff
int32_t rax_11 = rsi[4].d
int16_t* rdx_7

if (rax_11 == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = rsi[3]

int32_t rcx_9 = rax_11 - 1

if (rax_11 == 0)
    rcx_9 = 0

int32_t arg_8
sub_140925640(arg1, &arg_8, sub_1405969c0(rcx_9, rdx_7), rsi, rdi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x48 + 0x30
