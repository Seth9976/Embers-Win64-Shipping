// 函数: sub_140ffbfa0
// 地址: 0x140ffbfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x28)

if (result != 0 && *(arg1 + 0x30) != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x18) s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            int64_t rax = *(arg1 + 0x28)
            int64_t* rcx = *(rdi_1 + rax)
            *(rdi_1 + rax) = 0
            
            if (rcx != 0)
                (*(*rcx + 0x10))(rcx)
            
            int64_t rax_2 = *(arg1 + 0x30)
            int64_t* rcx_1 = *(rdi_1 + rax_2)
            *(rdi_1 + rax_2) = 0
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x10))(rcx_1)
            
            i += 1
            rdi_1 = &rdi_1[1]
        while (i s< *(arg1 + 0x18))
        
        result = *(arg1 + 0x28)
    
    if (result != 0)
        int64_t i_1 = *(result - 8)
        void* rsi_1 = result + (i_1 << 3)
        
        if (i_1 != 0)
            do
                int64_t* rcx_2 = *(rsi_1 - 8)
                rsi_1 -= 8
                i_1 -= 1
                
                if (rcx_2 != 0)
                    (*(*rcx_2 + 0x10))(rcx_2)
            while (i_1 != 0)
            
            *(result - 8)
        
        j_sub_140a74f90(result - 8)
    
    result = *(arg1 + 0x30)
    
    if (result != 0)
        int64_t i_2 = *(result - 8)
        void* rsi_2 = result + (i_2 << 3)
        
        if (i_2 != 0)
            do
                int64_t* rcx_4 = *(rsi_2 - 8)
                rsi_2 -= 8
                i_2 -= 1
                
                if (rcx_4 != 0)
                    (*(*rcx_4 + 0x10))(rcx_4)
            while (i_2 != 0)
            
            *(result - 8)
        
        result = j_sub_140a74f90(result - 8)
    
    *(arg1 + 0x28) = 0
    *(arg1 + 0x30) = 0

return result
