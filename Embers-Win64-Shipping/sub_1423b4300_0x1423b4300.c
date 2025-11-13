// 函数: sub_1423b4300
// 地址: 0x1423b4300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0x168, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x168) + rax * 0x18

int32_t* rax_2 = rcx_1 + 8

if (rcx_1 == 0)
    rax_2 = nullptr

if (rax_2 == 0)
    return rax_2

int32_t i = *rax_2

while (i != 0xffffffff)
    int64_t rcx_2 = sx.q(i) * 5
    int64_t rax_4 = *(arg1 + 0x20)
    int64_t* r8_1 = rax_4 + (rcx_2 << 3)
    int64_t rax_5 = sx.q(*(rax_4 + (rcx_2 << 3) + 0x10))
    
    if (rax_5.d != 0xffffffff)
        *(*(arg1 + 0x128) + (rax_5 << 3)) = 0
    
    i = *(r8_1 + 0x24)
    *r8_1 = 0

sub_140868c90(arg1 + 0x168, arg2)
uint64_t rax_7
rax_7.b = 1
return rax_7
