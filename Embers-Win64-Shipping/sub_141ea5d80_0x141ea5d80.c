// 函数: sub_141ea5d80
// 地址: 0x141ea5d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r8 = *(arg1 + 0xc)
    int32_t rdi_1 = arg2[1].d
    int64_t r14_1 = *arg2
    arg1[1].d = rdi_1
    
    if (rdi_1 != 0 || r8 != 0)
        sub_1405a4c70(arg1, rdi_1, r8)
        memcpy(*arg1, r14_1, rdi_1 * 2)
    else
        *(arg1 + 0xc) = rdi_1

sub_140d3a3a0(&arg1[6], arg4)
return sub_141ea4f70(arg1, arg3) __tailcall
