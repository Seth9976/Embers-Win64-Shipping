// 函数: sub_141eae950
// 地址: 0x141eae950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x288)

if (rcx != 0)
    (*(*rcx + 0x420))(rcx)
    int64_t* rcx_1 = *(arg1 + 0x288)
    (*(*rcx_1 + 0x5b8))(rcx_1)

if (sub_141dcdc50(arg1) != 1)
    void* rax_4 = *(arg1 + 0x280)
    
    if (rax_4 != 0)
        *(rax_4 + 0x71b) |= 0x80
        int64_t* rcx_3 = *(arg1 + 0x280)
        
        if ((*(*rcx_3 + 0x3e8))(rcx_3, 0) != 0)
            void* rax_7 = *(arg1 + 0x280)
            *(rax_7 + 0x719) |= 0x40
            *(*(arg1 + 0x280) + 0x714) = 1

return sub_142226100(arg1) __tailcall
