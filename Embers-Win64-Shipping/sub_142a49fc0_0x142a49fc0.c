// 函数: sub_142a49fc0
// 地址: 0x142a49fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg4

if (arg2 s< 1 || arg5 s< arg2)
    *arg6 = 0
    return 0

void* rcx = *(arg1 + 8)
int16_t rax = *(rcx + 8)
int32_t rbx_1

if (rax s< 0)
    rbx_1 = *(rcx + 0xc)
else
    rbx_1 = sx.d(rax) s>> 5

if (arg2 s<= 0x7ffffff5 - rbx_1 && arg3 s<= 0x7ffffff5 - rbx_1)
    arg4.b = 1
    
    if (sub_142a487e0(rcx, arg2 + rbx_1, arg3 + rbx_1, arg4.b, 0, 0) != 0)
        void* rax_3 = *(arg1 + 8)
        int32_t rcx_1 = 0x1b
        
        if ((*(rax_3 + 8) & 2) == 0)
            rcx_1 = *(rax_3 + 0x10)
        
        *arg6 = rcx_1 - rbx_1
        void* rax_5 = *(arg1 + 8)
        void* rcx_3 = rax_5 + 0xa
        
        if ((*(rax_5 + 8) & 2) == 0)
            rcx_3 = *(rax_5 + 0x18)
        
        return rcx_3 + (sx.q(rbx_1) << 1)

*arg6 = arg5
return result
