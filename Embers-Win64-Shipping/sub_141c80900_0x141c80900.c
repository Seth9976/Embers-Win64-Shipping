// 函数: sub_141c80900
// 地址: 0x141c80900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_5 = (rsi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*((rsi << 5) + r9_1 + 4))
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
temp0:temp1 = sx.q(rsi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rsi.b & 0x1f)
int64_t rax_11 = *arg3
int64_t* rbx_2 = (sx.q(rsi.d) << 5) + *arg1
int64_t var_28 = 0
int64_t var_20 = 0
*rbx_2 = rax_11
rbx_2[1] = 0
rbx_2[2] = 0
sub_140596e10(&var_28)
rbx_2[3].d = 0xffffffff
int32_t arg_8
sub_141c871c0(arg1, &arg_8, arg2, rbx_2, rsi.d, nullptr)
return *arg1 + (sx.q(arg_8) << 5) + 8
