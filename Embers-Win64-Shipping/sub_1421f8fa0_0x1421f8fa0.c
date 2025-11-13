// 函数: sub_1421f8fa0
// 地址: 0x1421f8fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x178)

if (result != 0)
    int32_t i = 0
    
    if (*(result + 0x70) s> 0)
        int64_t rdi_1 = 0
        
        do
            void* rcx = *(result + 0x68)
            void* rdx_1 = result + 8
            
            if (rcx != 0)
                rdx_1 = rcx
            
            int64_t* rcx_1 = *(rdx_1 + rdi_1)
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x18))(rcx_1, arg1)
                result = *(arg1 + 0x178)
            
            i += 1
            rdi_1 += 8
        while (i s< *(result + 0x70))

return result
