// 函数: sub_140fb5310
// 地址: 0x140fb5310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr

if (*(arg1 + 0x504) != 0 && *(arg1 + 0x550) != 0)
    int64_t* rcx = *(arg1 + 0x548)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x550) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x548)
        
        (*(*rcx_1 + 0x48))(rcx_1)

if (*(arg1 + 0x540) != 0)
    int64_t* rcx_2 = *(arg1 + 0x538)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        if (*(arg1 + 0x540) != 0)
            rdi = *(arg1 + 0x538)
        
        (*(*rdi + 0x50))(rdi)

*(arg1 + 0x504) = 1
