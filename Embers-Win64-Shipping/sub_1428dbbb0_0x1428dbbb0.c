// 函数: sub_1428dbbb0
// 地址: 0x1428dbbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r8 = 0

if (sub_1428a5c60(&data_143fecc48, sub_1428dca20) != 0)
    r8 = data_143fecc50

if (r8 != 0)
    int64_t* rax_1 = sub_1428a5b30(&data_143fecc40)
    
    if (rax_1 != 0)
        return sub_1428dbf10(rax_1, arg1, sx.q(arg2)) __tailcall
    
    if (sub_142899a10((rax_1 + 4).b) != 0)
        int64_t* rax_3 = sub_1428dcb10(data_143fecc38)
        sub_1428a5cd0(&data_143fecc40, rax_3)
        
        if (rax_3 != 0)
            return sub_1428dbf10(rax_3, arg1, sx.q(arg2)) __tailcall

return 0
