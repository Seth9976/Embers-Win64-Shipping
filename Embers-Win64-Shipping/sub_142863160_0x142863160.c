// 函数: sub_142863160
// 地址: 0x142863160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0 && arg2 != 0)
    void* rax_1
    
    if (*(arg2 + 0xc) != 0)
        rax_1 = sub_14285b4c0((*(arg2 + 0x10)).b)
        
        if (rax_1 != 0)
            goto label_142863193
    else
        rax_1 = nullptr
    label_142863193:
        
        if (rax_1 != 0)
            int32_t rbx_1 = ((sub_1428916c0(rax_1) << 1) + 2).d
            
            if (sub_142897860(arg1) s>= rbx_1)
                return 1

return 0
