// 函数: sub_1428ae500
// 地址: 0x1428ae500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg3 != 0)
    return sub_1428aeaa0(arg2) __tailcall

char rax_1 = (*(arg2 + 0xd0)).b

if ((rax_1 & 2) == 0)
label_1428ae541:
    
    if ((rax_1 & 4) != 0 && *(arg2 + 0xd8) == 0x40)
        int32_t rax_2 = sub_1428ac790(arg2, 0x7e, 0xffffffff)
        int32_t rax_4
        
        if (rax_2 s>= 0)
            rax_4 = sub_1428e74c0(sub_1428ac770(arg2, rax_2))
        
        if (rax_2 s< 0 || rax_4 != 0)
            return 1
else
    int32_t rcx_1 = *(arg2 + 0xd4)
    
    if ((rcx_1 & 0xffffff3f) == 0 && (rcx_1.b & 0xc0) != 0)
        goto label_1428ae541

return 0
