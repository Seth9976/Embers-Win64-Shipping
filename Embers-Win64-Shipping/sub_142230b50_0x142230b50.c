// 函数: sub_142230b50
// 地址: 0x142230b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d23dc0(arg1, 0x30) == 0)
    void* rbp_1 = *(arg1 + 0x20)
    void* rax_2
    
    if (rbp_1 == 0)
        rax_2 = nullptr
    else
        rax_2 = sub_140d21950(rbp_1, sub_1424cdfc0())
    
    if ((*(arg1 + 0x60) != 0 || rax_2 != 0) && (*(arg1 + 0x8a) & 4) != 0)
        void* rcx_1 = *(arg1 + 0x250)
        
        if (rcx_1 == 0)
            rcx_1 = arg1 + 0xa8
        
        int64_t* result = sub_142231830(rcx_1, arg2)
        int64_t* rcx_2 = *(arg1 + 0x20)
        
        if (rcx_2 != 0)
            int64_t rdx_2 = *rcx_2
            void* rax_3 = (*(rdx_2 + 0x150))(rcx_2, rdx_2)
            
            if (rax_3 != 0)
                sub_14243ade0(rax_3)
        
        if (sub_140bc7f20(result) s> 0)
            return result
        
        return nullptr

return 0
