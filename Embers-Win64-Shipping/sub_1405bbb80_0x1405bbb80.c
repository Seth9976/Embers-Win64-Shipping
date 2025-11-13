// 函数: sub_1405bbb80
// 地址: 0x1405bbb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)

if (rcx != 0)
    (*(*rcx + 0x6a0))(rcx, *(arg1 + 0x38))
    void* rax_2 = *(arg1 + 0x30)
    *(arg1 + 0x38) = 0
    *(*(rax_2 + 0x220) + 0x310) = 1
    void* rcx_4 = *(sub_14226dd50(*(*(arg1 + 0x30) + 0x220)) + 0x70)
    
    if (rcx_4 != 0)
        *(rcx_4 + 0xac) = *(arg1 + 0x48)
    
    *(arg1 + 0x30) = 0

return sub_140cdba30(arg1) __tailcall
