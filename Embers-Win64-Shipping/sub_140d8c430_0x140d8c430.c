// 函数: sub_140d8c430
// 地址: 0x140d8c430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140dbc660(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(r9_1 + rdi * 0x90 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8 * 0x90) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* rsi_2 = sx.q(rdi.d) * 0x90 + *arg1
sub_140d93b90(rsi_2, arg2)
rsi_2[0xf] = *arg3
void* rax_9 = arg3[1]
rsi_2[0x10] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

rsi_2[0x11].d = 0xffffffff
int32_t arg_8
sub_140d9e350(arg1, &arg_8, *(rsi_2 + 0x74), rsi_2, rdi.d, nullptr)
return *arg1 + 0x78 + sx.q(arg_8) * 0x90
