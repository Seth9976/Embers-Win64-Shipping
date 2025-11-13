// 函数: sub_141ac64e0
// 地址: 0x141ac64e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141ea6180(arg1 + 0xc8, arg3) != 0)
    bool rax
    bool cond:0_1
    
    if (*(arg1 + 0xe0) == 0)
        rax = sub_140b5b8a0(*(arg1 + 0xe4), 0) == 0
        cond:0_1 = *(arg1 + 0xe8) != 0
    else
        rax = sub_140b5b8a0(*(arg1 + 0x130), 0) == 0
        cond:0_1 = *(arg1 + 0x134) != 0
    
    int32_t rcx_1
    rcx_1.b = cond:0_1
    rcx_1.b |= rax
    
    if (rcx_1.b != 0)
        if (*(arg1 + 0xe0) == 0)
            rax = sub_141ea6180(arg1 + 0xe4, arg3)
        else
            rax = *(arg1 + 0x13c) != 0xffffffff
    
    if (rcx_1.b == 0 || rax != 0)
        return true

return false
