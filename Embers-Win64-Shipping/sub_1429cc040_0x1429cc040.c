// 函数: sub_1429cc040
// 地址: 0x1429cc040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t* rax = j_sub_140a82f30(0xd8)
int64_t* arg_8 = rax
int64_t* rdi

if (rax == 0)
    rdi = nullptr
else
    rdi = sub_1429cfeb0(rax, arg1)

arg_8 = rdi
sub_1429d1ee0(rdi, arg3)
sub_1429d1e70(rdi, arg2)
sub_1429d1dd0(rdi)
int64_t rcx_4 = *(arg1 + 0x1d0)
int64_t rax_2

if (&arg_8 u< rcx_4)
    rax_2 = *(arg1 + 0x1c8)

if (&arg_8 u>= rcx_4 || rax_2 u> &arg_8)
    if (rcx_4 == *(arg1 + 0x1d8))
        sub_1429cade0(arg1 + 0x1c8, 1)
    
    int64_t** rax_4 = *(arg1 + 0x1d0)
    
    if (rax_4 != 0)
        *rax_4 = rdi
else
    if (rcx_4 == *(arg1 + 0x1d8))
        sub_1429cade0(arg1 + 0x1c8, 1)
    
    int64_t* rdx_3 = *(arg1 + 0x1d0)
    
    if (rdx_3 != 0)
        *rdx_3 = *(*(arg1 + 0x1c8) + ((&arg_8 - rax_2) s>> 3 << 3))

*(arg1 + 0x1d0) += 8
return zx.q(((*(arg1 + 0x1d0) - *(arg1 + 0x1c8)) s>> 3).d - 1)
