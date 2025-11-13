// 函数: sub_14263aa00
// 地址: 0x14263aa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
*(arg1 + 0x38) = arg3
int32_t var_18 = 0xffffffff
void* rsi = nullptr
int32_t var_14 = 0

if (arg2 != 0)
    void* rax_2 = (*(*arg2 + 8))(arg2)
    void* rax_3 = sub_140d41340()
    void* rcx_1 = *(rax_2 + 0x10)
    int64_t rdx = sx.q(*(rax_3 + 0x38))
    
    if (rdx.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx << 3)) == rax_3 + 0x30)
        rsi = rax_2

sub_140d3a3a0(&var_18, rsi)
*(arg1 + 0x48) = var_18.q
*(arg1 + 0x50) = arg2
bool cond:0 = (*(arg1 + 0x3c) & 0x40) == 0
*(arg1 + 0x39) = 1

if (not(cond:0))
    *(arg1 + 0x42) |= *(arg1 + 0x40)

(*(*arg2 + 0x30))(arg2, arg1)
void* rax_10 = (*(*arg2 + 0x10))(arg2, arg1)
sub_140d3a3a0(arg1 + 0x58, rax_10)
int64_t result = sub_140d3c6e0(arg1 + 0x48)

if (rax_10 == result)
    rbp = 0x20

int32_t rcx_10 = (*(arg1 + 0x3c) & 0xffffffdf) | rbp
*(arg1 + 0x3c) = rcx_10

if (rax_10 != 0 && (rcx_10.b & 0x20) == 0)
    return (*(*(rax_10 + 0xb0) + 0x30))(rax_10 + 0xb0, arg1)

return result
