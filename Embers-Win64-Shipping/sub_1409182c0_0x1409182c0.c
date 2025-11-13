// 函数: sub_1409182c0
// 地址: 0x1409182c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140775520(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(r9_1 + rsi * 0x48 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8 * 0x48) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rsi.b & 0x1f)
int64_t rcx_7 = sx.q(rsi.d) * 9
int64_t rdx_5 = *arg1
*(rdx_5 + (rcx_7 << 3) + 8) = 0
*(rdx_5 + (rcx_7 << 3) + 0x10) = 0
*(rdx_5 + (rcx_7 << 3)) = &data_142e1f860
void*** rbx = rdx_5 + (rcx_7 << 3)
sub_140596d10(&rbx[3], arg3 + 0x18)
rbx[5] = *(arg3 + 0x28)
*rbx = &data_142e1f860
rbx[6] = 0
rbx[7] = 0
rbx[8].d = 0xffffffff
int32_t arg_8
sub_1409253c0(arg1, &arg_8, arg2, rbx, rsi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x48 + 0x30
