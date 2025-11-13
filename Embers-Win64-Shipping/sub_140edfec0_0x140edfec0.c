// 函数: sub_140edfec0
// 地址: 0x140edfec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1407c3920(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x78 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x78 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r9_2 = &arg1[2]

if (rax_2 != 0)
    r9_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9_2 + (r8_1 << 2)) |= 1 << (rdi.b & 0x1f)
int64_t* rsi_1 = sx.q(rdi.d) * 0x78 + *arg1
*rsi_1 = *arg2
rsi_1[1].d = arg2[1].d
*(rsi_1 + 0xc) = *(arg2 + 0xc)
rsi_1[2] = arg2[2]
rsi_1[3] = arg2[3]
*(rsi_1 + 0x20) = *(arg2 + 0x20)
*(rsi_1 + 0x30) = *(arg2 + 0x30)
rsi_1[8] = arg2[8]
void* rax_14 = arg2[9]
rsi_1[9] = rax_14

if (rax_14 != 0)
    *(rax_14 + 8) += 1

rsi_1[0xa] = arg2[0xa]
rsi_1[0xb].d = arg2[0xb].d
*(rsi_1 + 0x5c) = *(arg2 + 0x5c)
rsi_1[0xc] = *arg3
rsi_1[0xd] = arg3[1]
arg3[1] = 0
*arg3 = 0
rsi_1[0xe].d = 0xffffffff
int32_t arg_8
sub_140efba40(arg1, &arg_8, sub_140f04ad0(rsi_1), rsi_1, rdi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x78 + 0x60
