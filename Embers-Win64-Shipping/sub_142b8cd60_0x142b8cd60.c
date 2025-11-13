// 函数: sub_142b8cd60
// 地址: 0x142b8cd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx

if ((arg2 & 0xfffffc00) != 0xd800 || arg3 == 0)
    int64_t rax_6 = sx.q(arg2 s>> 0xb)
    rbx = *(arg1 + (rax_6 << 2))
    
    if (rbx != *(arg1 + 0x23320))
        goto label_142b8cde9
    
    int32_t rax_7 = sub_142b8c470(arg1)
    rbx = rax_7
    
    if (rax_7 s>= 0)
        *(arg1 + (rax_6 << 2)) = rax_7
    label_142b8cde9:
        
        if (rbx s>= 0)
            goto label_142b8cd90
else
    rbx = 0x800
label_142b8cd90:
    int32_t rbx_1 = rbx + (arg2 s>> 5 & 0x3f)
    int64_t rdx = sx.q(*(arg1 + (sx.q(rbx_1) << 2) + 0x880))
    
    if (rdx.d != *(arg1 + 0x23324) && *(arg1 + (rdx s>> 5 << 2) + 0x23330) == 1)
        return zx.q(rdx.d)
    
    int32_t rax_9 = sub_142b8c320(arg1, rdx.d)
    
    if (rax_9 s>= 0)
        sub_142b8cec0(arg1, rbx_1, rax_9)
        return zx.q(rax_9)
return 0xffffffff
