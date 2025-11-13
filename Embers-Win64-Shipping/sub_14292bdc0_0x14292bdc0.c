// 函数: sub_14292bdc0
// 地址: 0x14292bdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t arg_8 = 0
int64_t* rbx = &arg_8

if (arg1 != 0)
    rbx = arg1

void* rax = sub_14292bd20(arg5)
int32_t rax_3

if (rax == 0)
    rax_3 = sub_1429352a0(rbx, arg2, arg3, arg4, data_143b86420 & 0x2806)
else
    int32_t rcx_1 = *(rax + 0xc)
    
    if ((*(rax + 0x10) & 2) == 0)
        rcx_1 &= data_143b86420
    
    rax_3 = sub_1429352d0(rbx, arg2, arg3, arg4, rcx_1, *(rax + 4), *(rax + 8))

if (rax_3 s> 0)
    return *rbx

return 0
