// 函数: sub_1405ddb80
// 地址: 0x1405ddb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*((rdi << 6) + r9_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 6) + r9_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int32_t* rsi_2 = (sx.q(rdi.d) << 6) + *arg1
sub_1405de490(rsi_2, arg2)
*(rsi_2 + 0x30) = *arg3
rsi_2[0xe] = 0xffffffff
void* rcx_7

if (rsi_2[4] == 0)
    rcx_7 = &data_142d40450
else
    rcx_7 = *(rsi_2 + 8)
    
    if ((rcx_7.b & 1) != 0)
        rcx_7 = (rcx_7 s>> 1) + &rsi_2[2]

int32_t arg_8
sub_1405e1880(arg1, &arg_8, sub_1405de2b0(rcx_7), rsi_2, rdi.d, nullptr)
return *arg1 + (sx.q(arg_8) << 6) + 0x30
