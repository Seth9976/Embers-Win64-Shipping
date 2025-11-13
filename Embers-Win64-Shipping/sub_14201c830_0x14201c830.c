// 函数: sub_14201c830
// 地址: 0x14201c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2

if (arg2 == 0)
    return zx.q((arg2 - 1).d)

int32_t rsi = *(arg1 + 0x40)
sub_1405a7050(arg1 + 0x38, &arg_10)
void* rax_1 = *(arg1 + 0x30)
int64_t rdx_1

if (rax_1 == 0)
    rdx_1 = 0
else
    rdx_1 = *(rax_1 + 0x210)

(*(*arg2 + 0x278))(arg2, rdx_1, zx.q(arg3))
void* rdx_2 = *(arg1 + 0x30)

if (rdx_2 != 0)
    int64_t* rcx_2 = *(rdx_2 + 0x210)
    
    if (rcx_2 != 0)
        if (rdx_2 == 0)
            rcx_2 = nullptr
        
        int64_t r9_1 = *rcx_2
        (*(r9_1 + 0x320))(rcx_2, zx.q(rsi), arg2, r9_1)

sub_140920c10(arg1 + 0x90, arg2)
return zx.q(rsi)
