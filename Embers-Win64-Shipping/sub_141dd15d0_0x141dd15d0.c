// 函数: sub_141dd15d0
// 地址: 0x141dd15d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
void* rdi = arg1[0x1c]

if (rdi != 0)
    int64_t rsi_1 = sx.q(*(rdi + 0x128))
    int32_t rax_1 = (rsi_1 + 1).d
    *(rdi + 0x128) = rax_1
    
    if (rax_1 s> *(rdi + 0x12c))
        sub_1405a4d70(rdi + 0x120)
    
    *(*(rdi + 0x120) + (rsi_1 << 3)) = arg1

if (sub_140cdd6a0(arg1) s< 0x156)
    *(arg1 + 0x5b) &= 0xfe
    int32_t rax_3
    rax_3.b = *(arg1 + 0x5f) != 0
    *(arg1 + 0x5b) |= rax_3.b

uint8_t result = (arg1[1].d u>> 4).b

if ((result & 1) != 0)
    arg1[0xb].b &= 0x7f

*(arg1 + 0x5b) |= 0x10
return result
