// 函数: sub_142910050
// 地址: 0x142910050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* result = sub_1428cd3c0(&data_1434ea5a0, *(arg1 + 8))

if (result == 0)
    return result

int64_t* rdi = *(result + 8)

if (rdi != 0)
    int64_t rax_1
    
    if (sub_1428a96d0(*rdi) == 0x38f)
        rax_1 = sub_1428cd3c0(&data_143511f80, rdi[1])
    else
        rax_1 = 0
    
    *(result + 0x20) = rax_1
    
    if (rax_1 == 0)
        sub_1428979d0(result)
        return 0

return result
