// 函数: sub_1408d9420
// 地址: 0x1408d9420
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
    int64_t r8_1 = sx.q(*(r9_1 + rdi * 0x28 + 4))
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
temp0:temp1 = sx.q(rdi.d)
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (rdi.b & 0x1f)
int64_t var_20 = 0
int32_t* r8_4 = *arg1 + sx.q(rdi.d) * 0x28
int32_t rax_8 = *arg2
*(r8_4 + 8) = 0.o
*r8_4 = rax_8
*(r8_4 + 0x18) = 0
r8_4[8] = 0xffffffff
int32_t arg_8
sub_1408e1de0(arg1, &arg_8, rax_8, r8_4, rdi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 8
