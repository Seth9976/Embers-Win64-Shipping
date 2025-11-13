// 函数: sub_140917ec0
// 地址: 0x140917ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = arg2
int32_t rdx = *(arg1 + 0x34)
int64_t r8
int64_t var_10 = r8
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140775520(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8_1 = sx.q(*(r9_1 + rdi * 0x48 + 4))
    arg1[6].d = r8_1.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r9_1 + r8_1 * 0x48) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_2 = &arg1[2]

if (rax_2 != 0)
    r8_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (rdi.b & 0x1f)
void*** rsi = *arg1 + sx.q(rdi.d) * 0x48
sub_140916fa0(&var_18, rsi)
rsi[8].d = 0xffffffff
int32_t rax_8 = rsi[4].d
int16_t* rdx_7

if (rax_8 == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = rsi[3]

int32_t rcx_8 = rax_8 - 1

if (rax_8 == 0)
    rcx_8 = 0

int32_t arg_8
sub_140925170(arg1, &arg_8, sub_1405969c0(rcx_8, rdx_7), rsi, rdi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x48 + 0x30
