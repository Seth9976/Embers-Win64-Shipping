// 函数: sub_14291c4e0
// 地址: 0x14291c4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* result = sub_1428c1750()

if (result != 0)
    int64_t* rax = sub_1428c41c0(nullptr, arg2, arg3, &data_143521e00)
    
    if (rax != 0)
        if (arg1 != 0)
            sub_1428c1620(*arg1)
            *arg1 = result
        
        *(result + 8) = *rax
        *(result + 0x40) = rax[1]
        *(result + 0x10) = rax[2]
        *(result + 0x48) = rax[3]
        int64_t* rax_5 = rax[4]
        
        if (rax_5 != 0)
            *(result + 0x50) = *(*rax_5 + 8)
            *(result + 0x58) = **rax[4]
            *(result + 0x60) = *(rax[4] + 8)
            *(*rax[4] + 8) = 0
            sub_1428c3460(*rax[4])
            sub_1428a6780(rax[4])
            rax[4] = 0
        
        sub_1428a6780(rax)
        return result
    
    sub_1428c1620(result)

return nullptr
