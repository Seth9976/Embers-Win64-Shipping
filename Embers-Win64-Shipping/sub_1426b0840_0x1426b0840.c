// 函数: sub_1426b0840
// 地址: 0x1426b0840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x48) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(rdi_1 + *(arg1 + 0x40))
        
        if (rcx != 0 && ((rcx[1].d u>> 0xf).b & 1) == 0)
            (*(*rcx + 0x408))(rcx)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x48))

*(arg1 + 0x48) = 0

if (*(arg1 + 0x4c) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x40, 0)

return sub_140cdba30(arg1) __tailcall
