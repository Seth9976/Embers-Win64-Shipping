// 函数: sub_140b08350
// 地址: 0x140b08350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4ec0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(r9_1 + rdi * 0x28 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8 * 0x28) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]
int128_t var_30 = data_142e151c0

if (rax_2 != 0)
    r8_1 = rax_2

int64_t var_38 = 0
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t rcx_7 = sx.q(rdi.d) * 5
int64_t rdx_5 = *arg1
*(rdx_5 + (rcx_7 << 3)) = *arg3
int64_t* rsi = rdx_5 + (rcx_7 << 3)
rsi[1] = 0
rsi[2] = 0
rsi[3] = 2

if (&var_38 != &rsi[1])
    sub_14093d4c0(&rsi[1])

sub_140596eb0(&var_38)
rsi[4].d = 0xffffffff
int32_t arg_8
sub_140b12fd0(arg1, &arg_8, arg2, rsi, rdi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 8
