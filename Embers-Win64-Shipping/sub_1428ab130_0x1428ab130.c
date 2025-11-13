// 函数: sub_1428ab130
// 地址: 0x1428ab130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 == 0)
label_1428ab18d:
    
    if (arg3 != 0)
        void* rax_3 = sub_14289d8f0(arg1, &data_143b852b0)
        
        if (rax_3 != 0 && sub_14289d0b0(rax_3, 2, arg3, 1, 0) == 1)
            return 1
    else if (arg2 != 0)
        return 1
else
    void* rax_1 = sub_14289d8f0(arg1, &data_143b85300)
    
    if (rax_1 != 0 && sub_14289d0b0(rax_1, 1, arg2, 1, 0) == 1)
        goto label_1428ab18d

return 0
