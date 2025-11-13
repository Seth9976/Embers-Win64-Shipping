// 函数: sub_14289f580
// 地址: 0x14289f580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax_1

if ((*(*(arg1 + 0x20) + 0x14) & 0x10) == 0 && (*(arg2 + 0x7c) & 0x200) != 0)
    *(arg1 + 0xb0) = 0x24
    rax_1 = (*(arg1 + 0x38))(0, arg1)

if ((*(*(arg1 + 0x20) + 0x14) & 0x10) != 0 || (*(arg2 + 0x7c) & 0x200) == 0 || rax_1 != 0)
    void* arg_8
    
    if (sub_1428e4450(arg2, &arg_8, arg3) == 0)
        return 1
    
    if (*(arg_8 + 0x30) == 8)
        return 2
    
    *(arg1 + 0xb0) = 0x17
    
    if ((*(arg1 + 0x38))(0, arg1) != 0)
        return 1

return 0
