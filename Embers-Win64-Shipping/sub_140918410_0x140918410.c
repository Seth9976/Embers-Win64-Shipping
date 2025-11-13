// 函数: sub_140918410
// 地址: 0x140918410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    rbx_2 = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_14091849c:
    *arg2 = 0xffffffff
else
    int64_t rdx = *arg1
    
    while (true)
        int64_t rsi_1 = sx.q(rbx_2) * 0x48
        
        if ((**(rsi_1 + rdx))(rsi_1 + rdx, arg4) != 0)
            *arg2 = rbx_2
            break
        
        rdx = *arg1
        rbx_2 = *(rsi_1 + rdx + 0x40)
        
        if (rbx_2 == 0xffffffff)
            goto label_14091849c

return arg2
