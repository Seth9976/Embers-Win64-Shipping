// 函数: sub_1417ea360
// 地址: 0x1417ea360
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
int64_t* r9_4 = (sx.q(rdi.d) << 5) + *arg1
*r9_4 = *arg2
r9_4[1] = *arg3
void* rax_13 = arg3[1]
r9_4[2] = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

r9_4[3].d = 0xffffffff
int64_t rax_14 = *r9_4
int32_t arg_8
sub_1417ef010(arg1, &arg_8, (rax_14 u>> 0x20).d ^ rax_14.d, r9_4, rdi.d, nullptr)
return *arg1 + (sx.q(arg_8) << 5) + 8
