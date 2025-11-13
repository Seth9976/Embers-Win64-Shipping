// 函数: sub_142856340
// 地址: 0x142856340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t i = 0
void* rcx = *arg1

if (arg1[1] u> 0)
    int64_t* rbx_1 = rcx + 0x20
    
    do
        if (rbx_1[-2] == sub_142855ef0)
            sub_1428a6780(*rbx_1)
            sub_1428a6780(rbx_1[2])
        
        i += 1
        rbx_1 = &rbx_1[7]
    while (i u< arg1[1])
    
    rcx = *arg1

return sub_1428a6780(rcx) __tailcall
