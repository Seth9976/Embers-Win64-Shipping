// 函数: sub_140e59810
// 地址: 0x140e59810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x430)

if (rcx == 0)
    void*** rax_1 = j_sub_140a82f30(8)
    
    if (rax_1 != 0)
        *rax_1 = &data_142ed8010
        *(arg1 + 0x430) = rax_1
        jump(*(*rax_1 + 0x10))
    
    rcx = nullptr
    *(arg1 + 0x430) = 0

jump(*(*rcx + 0x10))
