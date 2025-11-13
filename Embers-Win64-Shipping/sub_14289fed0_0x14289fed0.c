// 函数: sub_14289fed0
// 地址: 0x14289fed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = *(arg1 + 0xe8)

if (rax != 0 && (*(rax + 0x28) & 5) != 0 && arg2 != 0)
    void* rax_1 = sub_142898ea0(*(arg1 + 0x98), arg2)
    
    if (rax_1 != 0)
        int32_t rax_2 = sub_1428a13c0(arg1, rax_1, arg2)
        
        if (rax_2 s< 0)
            return 2
        
        if (rax_2 s> 0)
            *(arg1 + 0x94) = arg2 - 1
            return 1

return 3
