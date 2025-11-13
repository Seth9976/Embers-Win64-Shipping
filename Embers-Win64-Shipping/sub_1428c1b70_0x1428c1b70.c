// 函数: sub_1428c1b70
// 地址: 0x1428c1b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* result = sub_1428c1750()

if (result != 0)
    *(result + 8) = sub_1428900c0(&data_14351f980)
    *(result + 0x10) = sub_1428900c0(&data_14351f998)
    int64_t* rax_2 = sub_1428900c0(&data_14351f9b0)
    bool cond:0_1 = *(result + 8) == 0
    *(result + 0x40) = rax_2
    
    if (not(cond:0_1) && rax_2 != 0 && *(result + 0x10) != 0)
        return result
    
    sub_1428c1620(result)

return 0
