// 函数: sub_142bbcba0
// 地址: 0x142bbcba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x38)

if (rbx != 0)
    void* rax_1 = *(rbx + 0x170)
    
    if (rax_1 != 0)
        if (*(rax_1 + 0x239) != 0)
            return 0xa0
        
        *(rbx + 0x168) = sub_142bc0d40(arg1, *(arg1 + 0x20))
        return 0

return 3
