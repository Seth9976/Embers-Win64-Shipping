// 函数: sub_14293de20
// 地址: 0x14293de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 != 0)
    int64_t* rdi_1 = *arg2
    
    if (arg1 == 0xa)
        if (sub_14296c910(&arg4[2], rdi_1) s<= 0)
            return 0
        
    label_14293de88:
        int64_t* rax_4 = sub_14296b900(rdi_1, *arg4)
        arg4[1] = rax_4
        
        if (rax_4 == 0)
            return 0
    else if (arg1 == 0xb)
    label_14293de59:
        
        if (sub_14296b770(rdi_1, arg4[1]) s<= 0)
            return 0
    else
        if (arg1 == 0xc)
            goto label_14293de88
        
        if (arg1 == 0xd)
            goto label_14293de59

return 1
