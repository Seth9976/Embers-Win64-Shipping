// 函数: sub_142a98e40
// 地址: 0x142a98e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x150)
uint64_t result

if ((*(*rcx + 0x88))(rcx).b != 0)
    int32_t rax_3
    
    if (*(*(arg1 + 0x148) + 0x10) != 0)
        int64_t* rcx_1 = *(arg1 + 0x150)
        int64_t rdx = *(arg1 + 0x158)
        int32_t arg_8 = 0
        *(arg1 + 0x158) = 0
        int64_t rax_2 = (*(*rcx_1 + 0x28))(rcx_1, rdx, &arg_8)
        int32_t* rcx_2 = *(arg1 + 0x158)
        
        if (rcx_2 != 0)
            arg3 = sub_142aea470(rcx_2)
        
        *(arg1 + 0x158) = rax_2
        rax_3 = sub_142a98190(arg1, arg2, arg3)
    
    if (*(*(arg1 + 0x148) + 0x10) == 0 || rax_3 != 1)
        result.b = 1
        return result

result.b = 0
return result
