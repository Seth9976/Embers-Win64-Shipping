// 函数: sub_14296c910
// 地址: 0x14296c910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = sub_14296ba60(arg2)

if (rax != 0)
    void* rax_1 = *rax
    
    if (rax_1 != 0)
    label_14296c94b:
        *(rax_1 + 0x10) |= 0x10
        void* rax_2 = *rax
        *(rax_2 + 0x10) &= 0xffffffdf
        *arg1 = *rax + 8
        return 1
    
    rax_1 = sub_1428c35d0()
    *rax = rax_1
    
    if (rax_1 != 0)
        goto label_14296c94b
    
    sub_1428a5670(0x2e, 0x9b, 0x41, "crypto\cms\cms_io.c", 0x1f)

return 0
