// 函数: sub_141aee070
// 地址: 0x141aee070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4d20(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8_1 = sx.q(*(r9_1 + rdi * 0x14 + 4))
    arg1[6].d = r8_1.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8_1 * 0x14) = 0xffffffff

void* rax_2 = arg1[4]
void* r9_2 = &arg1[2]

if (rax_2 != 0)
    r9_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r8_2 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9_2 + (r8_2 << 2)) |= 1 << (rdi.b & 0x1f)
int64_t rdx_5 = *arg1
int64_t rcx_6 = sx.q(rdi.d) * 5
int64_t rax_8 = *arg2
*(rdx_5 + (rcx_6 << 2)) = rax_8
int64_t* r9_3 = rdx_5 + (rcx_6 << 2)
r9_3[1].d = 0
*(r9_3 + 0xc) = 0xffffffff
int32_t arg_8
sub_141b110d0(arg1, &arg_8, (rax_8 u>> 0x20).d ^ rax_8.d, r9_3, rdi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x14 + 8
