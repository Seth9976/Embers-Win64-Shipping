// 函数: sub_1429ce880
// 地址: 0x1429ce880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x30)
int32_t* arg_8 = arg2
int64_t rdx

if (&arg_8 u< rax)
    rdx = *(arg1 + 0x28)

if (&arg_8 u>= rax || rdx u> &arg_8)
    if (rax == *(arg1 + 0x38))
        sub_1429cade0(arg1 + 0x28, 1)
    
    int32_t** rax_2 = *(arg1 + 0x30)
    
    if (rax_2 != 0)
        *rax_2 = arg2
else
    if (rax == *(arg1 + 0x38))
        sub_1429cade0(arg1 + 0x28, 1)
    
    int64_t* rdx_1 = *(arg1 + 0x30)
    
    if (rdx_1 != 0)
        *rdx_1 = *(*(arg1 + 0x28) + ((&arg_8 - rdx) s>> 3 << 3))

*(arg1 + 0x30) += 8
return sub_1429cecc0(arg1, arg2) __tailcall
