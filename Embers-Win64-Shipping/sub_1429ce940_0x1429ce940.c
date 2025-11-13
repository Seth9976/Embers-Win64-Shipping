// 函数: sub_1429ce940
// 地址: 0x1429ce940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x48)
int64_t arg_8 = arg2
int64_t rcx

if (&arg_8 u< rax)
    rcx = *(arg1 + 0x40)

if (&arg_8 u>= rax || rcx u> &arg_8)
    if (rax == *(arg1 + 0x50))
        sub_1429cade0(arg1 + 0x40, 1)
    
    rax = *(arg1 + 0x48)
    
    if (rax != 0)
        *rax = arg2
else
    if (rax == *(arg1 + 0x50))
        rax = sub_1429cade0(arg1 + 0x40, 1)
    
    int64_t* rdx = *(arg1 + 0x48)
    
    if (rdx != 0)
        int64_t rax_1 = *(arg1 + 0x40)
        *rdx = *(rax_1 + ((&arg_8 - rcx) s>> 3 << 3))
        *(arg1 + 0x48) += 8
        return rax_1

*(arg1 + 0x48) += 8
return rax
