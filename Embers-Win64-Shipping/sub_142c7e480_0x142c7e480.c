// 函数: sub_142c7e480
// 地址: 0x142c7e480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(*arg1 + 0x250)

if (arg2 != 0)
    void arg_10
    int32_t rax_1
    rax_1, arg3 = sub_142c7d7a0(arg1, &arg_10, arg3, arg4)
    
    if (rax_1 != 0)
        SOCKET rdx_1 = arg1[0x48]
        
        if (rdx_1 != -1)
            sub_142c65200(arg1, rdx_1)
            arg1[0x48] = -1
        
        *(arg1 + 0x3fe) = 0
        return zx.q(rax_1)

if (*(rbp + 0x18) != 0)
    sub_142c68d40(arg1, 0xffffffff, -1, 0, arg3, 0, 0xffffffff, nullptr)
else if (arg2 == 0)
    *(arg1 + 0x3fc) = 1

*(arg1 + 0x729) = 1
return 0
