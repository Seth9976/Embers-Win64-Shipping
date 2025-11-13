// 函数: sub_141f9bbb0
// 地址: 0x141f9bbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x70)

if (rdi == 0)
    *(arg1 + 0x30) |= 2
    return 

void* rsi = *(arg1 + 0x28)

if (rsi == 0)
    *(arg1 + 0x30) |= 2
    return 

int64_t arg_8
sub_140d3a3a0(&arg_8, rdi)
sub_141f96420(rsi + 0x1370, arg_8)
int64_t* rcx_2 = *(rsi + 0x13c0)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x268))(rcx_2, rdi)

*(arg1 + 0x30) |= 2
