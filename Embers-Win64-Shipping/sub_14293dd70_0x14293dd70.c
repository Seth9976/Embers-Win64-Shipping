// 函数: sub_14293dd70
// 地址: 0x14293dd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if (arg1 == 2)
    int32_t* rcx = *arg2
    int32_t rax_1 = *rcx
    
    if (rax_1 == 0)
        void* rbx = *(rcx + 8)
        sub_1428965a0(*(rbx + 0x28))
        sub_1428a2c50(*(rbx + 0x20))
        sub_1428bcda0(*(rbx + 0x30))
        return 1
    
    void* rcx_4
    
    if (rax_1 == 2)
        rcx_4 = *(rcx + 8)
        sub_1428a6890(*(rcx_4 + 0x20), *(rcx_4 + 0x28), "crypto\cms\cms_asn1.c", 0xd2)
    else if (rax_1 == 3)
        rcx_4 = *(rcx + 8)
        sub_1428a6890(*(rcx_4 + 0x20), *(rcx_4 + 0x28), "crypto\cms\cms_asn1.c", 0xd5)

return 1
