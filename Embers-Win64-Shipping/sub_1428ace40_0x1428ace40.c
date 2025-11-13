// 函数: sub_1428ace40
// 地址: 0x1428ace40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)

if (*arg1 == 0)
    return 

while (true)
    int64_t* rax = sub_142898c80(*arg1)
    
    if (rax == 0)
        break
    
    sub_1428a6780(rax[3])
    DeleteFiber(*rax)
    sub_1428a6780(rax)
