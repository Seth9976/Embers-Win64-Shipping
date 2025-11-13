// 函数: sub_14293d0c0
// 地址: 0x14293d0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* r11 = *(arg1 + 0x40)
void* rax = *(r11 + 0x10)

if (rax != 0)
    int64_t r10_1 = *(rax + 0xb0)
    
    if (r10_1 != 0)
        int32_t rax_1 = r10_1(r11, 5, zx.q(arg2), arg1)
        
        if (rax_1 == 0xfffffffe)
            sub_1428a5670(rax_1 + 0x30, 0xaa, rax_1 + 0x7f, "crypto\cms\cms_sd.c", 0xd2)
            return 0
        
        if (rax_1 s<= 0)
            sub_1428a5670(0x2e, 0xaa, 0x6f, "crypto\cms\cms_sd.c", 0xd6)
            return 0

return 1
