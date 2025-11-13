// 函数: sub_1426cd7d0
// 地址: 0x1426cd7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rax = (arg1[0x13].d u>> 0xd).b

if ((rax & 3) != 0)
    void* rdx_1 = arg1[0xd]
    
    if (rdx_1 != 0 && (rax & 2) != 0)
        *(rdx_1 + 0x250)
        return sub_142730550(arg1, rdx_1) __tailcall
    
    if ((rax & 1) != 0)
        return sub_142730500(arg1, arg1[0xe]) __tailcall

return 0
