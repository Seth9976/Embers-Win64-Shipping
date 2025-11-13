// 函数: sub_1425ca500
// 地址: 0x1425ca500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140a05e50(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0xb0 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0xb0 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* rsi_1 = sx.q(rdi.d) * 0xb0 + *arg1
*rsi_1 = 0
*rsi_1 = *arg2
*arg2 = 0
rsi_1[1].d = arg2[1].d
*(rsi_1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
sub_1425ca9e0(&rsi_1[2], arg3)
rsi_1[0x14].d = 0xffffffff
int32_t rax_11 = rsi_1[1].d
int16_t* rdx_6

if (rax_11 == 0)
    rdx_6 = &data_142d40450
else
    rdx_6 = *rsi_1

int32_t rcx_8 = rax_11 - 1

if (rax_11 == 0)
    rcx_8 = 0

int32_t arg_8
sub_1425cd660(arg1, &arg_8, sub_1405969c0(rcx_8, rdx_6), rsi_1, rdi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0xb0 + 0x10
