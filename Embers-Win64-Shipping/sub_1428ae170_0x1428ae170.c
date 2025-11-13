// 函数: sub_1428ae170
// 地址: 0x1428ae170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = 0

if (sub_142898c70(*arg1) s> 0)
    int32_t rax_2
    
    do
        int64_t result = sub_142898ea0(*arg1, rbx)
        
        if (memcmp(result + 8, arg2, arg3) == 0)
            return result
        
        rbx += 1
        rax_2 = sub_142898c70(*arg1)
    while (rbx s< rax_2)

return 0
