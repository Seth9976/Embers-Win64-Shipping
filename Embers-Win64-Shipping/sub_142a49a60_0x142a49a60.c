// 函数: sub_142a49a60
// 地址: 0x142a49a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2
int16_t rdx = *(arg1 + 8)
int32_t rbx_1

if (rdx s< 0)
    rbx_1 = *(arg1 + 0xc)
else
    rbx_1 = sx.d(rdx) s>> 5

if (*arg4 s<= 0)
    if ((*(arg1 + 8) & 1) == 0 && arg3 s>= 0 && (arg3 s<= 0 || rax != 0))
        void* rdx_1 = arg1 + 0xa
        
        if ((rdx.b & 2) == 0)
            rdx_1 = *(arg1 + 0x18)
        
        if (rbx_1 s> 0 && rbx_1 s<= arg3 && rdx_1 != rax)
            sub_142a8bca0(rax, rdx_1, rbx_1)
            rax = arg2
        
        return sub_142a8c440(rax, arg3, rbx_1, arg4)
    
    *arg4 = 1

return zx.q(rbx_1)
