// 函数: sub_14093b5e0
// 地址: 0x14093b5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4ec0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8_1 = sx.q(*(r9_1 + rbp * 0x28 + 4))
    arg1[6].d = r8_1.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8_1 * 0x28) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_2 = &arg1[2]

if (rax_2 != 0)
    r8_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbp.d)
int64_t var_30 = 0
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (rbp.b & 0x1f)
int64_t rcx_7 = sx.q(rbp.d) * 5
int64_t rax_8 = *arg2
int64_t rdx_6 = *arg1
*(rdx_6 + (rcx_7 << 3) + 8) = 0.o
*(rdx_6 + (rcx_7 << 3)) = rax_8
*(rdx_6 + (rcx_7 << 3) + 0x18) = 0
int64_t* rdi = rdx_6 + (rcx_7 << 3)
rdi[4].d = 0xffffffff
int32_t arg_8
sub_14093e1f0(arg1, &arg_8, (rax_8 u>> 0x20).d + sub_140b5ead0(rax_8.d), rdi, rbp.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 8
