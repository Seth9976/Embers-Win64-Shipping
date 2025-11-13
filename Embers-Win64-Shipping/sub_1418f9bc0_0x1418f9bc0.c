// 函数: sub_1418f9bc0
// 地址: 0x1418f9bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg2

if (data_143f0f161 == 0 || *(arg1 + 8) == 0)
    return 

if (arg2 == 0)
    void* rbx_1 = *(*(arg1 + 0x10) + 0x240)
    
    if (*(rbx_1 + 0x78) != arg2)
        sub_1418c86c0(rbx_1, arg2.d, 0)
    
    rbp = *(rbx_1 + 0x70)

void* r8_1 = *(arg1 + 0x18)
int32_t rdi_1 = *(r8_1 + 0x38) * 2
data_143efba80(*(rbp + 0x40), 1, *(r8_1 + 0x10), zx.q(rdi_1 + 1))
void* r9_2 = *(arg1 + 0x18)
*(r9_2 + 0x10)
int64_t var_18_1 = *(*(r9_2 + 0x58) + 0x18)
sub_1418badf0(rbp, zx.q(rdi_1 + 1), 1)
int64_t rdx_3 = (sx.q(rdi_1) + 1) * 2
*(*(*(arg1 + 0x18) + 0x48) + (rdx_3 << 3)) = rbp
*(*(*(arg1 + 0x18) + 0x48) + (rdx_3 << 3) + 8) = *(rbp + 0x98)
void* rdx_4 = *(arg1 + 0x18)
int32_t rcx_5 = *(rdx_4 + 0x40)
int32_t rax = *(rdx_4 + 0x3c) + 1

if (rax u<= rcx_5)
    rcx_5 = rax

*(rdx_4 + 0x3c) = rcx_5
*(arg1 + 8) = 0x100
