// 函数: sub_142b92420
// 地址: 0x142b92420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t i = 0

if (arg1 != 0)
    void* rbx_1 = *(arg1 + 0x88)
    
    if (rbx_1 != 0 && *(arg1 + 0x10) != 0)
        int32_t arg_8 = arg2
        
        do
            i = (*(*(rbx_1 + 0x10) + 0x20))(rbx_1, &arg_8)
        while (i u>= *(arg1 + 0x10))
        
        int32_t rcx_1 = arg_8
        
        if (i == 0)
            rcx_1 = 0
        
        rdi = rcx_1

if (arg3 != 0)
    *arg3 = i

return zx.q(rdi)
