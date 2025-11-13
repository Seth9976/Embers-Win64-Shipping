// 函数: sub_142854360
// 地址: 0x142854360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 != 0)
    int64_t i_1 = 0
    void* rbx_1 = &arg1[4]
    int64_t i = 0
    int64_t* rax_1 = rbx_1
    
    do
        if (*rax_1 == arg2 && rax_1[1] != 0)
            *arg1 = rax_1
            return 1
        
        i += 1
        rax_1 = &rax_1[5]
    while (i s< 9)
    
    do
        if (*(rbx_1 + 8) != 0)
            int64_t* rcx = *rbx_1
            
            if (rcx != 0 && sub_1428a3740(rcx, arg2) == 0)
                *arg1 = rbx_1
                return 1
        
        i_1 += 1
        rbx_1 += 0x28
    while (i_1 s< 9)

return 0
