// 函数: sub_141c6c7f0
// 地址: 0x141c6c7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rdi = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rdi_2 = rdi + 8
        int32_t i
        
        do
            int64_t* rcx_1 = *rdi_2
            
            if (rcx_1 != 0)
                int32_t rax_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (rax_1 == 1 && rcx_1 != 0)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rdi_2 += 0x20
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_1405a51b0(arg1, arg2)
else
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 8
        int32_t i_1
        
        do
            int64_t* rcx = *rdi_1
            
            if (rcx != 0)
                result = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (result == 1 && rcx != 0)
                    result = (*(*rcx + 8))(rcx, 1)
            
            rdi_1 = &rdi_1[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
