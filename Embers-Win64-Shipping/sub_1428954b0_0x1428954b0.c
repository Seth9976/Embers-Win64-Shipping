// 函数: sub_1428954b0
// 地址: 0x1428954b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rax = sub_142890ec0(arg1)

if (arg3 != 0)
    if (arg2 == 0)
    label_14289552e:
        uint32_t count = sub_142890ed0(arg1)
        memcpy(sub_1406219d0(arg1), arg3, count)
        *(rax + 0xf8) = sub_1406219d0(arg1)
    else
    label_1428954f8:
        int32_t rax_1 = sub_142890eb0(arg1)
        int32_t rax_3 = sub_142890ee0(arg1) << 3
        
        if (rax_1 == 0)
            sub_1428cef80(arg2, rax_3, rax)
        else
            sub_1428cf200(arg2, rax_3, rax)
        
        if (arg3 != 0)
            goto label_14289552e
        
        *(rax + 0xf8) = 0
else if (arg2 != 0)
    goto label_1428954f8

return 1
