// 函数: sub_1426bf6f0
// 地址: 0x1426bf6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x2f8)

if (rcx != 0)
    void* rcx_1 = *(rcx + 0xc0)
    
    if (rcx_1 != 0)
        void* rdx = *(arg2 + 0xc0)
        
        if (rdx != 0 && sub_1426b63e0(rcx_1, rdx) != 0)
            return 1

return 0
