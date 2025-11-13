// 函数: sub_1428907a0
// 地址: 0x1428907a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx

if (arg1 s< 0x3c00)
    if (arg1 s>= 0x1e00)
        rcx = 0xc0
        goto label_1428907e9
    
    if (arg1 s>= 0xc00)
        rcx = 0x80
        goto label_1428907e9
    
    if (arg1 s>= 0x800)
        rcx = 0x70
        goto label_1428907e9
    
    if (arg1 s>= 0x400)
        rcx = 0x50
        goto label_1428907e9
else
    rcx = 0x100
label_1428907e9:
    
    if (arg2 == 0xffffffff)
        return zx.q(rcx)
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    int32_t rax_5 = (temp1_1 - temp0_1) s>> 1
    
    if (rax_5 s>= 0x50)
        if (rax_5 s>= rcx)
            return rcx
        
        return rax_5
return 0
