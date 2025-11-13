// 函数: sub_140acb5e0
// 地址: 0x140acb5e0
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
void* r9_2 = &arg1[2]

if (rax_2 != 0)
    r9_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9_2 + (r8_1 << 2)) |= 1 << (rsi.b & 0x1f)
int64_t rdx_5 = *arg1
int64_t rcx_6 = sx.q(rsi.d) * 9
*(rdx_5 + (rcx_6 << 3)) = 0
*(rdx_5 + (rcx_6 << 3)) = *arg2
int64_t* rdi = rdx_5 + (rcx_6 << 3)
*arg2 = 0
rdi[1].d = arg2[1].d
*(rdi + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
rdi[2].d = *arg3
rdi[3] = *(arg3 + 8)
rdi[3] = *(arg3 + 8)
rdi[3].d = arg3[2]
rdi[3] = *(arg3 + 8)
rdi[7].b = 0

if (arg3[0xa].b != 0)
    rdi[4] = *(arg3 + 0x10)
    void* rax_17 = *(arg3 + 0x18)
    rdi[5] = rax_17
    
    if (rax_17 != 0)
        *(rax_17 + 8) += 1
    
    rdi[6].d = arg3[8]
    rdi[7].b = 1

rdi[8].d = 0xffffffff
int16_t* rcx_7

if (rdi[1].d == 0)
    rcx_7 = &data_142d40450
else
    rcx_7 = *rdi

int32_t arg_8
sub_140aa7840(arg1, &arg_8, sub_140a5ff80(rcx_7, 0), rdi, rsi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x48 + 0x10
