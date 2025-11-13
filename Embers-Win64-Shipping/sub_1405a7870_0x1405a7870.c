// 函数: sub_1405a7870
// 地址: 0x1405a7870
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
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*((rsi << 6) + r10_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 6) + r10_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rsi.b & 0x1f)
int64_t* rax_11 = *arg3
int64_t* rbx_2 = (sx.q(rsi.d) << 6) + *arg1
int64_t var_48
__builtin_memset(&var_48, 0, 0x30)
*rbx_2 = *rax_11
__builtin_memset(&rbx_2[1], 0, 0x30)
int64_t var_38
sub_140596e10(&var_38)
rbx_2[7].d = 0xffffffff
int32_t r8_2 = *(rbx_2 + 4)
int32_t rdx_7 = (*rbx_2 - r8_2) ^ r8_2 u>> 0xd
int32_t rcx_10 = (0x9e3779b9 - rdx_7 - r8_2) ^ rdx_7 << 8
int32_t r8_5 = (r8_2 - rcx_10 - rdx_7) ^ rcx_10 u>> 0xd
int32_t rdx_10 = (rdx_7 - rcx_10 - r8_5) ^ r8_5 u>> 0xc
int32_t rcx_13 = (rcx_10 - rdx_10 - r8_5) ^ rdx_10 << 0x10
int32_t r8_8 = (r8_5 - rcx_13 - rdx_10) ^ rcx_13 u>> 5
int32_t rdx_13 = (rdx_10 - rcx_13 - r8_8) ^ r8_8 u>> 3
int32_t rcx_16 = (rcx_13 - rdx_13 - r8_8) ^ rdx_13 << 0xa
sub_1405b7d30(arg1, arg2, (r8_8 - rcx_16 - rdx_13) ^ rcx_16 u>> 0xf, rbx_2, rsi.d, arg4)
return arg2
