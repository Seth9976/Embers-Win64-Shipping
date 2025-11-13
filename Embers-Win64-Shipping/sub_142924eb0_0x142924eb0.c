// 函数: sub_142924eb0
// 地址: 0x142924eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t i = arg3
int128_t* rdi = arg2

if (arg2 != 0 && arg3 != 0)
    int64_t rax_1 = *(arg1 + 0x60)
    
    if (rax_1 != 0 && arg3 u>= 0x10 - rax_1)
        memcpy(arg1 + 0x50 + rax_1, arg2, (0x10 - rax_1).d)
        
        if (sub_142924e30(arg1, arg1 + 0x50) == 0)
            return 0
        
        i -= 0x10 - rax_1
        *(arg1 + 0x60) = 0
        rdi += 0x10 - rax_1
    
    for (; i u>= 0x10; i -= 0x10)
        if (sub_142924d80(arg1, arg1 + 0x68, rdi) == 0)
            return 0
        
        if (sub_142924d80(arg1, arg1 + 0x78, rdi) == 0)
            return 0
        
        if (*(arg1 + 0x18) != 0x10 && sub_142924d80(arg1, arg1 + 0x88, rdi) == 0)
            return 0
        
        rdi = &rdi[1]
    
    if (i != 0)
        memcpy(arg1 + 0x50 + *(arg1 + 0x60), rdi, i.d)
        *(arg1 + 0x60) += i

return 1
