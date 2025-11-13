// 函数: sub_142891f10
// 地址: 0x142891f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0)
        if (*(rax_1 + 0x30) != 0 && sub_1428915c0(arg1, 2) == 0)
            (*(*arg1 + 0x30))(arg1)
        
        void* rax_4 = *arg1
        
        if (rax_4 != 0 && *(rax_4 + 0x3c) != 0 && arg1[3] != 0 && sub_1428915c0(arg1, 4) == 0)
            sub_1428a6890(arg1[3], sx.q(*(*arg1 + 0x3c)), "crypto\evp\digest.c", 0x21)
    
    if (sub_1428915c0(arg1, 0x400) == 0)
        sub_1428bcda0(arg1[4])
    
    sub_1428af710(arg1[1])
    sub_1428b8960(arg1, 0x30)

return 1
