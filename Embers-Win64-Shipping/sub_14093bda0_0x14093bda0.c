// 函数: sub_14093bda0
// 地址: 0x14093bda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*((rdi << 5) + r9_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r9_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int64_t* rsi_2 = (sx.q(rdi.d) << 5) + *arg1
*rsi_2 = 0
*rsi_2 = *arg2
*arg2 = 0
rsi_2[1].d = arg2[1].d
*(rsi_2 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
rsi_2[2] = *arg3
rsi_2[3].d = 0xffffffff
int32_t rax_15 = rsi_2[1].d
int16_t* rdx_5

if (rax_15 == 0)
    rdx_5 = &data_142d40450
else
    rdx_5 = *rsi_2

int32_t rcx_6 = rax_15 - 1

if (rax_15 == 0)
    rcx_6 = 0

int32_t arg_8
sub_1409249d0(arg1, &arg_8, sub_1405969c0(rcx_6, rdx_5), rsi_2, rdi.d, nullptr)
return *arg1 + (sx.q(arg_8) << 5) + 0x10
