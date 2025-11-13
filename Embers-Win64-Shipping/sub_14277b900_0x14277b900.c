// 函数: sub_14277b900
// 地址: 0x14277b900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xb8)
int32_t rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x3e8))(rcx)

if (rcx == 0 || rax_2 != 4)
    int64_t* rcx_1 = *(arg1 + 0xc0)
    int32_t rax_4
    
    if (rcx_1 != 0)
        rax_4 = (*(*rcx_1 + 0x3e8))(rcx_1)
    
    if (rcx_1 == 0 || rax_4 != 4)
        int64_t* rcx_2 = *(arg1 + 0xb8)
        int32_t rax_7
        
        if (rcx_2 != 0)
            rax_7 = (*(*rcx_2 + 0x3e8))(rcx_2)
        
        if (rcx_2 == 0 || rax_7 != 3)
            int64_t* rcx_3 = *(arg1 + 0xc0)
            int32_t rax_9
            
            if (rcx_3 != 0)
                rax_9 = (*(*rcx_3 + 0x3e8))(rcx_3)
            
            if (rcx_3 == 0 || rax_9 != 3)
                return 0
        
        return 3

return 4
