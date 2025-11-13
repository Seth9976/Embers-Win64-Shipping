// 函数: sub_141e30e00
// 地址: 0x141e30e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x14] == 0)
label_141e30e87:
    
    if (arg3 == 0)
        return sub_141e2a370(arg1, arg2) __tailcall
else
    void* rax_1 = sub_142463bc0()
    
    if (rax_1 == 0)
        goto label_141e30e87
    
    void* r9_1 = arg1[0x14]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(r9_1 + 0x38) || *(*(r9_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30 || r9_1 == 0
            || arg1[0xf] == 0)
        goto label_141e30e87
    
    void* rax_4 = sub_14245f6d0()
    
    if (rax_4 == 0)
        goto label_141e30e87
    
    void* rdx_1 = arg1[0xf]
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30
            || rdx_1 == 0)
        goto label_141e30e87

return sub_141e2fc10(arg1, arg2, arg3) __tailcall
